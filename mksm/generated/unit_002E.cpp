#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_001B90B8;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_002E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77,
    0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0,
    0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0,
    0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108,
    0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123,
    0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0,
    0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0,
    0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0,
    0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0,
    0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0,
    0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291,
    0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0,
    0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0,
    0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0,
    0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322,
    0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0,
    0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0,
    0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337,
    0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0,
    0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0,
    0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353,
    0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0,
    0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368,
    0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0,
    0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0,
    0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384,
    0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0,
    0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0,
    0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399,
    0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0,
    0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0,
    0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415,
    0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420,
    0, 0, 421, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 428,
    0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 0,
    0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0,
    447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 452,
    0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0,
    0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0,
    0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0,
    0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0,
    0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0,
    0, 490, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 0, 496, 0,
    0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 504,
    0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0,
    0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0,
    0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 0,
    522, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 531,
    0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0,
    0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0,
    0, 543, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 549, 0,
    0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0,
    554, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0,
    0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0,
    0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0,
};

void unit_002E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001B8000;
    case 2u: goto L_001B8020;
    case 3u: goto L_001B8060;
    case 4u: goto L_001B8070;
    case 5u: goto L_001B8088;
    case 6u: goto L_001B80A0;
    case 7u: goto L_001B80B0;
    case 8u: goto L_001B80F8;
    case 9u: goto L_001B8108;
    case 10u: goto L_001B813C;
    case 11u: goto L_001B8160;
    case 12u: goto L_001B818C;
    case 13u: goto L_001B81C8;
    case 14u: goto L_001B8208;
    case 15u: goto L_001B8218;
    case 16u: goto L_001B8230;
    case 17u: goto L_001B8248;
    case 18u: goto L_001B8258;
    case 19u: goto L_001B82A0;
    case 20u: goto L_001B82B0;
    case 21u: goto L_001B82E4;
    case 22u: goto L_001B8308;
    case 23u: goto L_001B8334;
    case 24u: goto L_001B8370;
    case 25u: goto L_001B83B0;
    case 26u: goto L_001B83C0;
    case 27u: goto L_001B83D8;
    case 28u: goto L_001B83F0;
    case 29u: goto L_001B8400;
    case 30u: goto L_001B8448;
    case 31u: goto L_001B8458;
    case 32u: goto L_001B848C;
    case 33u: goto L_001B84B0;
    case 34u: goto L_001B84DC;
    case 35u: goto L_001B8518;
    case 36u: goto L_001B8558;
    case 37u: goto L_001B8568;
    case 38u: goto L_001B8580;
    case 39u: goto L_001B8598;
    case 40u: goto L_001B85A8;
    case 41u: goto L_001B85E8;
    case 42u: goto L_001B8604;
    case 43u: goto L_001B863C;
    case 44u: goto L_001B86A4;
    case 45u: goto L_001B8718;
    case 46u: goto L_001B8740;
    case 47u: goto L_001B8770;
    case 48u: goto L_001B8790;
    case 49u: goto L_001B87BC;
    case 50u: goto L_001B87E8;
    case 51u: goto L_001B8838;
    case 52u: goto L_001B8844;
    case 53u: goto L_001B8898;
    case 54u: goto L_001B8908;
    case 55u: goto L_001B8910;
    case 56u: goto L_001B8930;
    case 57u: goto L_001B8968;
    case 58u: goto L_001B8974;
    case 59u: goto L_001B89E0;
    case 60u: goto L_001B8A1C;
    case 61u: goto L_001B8A58;
    case 62u: goto L_001B8A98;
    case 63u: goto L_001B8AE4;
    case 64u: goto L_001B8B28;
    case 65u: goto L_001B8B60;
    case 66u: goto L_001B8B78;
    case 67u: goto L_001B8B90;
    case 68u: goto L_001B8BA8;
    case 69u: goto L_001B8BC0;
    case 70u: goto L_001B8BD8;
    case 71u: goto L_001B8BF0;
    case 72u: goto L_001B8C08;
    case 73u: goto L_001B8C20;
    case 74u: goto L_001B8C38;
    case 75u: goto L_001B8C50;
    case 76u: goto L_001B8C58;
    case 77u: goto L_001B8C7C;
    case 78u: goto L_001B8C94;
    case 79u: goto L_001B8CAC;
    case 80u: goto L_001B8CC4;
    case 81u: goto L_001B8CDC;
    case 82u: goto L_001B8CF4;
    case 83u: goto L_001B8D0C;
    case 84u: goto L_001B8D24;
    case 85u: goto L_001B8D3C;
    case 86u: goto L_001B8D54;
    case 87u: goto L_001B8D6C;
    case 88u: goto L_001B8D84;
    case 89u: goto L_001B8D9C;
    case 90u: goto L_001B8DB4;
    case 91u: goto L_001B8DCC;
    case 92u: goto L_001B8DE4;
    case 93u: goto L_001B8E00;
    case 94u: goto L_001B8E2C;
    case 95u: goto L_001B8E44;
    case 96u: goto L_001B8E5C;
    case 97u: goto L_001B8E74;
    case 98u: goto L_001B8E8C;
    case 99u: goto L_001B8EA4;
    case 100u: goto L_001B8EBC;
    case 101u: goto L_001B8ED4;
    case 102u: goto L_001B8EEC;
    case 103u: goto L_001B8F04;
    case 104u: goto L_001B8F1C;
    case 105u: goto L_001B8F34;
    case 106u: goto L_001B8F4C;
    case 107u: goto L_001B8F64;
    case 108u: goto L_001B8F7C;
    case 109u: goto L_001B8F94;
    case 110u: goto L_001B8FAC;
    case 111u: goto L_001B8FC4;
    case 112u: goto L_001B8FDC;
    case 113u: goto L_001B8FF4;
    case 114u: goto L_001B900C;
    case 115u: goto L_001B9024;
    case 116u: goto L_001B903C;
    case 117u: goto L_001B9054;
    case 118u: goto L_001B906C;
    case 119u: goto L_001B9084;
    case 120u: goto L_001B909C;
    case 121u: goto L_001B90B8;
    case 122u: goto L_001B90D8;
    case 123u: goto L_001B90FC;
    case 124u: goto L_001B9114;
    case 125u: goto L_001B912C;
    case 126u: goto L_001B9144;
    case 127u: goto L_001B915C;
    case 128u: goto L_001B9174;
    case 129u: goto L_001B918C;
    case 130u: goto L_001B91A4;
    case 131u: goto L_001B91BC;
    case 132u: goto L_001B91D4;
    case 133u: goto L_001B91EC;
    case 134u: goto L_001B9204;
    case 135u: goto L_001B921C;
    case 136u: goto L_001B9234;
    case 137u: goto L_001B9250;
    case 138u: goto L_001B929C;
    case 139u: goto L_001B92C0;
    case 140u: goto L_001B92CC;
    case 141u: goto L_001B92F4;
    case 142u: goto L_001B932C;
    case 143u: goto L_001B9344;
    case 144u: goto L_001B935C;
    case 145u: goto L_001B9374;
    case 146u: goto L_001B938C;
    case 147u: goto L_001B93A4;
    case 148u: goto L_001B93BC;
    case 149u: goto L_001B93D4;
    case 150u: goto L_001B93EC;
    case 151u: goto L_001B9404;
    case 152u: goto L_001B941C;
    case 153u: goto L_001B9434;
    case 154u: goto L_001B944C;
    case 155u: goto L_001B9464;
    case 156u: goto L_001B947C;
    case 157u: goto L_001B9494;
    case 158u: goto L_001B94AC;
    case 159u: goto L_001B94C4;
    case 160u: goto L_001B94DC;
    case 161u: goto L_001B94F4;
    case 162u: goto L_001B950C;
    case 163u: goto L_001B9524;
    case 164u: goto L_001B953C;
    case 165u: goto L_001B9554;
    case 166u: goto L_001B956C;
    case 167u: goto L_001B9590;
    case 168u: goto L_001B95C8;
    case 169u: goto L_001B95E0;
    case 170u: goto L_001B95F8;
    case 171u: goto L_001B9610;
    case 172u: goto L_001B9628;
    case 173u: goto L_001B9640;
    case 174u: goto L_001B9658;
    case 175u: goto L_001B9670;
    case 176u: goto L_001B9688;
    case 177u: goto L_001B96A0;
    case 178u: goto L_001B96B8;
    case 179u: goto L_001B96D0;
    case 180u: goto L_001B96E8;
    case 181u: goto L_001B9700;
    case 182u: goto L_001B9718;
    case 183u: goto L_001B9730;
    case 184u: goto L_001B9748;
    case 185u: goto L_001B9760;
    case 186u: goto L_001B9778;
    case 187u: goto L_001B9790;
    case 188u: goto L_001B97A8;
    case 189u: goto L_001B97C0;
    case 190u: goto L_001B97D8;
    case 191u: goto L_001B97F0;
    case 192u: goto L_001B9808;
    case 193u: goto L_001B9820;
    case 194u: goto L_001B9838;
    case 195u: goto L_001B9860;
    case 196u: goto L_001B9898;
    case 197u: goto L_001B98B0;
    case 198u: goto L_001B98C8;
    case 199u: goto L_001B98E0;
    case 200u: goto L_001B98F8;
    case 201u: goto L_001B9910;
    case 202u: goto L_001B9928;
    case 203u: goto L_001B9940;
    case 204u: goto L_001B9958;
    case 205u: goto L_001B9970;
    case 206u: goto L_001B9988;
    case 207u: goto L_001B99A0;
    case 208u: goto L_001B99B8;
    case 209u: goto L_001B99D0;
    case 210u: goto L_001B99E8;
    case 211u: goto L_001B9A00;
    case 212u: goto L_001B9A18;
    case 213u: goto L_001B9A30;
    case 214u: goto L_001B9A48;
    case 215u: goto L_001B9A60;
    case 216u: goto L_001B9A78;
    case 217u: goto L_001B9A90;
    case 218u: goto L_001B9AA8;
    case 219u: goto L_001B9AC0;
    case 220u: goto L_001B9AD8;
    case 221u: goto L_001B9AF0;
    case 222u: goto L_001B9B08;
    case 223u: goto L_001B9B30;
    case 224u: goto L_001B9B68;
    case 225u: goto L_001B9B80;
    case 226u: goto L_001B9B98;
    case 227u: goto L_001B9BB0;
    case 228u: goto L_001B9BC8;
    case 229u: goto L_001B9BE0;
    case 230u: goto L_001B9BF8;
    case 231u: goto L_001B9C10;
    case 232u: goto L_001B9C28;
    case 233u: goto L_001B9C40;
    case 234u: goto L_001B9C58;
    case 235u: goto L_001B9C70;
    case 236u: goto L_001B9C88;
    case 237u: goto L_001B9CA0;
    case 238u: goto L_001B9CB8;
    case 239u: goto L_001B9CD0;
    case 240u: goto L_001B9CE8;
    case 241u: goto L_001B9D00;
    case 242u: goto L_001B9D18;
    case 243u: goto L_001B9D30;
    case 244u: goto L_001B9D48;
    case 245u: goto L_001B9D60;
    case 246u: goto L_001B9D78;
    case 247u: goto L_001B9D90;
    case 248u: goto L_001B9DA8;
    case 249u: goto L_001B9DC0;
    case 250u: goto L_001B9DD8;
    case 251u: goto L_001B9E00;
    case 252u: goto L_001B9E38;
    case 253u: goto L_001B9E50;
    case 254u: goto L_001B9E68;
    case 255u: goto L_001B9E80;
    case 256u: goto L_001B9E98;
    case 257u: goto L_001B9EB0;
    case 258u: goto L_001B9EC8;
    case 259u: goto L_001B9EE0;
    case 260u: goto L_001B9EF8;
    case 261u: goto L_001B9F10;
    case 262u: goto L_001B9F28;
    case 263u: goto L_001B9F40;
    case 264u: goto L_001B9F58;
    case 265u: goto L_001B9F70;
    case 266u: goto L_001B9F88;
    case 267u: goto L_001B9FA0;
    case 268u: goto L_001B9FB8;
    case 269u: goto L_001B9FD0;
    case 270u: goto L_001B9FE8;
    case 271u: goto L_001BA000;
    case 272u: goto L_001BA018;
    case 273u: goto L_001BA030;
    case 274u: goto L_001BA048;
    case 275u: goto L_001BA060;
    case 276u: goto L_001BA078;
    case 277u: goto L_001BA090;
    case 278u: goto L_001BA0A8;
    case 279u: goto L_001BA0C8;
    case 280u: goto L_001BA0F4;
    case 281u: goto L_001BA10C;
    case 282u: goto L_001BA124;
    case 283u: goto L_001BA13C;
    case 284u: goto L_001BA154;
    case 285u: goto L_001BA16C;
    case 286u: goto L_001BA184;
    case 287u: goto L_001BA19C;
    case 288u: goto L_001BA1B4;
    case 289u: goto L_001BA1CC;
    case 290u: goto L_001BA1E4;
    case 291u: goto L_001BA1FC;
    case 292u: goto L_001BA214;
    case 293u: goto L_001BA22C;
    case 294u: goto L_001BA244;
    case 295u: goto L_001BA25C;
    case 296u: goto L_001BA274;
    case 297u: goto L_001BA28C;
    case 298u: goto L_001BA2A4;
    case 299u: goto L_001BA2BC;
    case 300u: goto L_001BA2D4;
    case 301u: goto L_001BA2EC;
    case 302u: goto L_001BA304;
    case 303u: goto L_001BA31C;
    case 304u: goto L_001BA334;
    case 305u: goto L_001BA34C;
    case 306u: goto L_001BA364;
    case 307u: goto L_001BA380;
    case 308u: goto L_001BA3AC;
    case 309u: goto L_001BA3C4;
    case 310u: goto L_001BA3DC;
    case 311u: goto L_001BA3F4;
    case 312u: goto L_001BA40C;
    case 313u: goto L_001BA424;
    case 314u: goto L_001BA43C;
    case 315u: goto L_001BA454;
    case 316u: goto L_001BA46C;
    case 317u: goto L_001BA484;
    case 318u: goto L_001BA49C;
    case 319u: goto L_001BA4B4;
    case 320u: goto L_001BA4CC;
    case 321u: goto L_001BA4E4;
    case 322u: goto L_001BA4FC;
    case 323u: goto L_001BA514;
    case 324u: goto L_001BA52C;
    case 325u: goto L_001BA544;
    case 326u: goto L_001BA55C;
    case 327u: goto L_001BA574;
    case 328u: goto L_001BA58C;
    case 329u: goto L_001BA5A4;
    case 330u: goto L_001BA5BC;
    case 331u: goto L_001BA5D4;
    case 332u: goto L_001BA5EC;
    case 333u: goto L_001BA604;
    case 334u: goto L_001BA61C;
    case 335u: goto L_001BA638;
    case 336u: goto L_001BA664;
    case 337u: goto L_001BA67C;
    case 338u: goto L_001BA694;
    case 339u: goto L_001BA6AC;
    case 340u: goto L_001BA6C4;
    case 341u: goto L_001BA6DC;
    case 342u: goto L_001BA6F4;
    case 343u: goto L_001BA70C;
    case 344u: goto L_001BA724;
    case 345u: goto L_001BA73C;
    case 346u: goto L_001BA754;
    case 347u: goto L_001BA76C;
    case 348u: goto L_001BA784;
    case 349u: goto L_001BA79C;
    case 350u: goto L_001BA7B4;
    case 351u: goto L_001BA7CC;
    case 352u: goto L_001BA7E4;
    case 353u: goto L_001BA7FC;
    case 354u: goto L_001BA814;
    case 355u: goto L_001BA82C;
    case 356u: goto L_001BA844;
    case 357u: goto L_001BA85C;
    case 358u: goto L_001BA874;
    case 359u: goto L_001BA88C;
    case 360u: goto L_001BA8A4;
    case 361u: goto L_001BA8BC;
    case 362u: goto L_001BA8D4;
    case 363u: goto L_001BA8F0;
    case 364u: goto L_001BA91C;
    case 365u: goto L_001BA934;
    case 366u: goto L_001BA94C;
    case 367u: goto L_001BA964;
    case 368u: goto L_001BA97C;
    case 369u: goto L_001BA994;
    case 370u: goto L_001BA9AC;
    case 371u: goto L_001BA9C4;
    case 372u: goto L_001BA9DC;
    case 373u: goto L_001BA9F4;
    case 374u: goto L_001BAA0C;
    case 375u: goto L_001BAA24;
    case 376u: goto L_001BAA3C;
    case 377u: goto L_001BAA54;
    case 378u: goto L_001BAA6C;
    case 379u: goto L_001BAA84;
    case 380u: goto L_001BAA9C;
    case 381u: goto L_001BAAB4;
    case 382u: goto L_001BAACC;
    case 383u: goto L_001BAAE4;
    case 384u: goto L_001BAAFC;
    case 385u: goto L_001BAB14;
    case 386u: goto L_001BAB2C;
    case 387u: goto L_001BAB44;
    case 388u: goto L_001BAB5C;
    case 389u: goto L_001BAB74;
    case 390u: goto L_001BAB8C;
    case 391u: goto L_001BABA8;
    case 392u: goto L_001BABD4;
    case 393u: goto L_001BABEC;
    case 394u: goto L_001BAC04;
    case 395u: goto L_001BAC1C;
    case 396u: goto L_001BAC34;
    case 397u: goto L_001BAC4C;
    case 398u: goto L_001BAC64;
    case 399u: goto L_001BAC7C;
    case 400u: goto L_001BAC94;
    case 401u: goto L_001BACAC;
    case 402u: goto L_001BACC4;
    case 403u: goto L_001BACDC;
    case 404u: goto L_001BACF4;
    case 405u: goto L_001BAD0C;
    case 406u: goto L_001BAD24;
    case 407u: goto L_001BAD3C;
    case 408u: goto L_001BAD54;
    case 409u: goto L_001BAD6C;
    case 410u: goto L_001BAD84;
    case 411u: goto L_001BAD9C;
    case 412u: goto L_001BADB4;
    case 413u: goto L_001BADCC;
    case 414u: goto L_001BADE4;
    case 415u: goto L_001BADFC;
    case 416u: goto L_001BAE14;
    case 417u: goto L_001BAE2C;
    case 418u: goto L_001BAE44;
    case 419u: goto L_001BAE60;
    case 420u: goto L_001BAE7C;
    case 421u: goto L_001BAE88;
    case 422u: goto L_001BAE90;
    case 423u: goto L_001BAEA4;
    case 424u: goto L_001BAEB4;
    case 425u: goto L_001BAEC4;
    case 426u: goto L_001BAEDC;
    case 427u: goto L_001BAEF0;
    case 428u: goto L_001BAEFC;
    case 429u: goto L_001BAF0C;
    case 430u: goto L_001BAF18;
    case 431u: goto L_001BAF28;
    case 432u: goto L_001BAF38;
    case 433u: goto L_001BAF4C;
    case 434u: goto L_001BAF58;
    case 435u: goto L_001BAF68;
    case 436u: goto L_001BAF74;
    case 437u: goto L_001BAF84;
    case 438u: goto L_001BAFA0;
    case 439u: goto L_001BAFE0;
    case 440u: goto L_001BB0B0;
    case 441u: goto L_001BB130;
    case 442u: goto L_001BB140;
    case 443u: goto L_001BB150;
    case 444u: goto L_001BB1BC;
    case 445u: goto L_001BB1D4;
    case 446u: goto L_001BB1E8;
    case 447u: goto L_001BB200;
    case 448u: goto L_001BB218;
    case 449u: goto L_001BB248;
    case 450u: goto L_001BB258;
    case 451u: goto L_001BB26C;
    case 452u: goto L_001BB27C;
    case 453u: goto L_001BB2A0;
    case 454u: goto L_001BB2C4;
    case 455u: goto L_001BB2CC;
    case 456u: goto L_001BB328;
    case 457u: goto L_001BB354;
    case 458u: goto L_001BB388;
    case 459u: goto L_001BB3AC;
    case 460u: goto L_001BB3D0;
    case 461u: goto L_001BB3E8;
    case 462u: goto L_001BB3F8;
    case 463u: goto L_001BB42C;
    case 464u: goto L_001BB468;
    case 465u: goto L_001BB488;
    case 466u: goto L_001BB4D8;
    case 467u: goto L_001BB4F0;
    case 468u: goto L_001BB504;
    case 469u: goto L_001BB51C;
    case 470u: goto L_001BB534;
    case 471u: goto L_001BB548;
    case 472u: goto L_001BB554;
    case 473u: goto L_001BB570;
    case 474u: goto L_001BB5AC;
    case 475u: goto L_001BB5C8;
    case 476u: goto L_001BB5D8;
    case 477u: goto L_001BB5F0;
    case 478u: goto L_001BB610;
    case 479u: goto L_001BB640;
    case 480u: goto L_001BB658;
    case 481u: goto L_001BB678;
    case 482u: goto L_001BB6B0;
    case 483u: goto L_001BB6C8;
    case 484u: goto L_001BB6E0;
    case 485u: goto L_001BB6F8;
    case 486u: goto L_001BB718;
    case 487u: goto L_001BB744;
    case 488u: goto L_001BB764;
    case 489u: goto L_001BB774;
    case 490u: goto L_001BB784;
    case 491u: goto L_001BB790;
    case 492u: goto L_001BB7A8;
    case 493u: goto L_001BB7C8;
    case 494u: goto L_001BB7D8;
    case 495u: goto L_001BB7E0;
    case 496u: goto L_001BB7F8;
    case 497u: goto L_001BB80C;
    case 498u: goto L_001BB81C;
    case 499u: goto L_001BB82C;
    case 500u: goto L_001BB838;
    case 501u: goto L_001BB848;
    case 502u: goto L_001BB85C;
    case 503u: goto L_001BB86C;
    case 504u: goto L_001BB87C;
    case 505u: goto L_001BB888;
    case 506u: goto L_001BB8A8;
    case 507u: goto L_001BB8C0;
    case 508u: goto L_001BB8CC;
    case 509u: goto L_001BB8E4;
    case 510u: goto L_001BB8F4;
    case 511u: goto L_001BB904;
    case 512u: goto L_001BB914;
    case 513u: goto L_001BB928;
    case 514u: goto L_001BB938;
    case 515u: goto L_001BB940;
    case 516u: goto L_001BB948;
    case 517u: goto L_001BB970;
    case 518u: goto L_001BB98C;
    case 519u: goto L_001BB9B4;
    case 520u: goto L_001BB9D8;
    case 521u: goto L_001BB9E0;
    case 522u: goto L_001BBA00;
    case 523u: goto L_001BBA24;
    case 524u: goto L_001BBA38;
    case 525u: goto L_001BBA40;
    case 526u: goto L_001BBA54;
    case 527u: goto L_001BBA70;
    case 528u: goto L_001BBAA4;
    case 529u: goto L_001BBAC8;
    case 530u: goto L_001BBAD8;
    case 531u: goto L_001BBAFC;
    case 532u: goto L_001BBB18;
    case 533u: goto L_001BBB3C;
    case 534u: goto L_001BBB44;
    case 535u: goto L_001BBB98;
    case 536u: goto L_001BBBC0;
    case 537u: goto L_001BBBF0;
    case 538u: goto L_001BBC08;
    case 539u: goto L_001BBC18;
    case 540u: goto L_001BBC28;
    case 541u: goto L_001BBC38;
    case 542u: goto L_001BBC60;
    case 543u: goto L_001BBC84;
    case 544u: goto L_001BBC98;
    case 545u: goto L_001BBCF0;
    case 546u: goto L_001BBD18;
    case 547u: goto L_001BBD48;
    case 548u: goto L_001BBD68;
    case 549u: goto L_001BBD78;
    case 550u: goto L_001BBD98;
    case 551u: goto L_001BBDC0;
    case 552u: goto L_001BBDE4;
    case 553u: goto L_001BBDF8;
    case 554u: goto L_001BBE00;
    case 555u: goto L_001BBE24;
    case 556u: goto L_001BBE38;
    case 557u: goto L_001BBE68;
    case 558u: goto L_001BBE78;
    case 559u: goto L_001BBE9C;
    case 560u: goto L_001BBEB0;
    case 561u: goto L_001BBF08;
    case 562u: goto L_001BBF34;
    case 563u: goto L_001BBF64;
    case 564u: goto L_001BBF84;
    case 565u: goto L_001BBFB4;
    case 566u: goto L_001BBFCC;
    case 567u: goto L_001BBFE4;
    default: bad_entry(c, 0x001B8000u); return;
    }
L_001B8000:
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    st32((c.r[5].w[0] - 16056u), c.r[4].w[0]);
    set32(c.r[29], c.r[29].w[0] + 336u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B8020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 28136u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 332u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[4].w[0] - 16056u), 0u);
    set32(c.r[2], c.r[2].w[0] - 28208u);
    set32(c.r[4], c.r[16].w[0] + 288u);
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8060u);  if (depth < kMaxDepth) unit_002C(c, 525u, depth + 1u); else { c.pc = 0x001B3BB0u; return; } if (c.pc != 0x001B8060u) [[unlikely]] return; }
L_001B8060:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8070u);  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B4CA0u; return; } if (c.pc != 0x001B8070u) [[unlikely]] return; }
L_001B8070:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B8088:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B80A0u);  if (depth < kMaxDepth) unit_002D(c, 430u, depth + 1u); else { c.pc = 0x001B7F08u; return; } if (c.pc != 0x001B80A0u) [[unlikely]] return; }
L_001B80A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B80B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B80F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B80F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 27976u);
    set32(c.r[4], c.r[3].w[0] + 29872u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001B80F0; } }
    st8((c.r[3].w[0] + 29872u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B80F8; } }
L_001B80F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B80F8u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B80F8u) [[unlikely]] return; }
L_001B80F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B8108:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 1627u);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B813Cu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001B813Cu) [[unlikely]] return; }
L_001B813C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B8150; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8160; } }
L_001B8150:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8160u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B8160u) [[unlikely]] return; }
L_001B8160:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[1].w[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 29872u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B818Cu);  if (depth < kMaxDepth) unit_002D(c, 414u, depth + 1u); else { c.pc = 0x001B7D28u; return; } if (c.pc != 0x001B818Cu) [[unlikely]] return; }
L_001B818C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 28048u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[16].w[0] + 332u), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    st32((c.r[5].w[0] - 15864u), c.r[4].w[0]);
    set32(c.r[29], c.r[29].w[0] + 336u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B81C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 28048u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 332u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[4].w[0] - 15864u), 0u);
    set32(c.r[2], c.r[2].w[0] - 28208u);
    set32(c.r[4], c.r[16].w[0] + 288u);
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8208u);  if (depth < kMaxDepth) unit_002C(c, 525u, depth + 1u); else { c.pc = 0x001B3BB0u; return; } if (c.pc != 0x001B8208u) [[unlikely]] return; }
L_001B8208:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8218u);  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B4CA0u; return; } if (c.pc != 0x001B8218u) [[unlikely]] return; }
L_001B8218:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B8230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8248u);  if (depth < kMaxDepth) unit_002E(c, 7u, depth + 1u); else { c.pc = 0x001B80B0u; return; } if (c.pc != 0x001B8248u) [[unlikely]] return; }
L_001B8248:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B8258:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B82A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B82A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 27896u);
    set32(c.r[4], c.r[3].w[0] + 30128u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001B8298; } }
    st8((c.r[3].w[0] + 30128u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B82A0; } }
L_001B8298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B82A0u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B82A0u) [[unlikely]] return; }
L_001B82A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B82B0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 1628u);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B82E4u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001B82E4u) [[unlikely]] return; }
L_001B82E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B82F8; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8308; } }
L_001B82F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8308u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B8308u) [[unlikely]] return; }
L_001B8308:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[1].w[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 30128u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8334u);  if (depth < kMaxDepth) unit_002D(c, 414u, depth + 1u); else { c.pc = 0x001B7D28u; return; } if (c.pc != 0x001B8334u) [[unlikely]] return; }
L_001B8334:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 27968u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[16].w[0] + 332u), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    st32((c.r[5].w[0] - 15672u), c.r[4].w[0]);
    set32(c.r[29], c.r[29].w[0] + 336u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B8370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 27968u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 332u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[4].w[0] - 15672u), 0u);
    set32(c.r[2], c.r[2].w[0] - 28208u);
    set32(c.r[4], c.r[16].w[0] + 288u);
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B83B0u);  if (depth < kMaxDepth) unit_002C(c, 525u, depth + 1u); else { c.pc = 0x001B3BB0u; return; } if (c.pc != 0x001B83B0u) [[unlikely]] return; }
L_001B83B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B83C0u);  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B4CA0u; return; } if (c.pc != 0x001B83C0u) [[unlikely]] return; }
L_001B83C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B83D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B83F0u);  if (depth < kMaxDepth) unit_002E(c, 18u, depth + 1u); else { c.pc = 0x001B8258u; return; } if (c.pc != 0x001B83F0u) [[unlikely]] return; }
L_001B83F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B8400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B8448; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B8448; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 27816u);
    set32(c.r[4], c.r[3].w[0] + 30384u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001B8440; } }
    st8((c.r[3].w[0] + 30384u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8448; } }
L_001B8440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8448u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B8448u) [[unlikely]] return; }
L_001B8448:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B8458:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 1629u);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B848Cu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001B848Cu) [[unlikely]] return; }
L_001B848C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B84A0; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B84B0; } }
L_001B84A0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B84B0u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B84B0u) [[unlikely]] return; }
L_001B84B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[1].w[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 30384u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B84DCu);  if (depth < kMaxDepth) unit_002D(c, 414u, depth + 1u); else { c.pc = 0x001B7D28u; return; } if (c.pc != 0x001B84DCu) [[unlikely]] return; }
L_001B84DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 27888u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[16].w[0] + 332u), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    st32((c.r[5].w[0] - 15480u), c.r[4].w[0]);
    set32(c.r[29], c.r[29].w[0] + 336u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B8518:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 27888u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 332u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[4].w[0] - 15480u), 0u);
    set32(c.r[2], c.r[2].w[0] - 28208u);
    set32(c.r[4], c.r[16].w[0] + 288u);
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8558u);  if (depth < kMaxDepth) unit_002C(c, 525u, depth + 1u); else { c.pc = 0x001B3BB0u; return; } if (c.pc != 0x001B8558u) [[unlikely]] return; }
L_001B8558:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8568u);  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B4CA0u; return; } if (c.pc != 0x001B8568u) [[unlikely]] return; }
L_001B8568:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B8580:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8598u);  if (depth < kMaxDepth) unit_002E(c, 29u, depth + 1u); else { c.pc = 0x001B8400u; return; } if (c.pc != 0x001B8598u) [[unlikely]] return; }
L_001B8598:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B85A8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[6].d[0] & 255ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 112u), c.f[22]);
    st32((c.r[29].w[0] + 104u), c.f[21]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B85E8u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B85E8u) [[unlikely]] return; }
L_001B85E8:
    set32(c.r[3], 0u + 28u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 224u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8604u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B8604u) [[unlikely]] return; }
L_001B8604:
    set32(c.r[4], 0u + 1008u);
    set32(c.r[3], 0u + 36u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[4].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 312u), 0u);
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001B86F8; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001B8690; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B863Cu);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B863Cu) [[unlikely]] return; }
L_001B863C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[7], c.r[3].w[0] + 30640u);
    ldl(c.r[4], (c.r[7].w[0] + 7u));
    ldr(c.r[4], (c.r[7].w[0]));
    ldl(c.r[5], (c.r[7].w[0] + 15u));
    ldr(c.r[5], (c.r[7].w[0] + 8u));
    ldl(c.r[6], (c.r[7].w[0] + 23u));
    ldr(c.r[6], (c.r[7].w[0] + 16u));
    sdl(c.r[4], (c.r[2].w[0] + 683u));
    sdr(c.r[4], (c.r[2].w[0] + 676u));
    sdl(c.r[5], (c.r[2].w[0] + 691u));
    sdr(c.r[5], (c.r[2].w[0] + 684u));
    sdl(c.r[6], (c.r[2].w[0] + 699u));
    sdr(c.r[6], (c.r[2].w[0] + 692u));
    ldl(c.r[4], (c.r[7].w[0] + 31u));
    ldr(c.r[4], (c.r[7].w[0] + 24u));
    set32(c.r[5], ld32((c.r[7].w[0] + 32u)));
    sdl(c.r[4], (c.r[2].w[0] + 707u));
    sdr(c.r[4], (c.r[2].w[0] + 700u));
    st32((c.r[2].w[0] + 708u), c.r[5].w[0]);
    c.budget -= 21;
L_001B8690:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001B86F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B86A4u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B86A4u) [[unlikely]] return; }
L_001B86A4:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[7], c.r[3].w[0] + 30680u);
    ldl(c.r[4], (c.r[7].w[0] + 7u));
    ldr(c.r[4], (c.r[7].w[0]));
    ldl(c.r[5], (c.r[7].w[0] + 15u));
    ldr(c.r[5], (c.r[7].w[0] + 8u));
    ldl(c.r[6], (c.r[7].w[0] + 23u));
    ldr(c.r[6], (c.r[7].w[0] + 16u));
    sdl(c.r[4], (c.r[2].w[0] + 719u));
    sdr(c.r[4], (c.r[2].w[0] + 712u));
    sdl(c.r[5], (c.r[2].w[0] + 727u));
    sdr(c.r[5], (c.r[2].w[0] + 720u));
    sdl(c.r[6], (c.r[2].w[0] + 735u));
    sdr(c.r[6], (c.r[2].w[0] + 728u));
    ldl(c.r[4], (c.r[7].w[0] + 31u));
    ldr(c.r[4], (c.r[7].w[0] + 24u));
    set32(c.r[5], ld32((c.r[7].w[0] + 32u)));
    sdl(c.r[4], (c.r[2].w[0] + 743u));
    sdr(c.r[4], (c.r[2].w[0] + 736u));
    st32((c.r[2].w[0] + 744u), c.r[5].w[0]);
    c.budget -= 21;
L_001B86F8:
    c.f[21] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B8738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8718u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B8718u) [[unlikely]] return; }
L_001B8718:
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], c.r[18].w[0] << 2);
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.f[21]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8778; } }
L_001B8738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8740u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B8740u) [[unlikely]] return; }
L_001B8740:
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], c.r[18].w[0] << 2);
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B8778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8770u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B8770u) [[unlikely]] return; }
L_001B8770:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), c.f[20]);
    c.budget -= 2;
L_001B8778:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], c.r[19].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.f[22] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8790u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001B8790u) [[unlikely]] return; }
L_001B8790:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[21] = c.r[1].w[0];
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 84u);
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] + 20696u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B87BCu);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B87BCu) [[unlikely]] return; }
L_001B87BC:
    set32(c.r[3], 0u + 1008u);
    set32(c.r[4], 0u + 36u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[4].w[0] + 280u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B883C; } }
L_001B87E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B8838; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    set32(c.r[10], 0u - 1u);
    set32(c.r[7], 0u + 6789u);
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B8818; } }
    c.f[0] = fp::mul(c.f[20], c.f[21]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[1]);
    c.budget -= 3;
L_001B8818:
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B8838; } }
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8838u);  if (depth < kMaxDepth) unit_0072(c, 214u, depth + 1u); else { c.pc = 0x002CA5A0u; return; } if (c.pc != 0x001B8838u) [[unlikely]] return; }
L_001B8838:
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_001B883C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8844u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B8844u) [[unlikely]] return; }
L_001B8844:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[22]));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 280u);
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B87E8u | kUnwind; return; } goto L_001B87E8; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[22] = ld32((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B8898:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[3].w[0] + 20696u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 84u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 640u)));
    set32(c.r[6], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 22;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B89A8; } }
    set32(c.r[2], 0u + 1008u);
    c.r[17].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    set32(c.r[22], 0u + 36u);
    set32(c.r[30], 0u + 1u);
    set32(c.r[23], 0u + 60u);
    c.budget -= 6;
L_001B8908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8910u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B8910u) [[unlikely]] return; }
L_001B8910:
    mmi::mult(c, 0, c.r[17].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] + 280u);
    set32(c.r[18], c.r[17].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B896C; } }
    c.budget -= 1;
L_001B8930:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[30].d[0];  if (t) { goto L_001B8968; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 68u)));
    set32(c.r[9], 0u + 1u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[23].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[10], 0u - 1u);
    c.r[7].d[0] = c.lo.d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8968u);  if (depth < kMaxDepth) unit_0072(c, 214u, depth + 1u); else { c.pc = 0x002CA5A0u; return; } if (c.pc != 0x001B8968u) [[unlikely]] return; }
L_001B8968:
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_001B896C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8974u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B8974u) [[unlikely]] return; }
L_001B8974:
    mmi::mult(c, 0, c.r[17].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 280u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B8930u | kUnwind; return; } goto L_001B8930; } }
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B8908u | kUnwind; return; } goto L_001B8908; } }
L_001B89A8:
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
L_001B89E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B8A2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14792u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001B8B10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8A1Cu);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B8A1Cu) [[unlikely]] return; }
L_001B8A1C:
    set32(c.r[3], 0u + 28u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8AA4; } }
L_001B8A2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B8A6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14792u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001B8B10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8A58u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B8A58u) [[unlikely]] return; }
L_001B8A58:
    set32(c.r[3], 0u + 28u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8AA4; } }
L_001B8A6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B8AB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14792u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001B8B10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8A98u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B8A98u) [[unlikely]] return; }
L_001B8A98:
    set32(c.r[3], 0u + 28u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 3;
L_001B8AA4:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 224u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8B14; } }
L_001B8AB4:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_001B8B10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14792u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001B8ADC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8AF8; } }
L_001B8ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8AE4u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B8AE4u) [[unlikely]] return; }
L_001B8AE4:
    set32(c.r[3], 0u + 28u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 224u));
    c.budget -= 5;
L_001B8AF8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8B14; } }
L_001B8B10:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B8B14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B8B28:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = 0u;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = ld8((c.r[2].w[0] - 15288u));
    set32(c.r[17], c.r[2].w[0] - 15288u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[12] = c.f[20];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8B60u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8B60u) [[unlikely]] return; }
L_001B8B60:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8B78u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8B78u) [[unlikely]] return; }
L_001B8B78:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8B90u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8B90u) [[unlikely]] return; }
L_001B8B90:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8BA8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8BA8u) [[unlikely]] return; }
L_001B8BA8:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8BC0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8BC0u) [[unlikely]] return; }
L_001B8BC0:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 5u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8BD8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8BD8u) [[unlikely]] return; }
L_001B8BD8:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 6u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8BF0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8BF0u) [[unlikely]] return; }
L_001B8BF0:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 7u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8C08u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8C08u) [[unlikely]] return; }
L_001B8C08:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8C20u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8C20u) [[unlikely]] return; }
L_001B8C20:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 9u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8C38u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8C38u) [[unlikely]] return; }
L_001B8C38:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 10u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8C50u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8C50u) [[unlikely]] return; }
L_001B8C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8C58u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001B8C58u) [[unlikely]] return; }
L_001B8C58:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B8C94; } }
    c.r[6].d[0] = ld8((c.r[17].w[0] + 11u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8C7Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8C7Cu) [[unlikely]] return; }
L_001B8C7C:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8C94u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8C94u) [[unlikely]] return; }
L_001B8C94:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 13u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 13u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8CACu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8CACu) [[unlikely]] return; }
L_001B8CAC:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 14u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 14u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8CC4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8CC4u) [[unlikely]] return; }
L_001B8CC4:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 15u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 15u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8CDCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8CDCu) [[unlikely]] return; }
L_001B8CDC:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 16u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8CF4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8CF4u) [[unlikely]] return; }
L_001B8CF4:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 17u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 17u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8D0Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8D0Cu) [[unlikely]] return; }
L_001B8D0C:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 18u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8D24u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8D24u) [[unlikely]] return; }
L_001B8D24:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 19u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 19u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8D3Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8D3Cu) [[unlikely]] return; }
L_001B8D3C:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 20u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8D54u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8D54u) [[unlikely]] return; }
L_001B8D54:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 21u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 21u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8D6Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8D6Cu) [[unlikely]] return; }
L_001B8D6C:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 22u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 22u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8D84u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8D84u) [[unlikely]] return; }
L_001B8D84:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 23u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 23u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8D9Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8D9Cu) [[unlikely]] return; }
L_001B8D9C:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8DB4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8DB4u) [[unlikely]] return; }
L_001B8DB4:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 25u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8DCCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8DCCu) [[unlikely]] return; }
L_001B8DCC:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 26u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 26u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8DE4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8DE4u) [[unlikely]] return; }
L_001B8DE4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B8E00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = 0u;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[12] = c.f[20];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8E2Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8E2Cu) [[unlikely]] return; }
L_001B8E2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8E44u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8E44u) [[unlikely]] return; }
L_001B8E44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8E5Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8E5Cu) [[unlikely]] return; }
L_001B8E5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8E74u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8E74u) [[unlikely]] return; }
L_001B8E74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8E8Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8E8Cu) [[unlikely]] return; }
L_001B8E8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8EA4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8EA4u) [[unlikely]] return; }
L_001B8EA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8EBCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8EBCu) [[unlikely]] return; }
L_001B8EBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8ED4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8ED4u) [[unlikely]] return; }
L_001B8ED4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8EECu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8EECu) [[unlikely]] return; }
L_001B8EEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8F04u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8F04u) [[unlikely]] return; }
L_001B8F04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8F1Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8F1Cu) [[unlikely]] return; }
L_001B8F1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8F34u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8F34u) [[unlikely]] return; }
L_001B8F34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8F4Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8F4Cu) [[unlikely]] return; }
L_001B8F4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 13u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8F64u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8F64u) [[unlikely]] return; }
L_001B8F64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8F7Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8F7Cu) [[unlikely]] return; }
L_001B8F7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 15u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8F94u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8F94u) [[unlikely]] return; }
L_001B8F94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 16u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8FACu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8FACu) [[unlikely]] return; }
L_001B8FAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 17u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8FC4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8FC4u) [[unlikely]] return; }
L_001B8FC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 18u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8FDCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8FDCu) [[unlikely]] return; }
L_001B8FDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 19u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8FF4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B8FF4u) [[unlikely]] return; }
L_001B8FF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B900Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B900Cu) [[unlikely]] return; }
L_001B900C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9024u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9024u) [[unlikely]] return; }
L_001B9024:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B903Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B903Cu) [[unlikely]] return; }
L_001B903C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 23u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9054u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9054u) [[unlikely]] return; }
L_001B9054:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 24u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B906Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B906Cu) [[unlikely]] return; }
L_001B906C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 25u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9084u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9084u) [[unlikely]] return; }
L_001B9084:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 26u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B909Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B909Cu) [[unlikely]] return; }
L_001B909C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B90B8:
    if (::decomp::hook_001B90B8.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_001B90B8, depth)) return; }
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B90D8u);  if (depth < kMaxDepth) unit_002E(c, 93u, depth + 1u); else { c.pc = 0x001B8E00u; return; } if (c.pc != 0x001B90D8u) [[unlikely]] return; }
L_001B90D8:
    c.f[20] = 0u;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[17].w[0] - 15288u));
    c.f[12] = c.f[20];
    set32(c.r[17], c.r[17].w[0] - 15288u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B90FCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B90FCu) [[unlikely]] return; }
L_001B90FC:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9114u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9114u) [[unlikely]] return; }
L_001B9114:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B912Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B912Cu) [[unlikely]] return; }
L_001B912C:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9144u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9144u) [[unlikely]] return; }
L_001B9144:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 13u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 13u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B915Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B915Cu) [[unlikely]] return; }
L_001B915C:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 14u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 14u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9174u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9174u) [[unlikely]] return; }
L_001B9174:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 15u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 15u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B918Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B918Cu) [[unlikely]] return; }
L_001B918C:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 16u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B91A4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B91A4u) [[unlikely]] return; }
L_001B91A4:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 17u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 17u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B91BCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B91BCu) [[unlikely]] return; }
L_001B91BC:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 18u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B91D4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B91D4u) [[unlikely]] return; }
L_001B91D4:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 19u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 19u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B91ECu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B91ECu) [[unlikely]] return; }
L_001B91EC:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 20u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9204u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9204u) [[unlikely]] return; }
L_001B9204:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 21u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 21u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B921Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B921Cu) [[unlikely]] return; }
L_001B921C:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 22u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 22u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9234u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9234u) [[unlikely]] return; }
L_001B9234:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B9250:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 14664u);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B9294; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B92AC; } }
L_001B9294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B929Cu);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B929Cu) [[unlikely]] return; }
L_001B929C:
    set32(c.r[3], 0u + 28u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 251u));
    c.budget -= 4;
L_001B92AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B92CC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B92C0u);  if (depth < kMaxDepth) unit_002E(c, 93u, depth + 1u); else { c.pc = 0x001B8E00u; return; } if (c.pc != 0x001B92C0u) [[unlikely]] return; }
L_001B92C0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B92CCu);  if (depth < kMaxDepth) unit_002E(c, 93u, depth + 1u); else { c.pc = 0x001B8E00u; return; } if (c.pc != 0x001B92CCu) [[unlikely]] return; }
L_001B92CC:
    set32(c.r[2], c.r[18].w[0] + 14664u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001B92EC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B9304; } }
L_001B92EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B92F4u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B92F4u) [[unlikely]] return; }
L_001B92F4:
    set32(c.r[3], 0u + 28u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 251u));
    c.budget -= 4;
L_001B9304:
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001B956C; } }
    c.f[20] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B932Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B932Cu) [[unlikely]] return; }
L_001B932C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9344u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9344u) [[unlikely]] return; }
L_001B9344:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B935Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B935Cu) [[unlikely]] return; }
L_001B935C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9374u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9374u) [[unlikely]] return; }
L_001B9374:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B938Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B938Cu) [[unlikely]] return; }
L_001B938C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B93A4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B93A4u) [[unlikely]] return; }
L_001B93A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B93BCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B93BCu) [[unlikely]] return; }
L_001B93BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B93D4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B93D4u) [[unlikely]] return; }
L_001B93D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B93ECu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B93ECu) [[unlikely]] return; }
L_001B93EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9404u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9404u) [[unlikely]] return; }
L_001B9404:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B941Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B941Cu) [[unlikely]] return; }
L_001B941C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 13u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9434u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9434u) [[unlikely]] return; }
L_001B9434:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B944Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B944Cu) [[unlikely]] return; }
L_001B944C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9464u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9464u) [[unlikely]] return; }
L_001B9464:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B947Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B947Cu) [[unlikely]] return; }
L_001B947C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9494u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9494u) [[unlikely]] return; }
L_001B9494:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 18u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B94ACu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B94ACu) [[unlikely]] return; }
L_001B94AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 19u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B94C4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B94C4u) [[unlikely]] return; }
L_001B94C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B94DCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B94DCu) [[unlikely]] return; }
L_001B94DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B94F4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B94F4u) [[unlikely]] return; }
L_001B94F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B950Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B950Cu) [[unlikely]] return; }
L_001B950C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 23u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9524u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9524u) [[unlikely]] return; }
L_001B9524:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 24u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B953Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B953Cu) [[unlikely]] return; }
L_001B953C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 25u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9554u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9554u) [[unlikely]] return; }
L_001B9554:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 26u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B956Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B956Cu) [[unlikely]] return; }
L_001B956C:
    set32(c.r[2], c.r[18].w[0] + 14664u);
    set32(c.r[3], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_001B9588; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B95A0; } }
L_001B9588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9590u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B9590u) [[unlikely]] return; }
L_001B9590:
    set32(c.r[3], 0u + 28u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 251u));
    c.budget -= 4;
L_001B95A0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B9838; } }
    c.f[20] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2u);
    c.f[12] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B95C8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B95C8u) [[unlikely]] return; }
L_001B95C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B95E0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B95E0u) [[unlikely]] return; }
L_001B95E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B95F8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B95F8u) [[unlikely]] return; }
L_001B95F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9610u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9610u) [[unlikely]] return; }
L_001B9610:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9628u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9628u) [[unlikely]] return; }
L_001B9628:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9640u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9640u) [[unlikely]] return; }
L_001B9640:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9658u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9658u) [[unlikely]] return; }
L_001B9658:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9670u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9670u) [[unlikely]] return; }
L_001B9670:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9688u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9688u) [[unlikely]] return; }
L_001B9688:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B96A0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B96A0u) [[unlikely]] return; }
L_001B96A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B96B8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B96B8u) [[unlikely]] return; }
L_001B96B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B96D0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B96D0u) [[unlikely]] return; }
L_001B96D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B96E8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B96E8u) [[unlikely]] return; }
L_001B96E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9700u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9700u) [[unlikely]] return; }
L_001B9700:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9718u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9718u) [[unlikely]] return; }
L_001B9718:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9730u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9730u) [[unlikely]] return; }
L_001B9730:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9748u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9748u) [[unlikely]] return; }
L_001B9748:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9760u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9760u) [[unlikely]] return; }
L_001B9760:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 18u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9778u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9778u) [[unlikely]] return; }
L_001B9778:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 19u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9790u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9790u) [[unlikely]] return; }
L_001B9790:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 21u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B97A8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B97A8u) [[unlikely]] return; }
L_001B97A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B97C0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B97C0u) [[unlikely]] return; }
L_001B97C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B97D8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B97D8u) [[unlikely]] return; }
L_001B97D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 23u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B97F0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B97F0u) [[unlikely]] return; }
L_001B97F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 24u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9808u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9808u) [[unlikely]] return; }
L_001B9808:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 25u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9820u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9820u) [[unlikely]] return; }
L_001B9820:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 26u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9838u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9838u) [[unlikely]] return; }
L_001B9838:
    set32(c.r[2], c.r[18].w[0] + 14664u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001B9858; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B9870; } }
L_001B9858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9860u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B9860u) [[unlikely]] return; }
L_001B9860:
    set32(c.r[3], 0u + 28u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 251u));
    c.budget -= 4;
L_001B9870:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B9B08; } }
    c.f[20] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    c.f[12] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9898u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9898u) [[unlikely]] return; }
L_001B9898:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B98B0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B98B0u) [[unlikely]] return; }
L_001B98B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B98C8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B98C8u) [[unlikely]] return; }
L_001B98C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B98E0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B98E0u) [[unlikely]] return; }
L_001B98E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B98F8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B98F8u) [[unlikely]] return; }
L_001B98F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9910u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9910u) [[unlikely]] return; }
L_001B9910:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9928u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9928u) [[unlikely]] return; }
L_001B9928:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9940u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9940u) [[unlikely]] return; }
L_001B9940:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9958u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9958u) [[unlikely]] return; }
L_001B9958:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9970u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9970u) [[unlikely]] return; }
L_001B9970:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9988u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9988u) [[unlikely]] return; }
L_001B9988:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B99A0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B99A0u) [[unlikely]] return; }
L_001B99A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B99B8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B99B8u) [[unlikely]] return; }
L_001B99B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B99D0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B99D0u) [[unlikely]] return; }
L_001B99D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B99E8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B99E8u) [[unlikely]] return; }
L_001B99E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9A00u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9A00u) [[unlikely]] return; }
L_001B9A00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9A18u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9A18u) [[unlikely]] return; }
L_001B9A18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9A30u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9A30u) [[unlikely]] return; }
L_001B9A30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 18u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9A48u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9A48u) [[unlikely]] return; }
L_001B9A48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 19u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9A60u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9A60u) [[unlikely]] return; }
L_001B9A60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 21u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9A78u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9A78u) [[unlikely]] return; }
L_001B9A78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9A90u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9A90u) [[unlikely]] return; }
L_001B9A90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9AA8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9AA8u) [[unlikely]] return; }
L_001B9AA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 23u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9AC0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9AC0u) [[unlikely]] return; }
L_001B9AC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 24u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9AD8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9AD8u) [[unlikely]] return; }
L_001B9AD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 25u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9AF0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9AF0u) [[unlikely]] return; }
L_001B9AF0:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 26u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B08u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9B08u) [[unlikely]] return; }
L_001B9B08:
    set32(c.r[2], c.r[18].w[0] + 14664u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001B9B28; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B9B40; } }
L_001B9B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B30u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B9B30u) [[unlikely]] return; }
L_001B9B30:
    set32(c.r[3], 0u + 28u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 251u));
    c.budget -= 4;
L_001B9B40:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B9DD8; } }
    c.f[20] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 5u);
    c.f[12] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B68u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9B68u) [[unlikely]] return; }
L_001B9B68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 4u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B80u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9B80u) [[unlikely]] return; }
L_001B9B80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 3u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B98u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9B98u) [[unlikely]] return; }
L_001B9B98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 3u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9BB0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9BB0u) [[unlikely]] return; }
L_001B9BB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9BC8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9BC8u) [[unlikely]] return; }
L_001B9BC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9BE0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9BE0u) [[unlikely]] return; }
L_001B9BE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9BF8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9BF8u) [[unlikely]] return; }
L_001B9BF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9C10u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9C10u) [[unlikely]] return; }
L_001B9C10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9C28u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9C28u) [[unlikely]] return; }
L_001B9C28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9C40u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9C40u) [[unlikely]] return; }
L_001B9C40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9C58u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9C58u) [[unlikely]] return; }
L_001B9C58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9C70u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9C70u) [[unlikely]] return; }
L_001B9C70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9C88u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9C88u) [[unlikely]] return; }
L_001B9C88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9CA0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9CA0u) [[unlikely]] return; }
L_001B9CA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9CB8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9CB8u) [[unlikely]] return; }
L_001B9CB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9CD0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9CD0u) [[unlikely]] return; }
L_001B9CD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9CE8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9CE8u) [[unlikely]] return; }
L_001B9CE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9D00u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9D00u) [[unlikely]] return; }
L_001B9D00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 18u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9D18u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9D18u) [[unlikely]] return; }
L_001B9D18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 19u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9D30u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9D30u) [[unlikely]] return; }
L_001B9D30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 21u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9D48u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9D48u) [[unlikely]] return; }
L_001B9D48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9D60u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9D60u) [[unlikely]] return; }
L_001B9D60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9D78u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9D78u) [[unlikely]] return; }
L_001B9D78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 23u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9D90u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9D90u) [[unlikely]] return; }
L_001B9D90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 24u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9DA8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9DA8u) [[unlikely]] return; }
L_001B9DA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 25u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9DC0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9DC0u) [[unlikely]] return; }
L_001B9DC0:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 26u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9DD8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9DD8u) [[unlikely]] return; }
L_001B9DD8:
    set32(c.r[2], c.r[18].w[0] + 14664u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001B9DF8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B9E10; } }
L_001B9DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9E00u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001B9E00u) [[unlikely]] return; }
L_001B9E00:
    set32(c.r[3], 0u + 28u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 251u));
    c.budget -= 4;
L_001B9E10:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BA0A8; } }
    c.f[20] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 5u);
    c.f[12] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9E38u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9E38u) [[unlikely]] return; }
L_001B9E38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 5u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9E50u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9E50u) [[unlikely]] return; }
L_001B9E50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 5u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9E68u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9E68u) [[unlikely]] return; }
L_001B9E68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9E80u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9E80u) [[unlikely]] return; }
L_001B9E80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9E98u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9E98u) [[unlikely]] return; }
L_001B9E98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9EB0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9EB0u) [[unlikely]] return; }
L_001B9EB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9EC8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9EC8u) [[unlikely]] return; }
L_001B9EC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9EE0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9EE0u) [[unlikely]] return; }
L_001B9EE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9EF8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9EF8u) [[unlikely]] return; }
L_001B9EF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9F10u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9F10u) [[unlikely]] return; }
L_001B9F10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9F28u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9F28u) [[unlikely]] return; }
L_001B9F28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9F40u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9F40u) [[unlikely]] return; }
L_001B9F40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9F58u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9F58u) [[unlikely]] return; }
L_001B9F58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9F70u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9F70u) [[unlikely]] return; }
L_001B9F70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9F88u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9F88u) [[unlikely]] return; }
L_001B9F88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9FA0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9FA0u) [[unlikely]] return; }
L_001B9FA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9FB8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9FB8u) [[unlikely]] return; }
L_001B9FB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9FD0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9FD0u) [[unlikely]] return; }
L_001B9FD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 18u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9FE8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001B9FE8u) [[unlikely]] return; }
L_001B9FE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 19u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA000u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA000u) [[unlikely]] return; }
L_001BA000:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 21u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA018u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA018u) [[unlikely]] return; }
L_001BA018:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA030u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA030u) [[unlikely]] return; }
L_001BA030:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA048u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA048u) [[unlikely]] return; }
L_001BA048:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 23u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA060u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA060u) [[unlikely]] return; }
L_001BA060:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 24u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA078u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA078u) [[unlikely]] return; }
L_001BA078:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 25u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA090u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA090u) [[unlikely]] return; }
L_001BA090:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 26u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA0A8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA0A8u) [[unlikely]] return; }
L_001BA0A8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BA0C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = 0u;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[12] = c.f[20];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA0F4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA0F4u) [[unlikely]] return; }
L_001BA0F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA10Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA10Cu) [[unlikely]] return; }
L_001BA10C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA124u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA124u) [[unlikely]] return; }
L_001BA124:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA13Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA13Cu) [[unlikely]] return; }
L_001BA13C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA154u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA154u) [[unlikely]] return; }
L_001BA154:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA16Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA16Cu) [[unlikely]] return; }
L_001BA16C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA184u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA184u) [[unlikely]] return; }
L_001BA184:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA19Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA19Cu) [[unlikely]] return; }
L_001BA19C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA1B4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA1B4u) [[unlikely]] return; }
L_001BA1B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA1CCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA1CCu) [[unlikely]] return; }
L_001BA1CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA1E4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA1E4u) [[unlikely]] return; }
L_001BA1E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA1FCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA1FCu) [[unlikely]] return; }
L_001BA1FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA214u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA214u) [[unlikely]] return; }
L_001BA214:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 13u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA22Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA22Cu) [[unlikely]] return; }
L_001BA22C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA244u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA244u) [[unlikely]] return; }
L_001BA244:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 15u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA25Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA25Cu) [[unlikely]] return; }
L_001BA25C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 16u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA274u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA274u) [[unlikely]] return; }
L_001BA274:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 17u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA28Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA28Cu) [[unlikely]] return; }
L_001BA28C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 18u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA2A4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA2A4u) [[unlikely]] return; }
L_001BA2A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 19u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA2BCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA2BCu) [[unlikely]] return; }
L_001BA2BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA2D4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA2D4u) [[unlikely]] return; }
L_001BA2D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA2ECu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA2ECu) [[unlikely]] return; }
L_001BA2EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA304u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA304u) [[unlikely]] return; }
L_001BA304:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 23u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA31Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA31Cu) [[unlikely]] return; }
L_001BA31C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 24u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA334u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA334u) [[unlikely]] return; }
L_001BA334:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 25u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA34Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA34Cu) [[unlikely]] return; }
L_001BA34C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 26u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA364u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA364u) [[unlikely]] return; }
L_001BA364:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BA380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = 0u;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[12] = c.f[20];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA3ACu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA3ACu) [[unlikely]] return; }
L_001BA3AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA3C4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA3C4u) [[unlikely]] return; }
L_001BA3C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA3DCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA3DCu) [[unlikely]] return; }
L_001BA3DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA3F4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA3F4u) [[unlikely]] return; }
L_001BA3F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA40Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA40Cu) [[unlikely]] return; }
L_001BA40C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA424u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA424u) [[unlikely]] return; }
L_001BA424:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA43Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA43Cu) [[unlikely]] return; }
L_001BA43C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA454u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA454u) [[unlikely]] return; }
L_001BA454:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA46Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA46Cu) [[unlikely]] return; }
L_001BA46C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA484u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA484u) [[unlikely]] return; }
L_001BA484:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA49Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA49Cu) [[unlikely]] return; }
L_001BA49C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA4B4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA4B4u) [[unlikely]] return; }
L_001BA4B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA4CCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA4CCu) [[unlikely]] return; }
L_001BA4CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA4E4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA4E4u) [[unlikely]] return; }
L_001BA4E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA4FCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA4FCu) [[unlikely]] return; }
L_001BA4FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA514u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA514u) [[unlikely]] return; }
L_001BA514:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA52Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA52Cu) [[unlikely]] return; }
L_001BA52C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 17u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA544u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA544u) [[unlikely]] return; }
L_001BA544:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 18u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA55Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA55Cu) [[unlikely]] return; }
L_001BA55C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 19u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA574u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA574u) [[unlikely]] return; }
L_001BA574:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA58Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA58Cu) [[unlikely]] return; }
L_001BA58C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA5A4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA5A4u) [[unlikely]] return; }
L_001BA5A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA5BCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA5BCu) [[unlikely]] return; }
L_001BA5BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 23u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA5D4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA5D4u) [[unlikely]] return; }
L_001BA5D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 24u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA5ECu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA5ECu) [[unlikely]] return; }
L_001BA5EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 25u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA604u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA604u) [[unlikely]] return; }
L_001BA604:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 26u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA61Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA61Cu) [[unlikely]] return; }
L_001BA61C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BA638:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    set32(c.r[6], 0u + 3u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = 0u;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[12] = c.f[20];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA664u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA664u) [[unlikely]] return; }
L_001BA664:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA67Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA67Cu) [[unlikely]] return; }
L_001BA67C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA694u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA694u) [[unlikely]] return; }
L_001BA694:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA6ACu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA6ACu) [[unlikely]] return; }
L_001BA6AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA6C4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA6C4u) [[unlikely]] return; }
L_001BA6C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA6DCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA6DCu) [[unlikely]] return; }
L_001BA6DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA6F4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA6F4u) [[unlikely]] return; }
L_001BA6F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA70Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA70Cu) [[unlikely]] return; }
L_001BA70C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA724u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA724u) [[unlikely]] return; }
L_001BA724:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA73Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA73Cu) [[unlikely]] return; }
L_001BA73C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA754u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA754u) [[unlikely]] return; }
L_001BA754:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA76Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA76Cu) [[unlikely]] return; }
L_001BA76C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA784u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA784u) [[unlikely]] return; }
L_001BA784:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA79Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA79Cu) [[unlikely]] return; }
L_001BA79C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA7B4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA7B4u) [[unlikely]] return; }
L_001BA7B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA7CCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA7CCu) [[unlikely]] return; }
L_001BA7CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA7E4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA7E4u) [[unlikely]] return; }
L_001BA7E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 17u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA7FCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA7FCu) [[unlikely]] return; }
L_001BA7FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 18u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA814u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA814u) [[unlikely]] return; }
L_001BA814:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 19u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA82Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA82Cu) [[unlikely]] return; }
L_001BA82C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 21u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA844u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA844u) [[unlikely]] return; }
L_001BA844:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA85Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA85Cu) [[unlikely]] return; }
L_001BA85C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA874u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA874u) [[unlikely]] return; }
L_001BA874:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 23u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA88Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA88Cu) [[unlikely]] return; }
L_001BA88C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 24u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA8A4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA8A4u) [[unlikely]] return; }
L_001BA8A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 25u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA8BCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA8BCu) [[unlikely]] return; }
L_001BA8BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 26u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA8D4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA8D4u) [[unlikely]] return; }
L_001BA8D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BA8F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    set32(c.r[6], 0u + 3u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = 0u;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[12] = c.f[20];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA91Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA91Cu) [[unlikely]] return; }
L_001BA91C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA934u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA934u) [[unlikely]] return; }
L_001BA934:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA94Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA94Cu) [[unlikely]] return; }
L_001BA94C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA964u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA964u) [[unlikely]] return; }
L_001BA964:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA97Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA97Cu) [[unlikely]] return; }
L_001BA97C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA994u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA994u) [[unlikely]] return; }
L_001BA994:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA9ACu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA9ACu) [[unlikely]] return; }
L_001BA9AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA9C4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA9C4u) [[unlikely]] return; }
L_001BA9C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA9DCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA9DCu) [[unlikely]] return; }
L_001BA9DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA9F4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BA9F4u) [[unlikely]] return; }
L_001BA9F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAA0Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAA0Cu) [[unlikely]] return; }
L_001BAA0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAA24u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAA24u) [[unlikely]] return; }
L_001BAA24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAA3Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAA3Cu) [[unlikely]] return; }
L_001BAA3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAA54u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAA54u) [[unlikely]] return; }
L_001BAA54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAA6Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAA6Cu) [[unlikely]] return; }
L_001BAA6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAA84u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAA84u) [[unlikely]] return; }
L_001BAA84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAA9Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAA9Cu) [[unlikely]] return; }
L_001BAA9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 17u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAAB4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAAB4u) [[unlikely]] return; }
L_001BAAB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 18u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAACCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAACCu) [[unlikely]] return; }
L_001BAACC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 19u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAAE4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAAE4u) [[unlikely]] return; }
L_001BAAE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 21u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAAFCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAAFCu) [[unlikely]] return; }
L_001BAAFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAB14u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAB14u) [[unlikely]] return; }
L_001BAB14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAB2Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAB2Cu) [[unlikely]] return; }
L_001BAB2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 23u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAB44u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAB44u) [[unlikely]] return; }
L_001BAB44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 24u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAB5Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAB5Cu) [[unlikely]] return; }
L_001BAB5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 25u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAB74u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAB74u) [[unlikely]] return; }
L_001BAB74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 26u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAB8Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAB8Cu) [[unlikely]] return; }
L_001BAB8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BABA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    set32(c.r[6], 0u + 3u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = 0u;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[12] = c.f[20];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BABD4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BABD4u) [[unlikely]] return; }
L_001BABD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BABECu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BABECu) [[unlikely]] return; }
L_001BABEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC04u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAC04u) [[unlikely]] return; }
L_001BAC04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC1Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAC1Cu) [[unlikely]] return; }
L_001BAC1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC34u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAC34u) [[unlikely]] return; }
L_001BAC34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC4Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAC4Cu) [[unlikely]] return; }
L_001BAC4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC64u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAC64u) [[unlikely]] return; }
L_001BAC64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC7Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAC7Cu) [[unlikely]] return; }
L_001BAC7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC94u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAC94u) [[unlikely]] return; }
L_001BAC94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BACACu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BACACu) [[unlikely]] return; }
L_001BACAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BACC4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BACC4u) [[unlikely]] return; }
L_001BACC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BACDCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BACDCu) [[unlikely]] return; }
L_001BACDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BACF4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BACF4u) [[unlikely]] return; }
L_001BACF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD0Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAD0Cu) [[unlikely]] return; }
L_001BAD0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD24u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAD24u) [[unlikely]] return; }
L_001BAD24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD3Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAD3Cu) [[unlikely]] return; }
L_001BAD3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD54u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAD54u) [[unlikely]] return; }
L_001BAD54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 17u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD6Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAD6Cu) [[unlikely]] return; }
L_001BAD6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 18u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD84u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAD84u) [[unlikely]] return; }
L_001BAD84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 19u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD9Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAD9Cu) [[unlikely]] return; }
L_001BAD9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 21u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BADB4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BADB4u) [[unlikely]] return; }
L_001BADB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BADCCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BADCCu) [[unlikely]] return; }
L_001BADCC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BADE4u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BADE4u) [[unlikely]] return; }
L_001BADE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 23u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BADFCu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BADFCu) [[unlikely]] return; }
L_001BADFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 24u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAE14u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAE14u) [[unlikely]] return; }
L_001BAE14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 25u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAE2Cu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAE2Cu) [[unlikely]] return; }
L_001BAE2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 26u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAE44u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BAE44u) [[unlikely]] return; }
L_001BAE44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BAE60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAE7Cu);  if (depth < kMaxDepth) unit_002E(c, 64u, depth + 1u); else { c.pc = 0x001B8B28u; return; } if (c.pc != 0x001BAE7Cu) [[unlikely]] return; }
L_001BAE7C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAE88u);  if (depth < kMaxDepth) unit_002E(c, 64u, depth + 1u); else { c.pc = 0x001B8B28u; return; } if (c.pc != 0x001BAE88u) [[unlikely]] return; }
L_001BAE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAE90u);  if (depth < kMaxDepth) unit_0036(c, 214u, depth + 1u); else { c.pc = 0x001D9AA8u; return; } if (c.pc != 0x001BAE90u) [[unlikely]] return; }
L_001BAE90:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[16].w[0] + 9872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAEA4u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x001BAEA4u) [[unlikely]] return; }
L_001BAEA4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAEB4u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x001BAEB4u) [[unlikely]] return; }
L_001BAEB4:
    set32(c.r[5], ld32((c.r[2].w[0] + 928u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAEC4u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x001BAEC4u) [[unlikely]] return; }
L_001BAEC4:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[17], c.r[17].w[0] - 14960u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAEDCu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001BAEDCu) [[unlikely]] return; }
L_001BAEDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAEF0u);  if (depth < kMaxDepth) unit_0036(c, 243u, depth + 1u); else { c.pc = 0x001D9EE8u; return; } if (c.pc != 0x001BAEF0u) [[unlikely]] return; }
L_001BAEF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAEFCu);  if (depth < kMaxDepth) unit_001E(c, 187u, depth + 1u); else { c.pc = 0x0017B7A8u; return; } if (c.pc != 0x001BAEFCu) [[unlikely]] return; }
L_001BAEFC:
    c.f[12] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF0Cu);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BB50u; return; } if (c.pc != 0x001BAF0Cu) [[unlikely]] return; }
L_001BAF0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF18u);  if (depth < kMaxDepth) unit_001E(c, 187u, depth + 1u); else { c.pc = 0x0017B7A8u; return; } if (c.pc != 0x001BAF18u) [[unlikely]] return; }
L_001BAF18:
    c.f[12] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF28u);  if (depth < kMaxDepth) unit_0036(c, 239u, depth + 1u); else { c.pc = 0x001D9E50u; return; } if (c.pc != 0x001BAF28u) [[unlikely]] return; }
L_001BAF28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF38u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001BAF38u) [[unlikely]] return; }
L_001BAF38:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF4Cu);  if (depth < kMaxDepth) unit_0036(c, 243u, depth + 1u); else { c.pc = 0x001D9EE8u; return; } if (c.pc != 0x001BAF4Cu) [[unlikely]] return; }
L_001BAF4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF58u);  if (depth < kMaxDepth) unit_001E(c, 187u, depth + 1u); else { c.pc = 0x0017B7A8u; return; } if (c.pc != 0x001BAF58u) [[unlikely]] return; }
L_001BAF58:
    c.f[12] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF68u);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BB50u; return; } if (c.pc != 0x001BAF68u) [[unlikely]] return; }
L_001BAF68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF74u);  if (depth < kMaxDepth) unit_001E(c, 187u, depth + 1u); else { c.pc = 0x0017B7A8u; return; } if (c.pc != 0x001BAF74u) [[unlikely]] return; }
L_001BAF74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF84u);  if (depth < kMaxDepth) unit_0036(c, 239u, depth + 1u); else { c.pc = 0x001D9E50u; return; } if (c.pc != 0x001BAF84u) [[unlikely]] return; }
L_001BAF84:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BAFA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001BB200; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BB200; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[8], c.r[2].w[0] + 30640u);
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 7;
L_001BAFE0:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BAFE0u | kUnwind; return; } goto L_001BAFE0; } }
    set32(c.r[2], 0u + 14u);
    set32(c.r[4], 0u + 16510u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 15u);
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[11], c.r[2].w[0] + 30680u);
    st32((c.r[29].w[0] + 12u), 0u);
    set32(c.r[3], 0u + 11u);
    st32((c.r[8].w[0] + 32u), 0u);
    c.r[6].d[0] = c.r[11].d[0] + 0ull;
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    ldl(c.r[9], (c.r[29].w[0] + 15u));
    ldr(c.r[9], (c.r[29].w[0] + 8u));
    sdl(c.r[2], (c.r[8].w[0] + 7u));
    sdr(c.r[2], (c.r[8].w[0]));
    sdl(c.r[9], (c.r[8].w[0] + 15u));
    set32(c.r[7], 0u + 1u);
    sdr(c.r[9], (c.r[8].w[0] + 8u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[9], 0u - 1u);
    set32(c.r[10], 0u + 2u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 12u), 0u);
    set32(c.r[3], c.r[2].w[0] << 4);
    st32((c.r[8].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    ldl(c.r[4], (c.r[29].w[0] + 15u));
    ldr(c.r[4], (c.r[29].w[0] + 8u));
    sdl(c.r[2], (c.r[3].w[0] + 7u));
    sdr(c.r[2], (c.r[3].w[0]));
    sdl(c.r[4], (c.r[3].w[0] + 15u));
    sdr(c.r[4], (c.r[3].w[0] + 8u));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[8].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 44;
L_001BB0B0:
    st32((c.r[6].w[0]), 0u);
    set32(c.r[7], c.r[7].w[0] - 1u);
    st32((c.r[6].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[6].w[0] + 8u), 0u);
    st32((c.r[6].w[0] + 12u), c.r[10].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BB0B0u | kUnwind; return; } goto L_001BB0B0; } }
    set32(c.r[3], 0u + 16511u);
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30720u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[4], c.r[2].w[0] + 280u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[11].w[0] + 32u), 0u);
    set32(c.r[7], 0u - 1u);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    ldl(c.r[5], (c.r[29].w[0] + 15u));
    ldr(c.r[5], (c.r[29].w[0] + 8u));
    sdl(c.r[2], (c.r[11].w[0] + 7u));
    sdr(c.r[2], (c.r[11].w[0]));
    sdl(c.r[5], (c.r[11].w[0] + 15u));
    set32(c.r[10], 0u + 2u);
    sdr(c.r[5], (c.r[11].w[0] + 8u));
    set32(c.r[2], ld32((c.r[11].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[11].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 24;
L_001BB130:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[9], c.r[3].w[0] - 1u);
    set32(c.r[8], c.r[2].w[0] + 1008u);
    set32(c.r[3], 0u + 27u);
    c.budget -= 4;
L_001BB140:
    set32(c.r[6], c.r[3].w[0] - 1u);
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 36u);
    c.budget -= 4;
L_001BB150:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[3].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[3].w[0] + 12u), c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BB150u | kUnwind; return; } goto L_001BB150; } }
    st32((c.r[2].w[0] + 32u), 0u);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BB140u | kUnwind; return; } goto L_001BB140; } }
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.r[3].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BB130u | kUnwind; return; } goto L_001BB130; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] - 32496u);
    set32(c.r[2], c.r[2].w[0] - 27552u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[17], c.r[17].w[0] - 32480u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB1BCu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001BB1BCu) [[unlikely]] return; }
L_001BB1BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27616u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB1D4u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001BB1D4u) [[unlikely]] return; }
L_001BB1D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27576u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB1E8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001BB1E8u) [[unlikely]] return; }
L_001BB1E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27600u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB200u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x001BB200u) [[unlikely]] return; }
L_001BB200:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BB218:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st32((c.r[29].w[0] + 96u), c.f[22]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.f[22] = c.f[12];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 88u), c.f[21]);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.budget -= 12;
L_001BB248:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[18].w[0] << 2);
    c.budget -= 4;
L_001BB258:
    c.f[21] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB26Cu);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x001BB26Cu) [[unlikely]] return; }
L_001BB26C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BB2D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB27Cu);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB27Cu) [[unlikely]] return; }
L_001BB27C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[20] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BB2D4; } }
    c.f[20] = fp::sub(c.f[20], c.f[22]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB2A0u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB2A0u) [[unlikely]] return; }
L_001BB2A0:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    st32((c.r[2].w[0]), c.f[20]);
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BB2D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB2C4u);  if (depth < kMaxDepth) unit_002E(c, 460u, depth + 1u); else { c.pc = 0x001BB3D0u; return; } if (c.pc != 0x001BB2C4u) [[unlikely]] return; }
L_001BB2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB2CCu);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB2CCu) [[unlikely]] return; }
L_001BB2CC:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), c.f[21]);
    c.budget -= 2;
L_001BB2D4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 112u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BB258u | kUnwind; return; } goto L_001BB258; } }
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BB248u | kUnwind; return; } goto L_001BB248; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[22] = ld32((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BB328:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB354u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB354u) [[unlikely]] return; }
L_001BB354:
    set32(c.r[4], 0u + 28u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 15288u);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[16], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 224u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001BB3AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB388u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB388u) [[unlikely]] return; }
L_001BB388:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[2].w[0] + 224u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB3ACu);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BB3ACu) [[unlikely]] return; }
L_001BB3AC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BB3D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[12] = 0u;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB3E8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BB3E8u) [[unlikely]] return; }
L_001BB3E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BB3F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 14792u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BB448; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB42Cu);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB42Cu) [[unlikely]] return; }
L_001BB42C:
    set32(c.r[3], 0u + 28u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 224u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BB44C; } }
L_001BB448:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BB44C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BB468:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB488u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB488u) [[unlikely]] return; }
L_001BB488:
    set32(c.r[3], 0u + 112u);
    set32(c.r[16], c.r[16].w[0] << 2);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.f[1] = 0u;
    c.f[0] = c.f[1];
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BB4C0; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_001BB4C0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BB4D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB4F0u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB4F0u) [[unlikely]] return; }
L_001BB4F0:
    set32(c.r[3], ld32((c.r[2].w[0] + 2312u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 2312u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB504u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB504u) [[unlikely]] return; }
L_001BB504:
    set32(c.r[3], ld32((c.r[2].w[0] + 2312u)));
    c.r[3].d[0] = c.r[3].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BB52C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB51Cu);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB51Cu) [[unlikely]] return; }
L_001BB51C:
    set32(c.r[3], 0u + 100u);
    st32((c.r[2].w[0] + 2312u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BB54C; } }
L_001BB52C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB534u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB534u) [[unlikely]] return; }
L_001BB534:
    set32(c.r[3], ld32((c.r[2].w[0] + 2312u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001BB54C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB548u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB548u) [[unlikely]] return; }
L_001BB548:
    st32((c.r[2].w[0] + 2312u), 0u);
    c.budget -= 1;
L_001BB54C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB554u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB554u) [[unlikely]] return; }
L_001BB554:
    set32(c.r[2], ld32((c.r[2].w[0] + 2312u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BB570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BB598; } }
    set32(c.r[16], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BB5A4; } }
L_001BB598:
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    c.budget -= 3;
L_001BB5A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB5ACu);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB5ACu) [[unlikely]] return; }
L_001BB5AC:
    st32((c.r[2].w[0] + 2312u), c.r[16].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BB5C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB5D8u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB5D8u) [[unlikely]] return; }
L_001BB5D8:
    set32(c.r[2], ld32((c.r[2].w[0] + 2312u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BB5F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB610u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB610u) [[unlikely]] return; }
L_001BB610:
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2296u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], ld32((c.r[2].w[0])));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BB640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB658u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB658u) [[unlikely]] return; }
L_001BB658:
    set32(c.r[16], c.r[16].w[0] << 2);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 2296u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BB678:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 23u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 15288u);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = 0u;
    c.r[6].d[0] = ld8((c.r[16].w[0] + 23u));
    c.f[12] = c.f[20];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB6B0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BB6B0u) [[unlikely]] return; }
L_001BB6B0:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 24u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB6C8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BB6C8u) [[unlikely]] return; }
L_001BB6C8:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 25u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 25u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB6E0u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BB6E0u) [[unlikely]] return; }
L_001BB6E0:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 26u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 26u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB6F8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BB6F8u) [[unlikely]] return; }
L_001BB6F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BB718:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_001BB74C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 21608u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB744u);  if (depth < kMaxDepth) unit_0036(c, 243u, depth + 1u); else { c.pc = 0x001D9EE8u; return; } if (c.pc != 0x001BB744u) [[unlikely]] return; }
L_001BB744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BB790; } }
L_001BB74C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 21608u)));
    c.f[20] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB764u);  if (depth < kMaxDepth) unit_0036(c, 243u, depth + 1u); else { c.pc = 0x001D9EE8u; return; } if (c.pc != 0x001BB764u) [[unlikely]] return; }
L_001BB764:
    set32(c.r[4], ld32((c.r[16].w[0] + 21608u)));
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB774u);  if (depth < kMaxDepth) unit_001E(c, 200u, depth + 1u); else { c.pc = 0x0017BB28u; return; } if (c.pc != 0x001BB774u) [[unlikely]] return; }
L_001BB774:
    set32(c.r[4], ld32((c.r[16].w[0] + 21608u)));
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB784u);  if (depth < kMaxDepth) unit_0036(c, 239u, depth + 1u); else { c.pc = 0x001D9E50u; return; } if (c.pc != 0x001BB784u) [[unlikely]] return; }
L_001BB784:
    set32(c.r[4], ld32((c.r[16].w[0] + 21608u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB790u);  if (depth < kMaxDepth) unit_001E(c, 194u, depth + 1u); else { c.pc = 0x0017B8A8u; return; } if (c.pc != 0x001BB790u) [[unlikely]] return; }
L_001BB790:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BB7A8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB7C8u);  if (depth < kMaxDepth) unit_002E(c, 279u, depth + 1u); else { c.pc = 0x001BA0C8u; return; } if (c.pc != 0x001BB7C8u) [[unlikely]] return; }
L_001BB7C8:
    c.f[20] = 0u;
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB7D8u);  if (depth < kMaxDepth) unit_002E(c, 279u, depth + 1u); else { c.pc = 0x001BA0C8u; return; } if (c.pc != 0x001BB7D8u) [[unlikely]] return; }
L_001BB7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB7E0u);  if (depth < kMaxDepth) unit_0036(c, 216u, depth + 1u); else { c.pc = 0x001D9AD0u; return; } if (c.pc != 0x001BB7E0u) [[unlikely]] return; }
L_001BB7E0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[17], c.r[17].w[0] - 14960u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB7F8u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001BB7F8u) [[unlikely]] return; }
L_001BB7F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB80Cu);  if (depth < kMaxDepth) unit_0036(c, 243u, depth + 1u); else { c.pc = 0x001D9EE8u; return; } if (c.pc != 0x001BB80Cu) [[unlikely]] return; }
L_001BB80C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB81Cu);  if (depth < kMaxDepth) unit_001E(c, 200u, depth + 1u); else { c.pc = 0x0017BB28u; return; } if (c.pc != 0x001BB81Cu) [[unlikely]] return; }
L_001BB81C:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB82Cu);  if (depth < kMaxDepth) unit_0036(c, 239u, depth + 1u); else { c.pc = 0x001D9E50u; return; } if (c.pc != 0x001BB82Cu) [[unlikely]] return; }
L_001BB82C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB838u);  if (depth < kMaxDepth) unit_001E(c, 194u, depth + 1u); else { c.pc = 0x0017B8A8u; return; } if (c.pc != 0x001BB838u) [[unlikely]] return; }
L_001BB838:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB848u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001BB848u) [[unlikely]] return; }
L_001BB848:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB85Cu);  if (depth < kMaxDepth) unit_0036(c, 243u, depth + 1u); else { c.pc = 0x001D9EE8u; return; } if (c.pc != 0x001BB85Cu) [[unlikely]] return; }
L_001BB85C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB86Cu);  if (depth < kMaxDepth) unit_001E(c, 200u, depth + 1u); else { c.pc = 0x0017BB28u; return; } if (c.pc != 0x001BB86Cu) [[unlikely]] return; }
L_001BB86C:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB87Cu);  if (depth < kMaxDepth) unit_0036(c, 239u, depth + 1u); else { c.pc = 0x001D9E50u; return; } if (c.pc != 0x001BB87Cu) [[unlikely]] return; }
L_001BB87C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB888u);  if (depth < kMaxDepth) unit_001E(c, 194u, depth + 1u); else { c.pc = 0x0017B8A8u; return; } if (c.pc != 0x001BB888u) [[unlikely]] return; }
L_001BB888:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BB8A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB8C0u);  if (depth < kMaxDepth) unit_002E(c, 279u, depth + 1u); else { c.pc = 0x001BA0C8u; return; } if (c.pc != 0x001BB8C0u) [[unlikely]] return; }
L_001BB8C0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB8CCu);  if (depth < kMaxDepth) unit_002E(c, 279u, depth + 1u); else { c.pc = 0x001BA0C8u; return; } if (c.pc != 0x001BB8CCu) [[unlikely]] return; }
L_001BB8CC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB8E4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001BB8E4u) [[unlikely]] return; }
L_001BB8E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB8F4u);  if (depth < kMaxDepth) unit_0036(c, 243u, depth + 1u); else { c.pc = 0x001D9EE8u; return; } if (c.pc != 0x001BB8F4u) [[unlikely]] return; }
L_001BB8F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB904u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001BB904u) [[unlikely]] return; }
L_001BB904:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB914u);  if (depth < kMaxDepth) unit_0036(c, 243u, depth + 1u); else { c.pc = 0x001D9EE8u; return; } if (c.pc != 0x001BB914u) [[unlikely]] return; }
L_001BB914:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BB928:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BB938:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BB940:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BB948:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB970u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001BB970u) [[unlikely]] return; }
L_001BB970:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001BBA5C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001BBA1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB98Cu);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB98Cu) [[unlikely]] return; }
L_001BB98C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] - 15288u);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 224u));
    set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001BB9D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB9B4u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB9B4u) [[unlikely]] return; }
L_001BB9B4:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[12] = 0u;
    c.r[6].d[0] = ld8((c.r[2].w[0] + 224u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB9D8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BB9D8u) [[unlikely]] return; }
L_001BB9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB9E0u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BB9E0u) [[unlikely]] return; }
L_001BB9E0:
    set32(c.r[17], c.r[16].w[0] + 28u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 224u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001BBAFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA00u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BBA00u) [[unlikely]] return; }
L_001BBA00:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[12] = 0u;
    c.r[6].d[0] = ld8((c.r[2].w[0] + 224u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BBAB8; } }
L_001BBA1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA24u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BBA24u) [[unlikely]] return; }
L_001BBA24:
    set32(c.r[4], c.r[2].w[0] + 224u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 28u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA38u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001BBA38u) [[unlikely]] return; }
L_001BBA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA40u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BBA40u) [[unlikely]] return; }
L_001BBA40:
    set32(c.r[4], c.r[2].w[0] + 252u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 28u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA54u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001BBA54u) [[unlikely]] return; }
L_001BBA54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BBAFC; } }
L_001BBA5C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001BBAD0; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA70u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BBA70u) [[unlikely]] return; }
L_001BBA70:
    set32(c.r[4], 0u + 28u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 15288u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[17], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 224u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001BBAFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBAA4u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BBAA4u) [[unlikely]] return; }
L_001BBAA4:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[12] = 0u;
    c.r[6].d[0] = ld8((c.r[2].w[0] + 224u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_001BBAB8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBAC8u);  if (depth < kMaxDepth) unit_002E(c, 40u, depth + 1u); else { c.pc = 0x001B85A8u; return; } if (c.pc != 0x001BBAC8u) [[unlikely]] return; }
L_001BBAC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BBAFC; } }
L_001BBAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBAD8u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BBAD8u) [[unlikely]] return; }
L_001BBAD8:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], 0u + 28u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 28u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 224u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBAFCu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001BBAFCu) [[unlikely]] return; }
L_001BBAFC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BBB18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27584u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB3Cu);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x001BBB3Cu) [[unlikely]] return; }
L_001BBB3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BBB50; } }
L_001BBB44:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BBBD8; } }
L_001BBB50:
    set32(c.r[16], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 10196u)));
    set32(c.r[3], c.r[4].w[0] - 11u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(67ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BBB44u | kUnwind; return; } goto L_001BBB44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 27504u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001B8000u < 16384u) { entry = entries_002E[(t - 0x001B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001BBB98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14792u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001BBBB8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BBBD0; } }
L_001BBBB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBBC0u);  if (depth < kMaxDepth) unit_0036(c, 269u, depth + 1u); else { c.pc = 0x001DA528u; return; } if (c.pc != 0x001BBBC0u) [[unlikely]] return; }
L_001BBBC0:
    set32(c.r[3], 0u + 28u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 234u));
    c.budget -= 4;
L_001BBBD0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001BBBD8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BBBF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC08u);  if (depth < kMaxDepth) unit_002E(c, 438u, depth + 1u); else { c.pc = 0x001BAFA0u; return; } if (c.pc != 0x001BBC08u) [[unlikely]] return; }
L_001BBC08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BBC18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC28u);  if (depth < kMaxDepth) unit_002E(c, 553u, depth + 1u); else { c.pc = 0x001BBDF8u; return; } if (c.pc != 0x001BBC28u) [[unlikely]] return; }
L_001BBC28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BBC38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BBC60u) [[unlikely]] return; }
L_001BBC60:
    c.r[2].d[0] = c.r[2].d[0] & 5120ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 5120ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BBC84; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC84u);  if (depth < kMaxDepth) unit_0062(c, 129u, depth + 1u); else { c.pc = 0x0028A128u; return; } if (c.pc != 0x001BBC84u) [[unlikely]] return; }
L_001BBC84:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BBC98:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x469C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[12] = c.r[1].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[17], c.r[17].w[0] - 32464u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x462B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 57344ull;
    c.f[13] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x47150000u);
    c.r[1].d[0] = c.r[1].d[0] | 30976ull;
    c.f[14] = c.r[1].w[0];
    c.f[15] = c.f[20];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBCF0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001BBCF0u) [[unlikely]] return; }
L_001BBCF0:
    c.f[12] = 0u;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] - 32448u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    c.f[13] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.f[14] = c.f[12];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBD18u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001BBD18u) [[unlikely]] return; }
L_001BBD18:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 3u);
    c.r[11].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[6], 0u + 1u);
    c.r[9].d[0] = c.r[9].d[0] | 36856ull;
    set32(c.r[4], 0u + 49u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBD48u);  if (depth < kMaxDepth) unit_0094(c, 304u, depth + 1u); else { c.pc = 0x00353440u; return; } if (c.pc != 0x001BBD48u) [[unlikely]] return; }
L_001BBD48:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00730000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[16], c.r[16].w[0] + 20032u);
    set32(c.r[6], c.r[6].w[0] - 17352u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 49u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBD68u);  if (depth < kMaxDepth) unit_0095(c, 388u, depth + 1u); else { c.pc = 0x00357020u; return; } if (c.pc != 0x001BBD68u) [[unlikely]] return; }
L_001BBD68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 49u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBD78u);  if (depth < kMaxDepth) unit_0095(c, 390u, depth + 1u); else { c.pc = 0x00357050u; return; } if (c.pc != 0x001BBD78u) [[unlikely]] return; }
L_001BBD78:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BBD98:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBDC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BBDC0u) [[unlikely]] return; }
L_001BBDC0:
    c.r[2].d[0] = c.r[2].d[0] & 5120ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 5120ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BBDE4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBDE4u);  if (depth < kMaxDepth) unit_0062(c, 129u, depth + 1u); else { c.pc = 0x0028A128u; return; } if (c.pc != 0x001BBDE4u) [[unlikely]] return; }
L_001BBDE4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BBDF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BBE00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 19088u);
    set32(c.r[6], 0u - 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE24u);  if (depth < kMaxDepth) unit_0089(c, 268u, depth + 1u); else { c.pc = 0x003272F8u; return; } if (c.pc != 0x001BBE24u) [[unlikely]] return; }
L_001BBE24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BBE38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001BBE68; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    set32(c.r[5], c.r[4].w[0] + 16u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BBE68u) [[unlikely]] return; }
L_001BBE68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BBE78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 20032u);
    set32(c.r[6], c.r[6].w[0] - 16896u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE9Cu);  if (depth < kMaxDepth) unit_0095(c, 388u, depth + 1u); else { c.pc = 0x00357020u; return; } if (c.pc != 0x001BBE9Cu) [[unlikely]] return; }
L_001BBE9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BBEB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5FA0000u);
    c.f[12] = c.r[1].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[18], c.r[18].w[0] - 32432u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x47AD0000u);
    c.r[1].d[0] = c.r[1].d[0] | 54272ull;
    c.f[13] = c.r[1].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC53B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[14] = c.r[1].w[0];
    c.f[15] = c.f[20];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBF08u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001BBF08u) [[unlikely]] return; }
L_001BBF08:
    c.f[12] = 0u;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x469C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[13] = c.r[1].w[0];
    set32(c.r[17], c.r[17].w[0] - 32416u);
    c.f[15] = c.f[20];
    c.f[14] = c.f[12];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBF34u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001BBF34u) [[unlikely]] return; }
L_001BBF34:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00040000u);
    st32((c.r[29].w[0]), 0u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 3u);
    c.r[9].d[0] = c.r[9].d[0] | 36856ull;
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], 0u + 18u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBF64u);  if (depth < kMaxDepth) unit_0094(c, 304u, depth + 1u); else { c.pc = 0x00353440u; return; } if (c.pc != 0x001BBF64u) [[unlikely]] return; }
L_001BBF64:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00730000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[16], c.r[16].w[0] + 20032u);
    set32(c.r[6], c.r[6].w[0] - 17000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 18u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBF84u);  if (depth < kMaxDepth) unit_0095(c, 388u, depth + 1u); else { c.pc = 0x00357020u; return; } if (c.pc != 0x001BBF84u) [[unlikely]] return; }
L_001BBF84:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 3u);
    c.r[9].d[0] = c.r[9].d[0] | 36856ull;
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 19u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBFB4u);  if (depth < kMaxDepth) unit_0094(c, 304u, depth + 1u); else { c.pc = 0x00353440u; return; } if (c.pc != 0x001BBFB4u) [[unlikely]] return; }
L_001BBFB4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 16376u);
    set32(c.r[5], 0u + 19u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBFCCu);  if (depth < kMaxDepth) unit_0095(c, 388u, depth + 1u); else { c.pc = 0x00357020u; return; } if (c.pc != 0x001BBFCCu) [[unlikely]] return; }
L_001BBFCC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 16200u);
    set32(c.r[5], 0u + 49u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBFE4u);  if (depth < kMaxDepth) unit_0095(c, 388u, depth + 1u); else { c.pc = 0x00357020u; return; } if (c.pc != 0x001BBFE4u) [[unlikely]] return; }
L_001BBFE4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
}

}
