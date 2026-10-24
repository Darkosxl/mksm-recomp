#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_0013B3B0;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_000E[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 45, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 51,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60,
    0, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69,
    70, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0,
    0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129,
    130, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0,
    182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0,
    0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 197, 198, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 204,
    0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 220, 0, 0,
    0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 223, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 0, 0, 227, 0, 228, 229, 230,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 238, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0,
    253, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 257, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0,
    0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0,
    0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0,
    331, 0, 332, 0, 0, 333, 0, 0, 0, 334, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0,
    345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356,
    0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0,
    0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377,
    0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0,
    0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0,
    0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432, 0, 433, 0, 434, 0,
    435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0,
    0, 0, 0, 458, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0,
    477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0,
};

void unit_000E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00138000;
    case 2u: goto L_0013800C;
    case 3u: goto L_00138040;
    case 4u: goto L_00138048;
    case 5u: goto L_0013805C;
    case 6u: goto L_0013807C;
    case 7u: goto L_00138080;
    case 8u: goto L_001380C4;
    case 9u: goto L_001380CC;
    case 10u: goto L_001380E0;
    case 11u: goto L_00138114;
    case 12u: goto L_00138130;
    case 13u: goto L_00138148;
    case 14u: goto L_0013816C;
    case 15u: goto L_0013819C;
    case 16u: goto L_001381B8;
    case 17u: goto L_001381D0;
    case 18u: goto L_001381F4;
    case 19u: goto L_00138224;
    case 20u: goto L_0013823C;
    case 21u: goto L_0013824C;
    case 22u: goto L_00138264;
    case 23u: goto L_00138280;
    case 24u: goto L_00138298;
    case 25u: goto L_001382BC;
    case 26u: goto L_001382F0;
    case 27u: goto L_0013832C;
    case 28u: goto L_00138368;
    case 29u: goto L_00138380;
    case 30u: goto L_001383A0;
    case 31u: goto L_001383A8;
    case 32u: goto L_0013845C;
    case 33u: goto L_00138480;
    case 34u: goto L_00138488;
    case 35u: goto L_001384A4;
    case 36u: goto L_0013852C;
    case 37u: goto L_0013854C;
    case 38u: goto L_00138564;
    case 39u: goto L_00138580;
    case 40u: goto L_0013859C;
    case 41u: goto L_001385A8;
    case 42u: goto L_001385C4;
    case 43u: goto L_001385DC;
    case 44u: goto L_001385F8;
    case 45u: goto L_00138604;
    case 46u: goto L_00138618;
    case 47u: goto L_00138620;
    case 48u: goto L_00138648;
    case 49u: goto L_00138668;
    case 50u: goto L_00138674;
    case 51u: goto L_0013867C;
    case 52u: goto L_00138698;
    case 53u: goto L_001386B4;
    case 54u: goto L_00138708;
    case 55u: goto L_0013874C;
    case 56u: goto L_00138788;
    case 57u: goto L_001387AC;
    case 58u: goto L_001387C8;
    case 59u: goto L_001387E4;
    case 60u: goto L_001387FC;
    case 61u: goto L_00138808;
    case 62u: goto L_00138810;
    case 63u: goto L_00138818;
    case 64u: goto L_00138820;
    case 65u: goto L_0013882C;
    case 66u: goto L_00138844;
    case 67u: goto L_00138854;
    case 68u: goto L_0013886C;
    case 69u: goto L_0013887C;
    case 70u: goto L_00138880;
    case 71u: goto L_00138884;
    case 72u: goto L_00138928;
    case 73u: goto L_00138940;
    case 74u: goto L_00138944;
    case 75u: goto L_00138974;
    case 76u: goto L_00138980;
    case 77u: goto L_001389A8;
    case 78u: goto L_001389D8;
    case 79u: goto L_001389F4;
    case 80u: goto L_00138A14;
    case 81u: goto L_00138A1C;
    case 82u: goto L_00138A40;
    case 83u: goto L_00138A74;
    case 84u: goto L_00138AA8;
    case 85u: goto L_00138AB8;
    case 86u: goto L_00138AD0;
    case 87u: goto L_00138AE0;
    case 88u: goto L_00138AF0;
    case 89u: goto L_00138B48;
    case 90u: goto L_00138BC0;
    case 91u: goto L_00138BFC;
    case 92u: goto L_00138C18;
    case 93u: goto L_00138C20;
    case 94u: goto L_00138C3C;
    case 95u: goto L_00138C44;
    case 96u: goto L_00138C50;
    case 97u: goto L_00138C68;
    case 98u: goto L_00138CB8;
    case 99u: goto L_00138CE0;
    case 100u: goto L_00138CF8;
    case 101u: goto L_00138D08;
    case 102u: goto L_00138D28;
    case 103u: goto L_00138D40;
    case 104u: goto L_00138D50;
    case 105u: goto L_00138D64;
    case 106u: goto L_00138D70;
    case 107u: goto L_00138D8C;
    case 108u: goto L_00138DAC;
    case 109u: goto L_00138DB4;
    case 110u: goto L_00138DBC;
    case 111u: goto L_00138DD4;
    case 112u: goto L_00138DFC;
    case 113u: goto L_00138E30;
    case 114u: goto L_00138E58;
    case 115u: goto L_00138E68;
    case 116u: goto L_00138E88;
    case 117u: goto L_00138EB0;
    case 118u: goto L_00138EE4;
    case 119u: goto L_00138F0C;
    case 120u: goto L_00138F1C;
    case 121u: goto L_00138F4C;
    case 122u: goto L_00138F6C;
    case 123u: goto L_00138F8C;
    case 124u: goto L_00138FA4;
    case 125u: goto L_00138FC8;
    case 126u: goto L_00138FDC;
    case 127u: goto L_00138FFC;
    case 128u: goto L_00139040;
    case 129u: goto L_0013907C;
    case 130u: goto L_00139080;
    case 131u: goto L_0013908C;
    case 132u: goto L_001390A0;
    case 133u: goto L_001390B8;
    case 134u: goto L_001390C8;
    case 135u: goto L_001390F8;
    case 136u: goto L_00139138;
    case 137u: goto L_00139180;
    case 138u: goto L_001391CC;
    case 139u: goto L_00139218;
    case 140u: goto L_00139250;
    case 141u: goto L_0013929C;
    case 142u: goto L_001392C8;
    case 143u: goto L_001392D0;
    case 144u: goto L_001392F8;
    case 145u: goto L_00139334;
    case 146u: goto L_00139358;
    case 147u: goto L_00139388;
    case 148u: goto L_001393A8;
    case 149u: goto L_001393BC;
    case 150u: goto L_001393CC;
    case 151u: goto L_001393E8;
    case 152u: goto L_00139428;
    case 153u: goto L_00139458;
    case 154u: goto L_001394C8;
    case 155u: goto L_00139510;
    case 156u: goto L_00139600;
    case 157u: goto L_00139634;
    case 158u: goto L_00139660;
    case 159u: goto L_001396CC;
    case 160u: goto L_001396E8;
    case 161u: goto L_00139744;
    case 162u: goto L_00139764;
    case 163u: goto L_00139778;
    case 164u: goto L_00139788;
    case 165u: goto L_001397A0;
    case 166u: goto L_001397C8;
    case 167u: goto L_001397F8;
    case 168u: goto L_0013983C;
    case 169u: goto L_00139878;
    case 170u: goto L_00139880;
    case 171u: goto L_001398E0;
    case 172u: goto L_00139900;
    case 173u: goto L_00139914;
    case 174u: goto L_00139920;
    case 175u: goto L_0013992C;
    case 176u: goto L_00139938;
    case 177u: goto L_00139944;
    case 178u: goto L_00139950;
    case 179u: goto L_0013995C;
    case 180u: goto L_00139968;
    case 181u: goto L_00139974;
    case 182u: goto L_00139980;
    case 183u: goto L_0013998C;
    case 184u: goto L_00139998;
    case 185u: goto L_001399A4;
    case 186u: goto L_001399B0;
    case 187u: goto L_001399BC;
    case 188u: goto L_001399C8;
    case 189u: goto L_001399D4;
    case 190u: goto L_001399E0;
    case 191u: goto L_001399EC;
    case 192u: goto L_001399F8;
    case 193u: goto L_00139A04;
    case 194u: goto L_00139A10;
    case 195u: goto L_00139A1C;
    case 196u: goto L_00139A28;
    case 197u: goto L_00139A34;
    case 198u: goto L_00139A38;
    case 199u: goto L_00139A40;
    case 200u: goto L_00139A4C;
    case 201u: goto L_00139A58;
    case 202u: goto L_00139A64;
    case 203u: goto L_00139A70;
    case 204u: goto L_00139A7C;
    case 205u: goto L_00139A88;
    case 206u: goto L_00139A94;
    case 207u: goto L_00139AA0;
    case 208u: goto L_00139AAC;
    case 209u: goto L_00139AB8;
    case 210u: goto L_00139AC4;
    case 211u: goto L_00139AD0;
    case 212u: goto L_00139AE0;
    case 213u: goto L_00139B18;
    case 214u: goto L_00139B30;
    case 215u: goto L_00139B38;
    case 216u: goto L_00139B40;
    case 217u: goto L_00139B50;
    case 218u: goto L_00139B58;
    case 219u: goto L_00139B60;
    case 220u: goto L_00139B74;
    case 221u: goto L_00139B94;
    case 222u: goto L_00139BB4;
    case 223u: goto L_00139BB8;
    case 224u: goto L_00139BCC;
    case 225u: goto L_00139BD4;
    case 226u: goto L_00139BDC;
    case 227u: goto L_00139BEC;
    case 228u: goto L_00139BF4;
    case 229u: goto L_00139BF8;
    case 230u: goto L_00139BFC;
    case 231u: goto L_00139C00;
    case 232u: goto L_00139C38;
    case 233u: goto L_00139C78;
    case 234u: goto L_00139DE4;
    case 235u: goto L_00139E04;
    case 236u: goto L_00139E14;
    case 237u: goto L_00139E28;
    case 238u: goto L_00139E38;
    case 239u: goto L_00139E3C;
    case 240u: goto L_00139E54;
    case 241u: goto L_00139E64;
    case 242u: goto L_00139E80;
    case 243u: goto L_00139EA0;
    case 244u: goto L_00139EB0;
    case 245u: goto L_00139ECC;
    case 246u: goto L_00139ED8;
    case 247u: goto L_00139EF8;
    case 248u: goto L_00139F20;
    case 249u: goto L_00139F30;
    case 250u: goto L_00139F48;
    case 251u: goto L_00139F60;
    case 252u: goto L_00139F78;
    case 253u: goto L_00139F80;
    case 254u: goto L_00139F88;
    case 255u: goto L_00139F94;
    case 256u: goto L_00139FA4;
    case 257u: goto L_00139FAC;
    case 258u: goto L_00139FB4;
    case 259u: goto L_00139FC8;
    case 260u: goto L_00139FE0;
    case 261u: goto L_00139FF8;
    case 262u: goto L_0013A008;
    case 263u: goto L_0013A018;
    case 264u: goto L_0013A030;
    case 265u: goto L_0013A058;
    case 266u: goto L_0013A068;
    case 267u: goto L_0013A078;
    case 268u: goto L_0013A088;
    case 269u: goto L_0013A098;
    case 270u: goto L_0013A0B0;
    case 271u: goto L_0013A0D8;
    case 272u: goto L_0013A0F0;
    case 273u: goto L_0013A108;
    case 274u: goto L_0013A120;
    case 275u: goto L_0013A130;
    case 276u: goto L_0013A158;
    case 277u: goto L_0013A180;
    case 278u: goto L_0013A190;
    case 279u: goto L_0013A1A8;
    case 280u: goto L_0013A1C4;
    case 281u: goto L_0013A1D0;
    case 282u: goto L_0013A1E8;
    case 283u: goto L_0013A200;
    case 284u: goto L_0013A210;
    case 285u: goto L_0013A220;
    case 286u: goto L_0013A230;
    case 287u: goto L_0013A240;
    case 288u: goto L_0013A270;
    case 289u: goto L_0013A27C;
    case 290u: goto L_0013A2A8;
    case 291u: goto L_0013A30C;
    case 292u: goto L_0013A320;
    case 293u: goto L_0013A340;
    case 294u: goto L_0013A380;
    case 295u: goto L_0013A3AC;
    case 296u: goto L_0013A3B8;
    case 297u: goto L_0013A3D0;
    case 298u: goto L_0013A3F0;
    case 299u: goto L_0013A400;
    case 300u: goto L_0013A420;
    case 301u: goto L_0013A430;
    case 302u: goto L_0013A46C;
    case 303u: goto L_0013A47C;
    case 304u: goto L_0013A4A8;
    case 305u: goto L_0013A4B8;
    case 306u: goto L_0013A4E0;
    case 307u: goto L_0013A4F8;
    case 308u: goto L_0013A510;
    case 309u: goto L_0013A538;
    case 310u: goto L_0013A554;
    case 311u: goto L_0013A570;
    case 312u: goto L_0013A58C;
    case 313u: goto L_0013A5A4;
    case 314u: goto L_0013A5B4;
    case 315u: goto L_0013A5C8;
    case 316u: goto L_0013A5F4;
    case 317u: goto L_0013A610;
    case 318u: goto L_0013A628;
    case 319u: goto L_0013A638;
    case 320u: goto L_0013A64C;
    case 321u: goto L_0013A654;
    case 322u: goto L_0013A670;
    case 323u: goto L_0013A698;
    case 324u: goto L_0013A6A8;
    case 325u: goto L_0013A6C8;
    case 326u: goto L_0013A6D8;
    case 327u: goto L_0013A718;
    case 328u: goto L_0013A748;
    case 329u: goto L_0013A760;
    case 330u: goto L_0013A778;
    case 331u: goto L_0013A780;
    case 332u: goto L_0013A788;
    case 333u: goto L_0013A794;
    case 334u: goto L_0013A7A4;
    case 335u: goto L_0013A7AC;
    case 336u: goto L_0013A7B4;
    case 337u: goto L_0013A7C8;
    case 338u: goto L_0013A800;
    case 339u: goto L_0013A810;
    case 340u: goto L_0013A818;
    case 341u: goto L_0013A834;
    case 342u: goto L_0013A83C;
    case 343u: goto L_0013A848;
    case 344u: goto L_0013A860;
    case 345u: goto L_0013A880;
    case 346u: goto L_0013A888;
    case 347u: goto L_0013A8EC;
    case 348u: goto L_0013A900;
    case 349u: goto L_0013A914;
    case 350u: goto L_0013A928;
    case 351u: goto L_0013A958;
    case 352u: goto L_0013A9EC;
    case 353u: goto L_0013AA00;
    case 354u: goto L_0013AA90;
    case 355u: goto L_0013AAA0;
    case 356u: goto L_0013AAFC;
    case 357u: goto L_0013AB10;
    case 358u: goto L_0013AB3C;
    case 359u: goto L_0013AB90;
    case 360u: goto L_0013ABD0;
    case 361u: goto L_0013AC20;
    case 362u: goto L_0013AC38;
    case 363u: goto L_0013AC44;
    case 364u: goto L_0013ACA0;
    case 365u: goto L_0013ACF4;
    case 366u: goto L_0013AD10;
    case 367u: goto L_0013AD1C;
    case 368u: goto L_0013AD78;
    case 369u: goto L_0013ADD0;
    case 370u: goto L_0013ADDC;
    case 371u: goto L_0013AE38;
    case 372u: goto L_0013AE8C;
    case 373u: goto L_0013AEA8;
    case 374u: goto L_0013AEB4;
    case 375u: goto L_0013AF10;
    case 376u: goto L_0013AF48;
    case 377u: goto L_0013AF7C;
    case 378u: goto L_0013AF90;
    case 379u: goto L_0013AFA0;
    case 380u: goto L_0013AFC0;
    case 381u: goto L_0013AFD0;
    case 382u: goto L_0013AFEC;
    case 383u: goto L_0013B000;
    case 384u: goto L_0013B018;
    case 385u: goto L_0013B028;
    case 386u: goto L_0013B040;
    case 387u: goto L_0013B050;
    case 388u: goto L_0013B080;
    case 389u: goto L_0013B0AC;
    case 390u: goto L_0013B0D8;
    case 391u: goto L_0013B0F0;
    case 392u: goto L_0013B114;
    case 393u: goto L_0013B12C;
    case 394u: goto L_0013B148;
    case 395u: goto L_0013B160;
    case 396u: goto L_0013B184;
    case 397u: goto L_0013B19C;
    case 398u: goto L_0013B1B8;
    case 399u: goto L_0013B1D0;
    case 400u: goto L_0013B1F4;
    case 401u: goto L_0013B228;
    case 402u: goto L_0013B280;
    case 403u: goto L_0013B2A8;
    case 404u: goto L_0013B2C4;
    case 405u: goto L_0013B2E8;
    case 406u: goto L_0013B324;
    case 407u: goto L_0013B34C;
    case 408u: goto L_0013B368;
    case 409u: goto L_0013B38C;
    case 410u: goto L_0013B3B0;
    case 411u: goto L_0013B3E0;
    case 412u: goto L_0013B40C;
    case 413u: goto L_0013B438;
    case 414u: goto L_0013B464;
    case 415u: goto L_0013B490;
    case 416u: goto L_0013B4BC;
    case 417u: goto L_0013B4E8;
    case 418u: goto L_0013B524;
    case 419u: goto L_0013B52C;
    case 420u: goto L_0013B568;
    case 421u: goto L_0013B578;
    case 422u: goto L_0013B5C0;
    case 423u: goto L_0013B5D8;
    case 424u: goto L_0013B700;
    case 425u: goto L_0013B730;
    case 426u: goto L_0013B738;
    case 427u: goto L_0013B740;
    case 428u: goto L_0013B748;
    case 429u: goto L_0013B750;
    case 430u: goto L_0013B758;
    case 431u: goto L_0013B760;
    case 432u: goto L_0013B768;
    case 433u: goto L_0013B770;
    case 434u: goto L_0013B778;
    case 435u: goto L_0013B780;
    case 436u: goto L_0013B788;
    case 437u: goto L_0013B790;
    case 438u: goto L_0013B798;
    case 439u: goto L_0013B7A0;
    case 440u: goto L_0013B7A8;
    case 441u: goto L_0013B7B0;
    case 442u: goto L_0013B880;
    case 443u: goto L_0013B954;
    case 444u: goto L_0013B9C0;
    case 445u: goto L_0013BA50;
    case 446u: goto L_0013BAD0;
    case 447u: goto L_0013BAFC;
    case 448u: goto L_0013BB30;
    case 449u: goto L_0013BBA8;
    case 450u: goto L_0013BBB4;
    case 451u: goto L_0013BBC0;
    case 452u: goto L_0013BBE4;
    case 453u: goto L_0013BBFC;
    case 454u: goto L_0013BC28;
    case 455u: goto L_0013BC3C;
    case 456u: goto L_0013BC60;
    case 457u: goto L_0013BC78;
    case 458u: goto L_0013BC8C;
    case 459u: goto L_0013BC94;
    case 460u: goto L_0013BC9C;
    case 461u: goto L_0013BCC0;
    case 462u: goto L_0013BD10;
    case 463u: goto L_0013BD18;
    case 464u: goto L_0013BD4C;
    case 465u: goto L_0013BD5C;
    case 466u: goto L_0013BD6C;
    case 467u: goto L_0013BDA4;
    case 468u: goto L_0013BDCC;
    case 469u: goto L_0013BDDC;
    case 470u: goto L_0013BE08;
    case 471u: goto L_0013BE10;
    case 472u: goto L_0013BE40;
    case 473u: goto L_0013BE50;
    case 474u: goto L_0013BEC8;
    case 475u: goto L_0013BED4;
    case 476u: goto L_0013BEE8;
    case 477u: goto L_0013BF00;
    case 478u: goto L_0013BF54;
    case 479u: goto L_0013BF84;
    case 480u: goto L_0013BFA0;
    case 481u: goto L_0013BFD0;
    case 482u: goto L_0013BFE8;
    case 483u: goto L_0013BFF8;
    default: bad_entry(c, 0x00138000u); return;
    }
L_00138000:
    set32(c.r[16], c.r[16].w[0] + 13808u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013800Cu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013800Cu) [[unlikely]] return; }
L_0013800C:
    set32(c.r[4], ld32((c.r[20].w[0] + 372u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 1264u);
    set32(c.r[7], ld32((c.r[20].w[0] + 120u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[4].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138040u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00138040u) [[unlikely]] return; }
L_00138040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013807C; } }
L_00138048:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 1509u);
    set32(c.r[16], c.r[16].w[0] + 13808u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013805Cu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013805Cu) [[unlikely]] return; }
L_0013805C:
    set32(c.r[7], ld32((c.r[20].w[0] + 120u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[8], 0u + 6u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013807Cu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0013807Cu) [[unlikely]] return; }
L_0013807C:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 1;
L_00138080:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[20] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[9].w[0] + 23004u)));
    set32(c.r[3], 0u + 353u);
    set32(c.r[5], 0u + 375u);
    set32(c.r[4], 0u + 320u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[6], 0u + 127u);
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001380C4u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001380C4u) [[unlikely]] return; }
L_001380C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001380CCu);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x001380CCu) [[unlikely]] return; }
L_001380CC:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001380EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001380E0u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x001380E0u) [[unlikely]] return; }
L_001380E0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00138174; } }
L_001380EC:
    set32(c.r[2], ld32((c.r[23].w[0] + 23004u)));
    set32(c.r[3], 0u + 440u);
    set32(c.r[16], 0u + 410u);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[4], 0u + 1459u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    set32(c.r[18], 0u + 410u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138114u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x00138114u) [[unlikely]] return; }
L_00138114:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 75u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138130u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x00138130u) [[unlikely]] return; }
L_00138130:
    set32(c.r[2], ld32((c.r[23].w[0] + 23004u)));
    set32(c.r[4], 0u + 1454u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[18].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138148u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x00138148u) [[unlikely]] return; }
L_00138148:
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 97u);
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013816Cu);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0013816Cu) [[unlikely]] return; }
L_0013816C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001381F4; } }
L_00138174:
    set32(c.r[2], ld32((c.r[23].w[0] + 23004u)));
    set32(c.r[3], 0u + 440u);
    set32(c.r[16], 0u + 410u);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[4], 0u + 1459u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    set32(c.r[18], 0u + 410u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013819Cu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013819Cu) [[unlikely]] return; }
L_0013819C:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 95u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001381B8u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x001381B8u) [[unlikely]] return; }
L_001381B8:
    set32(c.r[2], ld32((c.r[23].w[0] + 23004u)));
    set32(c.r[4], 0u + 1454u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[18].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001381D0u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001381D0u) [[unlikely]] return; }
L_001381D0:
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 117u);
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001381F4u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x001381F4u) [[unlikely]] return; }
L_001381F4:
    set32(c.r[2], ld32((c.r[23].w[0] + 23004u)));
    set32(c.r[17], 0u + 440u);
    set32(c.r[16], 0u + 410u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[20] = c.r[1].w[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[4], 0u + 1506u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[17].d[0];
    set32(c.r[19], 0u + 410u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138224u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x00138224u) [[unlikely]] return; }
L_00138224:
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 96u);
    c.budget -= 6;
L_0013823C:
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013824Cu);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0013824Cu) [[unlikely]] return; }
L_0013824C:
    set32(c.r[2], ld32((c.r[23].w[0] + 23004u)));
    set32(c.r[4], 0u + 1458u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[19].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138264u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x00138264u) [[unlikely]] return; }
L_00138264:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 450u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138280u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x00138280u) [[unlikely]] return; }
L_00138280:
    set32(c.r[2], ld32((c.r[23].w[0] + 23004u)));
    set32(c.r[4], 0u + 1453u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[19].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138298u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x00138298u) [[unlikely]] return; }
L_00138298:
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 472u);
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001382BCu);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x001382BCu) [[unlikely]] return; }
L_001382BC:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001382F0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013832Cu);  if (depth < kMaxDepth) unit_009D(c, 276u, depth + 1u); else { c.pc = 0x00377CD8u; return; } if (c.pc != 0x0013832Cu) [[unlikely]] return; }
L_0013832C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001390C8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 740u)));
    set32(c.r[3], c.r[3].w[0] - 9u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001390C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13824u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00138000u < 16384u) { entry = entries_000E[(t - 0x00138000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00138368:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[19], c.r[2].w[0] + 8736u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138380u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x00138380u) [[unlikely]] return; }
L_00138380:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138464; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21968u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001383A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001383A0u) [[unlikely]] return; }
L_001383A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001383A8u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x001383A8u) [[unlikely]] return; }
L_001383A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00138408; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001383D8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00138438; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013843C; } }
L_001383D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001383F4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013843C; } }
L_001383F4:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00138438; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013843C; } }
L_00138408:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00138424; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013843C; } }
L_00138424:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00138438; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013843C; } }
L_00138438:
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_0013843C:
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013845Cu);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013845Cu) [[unlikely]] return; }
L_0013845C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001390C8; } }
L_00138464:
    c.r[2].d[0] = c.r[5].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138534; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21968u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138480u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138480u) [[unlikely]] return; }
L_00138480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138488u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x00138488u) [[unlikely]] return; }
L_00138488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001384D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001384B8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_001384A4:
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001384FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013850C; } }
L_001384B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001384E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001384A4u | kUnwind; return; } goto L_001384A4; } }
L_001384D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001384F0; } }
L_001384E0:
    set32(c.r[2], 0u + 5u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138510; } }
L_001384F0:
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013850C; } }
L_001384FC:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138510; } }
L_0013850C:
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 1;
L_00138510:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 20u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013852Cu);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013852Cu) [[unlikely]] return; }
L_0013852C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001390C8; } }
L_00138534:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013854Cu);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012AE20u; return; } if (c.pc != 0x0013854Cu) [[unlikely]] return; }
L_0013854C:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001385B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138564u);  if (depth < kMaxDepth) unit_0030(c, 145u, depth + 1u); else { c.pc = 0x001C1BE8u; return; } if (c.pc != 0x00138564u) [[unlikely]] return; }
L_00138564:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00138F3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21976u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138580u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138580u) [[unlikely]] return; }
L_00138580:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[16], c.r[16].w[0] - 24376u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013859Cu);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x0013859Cu) [[unlikely]] return; }
L_0013859C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001385A8u);  if (depth < kMaxDepth) unit_000C(c, 155u, depth + 1u); else { c.pc = 0x00131310u; return; } if (c.pc != 0x001385A8u) [[unlikely]] return; }
L_001385A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138604; } }
L_001385B0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00138628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001385C4u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x001385C4u) [[unlikely]] return; }
L_001385C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00138628; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21976u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001385DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001385DCu) [[unlikely]] return; }
L_001385DC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[16], c.r[16].w[0] - 24376u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001385F8u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x001385F8u) [[unlikely]] return; }
L_001385F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138604u);  if (depth < kMaxDepth) unit_000C(c, 159u, depth + 1u); else { c.pc = 0x001313E8u; return; } if (c.pc != 0x00138604u) [[unlikely]] return; }
L_00138604:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[2].w[0] - 6456u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138618u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x00138618u) [[unlikely]] return; }
L_00138618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138620u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012AE20u; return; } if (c.pc != 0x00138620u) [[unlikely]] return; }
L_00138620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001390C8; } }
L_00138628:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00138684; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21976u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138648u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138648u) [[unlikely]] return; }
L_00138648:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], 0u + 14u);
    st32((c.r[2].w[0] - 6456u), 0u);
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 24u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138668u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x00138668u) [[unlikely]] return; }
L_00138668:
    set32(c.r[4], c.r[20].w[0] + 8736u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138674u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x00138674u) [[unlikely]] return; }
L_00138674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013867Cu);  if (depth < kMaxDepth) unit_000E(c, 140u, depth + 1u); else { c.pc = 0x00139250u; return; } if (c.pc != 0x0013867Cu) [[unlikely]] return; }
L_0013867C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001390C8; } }
L_00138684:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[16], c.r[17].w[0] + 60u);
    set32(c.r[2], ld32((c.r[3].w[0] - 21976u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138698u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138698u) [[unlikely]] return; }
L_00138698:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 28u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 9u);
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001386B4u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x001386B4u) [[unlikely]] return; }
L_001386B4:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 1264u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[7], c.r[3].w[0] << 2);
    st32((c.r[17].w[0] + 372u), c.r[3].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1024u);
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[8], 0u + 4u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[5].w[0] + 15u);
    if (c.r[3].d[0] != 0) c.r[6].d[0] = c.r[5].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    set32(c.r[7], 0u + 2u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138708u);  if (depth < kMaxDepth) unit_000D(c, 13u, depth + 1u); else { c.pc = 0x00134220u; return; } if (c.pc != 0x00138708u) [[unlikely]] return; }
L_00138708:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00138754; } }
    set32(c.r[5], 0u + 139u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u + 112u);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 20712u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], 0u + 115u);
    set32(c.r[9], 0u + 102u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013874Cu);  if (depth < kMaxDepth) unit_000D(c, 18u, depth + 1u); else { c.pc = 0x00134360u; return; } if (c.pc != 0x0013874Cu) [[unlikely]] return; }
L_0013874C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001390C8; } }
L_00138754:
    set32(c.r[5], 0u + 151u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u + 112u);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 20712u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], 0u + 115u);
    set32(c.r[9], 0u + 109u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138788u);  if (depth < kMaxDepth) unit_000D(c, 18u, depth + 1u); else { c.pc = 0x00134360u; return; } if (c.pc != 0x00138788u) [[unlikely]] return; }
L_00138788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001390C8; } }
L_00138790:
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001390C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21972u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001387ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001387ACu) [[unlikely]] return; }
L_001387AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 21u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001387C8u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x001387C8u) [[unlikely]] return; }
L_001387C8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 23944u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001387E4u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x001387E4u) [[unlikely]] return; }
L_001387E4:
    set32(c.r[2], 0u + 18u);
    set32(c.r[5], c.r[29].w[0] + 36u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001387FCu);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00377CA8u; return; } if (c.pc != 0x001387FCu) [[unlikely]] return; }
L_001387FC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138808u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x00138808u) [[unlikely]] return; }
L_00138808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138810u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012AE20u; return; } if (c.pc != 0x00138810u) [[unlikely]] return; }
L_00138810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138818u);  if (depth < kMaxDepth) unit_000A(c, 372u, depth + 1u); else { c.pc = 0x0012AD00u; return; } if (c.pc != 0x00138818u) [[unlikely]] return; }
L_00138818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001390C8; } }
L_00138820:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013882Cu);  if (depth < kMaxDepth) unit_000E(c, 154u, depth + 1u); else { c.pc = 0x001394C8u; return; } if (c.pc != 0x0013882Cu) [[unlikely]] return; }
L_0013882C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 80ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001390C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138844u);  if (depth < kMaxDepth) unit_000E(c, 376u, depth + 1u); else { c.pc = 0x0013AF48u; return; } if (c.pc != 0x00138844u) [[unlikely]] return; }
L_00138844:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21972u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138854u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138854u) [[unlikely]] return; }
L_00138854:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 33u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 40u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013886Cu);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013886Cu) [[unlikely]] return; }
L_0013886C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 8736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013887Cu);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0013887Cu) [[unlikely]] return; }
L_0013887C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001390C8; } }
    goto L_00138884;
L_00138880:
    c.budget -= 1;
L_00138884:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].d[0] & 61440ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138930; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 372u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00138918; } }
    c.r[2].d[0] = c.r[4].d[0] & 32768ull;
    set32(c.r[18], c.r[17].w[0] + 60u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001388C8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00138F3C; } }
L_001388C8:
    c.r[2].d[0] = c.r[5].d[0] & 20480ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001388F0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00138F3C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00138F3C; } }
L_001388F0:
    c.r[2].d[0] = c.r[5].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013890C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00138F3C; } }
L_0013890C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013891C; } }
L_00138918:
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.budget -= 1;
L_0013891C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138928u);  if (depth < kMaxDepth) unit_000C(c, 178u, depth + 1u); else { c.pc = 0x00131720u; return; } if (c.pc != 0x00138928u) [[unlikely]] return; }
L_00138928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001390C8; } }
L_00138930:
    c.r[2].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138944u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x00138944u) [[unlikely]] return; }
    goto L_00138944;
L_00138940:
    c.budget -= 1;
L_00138944:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00138990; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 372u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00138F3C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 44u);
    set32(c.r[4], c.r[4].w[0] + 13776u);
    st32((c.r[29].w[0] + 44u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138974u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x00138974u) [[unlikely]] return; }
L_00138974:
    set32(c.r[16], c.r[17].w[0] + 60u);
    set32(c.r[2], 0u + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00138980:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001389EC; } }
L_00138990:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001389A8u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x001389A8u) [[unlikely]] return; }
L_001389A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00138A28; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 372u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00138F3C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 52u);
    set32(c.r[4], c.r[4].w[0] + 14616u);
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001389D8u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x001389D8u) [[unlikely]] return; }
L_001389D8:
    set32(c.r[16], c.r[17].w[0] + 60u);
    set32(c.r[2], 0u + 8u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.budget -= 5;
L_001389EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001389F4u);  if (depth < kMaxDepth) unit_000C(c, 178u, depth + 1u); else { c.pc = 0x00131720u; return; } if (c.pc != 0x001389F4u) [[unlikely]] return; }
L_001389F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001390C8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138A14u);  if (depth < kMaxDepth) unit_000C(c, 202u, depth + 1u); else { c.pc = 0x00131BB0u; return; } if (c.pc != 0x00138A14u) [[unlikely]] return; }
L_00138A14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001390C8; } }
L_00138A1C:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138B98; } }
L_00138A28:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138D10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138A40u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x00138A40u) [[unlikely]] return; }
L_00138A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00138D10; } }
    set32(c.r[2], c.r[17].w[0] + 60u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[16], ld32((c.r[2].w[0] + 56u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_00138F3C; } }
    set32(c.r[19], c.r[17].w[0] + 372u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138A74u);  if (depth < kMaxDepth) unit_000E(c, 346u, depth + 1u); else { c.pc = 0x0013A888u; return; } if (c.pc != 0x00138A74u) [[unlikely]] return; }
L_00138A74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00138F3C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 372u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00138A98; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00138BC8; } }
L_00138A98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21976u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138AA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138AA8u) [[unlikely]] return; }
L_00138AA8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138AB8u);  if (depth < kMaxDepth) unit_000E(c, 355u, depth + 1u); else { c.pc = 0x0013AAA0u; return; } if (c.pc != 0x00138AB8u) [[unlikely]] return; }
L_00138AB8:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138AD0u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x00138AD0u) [[unlikely]] return; }
L_00138AD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138AE0u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x00138AE0u) [[unlikely]] return; }
L_00138AE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 12936u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138AF0u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x00138AF0u) [[unlikely]] return; }
L_00138AF0:
    set32(c.r[3], ld32((c.r[17].w[0] + 372u)));
    set32(c.r[4], 0u + 704u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[9], ld32((c.r[18].w[0] + 60u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 18064u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 21584u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[5].w[0] - 6456u), 0u);
    set32(c.r[11], c.r[17].w[0] + 352u);
    set32(c.r[10], c.r[29].w[0] + 64u);
    st32((c.r[2].w[0] - 988u), c.r[6].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 22;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_00138B94; } }
L_00138B48:
    set32(c.r[2], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[9].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00138A1Cu | kUnwind; return; } goto L_00138A1C; } }
    c.r[2].d[0] = c.r[2].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138B84; } }
    set32(c.r[5], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138B88; } }
L_00138B84:
    set32(c.r[7], c.r[4].w[0] - 1u);
    c.budget -= 1;
L_00138B88:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00138B48u | kUnwind; return; } goto L_00138B48; } }
L_00138B94:
    set32(c.r[6], 0u - 1u);
    c.budget -= 1;
L_00138B98:
    set32(c.r[3], ld32((c.r[17].w[0] + 372u)));
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[3], c.r[11].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138BC0u);  if (depth < kMaxDepth) unit_000C(c, 531u, depth + 1u); else { c.pc = 0x00133FD0u; return; } if (c.pc != 0x00138BC0u) [[unlikely]] return; }
L_00138BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001390C8; } }
L_00138BC8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001390C8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138F3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[22], c.r[4].w[0] + 1u);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] - 6456u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138BFCu);  if (depth < kMaxDepth) unit_0040(c, 61u, depth + 1u); else { c.pc = 0x00200AC0u; return; } if (c.pc != 0x00138BFCu) [[unlikely]] return; }
L_00138BFC:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[19], ld32((c.r[2].w[0] + 15804u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[20], 0u + 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 7;
L_00138C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138C20u);  if (depth < kMaxDepth) unit_0040(c, 54u, depth + 1u); else { c.pc = 0x002009D8u; return; } if (c.pc != 0x00138C20u) [[unlikely]] return; }
L_00138C20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_00138C5C; } }
    st32((c.r[18].w[0] + 15804u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[16].w[0] + 19624u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138C3Cu);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x00138C3Cu) [[unlikely]] return; }
L_00138C3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138C44u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x00138C44u) [[unlikely]] return; }
L_00138C44:
    set32(c.r[4], c.r[21].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138C50u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x00138C50u) [[unlikely]] return; }
L_00138C50:
    c.r[3].d[0] = c.r[17].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00138C18u | kUnwind; return; } goto L_00138C18; } }
L_00138C5C:
    st32((c.r[18].w[0] + 15804u), c.r[19].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138C68u);  if (depth < kMaxDepth) unit_0040(c, 63u, depth + 1u); else { c.pc = 0x00200AF8u; return; } if (c.pc != 0x00138C68u) [[unlikely]] return; }
L_00138C68:
    set32(c.r[2], c.r[22].w[0] - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138CBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00138CBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23008u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00138CBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 18712u)));
    set32(c.r[4], c.r[4].w[0] - 11920u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138CB8u);  if (depth < kMaxDepth) unit_008B(c, 254u, depth + 1u); else { c.pc = 0x0032EA08u; return; } if (c.pc != 0x00138CB8u) [[unlikely]] return; }
L_00138CB8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00138CBC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00138CE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 18712u)));
    set32(c.r[4], c.r[4].w[0] - 11920u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138CE0u);  if (depth < kMaxDepth) unit_008B(c, 254u, depth + 1u); else { c.pc = 0x0032EA08u; return; } if (c.pc != 0x00138CE0u) [[unlikely]] return; }
L_00138CE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], c.r[21].w[0] - 22920u);
    set32(c.r[2], c.r[2].w[0] + 29880u);
    st32((c.r[23].w[0] - 6456u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138CF8u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x00138CF8u) [[unlikely]] return; }
L_00138CF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC2540000u);
    c.r[4].d[0] = c.r[4].d[0] | 6756ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138D08u);  if (depth < kMaxDepth) unit_0040(c, 48u, depth + 1u); else { c.pc = 0x00200910u; return; } if (c.pc != 0x00138D08u) [[unlikely]] return; }
L_00138D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001390C8; } }
L_00138D10:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001390C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138D28u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x00138D28u) [[unlikely]] return; }
L_00138D28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001390C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21972u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138D40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138D40u) [[unlikely]] return; }
L_00138D40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 12936u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138D50u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x00138D50u) [[unlikely]] return; }
L_00138D50:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], c.r[16].w[0] + 13776u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138D64u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x00138D64u) [[unlikely]] return; }
L_00138D64:
    set32(c.r[4], c.r[16].w[0] + 840u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138D70u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x00138D70u) [[unlikely]] return; }
L_00138D70:
    set32(c.r[2], ld32((c.r[17].w[0] + 372u)));
    set32(c.r[5], c.r[29].w[0] + 68u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 15u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138D8Cu);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x00138D8Cu) [[unlikely]] return; }
L_00138D8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 60u);
    st32((c.r[3].w[0] - 6456u), 0u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138DACu);  if (depth < kMaxDepth) unit_000C(c, 531u, depth + 1u); else { c.pc = 0x00133FD0u; return; } if (c.pc != 0x00138DACu) [[unlikely]] return; }
L_00138DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138DB4u);  if (depth < kMaxDepth) unit_000A(c, 374u, depth + 1u); else { c.pc = 0x0012AD60u; return; } if (c.pc != 0x00138DB4u) [[unlikely]] return; }
L_00138DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001390C8; } }
L_00138DBC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 32772ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138E70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138DD4u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x00138DD4u) [[unlikely]] return; }
L_00138DD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00138E70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 19624u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00138E70; } }
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138DFCu);  if (depth < kMaxDepth) unit_000C(c, 178u, depth + 1u); else { c.pc = 0x00131720u; return; } if (c.pc != 0x00138DFCu) [[unlikely]] return; }
L_00138DFC:
    set32(c.r[4], ld32((c.r[17].w[0] + 372u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] - 18064u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00138F3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21968u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138E30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138E30u) [[unlikely]] return; }
L_00138E30:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138E58; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 76u), 0u);
    set32(c.r[4], c.r[4].w[0] + 13776u);
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138E58u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x00138E58u) [[unlikely]] return; }
L_00138E58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] + 372u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138E68u);  if (depth < kMaxDepth) unit_000E(c, 353u, depth + 1u); else { c.pc = 0x0013AA00u; return; } if (c.pc != 0x00138E68u) [[unlikely]] return; }
L_00138E68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138F1C; } }
L_00138E70:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 8200ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138F54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138E88u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x00138E88u) [[unlikely]] return; }
L_00138E88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00138F54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 19624u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00138F54; } }
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138EB0u);  if (depth < kMaxDepth) unit_000C(c, 178u, depth + 1u); else { c.pc = 0x00131720u; return; } if (c.pc != 0x00138EB0u) [[unlikely]] return; }
L_00138EB0:
    set32(c.r[4], ld32((c.r[17].w[0] + 372u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] - 18064u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00138F3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21968u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138EE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138EE4u) [[unlikely]] return; }
L_00138EE4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138F0C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[4], c.r[4].w[0] + 14616u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138F0Cu);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x00138F0Cu) [[unlikely]] return; }
L_00138F0C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] + 372u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138F1Cu);  if (depth < kMaxDepth) unit_000E(c, 351u, depth + 1u); else { c.pc = 0x0013A958u; return; } if (c.pc != 0x00138F1Cu) [[unlikely]] return; }
L_00138F1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], 0u + 20u);
    st32((c.r[5].w[0] - 992u), c.r[3].w[0]);
    st32((c.r[4].w[0] - 18040u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001390C8; } }
L_00138F3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21972u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138F4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138F4Cu) [[unlikely]] return; }
L_00138F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001390C8; } }
L_00138F54:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001390C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138F6Cu);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x00138F6Cu) [[unlikely]] return; }
L_00138F6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001390C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[16], c.r[17].w[0] + 60u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21972u)));
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138F8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138F8Cu) [[unlikely]] return; }
L_00138F8C:
    set32(c.r[2], 0u + 16u);
    set32(c.r[5], c.r[29].w[0] + 84u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138FA4u);  if (depth < kMaxDepth) unit_000C(c, 531u, depth + 1u); else { c.pc = 0x00133FD0u; return; } if (c.pc != 0x00138FA4u) [[unlikely]] return; }
L_00138FA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 372u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 88u);
    set32(c.r[2], c.r[2].w[0] + 28u);
    st32((c.r[3].w[0] - 992u), 0u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138FC8u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x00138FC8u) [[unlikely]] return; }
L_00138FC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] - 6456u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138FDCu);  if (depth < kMaxDepth) unit_000D(c, 39u, depth + 1u); else { c.pc = 0x001347B8u; return; } if (c.pc != 0x00138FDCu) [[unlikely]] return; }
L_00138FDC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[3].w[0] - 988u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0013907C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138FFCu);  if (depth < kMaxDepth) unit_000D(c, 26u, depth + 1u); else { c.pc = 0x00134538u; return; } if (c.pc != 0x00138FFCu) [[unlikely]] return; }
L_00138FFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00139048; } }
    set32(c.r[2], 0u + 112u);
    set32(c.r[3], 0u + 139u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0] + 20712u)));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[8], 0u + 115u);
    set32(c.r[9], 0u + 102u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139040u);  if (depth < kMaxDepth) unit_000D(c, 18u, depth + 1u); else { c.pc = 0x00134360u; return; } if (c.pc != 0x00139040u) [[unlikely]] return; }
L_00139040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013907C; } }
L_00139048:
    set32(c.r[2], 0u + 112u);
    set32(c.r[3], 0u + 151u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0] + 20712u)));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[8], 0u + 115u);
    set32(c.r[9], 0u + 109u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013907Cu);  if (depth < kMaxDepth) unit_000D(c, 18u, depth + 1u); else { c.pc = 0x00134360u; return; } if (c.pc != 0x0013907Cu) [[unlikely]] return; }
L_0013907C:
    set32(c.r[5], ld32((c.r[17].w[0] + 372u)));
    c.budget -= 1;
L_00139080:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013908Cu);  if (depth < kMaxDepth) unit_000C(c, 202u, depth + 1u); else { c.pc = 0x00131BB0u; return; } if (c.pc != 0x0013908Cu) [[unlikely]] return; }
L_0013908C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], c.r[16].w[0] + 336u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001390A0u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x001390A0u) [[unlikely]] return; }
L_001390A0:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001390B8u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x001390B8u) [[unlikely]] return; }
L_001390B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 12936u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001390C8u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x001390C8u) [[unlikely]] return; }
L_001390C8:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001390F8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 10u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0] - 976u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 13u);
    c.budget -= 16;
L_00139138:
    set32(c.r[2], ld32((c.r[6].w[0] - 972u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00139170; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00139170; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00139170; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[17].w[0] - 972u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139138u | kUnwind; return; } goto L_00139138; } }
L_00139170:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], 0u + 13u);
    c.budget -= 4;
L_00139180:
    set32(c.r[2], ld32((c.r[6].w[0] - 972u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001391B4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001391A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001391B4; } }
L_001391A0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[17].w[0] - 972u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139180u | kUnwind; return; } goto L_00139180; } }
L_001391B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], ld32((c.r[19].w[0] - 976u)));
    set32(c.r[5], c.r[5].w[0] + 13856u);
    set32(c.r[6], 0u + 11u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001391CCu);  if (depth < kMaxDepth) unit_00DD(c, 84u, depth + 1u); else { c.pc = 0x004751D8u; return; } if (c.pc != 0x001391CCu) [[unlikely]] return; }
L_001391CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001391E4; } }
    st32((c.r[17].w[0] - 972u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139228; } }
L_001391E4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00139204; } }
    set32(c.r[2], ld32((c.r[17].w[0] - 972u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00139218; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139228; } }
L_00139204:
    set32(c.r[5], ld32((c.r[19].w[0] - 976u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139218u);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x00139218u) [[unlikely]] return; }
L_00139218:
    set32(c.r[3], c.r[20].w[0] + c.r[18].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[19].w[0] - 976u), c.r[16].w[0]);
    c.budget -= 4;
L_00139228:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00139250:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    set32(c.r[21], c.r[22].w[0] - 18032u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[2].w[0] - 980u), 0u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013929Cu);  if (depth < kMaxDepth) unit_0034(c, 151u, depth + 1u); else { c.pc = 0x001D19E8u; return; } if (c.pc != 0x0013929Cu) [[unlikely]] return; }
L_0013929C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00140000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 18708u)));
    set32(c.r[4], 0u + 50u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] - 20720u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001392C8u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001392C8u) [[unlikely]] return; }
L_001392C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001392D0u);  if (depth < kMaxDepth) unit_0034(c, 153u, depth + 1u); else { c.pc = 0x001D1A40u; return; } if (c.pc != 0x001392D0u) [[unlikely]] return; }
L_001392D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], 0u + 1u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[4].w[0] - 1276u), c.r[2].w[0]);
    st8((c.r[5].w[0] - 15088u), static_cast<std::uint8_t>(0u));
    c.r[20].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[23], c.r[3].w[0] - 14960u);
    c.budget -= 10;
L_001392F8:
    set32(c.r[2], 0u + 20u);
    set32(c.r[3], c.r[17].w[0] << 2);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] - 15088u)));
    set32(c.r[2], c.r[2].w[0] + 460u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139340; } }
    set32(c.r[4], c.r[17].w[0] << 7);
    set32(c.r[5], c.r[20].w[0] - 15088u);
    set32(c.r[4], c.r[4].w[0] + c.r[21].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139334u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x00139334u) [[unlikely]] return; }
L_00139334:
    st8((c.r[19].w[0] - 15088u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139488; } }
L_00139340:
    set32(c.r[2], c.r[17].w[0] << 7);
    set32(c.r[16], c.r[2].w[0] + c.r[21].w[0]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139358u);  if (depth < kMaxDepth) unit_000E(c, 135u, depth + 1u); else { c.pc = 0x001390F8u; return; } if (c.pc != 0x00139358u) [[unlikely]] return; }
L_00139358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013936C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 13872u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0013936C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 13880u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139388u);  if (depth < kMaxDepth) unit_00DD(c, 84u, depth + 1u); else { c.pc = 0x004751D8u; return; } if (c.pc != 0x00139388u) [[unlikely]] return; }
L_00139388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00139488; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], c.r[30].w[0] + 13904u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001393A8u);  if (depth < kMaxDepth) unit_00DD(c, 121u, depth + 1u); else { c.pc = 0x004759A0u; return; } if (c.pc != 0x001393A8u) [[unlikely]] return; }
L_001393A8:
    set32(c.r[16], 0u + 16u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1518u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001393BCu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001393BCu) [[unlikely]] return; }
L_001393BC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00139488; } }
L_001393CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[10], 0u + 10u);
    set32(c.r[3], c.r[3].w[0] - 18032u);
    set32(c.r[9], 0u + 13u);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
L_001393E8:
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[8], c.r[22].w[0] - 18032u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[10].d[0];  if (t) { goto L_00139418; } }
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[9].d[0];  if (t) { goto L_00139460; } }
L_00139418:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013942C; } }
L_00139428:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0013942C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[10].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139428u | kUnwind; return; } goto L_00139428; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139428u | kUnwind; return; } goto L_00139428; } }
    set32(c.r[5], c.r[5].w[0] + 13928u);
    set32(c.r[4], c.r[19].w[0] - 15088u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139458u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00139458u) [[unlikely]] return; }
L_00139458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139488; } }
L_00139460:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001393CCu | kUnwind; return; } goto L_001393CC; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001393E8u | kUnwind; return; } goto L_001393E8; } }
L_00139488:
    c.r[2].d[0] = c.r[17].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001392F8u | kUnwind; return; } goto L_001392F8; } }
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
L_001394C8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    set32(c.r[22], c.r[2].w[0] - 14960u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[30], c.r[3].w[0] - 18032u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 18;
L_00139510:
    set32(c.r[3], c.r[21].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] - 968u)));
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00139548; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 964u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00139554; } }
L_00139548:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001395B4; } }
L_00139554:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 960u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00139578; } }
    set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013958C; } }
L_00139578:
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001395B0; } }
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_0013958C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00139590u);  goto L_00139594; }
L_00139594:
    set32(c.r[2], c.r[2].w[0] << 7);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    set32(c.r[3], 0u + 128u);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001395B4; } }
L_001395B0:
    set32(c.r[2], 0u + 127u);
    c.budget -= 1;
L_001395B4:
    set32(c.r[3], c.r[2].w[0] << 24);
    set32(c.r[4], 0u + 96u);
    set32(c.r[2], c.r[4].w[0] << 16);
    set32(c.r[5], 0u + 96u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[5].w[0] << 8);
    set32(c.r[4], c.r[21].w[0] << 7);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[19], c.r[9].w[0] - 18032u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[4].w[0] + c.r[19].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[17].d[0] = c.r[3].d[0] | 96ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 13880u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139600u);  if (depth < kMaxDepth) unit_00DD(c, 84u, depth + 1u); else { c.pc = 0x004751D8u; return; } if (c.pc != 0x00139600u) [[unlikely]] return; }
L_00139600:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013963C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[20].w[0] + c.r[22].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] - 984u)));
    set32(c.r[8], c.r[19].w[0] + 16u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], 0u - c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] - 80u);
    set32(c.r[8], c.r[18].w[0] + c.r[8].w[0]);
    set32(c.r[7], 0u + 2u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139634u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x00139634u) [[unlikely]] return; }
L_00139634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139660; } }
L_0013963C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[20].w[0] + c.r[22].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] - 984u)));
    set32(c.r[6], 0u - c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139660u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x00139660u) [[unlikely]] return; }
L_00139660:
    set32(c.r[6], c.r[20].w[0] + c.r[22].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[9].w[0] - 1276u)));
    set32(c.r[17], c.r[21].w[0] + 1u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00139844; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_0013969C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 972u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00139844; } }
L_0013969C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 460u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 15088u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] - 15088u);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001396D8; } }
    set32(c.r[4], c.r[18].w[0] + c.r[30].w[0]);
    set32(c.r[17], c.r[21].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001396CCu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001396CCu) [[unlikely]] return; }
L_001396CC:
    st8((c.r[19].w[0] - 15088u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139844; } }
L_001396D8:
    set32(c.r[16], c.r[18].w[0] + c.r[30].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001396E8u);  if (depth < kMaxDepth) unit_000E(c, 135u, depth + 1u); else { c.pc = 0x001390F8u; return; } if (c.pc != 0x001396E8u) [[unlikely]] return; }
L_001396E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00139724; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 13872u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_00139724; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 980u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], ld32((c.r[3].w[0] - 14868u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[9].w[0] - 972u), c.r[4].w[0]);
    st32((c.r[2].w[0] - 976u), c.r[5].w[0]);
    c.budget -= 8;
L_00139724:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[18].w[0] + c.r[30].w[0]);
    set32(c.r[5], c.r[3].w[0] + 13880u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    set32(c.r[17], c.r[21].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139744u);  if (depth < kMaxDepth) unit_00DD(c, 84u, depth + 1u); else { c.pc = 0x004751D8u; return; } if (c.pc != 0x00139744u) [[unlikely]] return; }
L_00139744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00139844; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[9].w[0] + 13904u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139764u);  if (depth < kMaxDepth) unit_00DD(c, 121u, depth + 1u); else { c.pc = 0x004759A0u; return; } if (c.pc != 0x00139764u) [[unlikely]] return; }
L_00139764:
    set32(c.r[16], 0u + 16u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1518u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139778u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x00139778u) [[unlikely]] return; }
L_00139778:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00139844; } }
L_00139788:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[8], 0u + 10u);
    set32(c.r[3], c.r[3].w[0] - 18032u);
    set32(c.r[7], 0u + 13u);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_001397A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { goto L_001397B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_00139800; } }
L_001397B8:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001397CC; } }
L_001397C8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001397CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001397C8u | kUnwind; return; } goto L_001397C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001397C8u | kUnwind; return; } goto L_001397C8; } }
    set32(c.r[4], c.r[19].w[0] - 15088u);
    set32(c.r[5], c.r[5].w[0] + 13928u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001397F8u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001397F8u) [[unlikely]] return; }
L_001397F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139844; } }
L_00139800:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[5], c.r[9].w[0] - 18032u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139788u | kUnwind; return; } goto L_00139788; } }
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
L_0013983C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001397A0u | kUnwind; return; } goto L_001397A0; } }
L_00139844:
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[21].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139510u | kUnwind; return; } goto L_00139510; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_001398A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 972u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001398A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] - 14960u);
    c.budget -= 3;
L_00139878:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001398A4; } }
    goto L_00139884;
L_00139880:
    c.budget -= 1;
L_00139884:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[21].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139878u | kUnwind; return; } goto L_00139878; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001398A8; } }
L_001398A4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001398A8:
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
L_001398E0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - 129u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(38ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00139AD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 2;
L_00139900:
    set32(c.r[2], c.r[2].w[0] + 14048u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00138000u < 16384u) { entry = entries_000E[(t - 0x00138000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00139914:
    set32(c.r[4], 0u + 1074u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139920:
    set32(c.r[4], 0u + 1075u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_0013992C:
    set32(c.r[4], 0u + 1076u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139938:
    set32(c.r[4], 0u + 1077u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139944:
    set32(c.r[4], 0u + 1078u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139950:
    set32(c.r[4], 0u + 1079u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_0013995C:
    set32(c.r[4], 0u + 1080u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139968:
    set32(c.r[4], 0u + 1081u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139974:
    set32(c.r[4], 0u + 1083u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139980:
    set32(c.r[4], 0u + 1084u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_0013998C:
    set32(c.r[4], 0u + 1085u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139998:
    set32(c.r[4], 0u + 1062u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_001399A4:
    set32(c.r[4], 0u + 1063u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_001399B0:
    set32(c.r[4], 0u + 1064u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_001399BC:
    set32(c.r[4], 0u + 1065u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_001399C8:
    set32(c.r[4], 0u + 1066u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_001399D4:
    set32(c.r[4], 0u + 1068u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_001399E0:
    set32(c.r[4], 0u + 1069u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_001399EC:
    set32(c.r[4], 0u + 1070u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_001399F8:
    set32(c.r[4], 0u + 1071u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139A04:
    set32(c.r[4], 0u + 1072u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139A10:
    set32(c.r[4], 0u + 1086u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139A1C:
    set32(c.r[4], 0u + 1087u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139A28:
    set32(c.r[4], 0u + 1088u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139A34:
    set32(c.r[4], 0u + 1093u);
    c.budget -= 1;
L_00139A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139A40:
    set32(c.r[4], 0u + 1097u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139A4C:
    set32(c.r[4], 0u + 1110u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139A58:
    set32(c.r[4], 0u + 1111u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139A64:
    set32(c.r[4], 0u + 1117u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139A70:
    set32(c.r[4], 0u + 1121u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139A7C:
    set32(c.r[4], 0u + 1122u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139A88:
    set32(c.r[4], 0u + 1123u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139A94:
    set32(c.r[4], 0u + 1134u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139AA0:
    set32(c.r[4], 0u + 1136u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139AAC:
    set32(c.r[4], 0u + 1158u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139AB8:
    set32(c.r[4], 0u + 1159u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139AC4:
    set32(c.r[4], 0u + 1170u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AD4; } }
L_00139AD0:
    set32(c.r[4], 0u + 1172u);
    c.budget -= 1;
L_00139AD4:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00139AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00139E64; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139DEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[2].w[0] - 24304u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139B18u);  if (depth < kMaxDepth) unit_009D(c, 253u, depth + 1u); else { c.pc = 0x00377988u; return; } if (c.pc != 0x00139B18u) [[unlikely]] return; }
L_00139B18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 14416u);
    set32(c.r[4], c.r[16].w[0] + 68u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139B30u);  if (depth < kMaxDepth) unit_000C(c, 519u, depth + 1u); else { c.pc = 0x00133DD8u; return; } if (c.pc != 0x00139B30u) [[unlikely]] return; }
L_00139B30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139B60; } }
L_00139B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139B40u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00139B40u) [[unlikely]] return; }
L_00139B40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139B50u);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x00139B50u) [[unlikely]] return; }
L_00139B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139B38u | kUnwind; return; } goto L_00139B38; } }
L_00139B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139B60u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x00139B60u) [[unlikely]] return; }
L_00139B60:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] - 23944u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139B74u);  if (depth < kMaxDepth) unit_009D(c, 253u, depth + 1u); else { c.pc = 0x00377988u; return; } if (c.pc != 0x00139B74u) [[unlikely]] return; }
L_00139B74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[17], c.r[17].w[0] - 23880u);
    set32(c.r[3], c.r[3].w[0] + 14344u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139B94u);  if (depth < kMaxDepth) unit_009D(c, 253u, depth + 1u); else { c.pc = 0x00377988u; return; } if (c.pc != 0x00139B94u) [[unlikely]] return; }
L_00139B94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[2].w[0] - 23800u);
    set32(c.r[3], c.r[3].w[0] + 14272u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139BB4u);  if (depth < kMaxDepth) unit_009D(c, 253u, depth + 1u); else { c.pc = 0x00377988u; return; } if (c.pc != 0x00139BB4u) [[unlikely]] return; }
L_00139BB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 1;
L_00139BB8:
    set32(c.r[3], c.r[3].w[0] + 14200u);
    set32(c.r[4], c.r[16].w[0] + 60u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139BCCu);  if (depth < kMaxDepth) unit_000C(c, 519u, depth + 1u); else { c.pc = 0x00133DD8u; return; } if (c.pc != 0x00139BCCu) [[unlikely]] return; }
L_00139BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139BFC; } }
L_00139BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139BDCu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00139BDCu) [[unlikely]] return; }
L_00139BDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139BECu);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x00139BECu) [[unlikely]] return; }
L_00139BEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139BD4u | kUnwind; return; } goto L_00139BD4; } }
L_00139BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139BFCu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x00139BFCu) [[unlikely]] return; }
    goto L_00139BFC;
L_00139BF8:
    c.budget -= 1;
L_00139BFC:
    set32(c.r[3], 0u + 80u);
    c.budget -= 1;
L_00139C00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[2].w[0] - 23424u), c.r[3].w[0]);
    set32(c.r[10], 0u + 190u);
    set32(c.r[2], c.r[2].w[0] - 23424u);
    set32(c.r[9], 0u + 150u);
    st32((c.r[2].w[0] + 4u), c.r[10].w[0]);
    set32(c.r[17], 0u + 220u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[4], 0u + 135u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[8], 0u + 310u);
    st32((c.r[2].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[3], 0u + 180u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 14;
L_00139C38:
    set32(c.r[16], 0u + 125u);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[6], 0u + 345u);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[11], 0u + 470u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], 0u + 485u);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    set32(c.r[3], c.r[4].w[0] - 23320u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[12], 0u + 225u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[13], 0u + 290u);
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 16;
L_00139C78:
    set32(c.r[15], 0u + 118u);
    st32((c.r[4].w[0] - 23320u), c.r[11].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[4], 0u + 325u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[7], 0u + 350u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[4], 0u + 200u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[6], 0u + 420u);
    st32((c.r[2].w[0] + 4u), c.r[12].w[0]);
    set32(c.r[9], 0u + 315u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[12], 0u + 240u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[4], 0u + 105u);
    st32((c.r[2].w[0] + 4u), c.r[13].w[0]);
    set32(c.r[5], 0u + 260u);
    st32((c.r[3].w[0] + 4u), c.r[15].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[7].w[0]);
    set32(c.r[10], 0u + 340u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0]), c.r[9].w[0]);
    set32(c.r[4], 0u + 117u);
    st32((c.r[2].w[0] + 4u), c.r[7].w[0]);
    set32(c.r[6], 0u + 35u);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0]), c.r[12].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[2].w[0] + 4u), c.r[10].w[0]);
    set32(c.r[5], 0u + 292u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[4], 0u + 130u);
    st32((c.r[2].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[6], 0u + 275u);
    st32((c.r[3].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[9], 0u + 460u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 23216u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[12], 0u + 520u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[10], 0u + 175u);
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[8], 0u + 355u);
    st32((c.r[3].w[0]), c.r[11].w[0]);
    set32(c.r[13], 0u + 335u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[14], 0u + 115u);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    set32(c.r[6], 0u + 152u);
    st32((c.r[3].w[0] + 4u), c.r[15].w[0]);
    set32(c.r[5], 0u + 145u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[9].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 1628u), 0u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[3].w[0]), c.r[12].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[3].w[0]), c.r[11].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[3].w[0]), c.r[13].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[3].w[0]), c.r[14].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[3].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 91;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139DE4u);  if (depth < kMaxDepth) unit_000B(c, 171u, depth + 1u); else { c.pc = 0x0012E170u; return; } if (c.pc != 0x00139DE4u) [[unlikely]] return; }
L_00139DE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139E64; } }
L_00139DEC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[16], c.r[16].w[0] - 23800u);
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139E04u);  if (depth < kMaxDepth) unit_000C(c, 521u, depth + 1u); else { c.pc = 0x00133E08u; return; } if (c.pc != 0x00139E04u) [[unlikely]] return; }
L_00139E04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139E14u);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x00139E14u) [[unlikely]] return; }
L_00139E14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 23880u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139E28u);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x00139E28u) [[unlikely]] return; }
L_00139E28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 23944u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139E3Cu);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x00139E3Cu) [[unlikely]] return; }
    goto L_00139E3C;
L_00139E38:
    c.budget -= 1;
L_00139E3C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[16], c.r[16].w[0] - 24304u);
    set32(c.r[4], c.r[16].w[0] + 68u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139E54u);  if (depth < kMaxDepth) unit_000C(c, 521u, depth + 1u); else { c.pc = 0x00133E08u; return; } if (c.pc != 0x00139E54u) [[unlikely]] return; }
L_00139E54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139E64u);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x00139E64u) [[unlikely]] return; }
L_00139E64:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00139E80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139EA0u);  if (depth < kMaxDepth) unit_000B(c, 213u, depth + 1u); else { c.pc = 0x0012E4B8u; return; } if (c.pc != 0x00139EA0u) [[unlikely]] return; }
L_00139EA0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139EB0u);  if (depth < kMaxDepth) unit_000B(c, 214u, depth + 1u); else { c.pc = 0x0012E4C8u; return; } if (c.pc != 0x00139EB0u) [[unlikely]] return; }
L_00139EB0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139EA0u | kUnwind; return; } goto L_00139EA0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139ECCu);  if (depth < kMaxDepth) unit_000B(c, 215u, depth + 1u); else { c.pc = 0x0012E4E8u; return; } if (c.pc != 0x00139ECCu) [[unlikely]] return; }
L_00139ECC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139ED8u);  if (depth < kMaxDepth) unit_000B(c, 216u, depth + 1u); else { c.pc = 0x0012E4F8u; return; } if (c.pc != 0x00139ED8u) [[unlikely]] return; }
L_00139ED8:
    st32((c.r[16].w[0] + 1628u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00139EF8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 68u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139F20u);  if (depth < kMaxDepth) unit_000C(c, 521u, depth + 1u); else { c.pc = 0x00133E08u; return; } if (c.pc != 0x00139F20u) [[unlikely]] return; }
L_00139F20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139F30u);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x00139F30u) [[unlikely]] return; }
L_00139F30:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00139F48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139F60u);  if (depth < kMaxDepth) unit_009D(c, 253u, depth + 1u); else { c.pc = 0x00377988u; return; } if (c.pc != 0x00139F60u) [[unlikely]] return; }
L_00139F60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 14416u);
    set32(c.r[4], c.r[16].w[0] + 68u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139F78u);  if (depth < kMaxDepth) unit_000C(c, 519u, depth + 1u); else { c.pc = 0x00133DD8u; return; } if (c.pc != 0x00139F78u) [[unlikely]] return; }
L_00139F78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139F88; } }
L_00139F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139F88u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00139F88u) [[unlikely]] return; }
L_00139F88:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139FB4; } }
L_00139F94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139FA4u);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x00139FA4u) [[unlikely]] return; }
L_00139FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139F80u | kUnwind; return; } goto L_00139F80; } }
L_00139FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139FB4u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x00139FB4u) [[unlikely]] return; }
L_00139FB4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00139FC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139FE0u);  if (depth < kMaxDepth) unit_009D(c, 260u, depth + 1u); else { c.pc = 0x00377A78u; return; } if (c.pc != 0x00139FE0u) [[unlikely]] return; }
L_00139FE0:
    st32((c.r[16].w[0] + 60u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00139FF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A008u);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x0013A008u) [[unlikely]] return; }
L_0013A008:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A018:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A030u);  if (depth < kMaxDepth) unit_009D(c, 253u, depth + 1u); else { c.pc = 0x00377988u; return; } if (c.pc != 0x0013A030u) [[unlikely]] return; }
L_0013A030:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 14344u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A058:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A068u);  if (depth < kMaxDepth) unit_009D(c, 260u, depth + 1u); else { c.pc = 0x00377A78u; return; } if (c.pc != 0x0013A068u) [[unlikely]] return; }
L_0013A068:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A078:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A088u);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x0013A088u) [[unlikely]] return; }
L_0013A088:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A098:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A0B0u);  if (depth < kMaxDepth) unit_009D(c, 253u, depth + 1u); else { c.pc = 0x00377988u; return; } if (c.pc != 0x0013A0B0u) [[unlikely]] return; }
L_0013A0B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 14272u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A0D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A0F0u);  if (depth < kMaxDepth) unit_009D(c, 260u, depth + 1u); else { c.pc = 0x00377A78u; return; } if (c.pc != 0x0013A0F0u) [[unlikely]] return; }
L_0013A0F0:
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A108u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0013A108u) [[unlikely]] return; }
L_0013A108:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A120:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A130:
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A158:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 60u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A180u);  if (depth < kMaxDepth) unit_000C(c, 521u, depth + 1u); else { c.pc = 0x00133E08u; return; } if (c.pc != 0x0013A180u) [[unlikely]] return; }
L_0013A180:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A190u);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x0013A190u) [[unlikely]] return; }
L_0013A190:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A1A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A1C4u);  if (depth < kMaxDepth) unit_000C(c, 524u, depth + 1u); else { c.pc = 0x00133E58u; return; } if (c.pc != 0x0013A1C4u) [[unlikely]] return; }
L_0013A1C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A1D0u);  if (depth < kMaxDepth) unit_009D(c, 260u, depth + 1u); else { c.pc = 0x00377A78u; return; } if (c.pc != 0x0013A1D0u) [[unlikely]] return; }
L_0013A1D0:
    st32((c.r[16].w[0] + 372u), 0u);
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A1E8u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0013A1E8u) [[unlikely]] return; }
L_0013A1E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A200:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 18064u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A210:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 18060u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A220:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 18056u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A230:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 18052u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A240:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 8736u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A270u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0013A270u) [[unlikely]] return; }
L_0013A270:
    set32(c.r[4], c.r[16].w[0] + 9576u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A27Cu);  if (depth < kMaxDepth) unit_009D(c, 59u, depth + 1u); else { c.pc = 0x00374AC8u; return; } if (c.pc != 0x0013A27Cu) [[unlikely]] return; }
L_0013A27C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013A2CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 1004u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013A2CC; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] - 1004u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A2A8u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0013A2A8u) [[unlikely]] return; }
L_0013A2A8:
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], 0u + 60u);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { breakpoint(c, 0x0013A2B8u);  goto L_0013A2BC; }
L_0013A2BC:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] - 1008u), c.r[3].w[0]);
    c.budget -= 4;
L_0013A2CC:
    set32(c.r[5], ld32((c.r[17].w[0] - 1008u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], ld32((c.r[3].w[0] - 6452u)));
    set32(c.r[2], c.r[5].w[0] + 500u);
    mmi::divu(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0013A2E4u);  goto L_0013A2E8; }
L_0013A2E8:
    c.r[3].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013A314; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[18].w[0] + 9576u);
    st32((c.r[2].w[0] - 1004u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A30Cu);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0013A30Cu) [[unlikely]] return; }
L_0013A30C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A320; } }
L_0013A314:
    set32(c.r[4], c.r[18].w[0] + 9576u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A320u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0013A320u) [[unlikely]] return; }
L_0013A320:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], ld32((c.r[17].w[0] - 368u)));
    set32(c.r[16], c.r[16].w[0] - 24304u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 296u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A380u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013A380u) [[unlikely]] return; }
L_0013A380:
    set32(c.r[8], ld32((c.r[17].w[0] - 368u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 296u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A3ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013A3ACu) [[unlikely]] return; }
L_0013A3AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A3B8u);  if (depth < kMaxDepth) unit_004D(c, 93u, depth + 1u); else { c.pc = 0x002367B8u; return; } if (c.pc != 0x0013A3B8u) [[unlikely]] return; }
L_0013A3B8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A3D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], ld32((c.r[2].w[0] - 5124u)));
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A3F0u);  if (depth < kMaxDepth) unit_009D(c, 264u, depth + 1u); else { c.pc = 0x00377AE8u; return; } if (c.pc != 0x0013A3F0u) [[unlikely]] return; }
L_0013A3F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A400:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], ld32((c.r[2].w[0] - 5148u)));
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A420u);  if (depth < kMaxDepth) unit_009D(c, 264u, depth + 1u); else { c.pc = 0x00377AE8u; return; } if (c.pc != 0x0013A420u) [[unlikely]] return; }
L_0013A420:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A430:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013A450; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0013A47C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A4A8; } }
L_0013A450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 23199u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013A46C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A46C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A47C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], 0u + 120u);
    c.r[4].d[0] = ld8((c.r[3].w[0] - 23198u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013A4AC; } }
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[3], 0u + 180u);
    set32(c.r[2], 0u + 10000u);
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A4A8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0013A4AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A4B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] - 5132u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A4E0u);  if (depth < kMaxDepth) unit_009D(c, 264u, depth + 1u); else { c.pc = 0x00377AE8u; return; } if (c.pc != 0x0013A4E0u) [[unlikely]] return; }
L_0013A4E0:
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A4F8u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0013A4F8u) [[unlikely]] return; }
L_0013A4F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0013A55C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A538u);  if (depth < kMaxDepth) unit_000E(c, 315u, depth + 1u); else { c.pc = 0x0013A5C8u; return; } if (c.pc != 0x0013A538u) [[unlikely]] return; }
L_0013A538:
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[4], c.r[16].w[0] + 64u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A554u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0013A554u) [[unlikely]] return; }
L_0013A554:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[3].w[0] - 24244u), 0u);
    c.budget -= 2;
L_0013A55C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[2].w[0] - 23944u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A570u);  if (depth < kMaxDepth) unit_009D(c, 281u, depth + 1u); else { c.pc = 0x00377D48u; return; } if (c.pc != 0x0013A570u) [[unlikely]] return; }
L_0013A570:
    set32(c.r[3], ld32((c.r[2].w[0] + 672u)));
    set32(c.r[2], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013A5B4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A58Cu);  if (depth < kMaxDepth) unit_009D(c, 281u, depth + 1u); else { c.pc = 0x00377D48u; return; } if (c.pc != 0x0013A58Cu) [[unlikely]] return; }
L_0013A58C:
    set32(c.r[3], ld32((c.r[2].w[0] + 828u)));
    c.r[3].d[0] = c.r[3].sd[0] < 240ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013A5B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A5A4u);  if (depth < kMaxDepth) unit_000B(c, 183u, depth + 1u); else { c.pc = 0x0012E260u; return; } if (c.pc != 0x0013A5A4u) [[unlikely]] return; }
L_0013A5A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 504u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A5B4u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0013A5B4u) [[unlikely]] return; }
L_0013A5B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A5C8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 23u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A5F4u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013A5F4u) [[unlikely]] return; }
L_0013A5F4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 23944u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A610u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x0013A610u) [[unlikely]] return; }
L_0013A610:
    set32(c.r[2], 0u + 16u);
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A628u);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00377CA8u; return; } if (c.pc != 0x0013A628u) [[unlikely]] return; }
L_0013A628:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 8736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A638u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0013A638u) [[unlikely]] return; }
L_0013A638:
    set32(c.r[4], 0u + 48u);
    set32(c.r[5], 0u + 160u);
    set32(c.r[6], 0u + 28u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A64Cu);  if (depth < kMaxDepth) unit_000A(c, 355u, depth + 1u); else { c.pc = 0x0012AA20u; return; } if (c.pc != 0x0013A64Cu) [[unlikely]] return; }
L_0013A64C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A654u);  if (depth < kMaxDepth) unit_000A(c, 372u, depth + 1u); else { c.pc = 0x0012AD00u; return; } if (c.pc != 0x0013A654u) [[unlikely]] return; }
L_0013A654:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 15506u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013A698; } }
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[3], 0u + 180u);
    set32(c.r[2], 0u + 10000u);
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A698:
    set32(c.r[2], 0u + 120u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A6A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 15505u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013A6C8; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A6C8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A6D8:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013A73C; } }
    set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0013A718; } }
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A718:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013A730; } }
    set32(c.r[6], c.r[8].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A6D8u | kUnwind; return; } goto L_0013A6D8; } }
L_0013A730:
    set32(c.r[7], c.r[8].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A6D8u | kUnwind; return; } goto L_0013A6D8; } }
L_0013A73C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A748:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A760u);  if (depth < kMaxDepth) unit_009D(c, 253u, depth + 1u); else { c.pc = 0x00377988u; return; } if (c.pc != 0x0013A760u) [[unlikely]] return; }
L_0013A760:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 14200u);
    set32(c.r[4], c.r[16].w[0] + 60u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A778u);  if (depth < kMaxDepth) unit_000C(c, 519u, depth + 1u); else { c.pc = 0x00133DD8u; return; } if (c.pc != 0x0013A778u) [[unlikely]] return; }
L_0013A778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A788; } }
L_0013A780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A788u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0013A788u) [[unlikely]] return; }
L_0013A788:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A7B4; } }
L_0013A794:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A7A4u);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x0013A7A4u) [[unlikely]] return; }
L_0013A7A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A780u | kUnwind; return; } goto L_0013A780; } }
L_0013A7AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A7B4u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0013A7B4u) [[unlikely]] return; }
L_0013A7B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A7C8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[21], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A800u);  if (depth < kMaxDepth) unit_0040(c, 61u, depth + 1u); else { c.pc = 0x00200AC0u; return; } if (c.pc != 0x0013A800u) [[unlikely]] return; }
L_0013A800:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 15804u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_0013A810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A818u);  if (depth < kMaxDepth) unit_0040(c, 54u, depth + 1u); else { c.pc = 0x002009D8u; return; } if (c.pc != 0x0013A818u) [[unlikely]] return; }
L_0013A818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_0013A854; } }
    st32((c.r[17].w[0] + 15804u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[20].w[0] + 19624u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A834u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x0013A834u) [[unlikely]] return; }
L_0013A834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A83Cu);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x0013A83Cu) [[unlikely]] return; }
L_0013A83C:
    set32(c.r[4], c.r[19].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A848u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x0013A848u) [[unlikely]] return; }
L_0013A848:
    c.r[3].d[0] = c.r[16].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A810u | kUnwind; return; } goto L_0013A810; } }
L_0013A854:
    st32((c.r[17].w[0] + 15804u), c.r[18].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A860u);  if (depth < kMaxDepth) unit_0040(c, 63u, depth + 1u); else { c.pc = 0x00200AF8u; return; } if (c.pc != 0x0013A860u) [[unlikely]] return; }
L_0013A860:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 8;
L_0013A880:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A888:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], 0u + 1u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[16].d[0];  if (t) { goto L_0013A8F4; } }
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013A8C0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0013A8E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A93C; } }
L_0013A8C0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0013A908; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0013A91C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A93C; } }
L_0013A8E0:
    set32(c.r[4], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A8ECu);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x0013A8ECu) [[unlikely]] return; }
L_0013A8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A928; } }
L_0013A8F4:
    set32(c.r[4], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A900u);  if (depth < kMaxDepth) unit_0030(c, 158u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x0013A900u) [[unlikely]] return; }
L_0013A900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A928; } }
L_0013A908:
    set32(c.r[4], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A914u);  if (depth < kMaxDepth) unit_0030(c, 156u, depth + 1u); else { c.pc = 0x001C1D90u; return; } if (c.pc != 0x0013A914u) [[unlikely]] return; }
L_0013A914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A928; } }
L_0013A91C:
    set32(c.r[4], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A928u);  if (depth < kMaxDepth) unit_0030(c, 159u, depth + 1u); else { c.pc = 0x001C1E98u; return; } if (c.pc != 0x0013A928u) [[unlikely]] return; }
L_0013A928:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A940; } }
L_0013A93C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013A940:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A958:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[7].w[0] + 352u);
    set32(c.r[2], c.r[2].w[0] - 18064u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013A9A8; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A9AC; } }
L_0013A9A8:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 1;
L_0013A9AC:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u + 704u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[7].w[0] + 60u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 21584u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 352u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[7].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A9ECu);  if (depth < kMaxDepth) unit_000D(c, 9u, depth + 1u); else { c.pc = 0x00134128u; return; } if (c.pc != 0x0013A9ECu) [[unlikely]] return; }
L_0013A9EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013AA00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[7].w[0] + 352u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0013AA38; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AA50; } }
L_0013AA38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 18064u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0013AA50:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u + 704u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[7].w[0] + 60u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 21584u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 352u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[7].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AA90u);  if (depth < kMaxDepth) unit_000D(c, 9u, depth + 1u); else { c.pc = 0x00134128u; return; } if (c.pc != 0x0013AA90u) [[unlikely]] return; }
L_0013AA90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013AAA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 60u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 1024u);
    c.f[12] = 0u;
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[8], 0u - 1u);
    set32(c.r[7], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[13] = c.f[12];
    mmi::mult(c, 0, c.r[7].w[0], c.r[5].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 20712u)));
    set32(c.r[9], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AAFCu);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x00134650u; return; } if (c.pc != 0x0013AAFCu) [[unlikely]] return; }
L_0013AAFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013AB10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] + 60u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AB3Cu);  if (depth < kMaxDepth) unit_000D(c, 39u, depth + 1u); else { c.pc = 0x001347B8u; return; } if (c.pc != 0x0013AB3Cu) [[unlikely]] return; }
L_0013AB3C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], 0u + 12u);
    set32(c.r[8], ld32((c.r[16].w[0] + 92u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 1024u);
    set32(c.r[2], c.r[2].w[0] << 2);
    mmi::mult(c, 0, c.r[8].w[0], c.r[4].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 20712u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + c.r[5].w[0]);
    c.f[13] = c.f[12];
    set32(c.r[5], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[9], 0u + 1u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AB90u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x00134650u; return; } if (c.pc != 0x0013AB90u) [[unlikely]] return; }
L_0013AB90:
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], 0u + 20u);
    set32(c.r[4], 0u + 4u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st16((c.r[5].w[0] + 322u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 19624u), c.r[4].w[0]);
    st32((c.r[6].w[0] - 1280u), c.r[4].w[0]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013ABD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], ld32((c.r[16].w[0] - 1264u)));
    set32(c.r[19], c.r[2].w[0] - 21584u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[6], c.r[6].w[0] << 2);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0] - 18064u), 0u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC20u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0013AC20u) [[unlikely]] return; }
L_0013AC20:
    set32(c.r[2], ld32((c.r[16].w[0] - 1264u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0013AC78; } }
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], 0u + 1u);
    c.budget -= 3;
L_0013AC38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC44u);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x0013AC44u) [[unlikely]] return; }
L_0013AC44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0013AC64; } }
    set32(c.r[2], ld32((c.r[16].w[0] - 18064u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[16].w[0] - 18064u), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    c.budget -= 6;
L_0013AC64:
    set32(c.r[2], ld32((c.r[20].w[0] - 1264u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013AC38u | kUnwind; return; } goto L_0013AC38; } }
L_0013AC78:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013ACA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[3].w[0] - 18064u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[2].w[0] - 1264u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], c.r[2].w[0] - 20880u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ACF4u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0013ACF4u) [[unlikely]] return; }
L_0013ACF4:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0013AD50; } }
    c.r[20].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], 0u + 1u);
    c.budget -= 4;
L_0013AD10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AD1Cu);  if (depth < kMaxDepth) unit_0030(c, 158u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x0013AD1Cu) [[unlikely]] return; }
L_0013AD1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0013AD3C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.budget -= 6;
L_0013AD3C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013AD10u | kUnwind; return; } goto L_0013AD10; } }
L_0013AD50:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013AD78:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[2].w[0] - 1264u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 18064u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 16;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0013AE10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[20], c.r[2].w[0] - 20176u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], 0u + 1u);
    c.budget -= 6;
L_0013ADD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ADDCu);  if (depth < kMaxDepth) unit_0030(c, 156u, depth + 1u); else { c.pc = 0x001C1D90u; return; } if (c.pc != 0x0013ADDCu) [[unlikely]] return; }
L_0013ADDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0013ADFC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.budget -= 6;
L_0013ADFC:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013ADD0u | kUnwind; return; } goto L_0013ADD0; } }
L_0013AE10:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013AE38:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[3].w[0] - 18064u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[2].w[0] - 1264u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], c.r[2].w[0] - 19472u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AE8Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0013AE8Cu) [[unlikely]] return; }
L_0013AE8C:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0013AEE8; } }
    c.r[20].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], 0u + 1u);
    c.budget -= 4;
L_0013AEA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AEB4u);  if (depth < kMaxDepth) unit_0030(c, 159u, depth + 1u); else { c.pc = 0x001C1E98u; return; } if (c.pc != 0x0013AEB4u) [[unlikely]] return; }
L_0013AEB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0013AED4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.budget -= 6;
L_0013AED4:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013AEA8u | kUnwind; return; } goto L_0013AEA8; } }
L_0013AEE8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013AF10:
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] - 14868u), c.r[7].w[0]);
    st32((c.r[6].w[0] - 972u), c.r[5].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 976u), c.r[7].w[0]);
    st32((c.r[8].w[0] - 980u), c.r[5].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013AF48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 18708u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], ld32((c.r[3].w[0] - 980u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 13952u);
    set32(c.r[7], c.r[7].w[0] + 14024u);
    set32(c.r[8], 0u + 2532u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AF7Cu);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0013AF7Cu) [[unlikely]] return; }
L_0013AF7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013AF90:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013AFA0:
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013AFC0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013AFD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 17u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AFECu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0013AFECu) [[unlikely]] return; }
L_0013AFEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013B000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B018u);  if (depth < kMaxDepth) unit_000E(c, 212u, depth + 1u); else { c.pc = 0x00139AE0u; return; } if (c.pc != 0x0013B018u) [[unlikely]] return; }
L_0013B018:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013B028:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B040u);  if (depth < kMaxDepth) unit_000E(c, 212u, depth + 1u); else { c.pc = 0x00139AE0u; return; } if (c.pc != 0x0013B040u) [[unlikely]] return; }
L_0013B040:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013B050:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[4], 0u + 1459u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[20].w[0] + 23004u)));
    set32(c.r[16], 0u + 410u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    set32(c.r[17], 0u + 440u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[17].d[0];
    c.budget -= 12;
L_0013B080:
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[22], 0u + 410u);
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B0ACu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013B0ACu) [[unlikely]] return; }
L_0013B0AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[20] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 70u);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B0D8u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x0013B0D8u) [[unlikely]] return; }
L_0013B0D8:
    set32(c.r[2], ld32((c.r[20].w[0] + 23004u)));
    set32(c.r[4], 0u + 1454u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[22].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B0F0u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013B0F0u) [[unlikely]] return; }
L_0013B0F0:
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 92u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B114u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0013B114u) [[unlikely]] return; }
L_0013B114:
    set32(c.r[2], ld32((c.r[20].w[0] + 23004u)));
    set32(c.r[4], 0u + 1460u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[19].d[0] = c.r[22].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B12Cu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013B12Cu) [[unlikely]] return; }
L_0013B12C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 270u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B148u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x0013B148u) [[unlikely]] return; }
L_0013B148:
    set32(c.r[2], ld32((c.r[20].w[0] + 23004u)));
    set32(c.r[4], 0u + 1455u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[22].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B160u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013B160u) [[unlikely]] return; }
L_0013B160:
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 292u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B184u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0013B184u) [[unlikely]] return; }
L_0013B184:
    set32(c.r[2], ld32((c.r[20].w[0] + 23004u)));
    set32(c.r[4], 0u + 1458u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[21].d[0] = c.r[22].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B19Cu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013B19Cu) [[unlikely]] return; }
L_0013B19C:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 453u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B1B8u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x0013B1B8u) [[unlikely]] return; }
L_0013B1B8:
    set32(c.r[2], ld32((c.r[20].w[0] + 23004u)));
    set32(c.r[4], 0u + 1453u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[22].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B1D0u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013B1D0u) [[unlikely]] return; }
L_0013B1D0:
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 475u);
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B1F4u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x0013B1F4u) [[unlikely]] return; }
L_0013B1F4:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013B228:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0013B2F0; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u + 358u);
    set32(c.r[2], ld32((c.r[18].w[0] + 23004u)));
    set32(c.r[16], 0u + 328u);
    set32(c.r[4], 0u + 1437u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FB30000u);
    c.r[1].d[0] = c.r[1].d[0] | 13107ull;
    c.f[20] = c.r[1].w[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[17], 0u + 325u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B280u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013B280u) [[unlikely]] return; }
L_0013B280:
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 61424ull;
    set32(c.r[7], 0u + 2u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    set32(c.r[4], 0u + 322u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B2A8u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0013B2A8u) [[unlikely]] return; }
L_0013B2A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 23004u)));
    set32(c.r[3], 0u + 355u);
    set32(c.r[4], 0u + 1437u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B2C4u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013B2C4u) [[unlikely]] return; }
L_0013B2C4:
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 319u);
    set32(c.r[6], 0u + 127u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B2E8u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0013B2E8u) [[unlikely]] return; }
L_0013B2E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B38C; } }
L_0013B2F0:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u + 358u);
    set32(c.r[2], ld32((c.r[18].w[0] + 23004u)));
    set32(c.r[16], 0u + 328u);
    set32(c.r[4], 0u + 355u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FB30000u);
    c.r[1].d[0] = c.r[1].d[0] | 13107ull;
    c.f[20] = c.r[1].w[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[17], 0u + 325u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B324u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013B324u) [[unlikely]] return; }
L_0013B324:
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 61424ull;
    set32(c.r[7], 0u + 2u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    set32(c.r[4], 0u + 322u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B34Cu);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0013B34Cu) [[unlikely]] return; }
L_0013B34C:
    set32(c.r[2], ld32((c.r[18].w[0] + 23004u)));
    set32(c.r[3], 0u + 355u);
    set32(c.r[4], 0u + 355u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B368u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013B368u) [[unlikely]] return; }
L_0013B368:
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 319u);
    set32(c.r[6], 0u + 127u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B38Cu);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x0013B38Cu) [[unlikely]] return; }
L_0013B38C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013B3B0:
    if (::decomp::hook_0013B3B0.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_0013B3B0, depth)) return; }
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013B568; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 14528u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00138000u < 16384u) { entry = entries_000E[(t - 0x00138000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0013B3E0:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x34470000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 21170ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B50C; } }
L_0013B40C:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x56D30000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 63301ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B50C; } }
L_0013B438:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x4E720000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 12980ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B50C; } }
L_0013B464:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x26AB0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 24335ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B50C; } }
L_0013B490:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x99010000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 39783ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B50C; } }
L_0013B4BC:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xF3410000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 23723ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B50C; } }
L_0013B4E8:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBF4C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 22336ull;
    c.budget -= 9;
L_0013B50C:
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B524u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0013B524u) [[unlikely]] return; }
L_0013B524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B568; } }
L_0013B52C:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x5CDA0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 50231ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B568u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0013B568u) [[unlikely]] return; }
L_0013B568:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013B578:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] + 1952u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[16].w[0] + 76u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    set32(c.r[6], 0u + 96u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B5C0u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0013B5C0u) [[unlikely]] return; }
L_0013B5C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 14216u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B5D8u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0013B5D8u) [[unlikely]] return; }
L_0013B5D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 23944u);
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    st8((c.r[4].w[0] + 1944u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013B60C; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 124u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B6B0; } }
L_0013B60C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21176u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0013B650; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013B650; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013B650; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B658; } }
L_0013B650:
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 2;
L_0013B658:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0013B684; } }
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], 0u + 4u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B6B0; } }
L_0013B684:
    set32(c.r[7], 0u + 12u);
    set32(c.r[5], c.r[16].w[0] + 76u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.budget -= 11;
L_0013B6B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 76u);
    set32(c.r[2], c.r[2].w[0] + 1176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1952u);
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[30], c.r[5].w[0] - 32128u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[23], c.r[3].w[0] + 8u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], 0u + 1u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[22].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 20;
L_0013B700:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 23944u);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013B8B0; } }
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B8B0; } }
L_0013B730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B738u); set32(c.r[6], 0u + 52u);  if (depth < kMaxDepth) unit_000F(c, 69u, depth + 1u); else { c.pc = 0x0013D2ECu; return; } if (c.pc != 0x0013B738u) [[unlikely]] return; }
L_0013B738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B740u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_000F(c, 69u, depth + 1u); else { c.pc = 0x0013D2ECu; return; } if (c.pc != 0x0013B740u) [[unlikely]] return; }
L_0013B740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B748u); set32(c.r[6], 0u + 34u);  if (depth < kMaxDepth) unit_000F(c, 69u, depth + 1u); else { c.pc = 0x0013D2ECu; return; } if (c.pc != 0x0013B748u) [[unlikely]] return; }
L_0013B748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B750u); set32(c.r[6], 0u + 36u);  if (depth < kMaxDepth) unit_000F(c, 69u, depth + 1u); else { c.pc = 0x0013D2ECu; return; } if (c.pc != 0x0013B750u) [[unlikely]] return; }
L_0013B750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B758u); set32(c.r[6], 0u + 41u);  if (depth < kMaxDepth) unit_000F(c, 69u, depth + 1u); else { c.pc = 0x0013D2ECu; return; } if (c.pc != 0x0013B758u) [[unlikely]] return; }
L_0013B758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B760u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_000F(c, 69u, depth + 1u); else { c.pc = 0x0013D2ECu; return; } if (c.pc != 0x0013B760u) [[unlikely]] return; }
L_0013B760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B768u); set32(c.r[6], 0u + 37u);  if (depth < kMaxDepth) unit_000F(c, 67u, depth + 1u); else { c.pc = 0x0013D2D0u; return; } if (c.pc != 0x0013B768u) [[unlikely]] return; }
L_0013B768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B770u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 67u, depth + 1u); else { c.pc = 0x0013D2D0u; return; } if (c.pc != 0x0013B770u) [[unlikely]] return; }
L_0013B770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B778u); set32(c.r[6], 0u + 59u);  if (depth < kMaxDepth) unit_000F(c, 67u, depth + 1u); else { c.pc = 0x0013D2D0u; return; } if (c.pc != 0x0013B778u) [[unlikely]] return; }
L_0013B778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B780u); set32(c.r[6], 0u + 29u);  if (depth < kMaxDepth) unit_000F(c, 67u, depth + 1u); else { c.pc = 0x0013D2D0u; return; } if (c.pc != 0x0013B780u) [[unlikely]] return; }
L_0013B780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B788u); set32(c.r[6], 0u + 18u);  if (depth < kMaxDepth) unit_000F(c, 67u, depth + 1u); else { c.pc = 0x0013D2D0u; return; } if (c.pc != 0x0013B788u) [[unlikely]] return; }
L_0013B788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B790u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_000F(c, 67u, depth + 1u); else { c.pc = 0x0013D2D0u; return; } if (c.pc != 0x0013B790u) [[unlikely]] return; }
L_0013B790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B798u); set32(c.r[6], 0u + 65u);  if (depth < kMaxDepth) unit_000F(c, 67u, depth + 1u); else { c.pc = 0x0013D2D0u; return; } if (c.pc != 0x0013B798u) [[unlikely]] return; }
L_0013B798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B7A0u); set32(c.r[6], 0u + 61u);  if (depth < kMaxDepth) unit_000F(c, 67u, depth + 1u); else { c.pc = 0x0013D2D0u; return; } if (c.pc != 0x0013B7A0u) [[unlikely]] return; }
L_0013B7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B7A8u); set32(c.r[6], 0u + 65u);  if (depth < kMaxDepth) unit_000F(c, 69u, depth + 1u); else { c.pc = 0x0013D2ECu; return; } if (c.pc != 0x0013B7A8u) [[unlikely]] return; }
L_0013B7A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B7B0u); set32(c.r[6], 0u + 38u);  if (depth < kMaxDepth) unit_000F(c, 69u, depth + 1u); else { c.pc = 0x0013D2ECu; return; } if (c.pc != 0x0013B7B0u) [[unlikely]] return; }
L_0013B7B0:
    c.budget -= 52;
L_0013B880:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[11].w[0];  c.pc = t; if (t - 0x00138000u < 16384u) { entry = entries_000E[(t - 0x00138000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0013B8B0:
    set32(c.r[4], ld32((c.r[23].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[10], c.r[2].w[0] - 32128u);
    set32(c.r[8], 0u - 1u);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[4].w[0] + 31u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.r[4].d[0] = c.r[4].d[0] & 31ull;
    set32(c.r[9], c.r[5].w[0] - 26584u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 22;
    { const bool t = c.r[5].d[0] != c.r[18].d[0];  if (t) { goto L_0013B928; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1944u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1944u));
    set32(c.r[4], c.r[4].w[0] - 14216u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[19].w[0] + 1944u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_0013B928:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0013B940; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0013B95C; } }
L_0013B940:
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[5], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B954u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013B954u) [[unlikely]] return; }
L_0013B954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B9C0; } }
L_0013B95C:
    set32(c.r[4], ld32((c.r[23].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + 76u);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[4].w[0] + 31u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 31ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 18;
    { const bool t = c.r[6].d[0] != c.r[18].d[0];  if (t) { goto L_0013B9B0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] + c.r[21].w[0]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.budget -= 3;
L_0013B9B0:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[5], c.r[7].w[0] + c.r[21].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B9C0u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013B9C0u) [[unlikely]] return; }
L_0013B9C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[23], c.r[23].w[0] + 12u);
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 840u);
    set32(c.r[4], c.r[4].w[0] + 840u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 840u);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[21], c.r[21].w[0] + 12u);
    set32(c.r[22], c.r[22].w[0] + 12u);
    set32(c.r[20], c.r[20].w[0] + 12u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B700u | kUnwind; return; } goto L_0013B700; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] - 23944u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0013BA58; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1944u));
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 14336u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = c.r[29].d[0] | 8ull;
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BA50u);  if (depth < kMaxDepth) unit_009D(c, 186u, depth + 1u); else { c.pc = 0x00376DF0u; return; } if (c.pc != 0x0013BA50u) [[unlikely]] return; }
L_0013BA50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013BAFC; } }
L_0013BA58:
    c.r[3].d[0] = c.r[4].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0013BA80; } }
    c.r[3].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0013BA8C; } }
L_0013BA80:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013BA90; } }
L_0013BA8C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013BA90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BAFC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1944u));
    set32(c.r[16], c.r[16].w[0] - 14304u);
    set32(c.r[17], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] | 12ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 16u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BAD0u);  if (depth < kMaxDepth) unit_009D(c, 186u, depth + 1u); else { c.pc = 0x00376DF0u; return; } if (c.pc != 0x0013BAD0u) [[unlikely]] return; }
L_0013BAD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1944u));
    set32(c.r[5], c.r[29].w[0] + 20u);
    st32((c.r[29].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[6], c.r[29].w[0] + 24u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BAFCu);  if (depth < kMaxDepth) unit_009D(c, 186u, depth + 1u); else { c.pc = 0x00376DF0u; return; } if (c.pc != 0x0013BAFCu) [[unlikely]] return; }
L_0013BAFC:
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
L_0013BB30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 28u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[17].w[0] + 76u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 12u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[18], c.r[2].w[0] - 23944u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 60u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[19].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[7].w[0], c.r[19].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[4], 0u + 48u);
    st32((c.r[17].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 68u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[5], c.r[5].w[0] + 160u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BBA8u);  if (depth < kMaxDepth) unit_000A(c, 355u, depth + 1u); else { c.pc = 0x0012AA20u; return; } if (c.pc != 0x0013BBA8u) [[unlikely]] return; }
L_0013BBA8:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BBB4u);  if (depth < kMaxDepth) unit_009E(c, 33u, depth + 1u); else { c.pc = 0x00378418u; return; } if (c.pc != 0x0013BBB4u) [[unlikely]] return; }
L_0013BBB4:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BBC0u);  if (depth < kMaxDepth) unit_009E(c, 33u, depth + 1u); else { c.pc = 0x00378418u; return; } if (c.pc != 0x0013BBC0u) [[unlikely]] return; }
L_0013BBC0:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0013BC04; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 3u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BBE4u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013BBE4u) [[unlikely]] return; }
L_0013BBE4:
    set32(c.r[2], 0u + 10u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BBFCu);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00377CA8u; return; } if (c.pc != 0x0013BBFCu) [[unlikely]] return; }
L_0013BBFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013BC78; } }
L_0013BC04:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0013BC44; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 3u);
    c.r[5].d[0] = c.r[29].d[0] | 8ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BC28u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013BC28u) [[unlikely]] return; }
L_0013BC28:
    st32((c.r[29].w[0] + 12u), c.r[19].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] | 12ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BC3Cu);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00377CA8u; return; } if (c.pc != 0x0013BC3Cu) [[unlikely]] return; }
L_0013BC3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013BC78; } }
L_0013BC44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013BC78; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BC60u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013BC60u) [[unlikely]] return; }
L_0013BC60:
    set32(c.r[2], 0u + 8u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BC78u);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00377CA8u; return; } if (c.pc != 0x0013BC78u) [[unlikely]] return; }
L_0013BC78:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] - 23944u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BC8Cu);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x0013BC8Cu) [[unlikely]] return; }
L_0013BC8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BC94u);  if (depth < kMaxDepth) unit_000A(c, 372u, depth + 1u); else { c.pc = 0x0012AD00u; return; } if (c.pc != 0x0013BC94u) [[unlikely]] return; }
L_0013BC94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BC9Cu);  if (depth < kMaxDepth) unit_000B(c, 202u, depth + 1u); else { c.pc = 0x0012E3D0u; return; } if (c.pc != 0x0013BC9Cu) [[unlikely]] return; }
L_0013BC9C:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013BCC0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 216u), c.f[21]);
    st32((c.r[29].w[0] + 208u), c.f[20]);
    st32((c.r[29].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 172u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BD24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BD10u);  if (depth < kMaxDepth) unit_000E(c, 448u, depth + 1u); else { c.pc = 0x0013BB30u; return; } if (c.pc != 0x0013BD10u) [[unlikely]] return; }
L_0013BD10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BD18u);  if (depth < kMaxDepth) unit_000A(c, 366u, depth + 1u); else { c.pc = 0x0012ABF8u; return; } if (c.pc != 0x0013BD18u) [[unlikely]] return; }
L_0013BD18:
    st32((c.r[20].w[0] + 172u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013BE50; } }
L_0013BD24:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 672u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BD74; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 7224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BD4Cu);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0013BD4Cu) [[unlikely]] return; }
L_0013BD4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 3024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BD5Cu);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0013BD5Cu) [[unlikely]] return; }
L_0013BD5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 6384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BD6Cu);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0013BD6Cu) [[unlikely]] return; }
L_0013BD6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013BE50; } }
L_0013BD74:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013BDE4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 828u)));
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013BDAC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 53ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BDAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BDA4u);  if (depth < kMaxDepth) unit_000B(c, 198u, depth + 1u); else { c.pc = 0x0012E388u; return; } if (c.pc != 0x0013BDA4u) [[unlikely]] return; }
L_0013BDA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013BE50; } }
L_0013BDAC:
    set32(c.r[2], ld32((c.r[5].w[0] + 828u)));
    c.r[2].d[0] = c.r[2].sd[0] < 53ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013BE50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 1344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BDCCu);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0013BDCCu) [[unlikely]] return; }
L_0013BDCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 2184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BDDCu);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x0013BDDCu) [[unlikely]] return; }
L_0013BDDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013BE50; } }
L_0013BDE4:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013BE50; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 828u)));
    c.r[2].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BE18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BE08u);  if (depth < kMaxDepth) unit_000B(c, 191u, depth + 1u); else { c.pc = 0x0012E2E8u; return; } if (c.pc != 0x0013BE08u) [[unlikely]] return; }
L_0013BE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BE10u);  if (depth < kMaxDepth) unit_000B(c, 194u, depth + 1u); else { c.pc = 0x0012E340u; return; } if (c.pc != 0x0013BE10u) [[unlikely]] return; }
L_0013BE10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013BE50; } }
L_0013BE18:
    c.r[2].d[0] = c.r[3].sd[0] < 54ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BE50; } }
    c.r[2].d[0] = c.r[3].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013BE50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 1344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BE40u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0013BE40u) [[unlikely]] return; }
L_0013BE40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 2184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BE50u);  if (depth < kMaxDepth) unit_009D(c, 55u, depth + 1u); else { c.pc = 0x00374A68u; return; } if (c.pc != 0x0013BE50u) [[unlikely]] return; }
L_0013BE50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 23944u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_000F(c, 7u, depth); } }
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[18], 0u + 12u);
    set32(c.r[17], c.r[20].w[0] + 76u);
    set32(c.r[21], 0u + 5u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[18].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[17].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_0013BF5C; } }
    set32(c.r[3], 0u + 840u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1176u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 832u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[16].d[0];  if (t) { goto L_0013BEF0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[16], c.r[16].w[0] - 24376u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BEC8u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x0013BEC8u) [[unlikely]] return; }
L_0013BEC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BED4u);  if (depth < kMaxDepth) unit_000C(c, 151u, depth + 1u); else { c.pc = 0x00131240u; return; } if (c.pc != 0x0013BED4u) [[unlikely]] return; }
L_0013BED4:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[20].w[0] + 32u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BEE8u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0013BEE8u) [[unlikely]] return; }
L_0013BEE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_000F(c, 4u, depth); } }
L_0013BEF0:
    set32(c.r[2], c.r[20].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BF00u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013BF00u) [[unlikely]] return; }
L_0013BF00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[3], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[14] = c.r[1].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[5], 0u + 320u);
    st32((c.r[29].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[6], 0u + 348u);
    set32(c.r[7], 0u + 72u);
    set32(c.r[8], 0u + 2u);
    c.f[13] = c.f[12];
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u + 127u);
    c.f[15] = c.f[14];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BF54u);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012D248u; return; } if (c.pc != 0x0013BF54u) [[unlikely]] return; }
L_0013BF54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_000F(c, 4u, depth); } }
L_0013BF5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 14336u)));
    set32(c.r[4], c.r[3].w[0] - 14336u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { [[clang::musttail]] return unit_000F(c, 4u, depth); } }
    st32((c.r[5].w[0]), c.r[16].w[0]);
    set32(c.r[19], 0u + 2u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BF84u);  if (depth < kMaxDepth) unit_009D(c, 187u, depth + 1u); else { c.pc = 0x00376E18u; return; } if (c.pc != 0x0013BF84u) [[unlikely]] return; }
L_0013BF84:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[19].d[0];  if (t) { [[clang::musttail]] return unit_000F(c, 2u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21976u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BFA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013BFA0u) [[unlikely]] return; }
L_0013BFA0:
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 14216u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[20].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), c.r[21].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BFD0u);  if (depth < kMaxDepth) unit_000F(c, 223u, depth + 1u); else { c.pc = 0x0013EF48u; return; } if (c.pc != 0x0013BFD0u) [[unlikely]] return; }
L_0013BFD0:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BFE8u);  if (depth < kMaxDepth) unit_009D(c, 45u, depth + 1u); else { c.pc = 0x00374850u; return; } if (c.pc != 0x0013BFE8u) [[unlikely]] return; }
L_0013BFE8:
    st32((c.r[20].w[0] + 68u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BFF8u);  if (depth < kMaxDepth) unit_000E(c, 410u, depth + 1u); else { c.pc = 0x0013B3B0u; return; } if (c.pc != 0x0013BFF8u) [[unlikely]] return; }
L_0013BFF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] - 4976u), 0u);
    c.budget -= 2;
    [[clang::musttail]] return unit_000F(c, 1u, depth);
}

}
