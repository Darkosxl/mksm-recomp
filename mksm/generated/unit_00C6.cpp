#include "units.hpp"
#include "ps2/decomp_hook.hpp"

namespace decomp {
extern ps2::DecompFn hook_0041ABB8;
}

namespace gen {

using namespace ps2;

const std::uint16_t entries_00C6[4096] = {
    1, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 11, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 28,
    0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    35, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0,
    45, 0, 0, 0, 0, 46, 0, 47, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0,
    0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0,
    0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0,
    0, 0, 110, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 116, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127,
    0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181,
    0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0,
    0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0,
    0, 0, 0, 198, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 225, 0, 0, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 233, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0,
    247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0,
    0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257,
    0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265,
    0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 271, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282,
    0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 300, 0, 301, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 312, 0, 313, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0,
    0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 339, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0,
    0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0,
    0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0,
    362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0,
    0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0,
    0, 371, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0,
    378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0,
    0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0,
    0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0,
    403, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0,
    410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 417, 0, 0, 0, 0,
    418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422,
    0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0,
    0, 0, 437, 0, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0,
    446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0,
    0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0,
    0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0,
    0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0,
    0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0,
    0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0,
    0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 486, 0, 487, 0, 488, 0, 489, 0, 0, 0, 0,
    0, 490, 0, 0, 0, 0, 491, 0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0,
    0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 504, 0, 0, 0, 505, 0,
    0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    510, 0, 0, 0, 0, 511, 0, 512, 0, 513, 0, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518,
    0, 519, 0, 0, 520, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 523, 0, 524, 0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 528, 0, 0,
    529, 0, 0, 530, 0, 0, 531, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0, 536, 0, 0, 537, 0,
    0, 0, 538, 0, 0, 539, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    542, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0,
    0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0,
    0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0,
    0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 565, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 0,
    0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 0,
    0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00C6(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00418000;
    case 2u: goto L_00418010;
    case 3u: goto L_00418014;
    case 4u: goto L_00418038;
    case 5u: goto L_00418048;
    case 6u: goto L_00418050;
    case 7u: goto L_00418068;
    case 8u: goto L_0041807C;
    case 9u: goto L_004180DC;
    case 10u: goto L_004180E8;
    case 11u: goto L_004180F0;
    case 12u: goto L_00418104;
    case 13u: goto L_00418134;
    case 14u: goto L_00418150;
    case 15u: goto L_00418160;
    case 16u: goto L_00418168;
    case 17u: goto L_00418178;
    case 18u: goto L_0041819C;
    case 19u: goto L_004181B0;
    case 20u: goto L_004181C4;
    case 21u: goto L_004181F8;
    case 22u: goto L_00418208;
    case 23u: goto L_00418210;
    case 24u: goto L_00418220;
    case 25u: goto L_00418240;
    case 26u: goto L_00418264;
    case 27u: goto L_00418274;
    case 28u: goto L_0041827C;
    case 29u: goto L_00418298;
    case 30u: goto L_004182A8;
    case 31u: goto L_004182C4;
    case 32u: goto L_004182D0;
    case 33u: goto L_004182D8;
    case 34u: goto L_004182F0;
    case 35u: goto L_00418300;
    case 36u: goto L_00418314;
    case 37u: goto L_0041831C;
    case 38u: goto L_00418324;
    case 39u: goto L_00418338;
    case 40u: goto L_00418340;
    case 41u: goto L_00418354;
    case 42u: goto L_0041835C;
    case 43u: goto L_00418364;
    case 44u: goto L_00418378;
    case 45u: goto L_00418380;
    case 46u: goto L_00418394;
    case 47u: goto L_0041839C;
    case 48u: goto L_004183A4;
    case 49u: goto L_004183B8;
    case 50u: goto L_004183D0;
    case 51u: goto L_004183EC;
    case 52u: goto L_004183F8;
    case 53u: goto L_00418410;
    case 54u: goto L_00418418;
    case 55u: goto L_00418430;
    case 56u: goto L_0041844C;
    case 57u: goto L_00418458;
    case 58u: goto L_00418470;
    case 59u: goto L_00418494;
    case 60u: goto L_004184A8;
    case 61u: goto L_004184C0;
    case 62u: goto L_004184CC;
    case 63u: goto L_004184F0;
    case 64u: goto L_00418528;
    case 65u: goto L_0041853C;
    case 66u: goto L_00418544;
    case 67u: goto L_00418558;
    case 68u: goto L_004185A0;
    case 69u: goto L_004185A8;
    case 70u: goto L_004185B8;
    case 71u: goto L_004185E0;
    case 72u: goto L_004185F8;
    case 73u: goto L_00418610;
    case 74u: goto L_00418628;
    case 75u: goto L_00418640;
    case 76u: goto L_00418658;
    case 77u: goto L_00418670;
    case 78u: goto L_0041869C;
    case 79u: goto L_004186B8;
    case 80u: goto L_004186C4;
    case 81u: goto L_004186DC;
    case 82u: goto L_004186EC;
    case 83u: goto L_00418704;
    case 84u: goto L_0041870C;
    case 85u: goto L_00418734;
    case 86u: goto L_00418758;
    case 87u: goto L_00418770;
    case 88u: goto L_0041879C;
    case 89u: goto L_004187B8;
    case 90u: goto L_004187D0;
    case 91u: goto L_00418828;
    case 92u: goto L_00418840;
    case 93u: goto L_00418858;
    case 94u: goto L_004188A8;
    case 95u: goto L_004188CC;
    case 96u: goto L_004188DC;
    case 97u: goto L_004188E4;
    case 98u: goto L_004188FC;
    case 99u: goto L_00418900;
    case 100u: goto L_00418950;
    case 101u: goto L_004189A0;
    case 102u: goto L_004189D4;
    case 103u: goto L_00418A50;
    case 104u: goto L_00418A64;
    case 105u: goto L_00418A80;
    case 106u: goto L_00418AA8;
    case 107u: goto L_00418AD4;
    case 108u: goto L_00418AE8;
    case 109u: goto L_00418AF8;
    case 110u: goto L_00418B08;
    case 111u: goto L_00418B1C;
    case 112u: goto L_00418B24;
    case 113u: goto L_00418B88;
    case 114u: goto L_00418BE4;
    case 115u: goto L_00418BF0;
    case 116u: goto L_00418BF8;
    case 117u: goto L_00418C18;
    case 118u: goto L_00418C34;
    case 119u: goto L_00418C40;
    case 120u: goto L_00418C48;
    case 121u: goto L_00418C60;
    case 122u: goto L_00418C84;
    case 123u: goto L_00418C9C;
    case 124u: goto L_00418CB8;
    case 125u: goto L_00418CD4;
    case 126u: goto L_00418CE0;
    case 127u: goto L_00418CFC;
    case 128u: goto L_00418D08;
    case 129u: goto L_00418D24;
    case 130u: goto L_00418D30;
    case 131u: goto L_00418D44;
    case 132u: goto L_00418D4C;
    case 133u: goto L_00418D60;
    case 134u: goto L_00418DB0;
    case 135u: goto L_00418DB8;
    case 136u: goto L_00418DC0;
    case 137u: goto L_00418DD8;
    case 138u: goto L_00418DEC;
    case 139u: goto L_00418E00;
    case 140u: goto L_00418E1C;
    case 141u: goto L_00418E24;
    case 142u: goto L_00418E38;
    case 143u: goto L_00418E40;
    case 144u: goto L_00418E60;
    case 145u: goto L_00418E78;
    case 146u: goto L_00418E98;
    case 147u: goto L_00418EB8;
    case 148u: goto L_00418ED8;
    case 149u: goto L_00418F04;
    case 150u: goto L_00418F14;
    case 151u: goto L_00418F38;
    case 152u: goto L_00418F48;
    case 153u: goto L_00418F50;
    case 154u: goto L_00418F60;
    case 155u: goto L_00418F88;
    case 156u: goto L_00418F9C;
    case 157u: goto L_00418FC0;
    case 158u: goto L_00418FD0;
    case 159u: goto L_00419008;
    case 160u: goto L_0041901C;
    case 161u: goto L_00419038;
    case 162u: goto L_00419044;
    case 163u: goto L_004190C8;
    case 164u: goto L_00419110;
    case 165u: goto L_00419120;
    case 166u: goto L_00419130;
    case 167u: goto L_0041913C;
    case 168u: goto L_00419144;
    case 169u: goto L_0041914C;
    case 170u: goto L_00419164;
    case 171u: goto L_0041916C;
    case 172u: goto L_00419198;
    case 173u: goto L_004191B4;
    case 174u: goto L_004191C0;
    case 175u: goto L_004191D8;
    case 176u: goto L_00419220;
    case 177u: goto L_00419228;
    case 178u: goto L_00419234;
    case 179u: goto L_00419248;
    case 180u: goto L_00419268;
    case 181u: goto L_0041927C;
    case 182u: goto L_00419288;
    case 183u: goto L_00419294;
    case 184u: goto L_004192A0;
    case 185u: goto L_004192A8;
    case 186u: goto L_004192D8;
    case 187u: goto L_004192EC;
    case 188u: goto L_00419308;
    case 189u: goto L_0041931C;
    case 190u: goto L_00419324;
    case 191u: goto L_00419338;
    case 192u: goto L_0041938C;
    case 193u: goto L_00419398;
    case 194u: goto L_004193AC;
    case 195u: goto L_004193C4;
    case 196u: goto L_004193E0;
    case 197u: goto L_004193F8;
    case 198u: goto L_0041940C;
    case 199u: goto L_00419414;
    case 200u: goto L_0041941C;
    case 201u: goto L_00419430;
    case 202u: goto L_00419448;
    case 203u: goto L_00419460;
    case 204u: goto L_00419478;
    case 205u: goto L_004194BC;
    case 206u: goto L_004194C8;
    case 207u: goto L_004194D4;
    case 208u: goto L_004194E4;
    case 209u: goto L_0041951C;
    case 210u: goto L_00419528;
    case 211u: goto L_00419534;
    case 212u: goto L_004195A8;
    case 213u: goto L_004195C0;
    case 214u: goto L_004195E4;
    case 215u: goto L_004195F4;
    case 216u: goto L_00419610;
    case 217u: goto L_00419660;
    case 218u: goto L_0041967C;
    case 219u: goto L_004196F0;
    case 220u: goto L_0041979C;
    case 221u: goto L_004197A4;
    case 222u: goto L_0041983C;
    case 223u: goto L_00419848;
    case 224u: goto L_00419854;
    case 225u: goto L_00419908;
    case 226u: goto L_0041991C;
    case 227u: goto L_00419924;
    case 228u: goto L_0041992C;
    case 229u: goto L_00419940;
    case 230u: goto L_00419958;
    case 231u: goto L_00419990;
    case 232u: goto L_004199A4;
    case 233u: goto L_004199AC;
    case 234u: goto L_004199B4;
    case 235u: goto L_004199C8;
    case 236u: goto L_004199E0;
    case 237u: goto L_00419A18;
    case 238u: goto L_00419A2C;
    case 239u: goto L_00419A34;
    case 240u: goto L_00419A3C;
    case 241u: goto L_00419A50;
    case 242u: goto L_00419A68;
    case 243u: goto L_00419AA0;
    case 244u: goto L_00419AB0;
    case 245u: goto L_00419AD4;
    case 246u: goto L_00419AE4;
    case 247u: goto L_00419B00;
    case 248u: goto L_00419B68;
    case 249u: goto L_00419BA0;
    case 250u: goto L_00419BE4;
    case 251u: goto L_00419BF8;
    case 252u: goto L_00419C18;
    case 253u: goto L_00419C34;
    case 254u: goto L_00419C40;
    case 255u: goto L_00419C48;
    case 256u: goto L_00419C60;
    case 257u: goto L_00419C7C;
    case 258u: goto L_00419CA0;
    case 259u: goto L_00419CA8;
    case 260u: goto L_00419D0C;
    case 261u: goto L_00419D20;
    case 262u: goto L_00419D30;
    case 263u: goto L_00419D48;
    case 264u: goto L_00419D60;
    case 265u: goto L_00419D7C;
    case 266u: goto L_00419D88;
    case 267u: goto L_00419DA0;
    case 268u: goto L_00419DE8;
    case 269u: goto L_00419E10;
    case 270u: goto L_00419E24;
    case 271u: goto L_00419E2C;
    case 272u: goto L_00419E34;
    case 273u: goto L_00419E48;
    case 274u: goto L_00419E60;
    case 275u: goto L_00419E78;
    case 276u: goto L_00419E90;
    case 277u: goto L_00419E98;
    case 278u: goto L_00419EAC;
    case 279u: goto L_00419EB4;
    case 280u: goto L_00419EC8;
    case 281u: goto L_00419EE0;
    case 282u: goto L_00419EFC;
    case 283u: goto L_00419F08;
    case 284u: goto L_00419F20;
    case 285u: goto L_00419F58;
    case 286u: goto L_00419F70;
    case 287u: goto L_00419F8C;
    case 288u: goto L_00419F98;
    case 289u: goto L_00419FB0;
    case 290u: goto L_00419FFC;
    case 291u: goto L_0041A008;
    case 292u: goto L_0041A028;
    case 293u: goto L_0041A050;
    case 294u: goto L_0041A070;
    case 295u: goto L_0041A080;
    case 296u: goto L_0041A09C;
    case 297u: goto L_0041A0A8;
    case 298u: goto L_0041A0C0;
    case 299u: goto L_0041A0C8;
    case 300u: goto L_0041A0D8;
    case 301u: goto L_0041A0E0;
    case 302u: goto L_0041A0F0;
    case 303u: goto L_0041A114;
    case 304u: goto L_0041A14C;
    case 305u: goto L_0041A154;
    case 306u: goto L_0041A15C;
    case 307u: goto L_0041A170;
    case 308u: goto L_0041A184;
    case 309u: goto L_0041A1A0;
    case 310u: goto L_0041A1BC;
    case 311u: goto L_0041A1F0;
    case 312u: goto L_0041A204;
    case 313u: goto L_0041A20C;
    case 314u: goto L_0041A214;
    case 315u: goto L_0041A228;
    case 316u: goto L_0041A240;
    case 317u: goto L_0041A258;
    case 318u: goto L_0041A268;
    case 319u: goto L_0041A284;
    case 320u: goto L_0041A290;
    case 321u: goto L_0041A2A8;
    case 322u: goto L_0041A30C;
    case 323u: goto L_0041A318;
    case 324u: goto L_0041A324;
    case 325u: goto L_0041A348;
    case 326u: goto L_0041A3B0;
    case 327u: goto L_0041A3B8;
    case 328u: goto L_0041A3D4;
    case 329u: goto L_0041A3E0;
    case 330u: goto L_0041A3F8;
    case 331u: goto L_0041A424;
    case 332u: goto L_0041A444;
    case 333u: goto L_0041A468;
    case 334u: goto L_0041A478;
    case 335u: goto L_0041A4A4;
    case 336u: goto L_0041A50C;
    case 337u: goto L_0041A528;
    case 338u: goto L_0041A53C;
    case 339u: goto L_0041A544;
    case 340u: goto L_0041A54C;
    case 341u: goto L_0041A560;
    case 342u: goto L_0041A578;
    case 343u: goto L_0041A590;
    case 344u: goto L_0041A5A8;
    case 345u: goto L_0041A5B0;
    case 346u: goto L_0041A5B8;
    case 347u: goto L_0041A5CC;
    case 348u: goto L_0041A5D4;
    case 349u: goto L_0041A5E8;
    case 350u: goto L_0041A608;
    case 351u: goto L_0041A624;
    case 352u: goto L_0041A630;
    case 353u: goto L_0041A638;
    case 354u: goto L_0041A650;
    case 355u: goto L_0041A688;
    case 356u: goto L_0041A690;
    case 357u: goto L_0041A6A8;
    case 358u: goto L_0041A738;
    case 359u: goto L_0041A754;
    case 360u: goto L_0041A760;
    case 361u: goto L_0041A778;
    case 362u: goto L_0041A780;
    case 363u: goto L_0041A79C;
    case 364u: goto L_0041A7A8;
    case 365u: goto L_0041A7C0;
    case 366u: goto L_0041A7F8;
    case 367u: goto L_0041A808;
    case 368u: goto L_0041A874;
    case 369u: goto L_0041A8A0;
    case 370u: goto L_0041A8E0;
    case 371u: goto L_0041A904;
    case 372u: goto L_0041A914;
    case 373u: goto L_0041A91C;
    case 374u: goto L_0041A938;
    case 375u: goto L_0041A9A4;
    case 376u: goto L_0041A9D0;
    case 377u: goto L_0041A9E8;
    case 378u: goto L_0041AA00;
    case 379u: goto L_0041AA18;
    case 380u: goto L_0041AA34;
    case 381u: goto L_0041AA60;
    case 382u: goto L_0041AA74;
    case 383u: goto L_0041AA8C;
    case 384u: goto L_0041AAA4;
    case 385u: goto L_0041AAE0;
    case 386u: goto L_0041AB10;
    case 387u: goto L_0041AB30;
    case 388u: goto L_0041AB38;
    case 389u: goto L_0041AB4C;
    case 390u: goto L_0041AB64;
    case 391u: goto L_0041AB70;
    case 392u: goto L_0041AB98;
    case 393u: goto L_0041ABB8;
    case 394u: goto L_0041ABDC;
    case 395u: goto L_0041ABEC;
    case 396u: goto L_0041AC08;
    case 397u: goto L_0041AC38;
    case 398u: goto L_0041AC48;
    case 399u: goto L_0041AC64;
    case 400u: goto L_0041AC8C;
    case 401u: goto L_0041AC9C;
    case 402u: goto L_0041ACE8;
    case 403u: goto L_0041AD00;
    case 404u: goto L_0041AD08;
    case 405u: goto L_0041AD68;
    case 406u: goto L_0041AD74;
    case 407u: goto L_0041ADC0;
    case 408u: goto L_0041ADDC;
    case 409u: goto L_0041ADE8;
    case 410u: goto L_0041AE00;
    case 411u: goto L_0041AE28;
    case 412u: goto L_0041AE4C;
    case 413u: goto L_0041AE5C;
    case 414u: goto L_0041AE78;
    case 415u: goto L_0041AED8;
    case 416u: goto L_0041AEE0;
    case 417u: goto L_0041AEEC;
    case 418u: goto L_0041AF00;
    case 419u: goto L_0041AF28;
    case 420u: goto L_0041AF3C;
    case 421u: goto L_0041AF58;
    case 422u: goto L_0041AF7C;
    case 423u: goto L_0041AF8C;
    case 424u: goto L_0041AFA8;
    case 425u: goto L_0041B010;
    case 426u: goto L_0041B054;
    case 427u: goto L_0041B090;
    case 428u: goto L_0041B0A4;
    case 429u: goto L_0041B0D0;
    case 430u: goto L_0041B0E4;
    case 431u: goto L_0041B118;
    case 432u: goto L_0041B128;
    case 433u: goto L_0041B154;
    case 434u: goto L_0041B160;
    case 435u: goto L_0041B16C;
    case 436u: goto L_0041B178;
    case 437u: goto L_0041B188;
    case 438u: goto L_0041B198;
    case 439u: goto L_0041B1A4;
    case 440u: goto L_0041B1B0;
    case 441u: goto L_0041B1E0;
    case 442u: goto L_0041B214;
    case 443u: goto L_0041B220;
    case 444u: goto L_0041B22C;
    case 445u: goto L_0041B264;
    case 446u: goto L_0041B280;
    case 447u: goto L_0041B2A0;
    case 448u: goto L_0041B2B8;
    case 449u: goto L_0041B2C4;
    case 450u: goto L_0041B2D4;
    case 451u: goto L_0041B2E0;
    case 452u: goto L_0041B2EC;
    case 453u: goto L_0041B30C;
    case 454u: goto L_0041B328;
    case 455u: goto L_0041B340;
    case 456u: goto L_0041B348;
    case 457u: goto L_0041B378;
    case 458u: goto L_0041B3A8;
    case 459u: goto L_0041B3CC;
    case 460u: goto L_0041B3E4;
    case 461u: goto L_0041B3F4;
    case 462u: goto L_0041B408;
    case 463u: goto L_0041B420;
    case 464u: goto L_0041B438;
    case 465u: goto L_0041B46C;
    case 466u: goto L_0041B488;
    case 467u: goto L_0041B4E4;
    case 468u: goto L_0041B508;
    case 469u: goto L_0041B51C;
    case 470u: goto L_0041B52C;
    case 471u: goto L_0041B544;
    case 472u: goto L_0041B55C;
    case 473u: goto L_0041B584;
    case 474u: goto L_0041B5A0;
    case 475u: goto L_0041B5D0;
    case 476u: goto L_0041B5E8;
    case 477u: goto L_0041B608;
    case 478u: goto L_0041B620;
    case 479u: goto L_0041B638;
    case 480u: goto L_0041B650;
    case 481u: goto L_0041B670;
    case 482u: goto L_0041B688;
    case 483u: goto L_0041B6A0;
    case 484u: goto L_0041B6B8;
    case 485u: goto L_0041B6C0;
    case 486u: goto L_0041B6D4;
    case 487u: goto L_0041B6DC;
    case 488u: goto L_0041B6E4;
    case 489u: goto L_0041B6EC;
    case 490u: goto L_0041B704;
    case 491u: goto L_0041B718;
    case 492u: goto L_0041B720;
    case 493u: goto L_0041B72C;
    case 494u: goto L_0041B738;
    case 495u: goto L_0041B744;
    case 496u: goto L_0041B770;
    case 497u: goto L_0041B7CC;
    case 498u: goto L_0041B7F4;
    case 499u: goto L_0041B80C;
    case 500u: goto L_0041B818;
    case 501u: goto L_0041B830;
    case 502u: goto L_0041B850;
    case 503u: goto L_0041B860;
    case 504u: goto L_0041B868;
    case 505u: goto L_0041B878;
    case 506u: goto L_0041B884;
    case 507u: goto L_0041B8E8;
    case 508u: goto L_0041B914;
    case 509u: goto L_0041B940;
    case 510u: goto L_0041B980;
    case 511u: goto L_0041B994;
    case 512u: goto L_0041B99C;
    case 513u: goto L_0041B9A4;
    case 514u: goto L_0041B9B4;
    case 515u: goto L_0041B9C0;
    case 516u: goto L_0041B9CC;
    case 517u: goto L_0041B9E0;
    case 518u: goto L_0041B9FC;
    case 519u: goto L_0041BA04;
    case 520u: goto L_0041BA10;
    case 521u: goto L_0041BA1C;
    case 522u: goto L_0041BA28;
    case 523u: goto L_0041BA3C;
    case 524u: goto L_0041BA44;
    case 525u: goto L_0041BA50;
    case 526u: goto L_0041BA5C;
    case 527u: goto L_0041BA68;
    case 528u: goto L_0041BA74;
    case 529u: goto L_0041BA80;
    case 530u: goto L_0041BA8C;
    case 531u: goto L_0041BA98;
    case 532u: goto L_0041BAA4;
    case 533u: goto L_0041BAB4;
    case 534u: goto L_0041BAD0;
    case 535u: goto L_0041BAD8;
    case 536u: goto L_0041BAEC;
    case 537u: goto L_0041BAF8;
    case 538u: goto L_0041BB08;
    case 539u: goto L_0041BB14;
    case 540u: goto L_0041BB20;
    case 541u: goto L_0041BB40;
    case 542u: goto L_0041BB80;
    case 543u: goto L_0041BB88;
    case 544u: goto L_0041BBB8;
    case 545u: goto L_0041BBC4;
    case 546u: goto L_0041BBF0;
    case 547u: goto L_0041BC04;
    case 548u: goto L_0041BC34;
    case 549u: goto L_0041BC60;
    case 550u: goto L_0041BC74;
    case 551u: goto L_0041BC98;
    case 552u: goto L_0041BCBC;
    case 553u: goto L_0041BCCC;
    case 554u: goto L_0041BCE4;
    case 555u: goto L_0041BD10;
    case 556u: goto L_0041BD44;
    case 557u: goto L_0041BD60;
    case 558u: goto L_0041BD68;
    case 559u: goto L_0041BD88;
    case 560u: goto L_0041BD98;
    case 561u: goto L_0041BDC0;
    case 562u: goto L_0041BDF8;
    case 563u: goto L_0041BE34;
    case 564u: goto L_0041BE44;
    case 565u: goto L_0041BE4C;
    case 566u: goto L_0041BE58;
    case 567u: goto L_0041BE80;
    case 568u: goto L_0041BEB8;
    case 569u: goto L_0041BED8;
    case 570u: goto L_0041BEF4;
    case 571u: goto L_0041BF0C;
    case 572u: goto L_0041BF28;
    case 573u: goto L_0041BF48;
    case 574u: goto L_0041BF58;
    case 575u: goto L_0041BF74;
    case 576u: goto L_0041BF8C;
    case 577u: goto L_0041BFAC;
    case 578u: goto L_0041BFB8;
    case 579u: goto L_0041BFC4;
    default: bad_entry(c, 0x00418000u); return;
    }
L_00418000:
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00418134; } }
    c.budget -= 1;
L_00418010:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 73u));
    c.budget -= 1;
L_00418014:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 71u)));  goto L_004180F4; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_0041803C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418038u);  if (depth < kMaxDepth) unit_00C6(c, 72u, depth + 1u); else { c.pc = 0x004185F8u; return; } if (c.pc != 0x00418038u) [[unlikely]] return; }
L_00418038:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0041803C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418048u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00C7(c, 193u, depth + 1u); else { c.pc = 0x0041D4F0u; return; } if (c.pc != 0x00418048u) [[unlikely]] return; }
L_00418048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418050u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C7(c, 189u, depth + 1u); else { c.pc = 0x0041D488u; return; } if (c.pc != 0x00418050u) [[unlikely]] return; }
L_00418050:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[17].w[0] << 11);  if (t) { goto L_0041806C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418068u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_00C7(c, 209u, depth + 1u); else { c.pc = 0x0041D690u; return; } if (c.pc != 0x00418068u) [[unlikely]] return; }
L_00418068:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0041806C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041807Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 193u, depth + 1u); else { c.pc = 0x0041D4F0u; return; } if (c.pc != 0x0041807Cu) [[unlikely]] return; }
L_0041807C:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63488ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_0041809C; }
    st32((c.r[16].w[0] + 16u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
L_0041809C:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_004180B4; }
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
L_004180B4:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004180D4; } }
    set32(c.r[2], c.r[17].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 11);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 4;
L_004180D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004180DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 461u, depth + 1u); else { c.pc = 0x00417710u; return; } if (c.pc != 0x004180DCu) [[unlikely]] return; }
L_004180DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004180F0; } }
    c.budget -= 1;
L_004180E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004180F0u);  if (depth < kMaxDepth) unit_00C6(c, 72u, depth + 1u); else { c.pc = 0x004185F8u; return; } if (c.pc != 0x004180F0u) [[unlikely]] return; }
L_004180F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 71u)));
    c.budget -= 1;
L_004180F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(0u));  goto L_00418100; }
L_00418100:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 1;
L_00418104:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00418138; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 73u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00418138; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 69u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00418138; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418134u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 510u, depth + 1u); else { c.pc = 0x00417AF0u; return; } if (c.pc != 0x00418134u) [[unlikely]] return; }
L_00418134:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00418138:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00418150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418160u);  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x00418160u) [[unlikely]] return; }
L_00418160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418168u);  if (depth < kMaxDepth) unit_00C6(c, 17u, depth + 1u); else { c.pc = 0x00418178u; return; } if (c.pc != 0x00418168u) [[unlikely]] return; }
L_00418168:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00418640; }
L_00418178:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041819Cu); set32(c.r[4], c.r[19].w[0] - 15100u);  if (depth < kMaxDepth) unit_00C6(c, 73u, depth + 1u); else { c.pc = 0x00418610u; return; } if (c.pc != 0x0041819Cu) [[unlikely]] return; }
L_0041819C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_004181D8; } }
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] - 15088u);
    set32(c.r[17], 0u + 39u);
    c.budget -= 3;
L_004181B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_004181C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004181C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 529u, depth + 1u); else { c.pc = 0x00417F18u; return; } if (c.pc != 0x004181C4u) [[unlikely]] return; }
L_004181C4:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_004181C8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004181B0u | kUnwind; return; } goto L_004181B0; } }
    set32(c.r[2], c.r[19].w[0] - 15100u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 2;
L_004181D8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004181F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418208u);  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x00418208u) [[unlikely]] return; }
L_00418208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418210u);  if (depth < kMaxDepth) unit_00C6(c, 24u, depth + 1u); else { c.pc = 0x00418220u; return; } if (c.pc != 0x00418210u) [[unlikely]] return; }
L_00418210:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00418640; }
L_00418220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C7(c, 202u, depth); }
L_00418240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418264u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x00418264u) [[unlikely]] return; }
L_00418264:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418274u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 29u, depth + 1u); else { c.pc = 0x00418298u; return; } if (c.pc != 0x00418274u) [[unlikely]] return; }
L_00418274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041827Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 75u, depth + 1u); else { c.pc = 0x00418640u; return; } if (c.pc != 0x0041827Cu) [[unlikely]] return; }
L_0041827C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00418298:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 24u), c.r[6].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[5].w[0]);  c.pc = t; return; }
L_004182A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004182C4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x004182C4u) [[unlikely]] return; }
L_004182C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004182D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 34u, depth + 1u); else { c.pc = 0x004182F0u; return; } if (c.pc != 0x004182D0u) [[unlikely]] return; }
L_004182D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004182D8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 75u, depth + 1u); else { c.pc = 0x00418640u; return; } if (c.pc != 0x004182D8u) [[unlikely]] return; }
L_004182D8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004182F0:
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00418300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418314u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x00418314u) [[unlikely]] return; }
L_00418314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041831Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 39u, depth + 1u); else { c.pc = 0x00418338u; return; } if (c.pc != 0x0041831Cu) [[unlikely]] return; }
L_0041831C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418324u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 75u, depth + 1u); else { c.pc = 0x00418640u; return; } if (c.pc != 0x00418324u) [[unlikely]] return; }
L_00418324:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00418338:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  c.pc = t; return; }
L_00418340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418354u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x00418354u) [[unlikely]] return; }
L_00418354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041835Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 44u, depth + 1u); else { c.pc = 0x00418378u; return; } if (c.pc != 0x0041835Cu) [[unlikely]] return; }
L_0041835C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418364u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 75u, depth + 1u); else { c.pc = 0x00418640u; return; } if (c.pc != 0x00418364u) [[unlikely]] return; }
L_00418364:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00418378:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  c.pc = t; return; }
L_00418380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418394u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x00418394u) [[unlikely]] return; }
L_00418394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041839Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 49u, depth + 1u); else { c.pc = 0x004183B8u; return; } if (c.pc != 0x0041839Cu) [[unlikely]] return; }
L_0041839C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004183A4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 75u, depth + 1u); else { c.pc = 0x00418640u; return; } if (c.pc != 0x004183A4u) [[unlikely]] return; }
L_004183A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004183B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C7(c, 209u, depth); }
L_004183D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004183ECu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x004183ECu) [[unlikely]] return; }
L_004183EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004183F8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 53u, depth + 1u); else { c.pc = 0x00418410u; return; } if (c.pc != 0x004183F8u) [[unlikely]] return; }
L_004183F8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00418640; }
L_00418410:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00418418:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
L_00418430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041844Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x0041844Cu) [[unlikely]] return; }
L_0041844C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418458u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 58u, depth + 1u); else { c.pc = 0x00418470u; return; } if (c.pc != 0x00418458u) [[unlikely]] return; }
L_00418458:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00418640; }
L_00418470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418494u); st32((c.r[18].w[0] + 4u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 71u, depth + 1u); else { c.pc = 0x004185E0u; return; } if (c.pc != 0x00418494u) [[unlikely]] return; }
L_00418494:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004184A8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004184A8u) [[unlikely]] return; }
L_004184A8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004184C0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004184C0u) [[unlikely]] return; }
L_004184C0:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004184CCu); st32((c.r[18].w[0] + 64u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 72u, depth + 1u); else { c.pc = 0x004185F8u; return; } if (c.pc != 0x004184CCu) [[unlikely]] return; }
L_004184CC:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004184F0:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 14;
L_00418528:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041853Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x0041853Cu) [[unlikely]] return; }
L_0041853C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418544u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 67u, depth + 1u); else { c.pc = 0x00418558u; return; } if (c.pc != 0x00418544u) [[unlikely]] return; }
L_00418544:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00418640; }
L_00418558:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_004185CC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_004185CC; }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[3].w[0] - 15100u);
    set32(c.r[18], 0u + 1u);
    c.budget -= 6;
L_004185A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004185A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 73u, depth + 1u); else { c.pc = 0x00418610u; return; } if (c.pc != 0x004185A8u) [[unlikely]] return; }
L_004185A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004185BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004185B8u);  if (depth < kMaxDepth) unit_00C5(c, 529u, depth + 1u); else { c.pc = 0x00417F18u; return; } if (c.pc != 0x004185B8u) [[unlikely]] return; }
L_004185B8:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_004185BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 69u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004185A0u | kUnwind; return; } goto L_004185A0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004185CC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004185E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 32u, depth); }
L_004185F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 33u, depth); }
L_00418610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 356u, depth); }
L_00418628:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 34u, depth); }
L_00418640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_00418658:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_00418670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] - 11248u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041869Cu); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_00DD(c, 36u, depth + 1u); else { c.pc = 0x004745D8u; return; } if (c.pc != 0x0041869Cu) [[unlikely]] return; }
L_0041869C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] - 11232u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], 0u + 232u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004186B8u); set32(c.r[16], c.r[16].w[0] - 31144u);  if (depth < kMaxDepth) unit_00DD(c, 36u, depth + 1u); else { c.pc = 0x004745D8u; return; } if (c.pc != 0x004186B8u) [[unlikely]] return; }
L_004186B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004186C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 216u, depth + 1u); else { c.pc = 0x0041D7A8u; return; } if (c.pc != 0x004186C4u) [[unlikely]] return; }
L_004186C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19584u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004186DCu); set32(c.r[5], c.r[5].w[0] + 7032u);  if (depth < kMaxDepth) unit_00C7(c, 133u, depth + 1u); else { c.pc = 0x0041CC58u; return; } if (c.pc != 0x004186DCu) [[unlikely]] return; }
L_004186DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004186ECu); c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_00C7(c, 216u, depth + 1u); else { c.pc = 0x0041D7A8u; return; } if (c.pc != 0x004186ECu) [[unlikely]] return; }
L_004186EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[16], c.r[16].w[0] + 19592u);
    set32(c.r[5], c.r[5].w[0] - 4120u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418704u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 133u, depth + 1u); else { c.pc = 0x0041CC58u; return; } if (c.pc != 0x00418704u) [[unlikely]] return; }
L_00418704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041870Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 151u, depth + 1u); else { c.pc = 0x0041CEC0u; return; } if (c.pc != 0x0041870Cu) [[unlikely]] return; }
L_0041870C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00418750; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418734u); set32(c.r[7], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C8(c, 58u, depth + 1u); else { c.pc = 0x00420678u; return; } if (c.pc != 0x00418734u) [[unlikely]] return; }
L_00418734:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C8(c, 59u, depth); }
L_00418750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418758u);  if (depth < kMaxDepth) unit_00C8(c, 58u, depth + 1u); else { c.pc = 0x00420678u; return; } if (c.pc != 0x00418758u) [[unlikely]] return; }
L_00418758:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C8(c, 59u, depth); }
L_00418770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_004187A8; } }
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041879Cu); set32(c.r[6], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_00C8(c, 46u, depth + 1u); else { c.pc = 0x004204F0u; return; } if (c.pc != 0x0041879Cu) [[unlikely]] return; }
L_0041879C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004187B8; } }
    c.budget -= 1;
L_004187A8:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004187B8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 46u, depth + 1u); else { c.pc = 0x004204F0u; return; } if (c.pc != 0x004187B8u) [[unlikely]] return; }
L_004187B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004187D0:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    st32((c.r[2].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 22;
L_00418828:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_00418840:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418858u); set32(c.r[4], c.r[4].w[0] - 30680u);  if (depth < kMaxDepth) unit_00C7(c, 216u, depth + 1u); else { c.pc = 0x0041D7A8u; return; } if (c.pc != 0x00418858u) [[unlikely]] return; }
L_00418858:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[4].w[0] + 19616u);
    set32(c.r[5], c.r[5].w[0] + 7032u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C7(c, 133u, depth); }
L_004188A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004188CCu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x004188CCu) [[unlikely]] return; }
L_004188CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004188DCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 99u, depth + 1u); else { c.pc = 0x00418900u; return; } if (c.pc != 0x004188DCu) [[unlikely]] return; }
L_004188DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004188E4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 35u, depth + 1u); else { c.pc = 0x0042C7C8u; return; } if (c.pc != 0x004188E4u) [[unlikely]] return; }
L_004188E4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004188FC:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_00418900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] + 63u);
    set32(c.r[3], 0u - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[5].w[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[6].w[0] - c.r[2].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 13;
    { const bool t = c.r[19].sd[0] < 0; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_00418944; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_00418948; }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00418950; } }
L_00418944:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_00418948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 19712u);  if (t) { goto L_00418998; } }
L_00418950:
    c.r[2].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_00418988; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13464u)));
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00418950u | kUnwind; return; } goto L_00418950; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_00418988:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[4].w[0] << 1);  if (t) { goto L_004189A8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 19752u);
    c.budget -= 2;
L_00418998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004189A0u);  if (depth < kMaxDepth) unit_00CB(c, 62u, depth + 1u); else { c.pc = 0x0042D298u; return; } if (c.pc != 0x004189A0u) [[unlikely]] return; }
L_004189A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00418BFC; } }
L_004189A8:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], 0u + 200u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[17], c.r[17].w[0] + 13464u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004189D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x004189D4u) [[unlikely]] return; }
L_004189D4:
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[2], c.r[19].w[0] << 6);
    set32(c.r[10], 0u + 36u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[8], 0u + 8192u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[9], 0u + 8288u);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[6], 0u + 36u);
    set32(c.r[2], c.r[2].w[0] << 6);
    st32((c.r[17].w[0] + 44u), c.r[16].w[0]);
    set32(c.r[5], c.r[18].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] - 292u);
    set32(c.r[5], c.r[5].w[0] + 1755u);
    c.r[7].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    if (c.r[7].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    st32((c.r[17].w[0] + 48u), c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 11);
    st32((c.r[17].w[0] + 52u), c.r[9].w[0]);
    set32(c.r[7], c.r[3].w[0] + c.r[10].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[10].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418A50u); st32((c.r[17].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_00C9(c, 104u, depth + 1u); else { c.pc = 0x00424E78u; return; } if (c.pc != 0x00418A50u) [[unlikely]] return; }
L_00418A50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00418B00; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418A64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 417u, depth + 1u); else { c.pc = 0x00417338u; return; } if (c.pc != 0x00418A64u) [[unlikely]] return; }
L_00418A64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00418B00; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00418AC0; } }
    set32(c.r[18], c.r[17].w[0] + 24u);
    set32(c.r[6], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
L_00418A80:
    set32(c.r[5], ld32((c.r[17].w[0] + 48u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418AA8u); set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_00C9(c, 104u, depth + 1u); else { c.pc = 0x00424E78u; return; } if (c.pc != 0x00418AA8u) [[unlikely]] return; }
L_00418AA8:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_00418B00; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00418A80u | kUnwind; return; } goto L_00418A80; }
L_00418AC0:
    set32(c.r[16], c.r[17].w[0] + 24u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418AD4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 247u, depth + 1u); else { c.pc = 0x00415C48u; return; } if (c.pc != 0x00418AD4u) [[unlikely]] return; }
L_00418AD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00418B00; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418AE8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 222u, depth + 1u); else { c.pc = 0x00415960u; return; } if (c.pc != 0x00418AE8u) [[unlikely]] return; }
L_00418AE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00418B00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418AF8u); set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  if (depth < kMaxDepth) unit_00C8(c, 122u, depth + 1u); else { c.pc = 0x00420D80u; return; } if (c.pc != 0x00418AF8u) [[unlikely]] return; }
L_00418AF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_00418B10; } }
L_00418B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418B08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 133u, depth + 1u); else { c.pc = 0x00418D60u; return; } if (c.pc != 0x00418B08u) [[unlikely]] return; }
L_00418B08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00418BFC; } }
L_00418B10:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418B1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 140u, depth + 1u); else { c.pc = 0x00420F40u; return; } if (c.pc != 0x00418B1Cu) [[unlikely]] return; }
L_00418B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418B24u);  if (depth < kMaxDepth) unit_00CB(c, 32u, depth + 1u); else { c.pc = 0x0042C790u; return; } if (c.pc != 0x00418B24u) [[unlikely]] return; }
L_00418B24:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[1].d[0] = c.r[1].d[0] | 39321ull;
    c.f[1] = c.r[1].w[0];
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[4], c.r[2].w[0] + 2047u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[5], ld32((c.r[6].w[0] - 11184u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    st32((c.r[17].w[0] + 56u), c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.budget -= 22;
    { const bool t = c.r[19].sd[0] <= 0; st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00418BA4; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], 0u - 128u);
    set32(c.r[2], c.r[17].w[0] + 66u);
    c.budget -= 3;
L_00418B88:
    set32(c.r[16], c.r[16].w[0] - 1u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00418B88u | kUnwind; return; } goto L_00418B88; } }
L_00418BA4:
    set32(c.r[16], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 70u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 108u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 88u), 0u);
    st32((c.r[17].w[0] + 92u), 0u);
    st16((c.r[17].w[0] + 96u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 100u), 0u);
    st16((c.r[17].w[0] + 104u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 106u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 109u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[17].w[0] + 114u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418BE4u); st32((c.r[17].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_00C6(c, 365u, depth + 1u); else { c.pc = 0x0041A7C0u; return; } if (c.pc != 0x00418BE4u) [[unlikely]] return; }
L_00418BE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418BF0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C6(c, 276u, depth + 1u); else { c.pc = 0x00419E90u; return; } if (c.pc != 0x00418BF0u) [[unlikely]] return; }
L_00418BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418BF8u); st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_00CB(c, 33u, depth + 1u); else { c.pc = 0x0042C7A8u; return; } if (c.pc != 0x00418BF8u) [[unlikely]] return; }
L_00418BF8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00418BFC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00418C18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418C34u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x00418C34u) [[unlikely]] return; }
L_00418C34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418C40u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 121u, depth + 1u); else { c.pc = 0x00418C60u; return; } if (c.pc != 0x00418C40u) [[unlikely]] return; }
L_00418C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418C48u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 35u, depth + 1u); else { c.pc = 0x0042C7C8u; return; } if (c.pc != 0x00418C48u) [[unlikely]] return; }
L_00418C48:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00418C60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], c.r[5].w[0] - 1024u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 1024u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418C84u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00C6(c, 99u, depth + 1u); else { c.pc = 0x00418900u; return; } if (c.pc != 0x00418C84u) [[unlikely]] return; }
L_00418C84:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00418CA0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418C9Cu); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_00C8(c, 297u, depth + 1u); else { c.pc = 0x004223B8u; return; } if (c.pc != 0x00418C9Cu) [[unlikely]] return; }
L_00418C9C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00418CA0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00418CB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] - 11176u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00418CD4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00418CD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00418CD4u) [[unlikely]] return; }
L_00418CD4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00418CE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] - 11172u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00418CFC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00418CFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00418CFCu) [[unlikely]] return; }
L_00418CFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00418D08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] - 11164u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00418D24; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00418D24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00418D24u) [[unlikely]] return; }
L_00418D24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00418D30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418D44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x00418D44u) [[unlikely]] return; }
L_00418D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418D4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 133u, depth + 1u); else { c.pc = 0x00418D60u; return; } if (c.pc != 0x00418D4Cu) [[unlikely]] return; }
L_00418D4C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_00418D60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_00418DA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 19800u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_00418DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418DB0u);  if (depth < kMaxDepth) unit_00C6(c, 124u, depth + 1u); else { c.pc = 0x00418CB8u; return; } if (c.pc != 0x00418DB0u) [[unlikely]] return; }
L_00418DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418DB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 126u, depth + 1u); else { c.pc = 0x00418CE0u; return; } if (c.pc != 0x00418DB8u) [[unlikely]] return; }
L_00418DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418DC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 128u, depth + 1u); else { c.pc = 0x00418D08u; return; } if (c.pc != 0x00418DC0u) [[unlikely]] return; }
L_00418DC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_00418DDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418DD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 191u, depth + 1u); else { c.pc = 0x00419338u; return; } if (c.pc != 0x00418DD8u) [[unlikely]] return; }
L_00418DD8:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_00418DDC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_00418DF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418DECu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00C5(c, 223u, depth + 1u); else { c.pc = 0x00415978u; return; } if (c.pc != 0x00418DECu) [[unlikely]] return; }
L_00418DEC:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00418DF0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 8u)));  goto L_00418E04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418E00u); st32((c.r[17].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00C5(c, 256u, depth + 1u); else { c.pc = 0x00415DC8u; return; } if (c.pc != 0x00418E00u) [[unlikely]] return; }
L_00418E00:
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_00418E04:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00418E24; } }
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418E1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 500u, depth + 1u); else { c.pc = 0x00417A20u; return; } if (c.pc != 0x00418E1Cu) [[unlikely]] return; }
L_00418E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418E24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 424u, depth + 1u); else { c.pc = 0x004173C8u; return; } if (c.pc != 0x00418E24u) [[unlikely]] return; }
L_00418E24:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00418E38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418E38u); st32((c.r[17].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_00C8(c, 135u, depth + 1u); else { c.pc = 0x00420EC0u; return; } if (c.pc != 0x00418E38u) [[unlikely]] return; }
L_00418E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418E40u);  if (depth < kMaxDepth) unit_00CB(c, 32u, depth + 1u); else { c.pc = 0x0042C790u; return; } if (c.pc != 0x00418E40u) [[unlikely]] return; }
L_00418E40:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));  goto L_00418E64; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00418E60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00418E60u) [[unlikely]] return; }
L_00418E60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 1;
L_00418E64:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00418EF0; } }
    set32(c.r[18], c.r[17].w[0] + 128u);
    set32(c.r[16], c.r[17].w[0] + 120u);
    c.budget -= 3;
L_00418E78:
    set32(c.r[3], ld32((c.r[16].w[0] - 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00418E98; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0] - 96u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00418E98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00418E98u) [[unlikely]] return; }
L_00418E98:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_00418EBC; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00418EB8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00418EB8u) [[unlikely]] return; }
L_00418EB8:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00418EBC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));  goto L_00418EDC; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[18].w[0]), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00418ED8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00418ED8u) [[unlikely]] return; }
L_00418ED8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 1;
L_00418EDC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00418E78u | kUnwind; return; } goto L_00418E78; } }
L_00418EF0:
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00418F08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418F04u); st32((c.r[17].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_00CA(c, 246u, depth + 1u); else { c.pc = 0x0042A198u; return; } if (c.pc != 0x00418F04u) [[unlikely]] return; }
L_00418F04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00418F08:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418F14u); set32(c.r[6], 0u + 200u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00418F14u) [[unlikely]] return; }
L_00418F14:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00CB(c, 33u, depth); }
L_00418F38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418F48u);  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x00418F48u) [[unlikely]] return; }
L_00418F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418F50u);  if (depth < kMaxDepth) unit_00C6(c, 154u, depth + 1u); else { c.pc = 0x00418F60u; return; } if (c.pc != 0x00418F50u) [[unlikely]] return; }
L_00418F50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_00418F60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 13464u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_00418F88:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00418FA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418F9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 133u, depth + 1u); else { c.pc = 0x00418D60u; return; } if (c.pc != 0x00418F9Cu) [[unlikely]] return; }
L_00418F9C:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00418FA0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 200u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00418F88u | kUnwind; return; } goto L_00418F88; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00418FC0:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_00418FD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0041902C; } }
    set32(c.r[17], c.r[16].w[0] + 24u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
L_00419008:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041901Cu); set32(c.r[18], c.r[18].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041901Cu) [[unlikely]] return; }
L_0041901C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00419008u | kUnwind; return; } goto L_00419008; }
L_0041902C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419038u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 261u, depth + 1u); else { c.pc = 0x00415E30u; return; } if (c.pc != 0x00419038u) [[unlikely]] return; }
L_00419038:
    st32((c.r[16].w[0] + 20u), c.r[19].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419044u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 267u, depth + 1u); else { c.pc = 0x00415EE0u; return; } if (c.pc != 0x00419044u) [[unlikely]] return; }
L_00419044:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[4], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 144u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 13456u)));
    st32((c.r[16].w[0] + 196u), 0u);
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_004190A8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00CA(c, 249u, depth); }
L_004190A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004190C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 62u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] << 11);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419110u); set32(c.r[6], c.r[6].w[0] << 11);  if (depth < kMaxDepth) unit_00C6(c, 25u, depth + 1u); else { c.pc = 0x00418240u; return; } if (c.pc != 0x00419110u) [[unlikely]] return; }
L_00419110:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], ld32((c.r[3].w[0] - 11196u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419120u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C5(c, 504u, depth + 1u); else { c.pc = 0x00417A80u; return; } if (c.pc != 0x00419120u) [[unlikely]] return; }
L_00419120:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419130u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 500u, depth + 1u); else { c.pc = 0x00417A20u; return; } if (c.pc != 0x00419130u) [[unlikely]] return; }
L_00419130:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041913Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 461u, depth + 1u); else { c.pc = 0x00417710u; return; } if (c.pc != 0x0041913Cu) [[unlikely]] return; }
L_0041913C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419144u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C5(c, 488u, depth + 1u); else { c.pc = 0x00417908u; return; } if (c.pc != 0x00419144u) [[unlikely]] return; }
L_00419144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041914Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C5(c, 442u, depth + 1u); else { c.pc = 0x004175E0u; return; } if (c.pc != 0x0041914Cu) [[unlikely]] return; }
L_0041914C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419164u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 430u, depth + 1u); else { c.pc = 0x00417450u; return; } if (c.pc != 0x00419164u) [[unlikely]] return; }
L_00419164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041916Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C5(c, 472u, depth + 1u); else { c.pc = 0x00417800u; return; } if (c.pc != 0x0041916Cu) [[unlikely]] return; }
L_0041916C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00418FD0u | kUnwind; return; } goto L_00418FD0; }
L_00419198:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004191B4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x004191B4u) [[unlikely]] return; }
L_004191B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004191C0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 175u, depth + 1u); else { c.pc = 0x004191D8u; return; } if (c.pc != 0x004191C0u) [[unlikely]] return; }
L_004191C0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_004191D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_004191FC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00419218; } }
L_004191FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 19840u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_00419218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419220u);  if (depth < kMaxDepth) unit_00C6(c, 191u, depth + 1u); else { c.pc = 0x00419338u; return; } if (c.pc != 0x00419220u) [[unlikely]] return; }
L_00419220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419228u);  if (depth < kMaxDepth) unit_00CB(c, 32u, depth + 1u); else { c.pc = 0x0042C790u; return; } if (c.pc != 0x00419228u) [[unlikely]] return; }
L_00419228:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419234u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 158u, depth + 1u); else { c.pc = 0x00418FD0u; return; } if (c.pc != 0x00419234u) [[unlikely]] return; }
L_00419234:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419248u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C6(c, 365u, depth + 1u); else { c.pc = 0x0041A7C0u; return; } if (c.pc != 0x00419248u) [[unlikely]] return; }
L_00419248:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 33u, depth); }
L_00419268:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041927Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 32u, depth + 1u); else { c.pc = 0x0042C790u; return; } if (c.pc != 0x0041927Cu) [[unlikely]] return; }
L_0041927C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419288u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 226u, depth + 1u); else { c.pc = 0x004159C0u; return; } if (c.pc != 0x00419288u) [[unlikely]] return; }
L_00419288:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419294u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 227u, depth + 1u); else { c.pc = 0x004159D8u; return; } if (c.pc != 0x00419294u) [[unlikely]] return; }
L_00419294:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004192A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C8(c, 431u, depth + 1u); else { c.pc = 0x00423C50u; return; } if (c.pc != 0x004192A0u) [[unlikely]] return; }
L_004192A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004192A8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 269u, depth + 1u); else { c.pc = 0x00415F10u; return; } if (c.pc != 0x004192A8u) [[unlikely]] return; }
L_004192A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_004192DC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_004192DC; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004192D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004192D8u) [[unlikely]] return; }
L_004192D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 1;
L_004192DC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(0u));  goto L_004192F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004192ECu);  if (depth < kMaxDepth) unit_00CA(c, 263u, depth + 1u); else { c.pc = 0x0042A388u; return; } if (c.pc != 0x004192ECu) [[unlikely]] return; }
L_004192EC:
    st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004192F0:
    st32((c.r[16].w[0] + 20u), 0u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 33u, depth); }
L_00419308:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041931Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0041931Cu) [[unlikely]] return; }
L_0041931C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419324u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 191u, depth + 1u); else { c.pc = 0x00419338u; return; } if (c.pc != 0x00419324u) [[unlikely]] return; }
L_00419324:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_00419338:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00419370; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 19880u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_00419370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[17], c.r[2].w[0] - 11168u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_0041939C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041938Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 269u, depth + 1u); else { c.pc = 0x00415F10u; return; } if (c.pc != 0x0041938Cu) [[unlikely]] return; }
L_0041938C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00419398u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00419398u) [[unlikely]] return; }
L_00419398:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0041939C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  goto L_004193B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004193ACu);  if (depth < kMaxDepth) unit_00C5(c, 442u, depth + 1u); else { c.pc = 0x004175E0u; return; } if (c.pc != 0x004193ACu) [[unlikely]] return; }
L_004193AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 1;
L_004193B0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004193E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004193C4u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_00C8(c, 160u, depth + 1u); else { c.pc = 0x00421218u; return; } if (c.pc != 0x004193C4u) [[unlikely]] return; }
L_004193C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004193E0; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004193E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004193E0u) [[unlikely]] return; }
L_004193E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004193E4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00419268u | kUnwind; return; } goto L_00419268; }
L_004193F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041940Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0041940Cu) [[unlikely]] return; }
L_0041940C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419414u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 201u, depth + 1u); else { c.pc = 0x00419430u; return; } if (c.pc != 0x00419414u) [[unlikely]] return; }
L_00419414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041941Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 35u, depth + 1u); else { c.pc = 0x0042C7C8u; return; } if (c.pc != 0x0041941Cu) [[unlikely]] return; }
L_0041941C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00419430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00419450; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419448u); set32(c.r[4], c.r[4].w[0] + 19920u);  if (depth < kMaxDepth) unit_00CB(c, 62u, depth + 1u); else { c.pc = 0x0042D298u; return; } if (c.pc != 0x00419448u) [[unlikely]] return; }
L_00419448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00419454; } }
L_00419450:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 1;
L_00419454:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00419460:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
L_00419478:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[3], c.r[2].w[0] << 24);
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));  if (t) { goto L_00419508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004194BCu); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 385u, depth + 1u); else { c.pc = 0x00416DE0u; return; } if (c.pc != 0x004194BCu) [[unlikely]] return; }
L_004194BC:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004194C8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C5(c, 376u, depth + 1u); else { c.pc = 0x00416D78u; return; } if (c.pc != 0x004194C8u) [[unlikely]] return; }
L_004194C8:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004194D4u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 228u, depth + 1u); else { c.pc = 0x004159F8u; return; } if (c.pc != 0x004194D4u) [[unlikely]] return; }
L_004194D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004194E4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 291u, depth + 1u); else { c.pc = 0x0041A008u; return; } if (c.pc != 0x004194E4u) [[unlikely]] return; }
L_004194E4:
    set32(c.r[3], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] - c.r[16].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[17].w[0]);  if (t) { goto L_00419570; } }
    c.budget -= 1;
L_00419508:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00419568; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041951Cu); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 389u, depth + 1u); else { c.pc = 0x00416E40u; return; } if (c.pc != 0x0041951Cu) [[unlikely]] return; }
L_0041951C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419528u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C5(c, 385u, depth + 1u); else { c.pc = 0x00416DE0u; return; } if (c.pc != 0x00419528u) [[unlikely]] return; }
L_00419528:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419534u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C5(c, 387u, depth + 1u); else { c.pc = 0x00416E10u; return; } if (c.pc != 0x00419534u) [[unlikely]] return; }
L_00419534:
    set32(c.r[3], 0u + 16u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00419540u);  goto L_00419544; }
L_00419544:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_00419570; } }
    c.budget -= 1;
L_00419568:
    st32((c.r[19].w[0]), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00419570:
    set32(c.r[2], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    if (c.r[4].d[0] != 0) c.r[3].d[0] = 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004195A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] - 11160u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_004195C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004195E4u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x004195E4u) [[unlikely]] return; }
L_004195E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004195F4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 216u, depth + 1u); else { c.pc = 0x00419610u; return; } if (c.pc != 0x004195F4u) [[unlikely]] return; }
L_004195F4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_00419610:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.budget -= 13;
    { const bool t = c.r[18].d[0] == 0ull; st64((c.r[29].w[0] + 72u), c.r[31].d[0]);  if (t) { goto L_00419654; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_00419658; }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00419668; } }
L_00419654:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_00419658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419660u); set32(c.r[4], c.r[4].w[0] + 19960u);  if (depth < kMaxDepth) unit_00CB(c, 62u, depth + 1u); else { c.pc = 0x0042D298u; return; } if (c.pc != 0x00419660u) [[unlikely]] return; }
L_00419660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004198E0; } }
L_00419668:
    set32(c.r[2], ld32((c.r[16].w[0] - 11192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00419688; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041967Cu);  if (depth < kMaxDepth) unit_00C6(c, 204u, depth + 1u); else { c.pc = 0x00419478u; return; } if (c.pc != 0x0041967Cu) [[unlikely]] return; }
L_0041967C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004198E0; } }
    c.budget -= 1;
L_00419688:
    st32((c.r[17].w[0] - 11112u), 0u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[2], c.r[3].w[0] - 3u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] << 24);  if (t) { goto L_00419820; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 114u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 156u)));  goto L_004196D8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 13456u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 156u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 11;
L_004196D8:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004196F0u); c.r[22].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (depth < kMaxDepth) unit_00C6(c, 204u, depth + 1u); else { c.pc = 0x00419478u; return; } if (c.pc != 0x004196F0u) [[unlikely]] return; }
L_004196F0:
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[20], c.r[22].w[0] - 11116u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[20].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[3] = c.r[6].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[5] = c.r[1].w[0];
    c.f[2] = c.r[7].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[4] = c.r[1].w[0];
    fpu_div(c, 0u, c.f[0], c.f[3]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[5]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 27;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] - 11112u), c.f[1]);  if (t) { goto L_00419770; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2700000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[18].w[0] + 136u)));  goto L_004198C8; }
L_00419770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] - 11156u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[16], c.r[16].w[0] - 11192u);  if (t) { goto L_004197B0; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[29].w[0] + 4u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041979Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 216u, depth + 1u); else { c.pc = 0x00419610u; return; } if (c.pc != 0x0041979Cu) [[unlikely]] return; }
L_0041979C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004197A4u); st32((c.r[16].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 212u, depth + 1u); else { c.pc = 0x004195A8u; return; } if (c.pc != 0x004197A4u) [[unlikely]] return; }
L_004197A4:
    set32(c.r[7], ld32((c.r[20].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
L_004197B0:
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = c.r[7].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.budget -= 17;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[18].w[0] + 156u), c.r[3].w[0]);  goto L_0041980C; }
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 6;
L_0041980C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 13456u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_004198C4; } }
    c.budget -= 1;
L_00419820:
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[19].w[0]), 0u);  goto L_004198C0; }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041983Cu); c.r[22].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (depth < kMaxDepth) unit_00C5(c, 389u, depth + 1u); else { c.pc = 0x00416E40u; return; } if (c.pc != 0x0041983Cu) [[unlikely]] return; }
L_0041983C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419848u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C5(c, 385u, depth + 1u); else { c.pc = 0x00416DE0u; return; } if (c.pc != 0x00419848u) [[unlikely]] return; }
L_00419848:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419854u); st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C5(c, 387u, depth + 1u); else { c.pc = 0x00416E10u; return; } if (c.pc != 0x00419854u) [[unlikely]] return; }
L_00419854:
    set32(c.r[3], 0u + 16u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00419860u);  goto L_00419864; }
L_00419864:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = ld32((c.r[22].w[0] - 11116u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_004198C4; } }
    c.budget -= 1;
L_004198C0:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 1;
L_004198C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 1;
L_004198C8:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] - 11116u)));
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_004198E0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00419908:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041991Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0041991Cu) [[unlikely]] return; }
L_0041991C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419924u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 229u, depth + 1u); else { c.pc = 0x00419940u; return; } if (c.pc != 0x00419924u) [[unlikely]] return; }
L_00419924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041992Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 35u, depth + 1u); else { c.pc = 0x0042C7C8u; return; } if (c.pc != 0x0041992Cu) [[unlikely]] return; }
L_0041992C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00419940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00419960; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419958u); set32(c.r[4], c.r[4].w[0] + 20000u);  if (depth < kMaxDepth) unit_00CB(c, 62u, depth + 1u); else { c.pc = 0x0042D298u; return; } if (c.pc != 0x00419958u) [[unlikely]] return; }
L_00419958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00419980; } }
L_00419960:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00419980; }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00416E40u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 389u, depth); }
L_00419980:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00419990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004199A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x004199A4u) [[unlikely]] return; }
L_004199A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004199ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 235u, depth + 1u); else { c.pc = 0x004199C8u; return; } if (c.pc != 0x004199ACu) [[unlikely]] return; }
L_004199AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004199B4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 35u, depth + 1u); else { c.pc = 0x0042C7C8u; return; } if (c.pc != 0x004199B4u) [[unlikely]] return; }
L_004199B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004199C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004199E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004199E0u); set32(c.r[4], c.r[4].w[0] + 20048u);  if (depth < kMaxDepth) unit_00CB(c, 62u, depth + 1u); else { c.pc = 0x0042D298u; return; } if (c.pc != 0x004199E0u) [[unlikely]] return; }
L_004199E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00419A08; } }
L_004199E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00419A08; }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00416DE0u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 385u, depth); }
L_00419A08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00419A18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419A2Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x00419A2Cu) [[unlikely]] return; }
L_00419A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419A34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 241u, depth + 1u); else { c.pc = 0x00419A50u; return; } if (c.pc != 0x00419A34u) [[unlikely]] return; }
L_00419A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419A3Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 35u, depth + 1u); else { c.pc = 0x0042C7C8u; return; } if (c.pc != 0x00419A3Cu) [[unlikely]] return; }
L_00419A3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00419A50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00419A70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419A68u); set32(c.r[4], c.r[4].w[0] + 20096u);  if (depth < kMaxDepth) unit_00CB(c, 62u, depth + 1u); else { c.pc = 0x0042D298u; return; } if (c.pc != 0x00419A68u) [[unlikely]] return; }
L_00419A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00419A90; } }
L_00419A70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00419A90; }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00416DF8u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 386u, depth); }
L_00419A90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00419AA0:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_00419AB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419AD4u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x00419AD4u) [[unlikely]] return; }
L_00419AD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419AE4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 247u, depth + 1u); else { c.pc = 0x00419B00u; return; } if (c.pc != 0x00419AE4u) [[unlikely]] return; }
L_00419AE4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_00419B00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_00419B50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 20240u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_00419B50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 173u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00419B7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419B68u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 398u, depth + 1u); else { c.pc = 0x00416F40u; return; } if (c.pc != 0x00419B68u) [[unlikely]] return; }
L_00419B68:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 128u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00419B80; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00419B7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_00419B80:
    set32(c.r[2], ld32((c.r[3].w[0] + 13448u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00419BBC; } }
    set32(c.r[2], 0u - 128u);
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[6], c.r[19].w[0] + c.r[17].w[0]);  goto L_00419BBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419BA0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 386u, depth + 1u); else { c.pc = 0x00416DF8u; return; } if (c.pc != 0x00419BA0u) [[unlikely]] return; }
L_00419BA0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_00419BB8; }
    set32(c.r[2], 0u + 15u);
    set32(c.r[6], 0u - 15u);
    if (c.r[18].d[0] != 0) c.r[6].d[0] = c.r[2].d[0];
    c.budget -= 3;
L_00419BB8:
    set32(c.r[6], c.r[6].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_00419BBC:
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st16((c.r[2].w[0] + 66u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_00419BF0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419BE4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 234u, depth + 1u); else { c.pc = 0x00415A98u; return; } if (c.pc != 0x00419BE4u) [[unlikely]] return; }
L_00419BE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00419BFC; } }
    c.budget -= 1;
L_00419BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419BF8u); set32(c.r[4], c.r[4].w[0] + 20288u);  if (depth < kMaxDepth) unit_00CB(c, 62u, depth + 1u); else { c.pc = 0x0042D298u; return; } if (c.pc != 0x00419BF8u) [[unlikely]] return; }
L_00419BF8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00419BFC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00419C18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419C34u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x00419C34u) [[unlikely]] return; }
L_00419C34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419C40u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 256u, depth + 1u); else { c.pc = 0x00419C60u; return; } if (c.pc != 0x00419C40u) [[unlikely]] return; }
L_00419C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419C48u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 35u, depth + 1u); else { c.pc = 0x0042C7C8u; return; } if (c.pc != 0x00419C48u) [[unlikely]] return; }
L_00419C48:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00419C60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[5].w[0] << 1);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00419C88; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419C7Cu); set32(c.r[4], c.r[4].w[0] + 20336u);  if (depth < kMaxDepth) unit_00CB(c, 62u, depth + 1u); else { c.pc = 0x0042D298u; return; } if (c.pc != 0x00419C7Cu) [[unlikely]] return; }
L_00419C7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00419C90; } }
    c.budget -= 1;
L_00419C88:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 66u)));
    c.budget -= 2;
L_00419C90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00419CA0:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_00419CA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00419CC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20384u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_00419CC8:
    c.r[2].d[0] = c.r[5].sd[0] < -15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_00419CE0; } }
    set32(c.r[2], 0u - 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 70u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00419CF0; } }
L_00419CE0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st16((c.r[4].w[0] + 70u), static_cast<std::uint16_t>(c.r[5].w[0]));  goto L_00419CF0; }
    set32(c.r[2], 0u + 15u);
    st16((c.r[4].w[0] + 70u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00419CF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 13448u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  goto L_00419D18; }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 70u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419D0Cu); set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  if (depth < kMaxDepth) unit_00C5(c, 235u, depth + 1u); else { c.pc = 0x00415AB0u; return; } if (c.pc != 0x00419D0Cu) [[unlikely]] return; }
L_00419D0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00419D24; } }
    c.budget -= 1;
L_00419D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419D20u); set32(c.r[5], 0u - 128u);  if (depth < kMaxDepth) unit_00C5(c, 235u, depth + 1u); else { c.pc = 0x00415AB0u; return; } if (c.pc != 0x00419D20u) [[unlikely]] return; }
L_00419D20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00419D24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00419D30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00419D50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419D48u); set32(c.r[4], c.r[4].w[0] + 20432u);  if (depth < kMaxDepth) unit_00CB(c, 62u, depth + 1u); else { c.pc = 0x0042D298u; return; } if (c.pc != 0x00419D48u) [[unlikely]] return; }
L_00419D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00419D54; } }
L_00419D50:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 70u)));
    c.budget -= 1;
L_00419D54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00419D60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419D7Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x00419D7Cu) [[unlikely]] return; }
L_00419D7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419D88u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 267u, depth + 1u); else { c.pc = 0x00419DA0u; return; } if (c.pc != 0x00419D88u) [[unlikely]] return; }
L_00419D88:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_00419DA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00419DD0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 20480u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_00419DD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 173u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st16((c.r[16].w[0] + 64u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00419DF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419DE8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 395u, depth + 1u); else { c.pc = 0x00416EE8u; return; } if (c.pc != 0x00419DE8u) [[unlikely]] return; }
L_00419DE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 64u)));  if (t) { goto L_00419DF8; } }
L_00419DF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 64u)));
    c.budget -= 2;
L_00419DF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00415A80u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 233u, depth); }
L_00419E10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419E24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x00419E24u) [[unlikely]] return; }
L_00419E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419E2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 273u, depth + 1u); else { c.pc = 0x00419E48u; return; } if (c.pc != 0x00419E2Cu) [[unlikely]] return; }
L_00419E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419E34u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 35u, depth + 1u); else { c.pc = 0x0042C7C8u; return; } if (c.pc != 0x00419E34u) [[unlikely]] return; }
L_00419E34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00419E48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00419E68; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419E60u); set32(c.r[4], c.r[4].w[0] + 20528u);  if (depth < kMaxDepth) unit_00CB(c, 62u, depth + 1u); else { c.pc = 0x0042D298u; return; } if (c.pc != 0x00419E60u) [[unlikely]] return; }
L_00419E60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00419E6C; } }
L_00419E68:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 64u)));
    c.budget -= 1;
L_00419E6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00419E78:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
L_00419E90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 173u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00419E98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419EACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x00419EACu) [[unlikely]] return; }
L_00419EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419EB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 280u, depth + 1u); else { c.pc = 0x00419EC8u; return; } if (c.pc != 0x00419EB4u) [[unlikely]] return; }
L_00419EB4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_00419EC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[2].w[0] - 11184u), c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 11180u), c.r[4].w[0]);  c.pc = t; return; }
L_00419EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419EFCu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x00419EFCu) [[unlikely]] return; }
L_00419EFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419F08u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 284u, depth + 1u); else { c.pc = 0x00419F20u; return; } if (c.pc != 0x00419F08u) [[unlikely]] return; }
L_00419F08:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_00419F20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00419F40; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20576u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_00419F40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[2].w[0] - 11180u), c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00419F58:
    set32(c.r[29], c.r[29].w[0] + 48u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
L_00419F70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419F8Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x00419F8Cu) [[unlikely]] return; }
L_00419F8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419F98u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 289u, depth + 1u); else { c.pc = 0x00419FB0u; return; } if (c.pc != 0x00419F98u) [[unlikely]] return; }
L_00419F98:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_00419FB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00419FD8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20720u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_00419FD8:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    st16((c.r[3].w[0] + 62u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00419FFC; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 60u)));
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419FFCu); set32(c.r[6], c.r[6].w[0] << 11);  if (depth < kMaxDepth) unit_00C6(c, 25u, depth + 1u); else { c.pc = 0x00418240u; return; } if (c.pc != 0x00419FFCu) [[unlikely]] return; }
L_00419FFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041A008:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0041A01C; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { goto L_0041A030; } }
L_0041A01C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A028u); set32(c.r[4], c.r[4].w[0] + 20816u);  if (depth < kMaxDepth) unit_00CB(c, 62u, depth + 1u); else { c.pc = 0x0042D298u; return; } if (c.pc != 0x0041A028u) [[unlikely]] return; }
L_0041A028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0041A064; } }
L_0041A030:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041A060; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A050u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041A050u) [[unlikely]] return; }
L_0041A050:
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0041A064; } }
L_0041A060:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0041A064:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041A070:
    set32(c.r[29], c.r[29].w[0] + 48u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_0041A080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A09Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0041A09Cu) [[unlikely]] return; }
L_0041A09C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A0A8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 298u, depth + 1u); else { c.pc = 0x0041A0C0u; return; } if (c.pc != 0x0041A0A8u) [[unlikely]] return; }
L_0041A0A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_0041A0C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 109u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0041A0C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A0D8u);  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0041A0D8u) [[unlikely]] return; }
L_0041A0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A0E0u);  if (depth < kMaxDepth) unit_00C6(c, 302u, depth + 1u); else { c.pc = 0x0041A0F0u; return; } if (c.pc != 0x0041A0E0u) [[unlikely]] return; }
L_0041A0E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_0041A0F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A114u); set32(c.r[16], c.r[19].w[0] - 11188u);  if (depth < kMaxDepth) unit_00CB(c, 32u, depth + 1u); else { c.pc = 0x0042C790u; return; } if (c.pc != 0x0041A114u) [[unlikely]] return; }
L_0041A114:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0041A138; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00CB(c, 33u, depth); }
L_0041A138:
    set32(c.r[2], 0u + 1u);
    set32(c.r[18], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A14Cu); set32(c.r[17], 0u + 15u);  if (depth < kMaxDepth) unit_00CB(c, 33u, depth + 1u); else { c.pc = 0x0042C7A8u; return; } if (c.pc != 0x0041A14Cu) [[unlikely]] return; }
L_0041A14C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A154u);  if (depth < kMaxDepth) unit_00CB(c, 32u, depth + 1u); else { c.pc = 0x0042C790u; return; } if (c.pc != 0x0041A154u) [[unlikely]] return; }
L_0041A154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A15Cu);  if (depth < kMaxDepth) unit_00C5(c, 372u, depth + 1u); else { c.pc = 0x00416D10u; return; } if (c.pc != 0x0041A15Cu) [[unlikely]] return; }
L_0041A15C:
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] + 13464u);
    c.budget -= 5;
L_0041A170:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0041A188; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A184u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 13u, depth + 1u); else { c.pc = 0x0041C130u; return; } if (c.pc != 0x0041A184u) [[unlikely]] return; }
L_0041A184:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0041A188:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 200u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041A170u | kUnwind; return; } goto L_0041A170; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[16], c.r[19].w[0] - 11188u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A1A0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C5(c, 230u, depth + 1u); else { c.pc = 0x00415A30u; return; } if (c.pc != 0x0041A1A0u) [[unlikely]] return; }
L_0041A1A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 11180u)));
    c.r[2].d[0] = c.r[2].sd[0] < 51ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041A1BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A1BCu);  if (depth < kMaxDepth) unit_00C5(c, 230u, depth + 1u); else { c.pc = 0x00415A30u; return; } if (c.pc != 0x0041A1BCu) [[unlikely]] return; }
L_0041A1BC:
    st32((c.r[16].w[0]), 0u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00CB(c, 33u, depth); }
L_0041A1F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A204u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0041A204u) [[unlikely]] return; }
L_0041A204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A20Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 315u, depth + 1u); else { c.pc = 0x0041A228u; return; } if (c.pc != 0x0041A20Cu) [[unlikely]] return; }
L_0041A20C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A214u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 35u, depth + 1u); else { c.pc = 0x0042C7C8u; return; } if (c.pc != 0x0041A214u) [[unlikely]] return; }
L_0041A214:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041A228:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0041A248; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A240u); set32(c.r[4], c.r[4].w[0] + 21016u);  if (depth < kMaxDepth) unit_00CB(c, 62u, depth + 1u); else { c.pc = 0x0042D298u; return; } if (c.pc != 0x0041A240u) [[unlikely]] return; }
L_0041A240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0041A24C; } }
L_0041A248:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 96u)));
    c.budget -= 1;
L_0041A24C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041A258:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_0041A268:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A284u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0041A284u) [[unlikely]] return; }
L_0041A284:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A290u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 321u, depth + 1u); else { c.pc = 0x0041A2A8u; return; } if (c.pc != 0x0041A290u) [[unlikely]] return; }
L_0041A290:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_0041A2A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_0041A2E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 21160u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_0041A2E8:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[16].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0041A310; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A30Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041A30Cu) [[unlikely]] return; }
L_0041A30C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0041A310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A318u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 375u, depth + 1u); else { c.pc = 0x00416D70u; return; } if (c.pc != 0x0041A318u) [[unlikely]] return; }
L_0041A318:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A324u); set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00C5(c, 392u, depth + 1u); else { c.pc = 0x00416E88u; return; } if (c.pc != 0x0041A324u) [[unlikely]] return; }
L_0041A324:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 2047u);
    set32(c.r[5], c.r[17].w[0] + 4094u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A348u); set32(c.r[17], c.r[2].w[0] << 11);  if (depth < kMaxDepth) unit_00C5(c, 394u, depth + 1u); else { c.pc = 0x00416ED0u; return; } if (c.pc != 0x0041A348u) [[unlikely]] return; }
L_0041A348:
    set32(c.r[3], c.r[2].w[0] + 2047u);
    set32(c.r[2], c.r[2].w[0] + 4094u);
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[16], c.r[16].w[0] - c.r[17].w[0]);  if (t) { goto L_0041A378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 196u), 0u);  if (t) { goto L_0041A394; } }
    c.budget -= 1;
L_0041A378:
    mmi::div(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0041A380u);  goto L_0041A384; }
L_0041A384:
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[17].w[0]);
    st32((c.r[18].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 4;
L_0041A394:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041A3B0:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_0041A3B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A3D4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0041A3D4u) [[unlikely]] return; }
L_0041A3D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A3E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 330u, depth + 1u); else { c.pc = 0x0041A3F8u; return; } if (c.pc != 0x0041A3E0u) [[unlikely]] return; }
L_0041A3E0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_0041A3F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_0041A430; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A424u); set32(c.r[4], c.r[4].w[0] + 21368u);  if (depth < kMaxDepth) unit_00CB(c, 62u, depth + 1u); else { c.pc = 0x0042D298u; return; } if (c.pc != 0x0041A424u) [[unlikely]] return; }
L_0041A424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0041A510; } }
    c.budget -= 1;
L_0041A430:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 114u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));  if (t) { goto L_0041A50C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A444u);  if (depth < kMaxDepth) unit_00CB(c, 32u, depth + 1u); else { c.pc = 0x0042C790u; return; } if (c.pc != 0x0041A444u) [[unlikely]] return; }
L_0041A444:
    set32(c.r[2], c.r[17].w[0] - 3u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[18].w[0] + 114u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_0041A504; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_0041A470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A468u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 227u, depth + 1u); else { c.pc = 0x004159D8u; return; } if (c.pc != 0x0041A468u) [[unlikely]] return; }
L_0041A468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_0041A488; } }
L_0041A470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A478u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C5(c, 227u, depth + 1u); else { c.pc = 0x004159D8u; return; } if (c.pc != 0x0041A478u) [[unlikely]] return; }
L_0041A478:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 13456u)));
    st32((c.r[18].w[0] + 160u), c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 4;
L_0041A488:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 11192u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A4A4u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_00C6(c, 216u, depth + 1u); else { c.pc = 0x00419610u; return; } if (c.pc != 0x0041A4A4u) [[unlikely]] return; }
L_0041A4A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = ld32((c.r[2].w[0] - 11116u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_0041A500; } }
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
L_0041A500:
    st32((c.r[18].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 1;
L_0041A504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A50Cu);  if (depth < kMaxDepth) unit_00CB(c, 33u, depth + 1u); else { c.pc = 0x0042C7A8u; return; } if (c.pc != 0x0041A50Cu) [[unlikely]] return; }
L_0041A50C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041A510:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041A528:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A53Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0041A53Cu) [[unlikely]] return; }
L_0041A53C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A544u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 341u, depth + 1u); else { c.pc = 0x0041A560u; return; } if (c.pc != 0x0041A544u) [[unlikely]] return; }
L_0041A544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A54Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 35u, depth + 1u); else { c.pc = 0x0042C7C8u; return; } if (c.pc != 0x0041A54Cu) [[unlikely]] return; }
L_0041A54C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041A560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0041A580; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A578u); set32(c.r[4], c.r[4].w[0] + 21408u);  if (depth < kMaxDepth) unit_00CB(c, 62u, depth + 1u); else { c.pc = 0x0042D298u; return; } if (c.pc != 0x0041A578u) [[unlikely]] return; }
L_0041A578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041A584; } }
L_0041A580:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 114u)));
    c.budget -= 1;
L_0041A584:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041A590:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
L_0041A5A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0041A5B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0041A5B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A5CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0041A5CCu) [[unlikely]] return; }
L_0041A5CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A5D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 349u, depth + 1u); else { c.pc = 0x0041A5E8u; return; } if (c.pc != 0x0041A5D4u) [[unlikely]] return; }
L_0041A5D4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_0041A5E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00415EB0u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 265u, depth); }
L_0041A608:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A624u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0041A624u) [[unlikely]] return; }
L_0041A624:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A630u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 354u, depth + 1u); else { c.pc = 0x0041A650u; return; } if (c.pc != 0x0041A630u) [[unlikely]] return; }
L_0041A630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A638u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 35u, depth + 1u); else { c.pc = 0x0042C7C8u; return; } if (c.pc != 0x0041A638u) [[unlikely]] return; }
L_0041A638:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041A650:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 114u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041A718; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A688u); set32(c.r[16], c.r[16].w[0] - 11192u);  if (depth < kMaxDepth) unit_00C5(c, 237u, depth + 1u); else { c.pc = 0x00415B08u; return; } if (c.pc != 0x0041A688u) [[unlikely]] return; }
L_0041A688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A690u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 299u, depth + 1u); else { c.pc = 0x0041A0C8u; return; } if (c.pc != 0x0041A690u) [[unlikely]] return; }
L_0041A690:
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[16].w[0]), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A6A8u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00C6(c, 216u, depth + 1u); else { c.pc = 0x00419610u; return; } if (c.pc != 0x0041A6A8u) [[unlikely]] return; }
L_0041A6A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = ld32((c.r[2].w[0] - 11116u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[16].w[0]), c.r[17].w[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0041A708; } }
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
L_0041A708:
    st32((c.r[19].w[0] + 156u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 13456u)));
    st32((c.r[19].w[0] + 160u), c.r[4].w[0]);
    c.budget -= 4;
L_0041A718:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041A738:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A754u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0041A754u) [[unlikely]] return; }
L_0041A754:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A760u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 361u, depth + 1u); else { c.pc = 0x0041A778u; return; } if (c.pc != 0x0041A760u) [[unlikely]] return; }
L_0041A760:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_0041A778:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 136u), c.r[5].w[0]);  c.pc = t; return; }
L_0041A780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A79Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0041A79Cu) [[unlikely]] return; }
L_0041A79C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A7A8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 365u, depth + 1u); else { c.pc = 0x0041A7C0u; return; } if (c.pc != 0x0041A7A8u) [[unlikely]] return; }
L_0041A7A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_0041A7C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041A7E8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00416D88u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 378u, depth); }
L_0041A7E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041A7F8:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
L_0041A808:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041A890; } }
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.r[7].d[0] = 0ull | 32768ull;
    set32(c.r[6], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[7].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0041A894; }
    set32(c.r[2], c.r[29].w[0] + 24u);
    set32(c.r[3], c.r[29].w[0] + 28u);
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[7], c.r[29].w[0] + 18u);
    set32(c.r[8], c.r[29].w[0] + 19u);
    set32(c.r[9], c.r[29].w[0] + 20u);
    set32(c.r[10], c.r[29].w[0] + 21u);
    set32(c.r[11], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A874u); st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00CB(c, 45u, depth + 1u); else { c.pc = 0x0042C9B8u; return; } if (c.pc != 0x0041A874u) [[unlikely]] return; }
L_0041A874:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 16u)));  if (t) { goto L_0041A888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041A890; } }
    c.budget -= 1;
L_0041A888:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0041A890:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0041A894:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041A8A0:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041A8D8; } }
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[5].d[0] = 0ull | 32769ull;
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0041A8D8; } }
    st32((c.r[6].w[0]), c.r[7].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0041A8D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0041A8E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A904u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0041A904u) [[unlikely]] return; }
L_0041A904:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A914u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 374u, depth + 1u); else { c.pc = 0x0041A938u; return; } if (c.pc != 0x0041A914u) [[unlikely]] return; }
L_0041A914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A91Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 35u, depth + 1u); else { c.pc = 0x0042C7C8u; return; } if (c.pc != 0x0041A91Cu) [[unlikely]] return; }
L_0041A91C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041A938:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], c.r[6].w[0] + 31u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 5));
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[3].w[0] << 1);
    set32(c.r[20], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 21;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0041AAB8; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[16].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A9A4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041A9A4u) [[unlikely]] return; }
L_0041A9A4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0041A9A8u);  goto L_0041A9AC; }
L_0041A9AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A9D0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0041A9D0u) [[unlikely]] return; }
L_0041A9D0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A9E8u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x0041A9E8u) [[unlikely]] return; }
L_0041A9E8:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AA00u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041AA00u) [[unlikely]] return; }
L_0041AA00:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AA18u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041AA18u) [[unlikely]] return; }
L_0041AA18:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] - c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AA34u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041AA34u) [[unlikely]] return; }
L_0041AA34:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0041AA38u);  goto L_0041AA3C; }
L_0041AA3C:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AA60u); set32(c.r[17], c.r[17].w[0] + c.r[21].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0041AA60u) [[unlikely]] return; }
L_0041AA60:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AA74u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x0041AA74u) [[unlikely]] return; }
L_0041AA74:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AA8Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041AA8Cu) [[unlikely]] return; }
L_0041AA8C:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AAA4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041AAA4u) [[unlikely]] return; }
L_0041AAA4:
    mmi::div(c, 0, c.r[17].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0041AAACu);  goto L_0041AAB0; }
L_0041AAB0:
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] << 5);
    c.budget -= 2;
L_0041AAB8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0041AAE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[2].w[0] + 13448u), c.r[4].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[3].w[0] + 13464u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 15u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], 0u + 1u);
    c.budget -= 12;
L_0041AB10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[19].d[0]) { set32(c.r[18], c.r[18].w[0] - 1u);  goto L_0041AB74; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0041AB5C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0041AB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AB38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 256u, depth + 1u); else { c.pc = 0x00419C60u; return; } if (c.pc != 0x0041AB38u) [[unlikely]] return; }
L_0041AB38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AB4Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 247u, depth + 1u); else { c.pc = 0x00419B00u; return; } if (c.pc != 0x0041AB4Cu) [[unlikely]] return; }
L_0041AB4C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041AB30u | kUnwind; return; } goto L_0041AB30; } }
L_0041AB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AB64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 262u, depth + 1u); else { c.pc = 0x00419D30u; return; } if (c.pc != 0x0041AB64u) [[unlikely]] return; }
L_0041AB64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AB70u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 259u, depth + 1u); else { c.pc = 0x00419CA8u; return; } if (c.pc != 0x0041AB70u) [[unlikely]] return; }
L_0041AB70:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_0041AB74:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; set32(c.r[17], c.r[17].w[0] + 200u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041AB10u | kUnwind; return; } goto L_0041AB10; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041AB98:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
L_0041ABB8:
    if (::decomp::hook_0041ABB8.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_0041ABB8, depth)) return; }
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ABDCu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0041ABDCu) [[unlikely]] return; }
L_0041ABDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ABECu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 396u, depth + 1u); else { c.pc = 0x0041AC08u; return; } if (c.pc != 0x0041ABECu) [[unlikely]] return; }
L_0041ABEC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_0041AC08:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_0041AC40; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AC38u); set32(c.r[4], c.r[4].w[0] + 21648u);  if (depth < kMaxDepth) unit_00CB(c, 62u, depth + 1u); else { c.pc = 0x0042D298u; return; } if (c.pc != 0x0041AC38u) [[unlikely]] return; }
L_0041AC38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0041ACEC; } }
L_0041AC40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AC48u);  if (depth < kMaxDepth) unit_00C6(c, 188u, depth + 1u); else { c.pc = 0x00419308u; return; } if (c.pc != 0x0041AC48u) [[unlikely]] return; }
L_0041AC48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 176u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 16u);
    set32(c.r[8], c.r[29].w[0] + 20u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AC64u); set32(c.r[9], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_00C4(c, 430u, depth + 1u); else { c.pc = 0x00413C98u; return; } if (c.pc != 0x0041AC64u) [[unlikely]] return; }
L_0041AC64:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0041ACEC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 16u)));  goto L_0041ACB0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AC8Cu); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_00CB(c, 73u, depth + 1u); else { c.pc = 0x0042D468u; return; } if (c.pc != 0x0041AC8Cu) [[unlikely]] return; }
L_0041AC8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 21696u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AC9Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 65u, depth + 1u); else { c.pc = 0x0042D2F0u; return; } if (c.pc != 0x0041AC9Cu) [[unlikely]] return; }
L_0041AC9C:
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], 0u + 6u);
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0041ACE8; } }
L_0041ACB0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 176u)));
    st32((c.r[16].w[0] + 184u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 180u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 188u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 192u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ACE8u); st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00C6(c, 362u, depth + 1u); else { c.pc = 0x0041A780u; return; } if (c.pc != 0x0041ACE8u) [[unlikely]] return; }
L_0041ACE8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0041ACEC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041AD00:
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 2;
L_0041AD08:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_0041AD3C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0041AD60; } }
L_0041AD3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 21736u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_0041AD60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AD68u);  if (depth < kMaxDepth) unit_00C6(c, 188u, depth + 1u); else { c.pc = 0x00419308u; return; } if (c.pc != 0x0041AD68u) [[unlikely]] return; }
L_0041AD68:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AD74u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x0041AD74u) [[unlikely]] return; }
L_0041AD74:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 188u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 192u), c.r[19].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 184u), 0u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 18;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041A780u | kUnwind; return; } goto L_0041A780; }
L_0041ADC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ADDCu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0041ADDCu) [[unlikely]] return; }
L_0041ADDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ADE8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 410u, depth + 1u); else { c.pc = 0x0041AE00u; return; } if (c.pc != 0x0041ADE8u) [[unlikely]] return; }
L_0041ADE8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_0041AE00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041AD08u | kUnwind; return; } goto L_0041AD08; }
L_0041AE28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AE4Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0041AE4Cu) [[unlikely]] return; }
L_0041AE4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AE5Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 414u, depth + 1u); else { c.pc = 0x0041AE78u; return; } if (c.pc != 0x0041AE5Cu) [[unlikely]] return; }
L_0041AE5C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_0041AE78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_0041AEAC; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_0041AEB0; }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_0041AED0; } }
L_0041AEAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_0041AEB0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 21784u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_0041AED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AED8u);  if (depth < kMaxDepth) unit_00C6(c, 188u, depth + 1u); else { c.pc = 0x00419308u; return; } if (c.pc != 0x0041AED8u) [[unlikely]] return; }
L_0041AED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AEE0u);  if (depth < kMaxDepth) unit_00CB(c, 32u, depth + 1u); else { c.pc = 0x0042C790u; return; } if (c.pc != 0x0041AEE0u) [[unlikely]] return; }
L_0041AEE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AEECu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 36u, depth + 1u); else { c.pc = 0x00424468u; return; } if (c.pc != 0x0041AEECu) [[unlikely]] return; }
L_0041AEEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041AF20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AF00u);  if (depth < kMaxDepth) unit_00CB(c, 33u, depth + 1u); else { c.pc = 0x0042C7A8u; return; } if (c.pc != 0x0041AF00u) [[unlikely]] return; }
L_0041AF00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 21832u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_0041AF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AF28u);  if (depth < kMaxDepth) unit_00C6(c, 158u, depth + 1u); else { c.pc = 0x00418FD0u; return; } if (c.pc != 0x0041AF28u) [[unlikely]] return; }
L_0041AF28:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AF3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 362u, depth + 1u); else { c.pc = 0x0041A780u; return; } if (c.pc != 0x0041AF3Cu) [[unlikely]] return; }
L_0041AF3C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 33u, depth); }
L_0041AF58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AF7Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0041AF7Cu) [[unlikely]] return; }
L_0041AF7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AF8Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 424u, depth + 1u); else { c.pc = 0x0041AFA8u; return; } if (c.pc != 0x0041AF8Cu) [[unlikely]] return; }
L_0041AF8C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_0041AFA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_0041AFE0; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_0041AFE4; }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0041B008; } }
L_0041AFE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_0041AFE4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 21880u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_0041B008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B010u); c.r[19].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (depth < kMaxDepth) unit_00C6(c, 188u, depth + 1u); else { c.pc = 0x00419308u; return; } if (c.pc != 0x0041B010u) [[unlikely]] return; }
L_0041B010:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] >> 24);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[19].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0041B100; }
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0041B100; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B054u);  if (depth < kMaxDepth) unit_00CB(c, 32u, depth + 1u); else { c.pc = 0x0042C790u; return; } if (c.pc != 0x0041B054u) [[unlikely]] return; }
L_0041B054:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    set32(c.r[2], c.r[3].w[0] << 8);
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    set32(c.r[4], c.r[3].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B090u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_00C9(c, 36u, depth + 1u); else { c.pc = 0x00424468u; return; } if (c.pc != 0x0041B090u) [[unlikely]] return; }
L_0041B090:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041B0C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B0A4u);  if (depth < kMaxDepth) unit_00CB(c, 33u, depth + 1u); else { c.pc = 0x0042C7A8u; return; } if (c.pc != 0x0041B0A4u) [[unlikely]] return; }
L_0041B0A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 21928u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_0041B0C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B0D0u);  if (depth < kMaxDepth) unit_00C6(c, 158u, depth + 1u); else { c.pc = 0x00418FD0u; return; } if (c.pc != 0x0041B0D0u) [[unlikely]] return; }
L_0041B0D0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B0E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 362u, depth + 1u); else { c.pc = 0x0041A780u; return; } if (c.pc != 0x0041B0E4u) [[unlikely]] return; }
L_0041B0E4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00CB(c, 33u, depth); }
L_0041B100:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041B118:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
L_0041B128:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B154u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 391u, depth + 1u); else { c.pc = 0x00416E70u; return; } if (c.pc != 0x0041B154u) [[unlikely]] return; }
L_0041B154:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B160u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 392u, depth + 1u); else { c.pc = 0x00416E88u; return; } if (c.pc != 0x0041B160u) [[unlikely]] return; }
L_0041B160:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B16Cu); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 393u, depth + 1u); else { c.pc = 0x00416EB8u; return; } if (c.pc != 0x0041B16Cu) [[unlikely]] return; }
L_0041B16C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B178u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 402u, depth + 1u); else { c.pc = 0x00416FB0u; return; } if (c.pc != 0x0041B178u) [[unlikely]] return; }
L_0041B178:
    set32(c.r[16], c.r[16].w[0] - c.r[19].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B188u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 382u, depth + 1u); else { c.pc = 0x00416DB8u; return; } if (c.pc != 0x0041B188u) [[unlikely]] return; }
L_0041B188:
    st32((c.r[18].w[0] + 144u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B198u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 381u, depth + 1u); else { c.pc = 0x00416DB0u; return; } if (c.pc != 0x0041B198u) [[unlikely]] return; }
L_0041B198:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B1A4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 383u, depth + 1u); else { c.pc = 0x00416DC0u; return; } if (c.pc != 0x0041B1A4u) [[unlikely]] return; }
L_0041B1A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B1B0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 377u, depth + 1u); else { c.pc = 0x00416D80u; return; } if (c.pc != 0x0041B1B0u) [[unlikely]] return; }
L_0041B1B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], c.r[5].w[0] - 20000u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00416DA0u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 380u, depth); }
L_0041B1E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B214u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 391u, depth + 1u); else { c.pc = 0x00416E70u; return; } if (c.pc != 0x0041B214u) [[unlikely]] return; }
L_0041B214:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B220u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 392u, depth + 1u); else { c.pc = 0x00416E88u; return; } if (c.pc != 0x0041B220u) [[unlikely]] return; }
L_0041B220:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B22Cu); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 393u, depth + 1u); else { c.pc = 0x00416EB8u; return; } if (c.pc != 0x0041B22Cu) [[unlikely]] return; }
L_0041B22C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0041B270; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_0041B274; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B264u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C5(c, 381u, depth + 1u); else { c.pc = 0x00416DB0u; return; } if (c.pc != 0x0041B264u) [[unlikely]] return; }
L_0041B264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0041B358; } }
    c.budget -= 1;
L_0041B270:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0041B274:
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B280u); set32(c.r[6], ld32((c.r[17].w[0] + 80u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B280u) [[unlikely]] return; }
L_0041B280:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 21984u);  if (t) { goto L_0041B2A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B2A0u);  if (depth < kMaxDepth) unit_00CB(c, 62u, depth + 1u); else { c.pc = 0x0042D298u; return; } if (c.pc != 0x0041B2A0u) [[unlikely]] return; }
L_0041B2A0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B2B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B2B8u) [[unlikely]] return; }
L_0041B2B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B2C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 382u, depth + 1u); else { c.pc = 0x00416DB8u; return; } if (c.pc != 0x0041B2C4u) [[unlikely]] return; }
L_0041B2C4:
    set32(c.r[5], c.r[20].w[0] - c.r[19].w[0]);
    st32((c.r[17].w[0] + 144u), c.r[5].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B2D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 381u, depth + 1u); else { c.pc = 0x00416DB0u; return; } if (c.pc != 0x0041B2D4u) [[unlikely]] return; }
L_0041B2D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B2E0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 383u, depth + 1u); else { c.pc = 0x00416DC0u; return; } if (c.pc != 0x0041B2E0u) [[unlikely]] return; }
L_0041B2E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B2ECu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 377u, depth + 1u); else { c.pc = 0x00416D80u; return; } if (c.pc != 0x0041B2ECu) [[unlikely]] return; }
L_0041B2EC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0041B340; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B30Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B30Cu) [[unlikely]] return; }
L_0041B30C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B328u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B328u) [[unlikely]] return; }
L_0041B328:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B340u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B340u) [[unlikely]] return; }
L_0041B340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B348u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 403u, depth + 1u); else { c.pc = 0x00416FC8u; return; } if (c.pc != 0x0041B348u) [[unlikely]] return; }
L_0041B348:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_0041B358:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0041B378:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_0041B408; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0041B40C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B3A8u);  if (depth < kMaxDepth) unit_00C5(c, 392u, depth + 1u); else { c.pc = 0x00416E88u; return; } if (c.pc != 0x0041B3A8u) [[unlikely]] return; }
L_0041B3A8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 108u)));
    set32(c.r[4], c.r[2].w[0] + 2047u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));  if (t) { goto L_0041B400; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B3CCu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 375u, depth + 1u); else { c.pc = 0x00416D70u; return; } if (c.pc != 0x0041B3CCu) [[unlikely]] return; }
L_0041B3CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_0041B3E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B3E4u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 381u, depth + 1u); else { c.pc = 0x00416DB0u; return; } if (c.pc != 0x0041B3E4u) [[unlikely]] return; }
L_0041B3E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B3F4u); c.r[5].d[0] = c.r[5].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00C5(c, 504u, depth + 1u); else { c.pc = 0x00417A80u; return; } if (c.pc != 0x0041B3F4u) [[unlikely]] return; }
L_0041B3F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0041B40C; } }
    c.budget -= 1;
L_0041B400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B408u);  if (depth < kMaxDepth) unit_00C5(c, 461u, depth + 1u); else { c.pc = 0x00417710u; return; } if (c.pc != 0x0041B408u) [[unlikely]] return; }
L_0041B408:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0041B40C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041B420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B438u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 386u, depth + 1u); else { c.pc = 0x00416DF8u; return; } if (c.pc != 0x0041B438u) [[unlikely]] return; }
L_0041B438:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0041B460; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 66u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00419AB0u | kUnwind; return; } goto L_00419AB0; }
L_0041B460:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 66u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B46Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 244u, depth + 1u); else { c.pc = 0x00419AB0u; return; } if (c.pc != 0x0041B46Cu) [[unlikely]] return; }
L_0041B46C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00419AB0u | kUnwind; return; } goto L_00419AB0; }
L_0041B488:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 152u)));
    set32(c.r[18], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[20].w[0] + 20u)));  if (t) { goto L_0041B744; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st16((c.r[29].w[0] + 66u), static_cast<std::uint16_t>(0u));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B4E4u); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B4E4u) [[unlikely]] return; }
L_0041B4E4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[21], c.r[29].w[0] + 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B508u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B508u) [[unlikely]] return; }
L_0041B508:
    set32(c.r[19], c.r[29].w[0] + 64u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B51Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 54u, depth + 1u); else { c.pc = 0x0042D168u; return; } if (c.pc != 0x0041B51Cu) [[unlikely]] return; }
L_0041B51C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0041B568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B52Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 362u, depth + 1u); else { c.pc = 0x0041A780u; return; } if (c.pc != 0x0041B52Cu) [[unlikely]] return; }
L_0041B52C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B544u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B544u) [[unlikely]] return; }
L_0041B544:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B55Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B55Cu) [[unlikely]] return; }
L_0041B55C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0041B748; } }
    c.budget -= 1;
L_0041B568:
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 64u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B584u); set32(c.r[5], c.r[5].w[0] - c.r[16].w[0]);  if (depth < kMaxDepth) unit_00CB(c, 41u, depth + 1u); else { c.pc = 0x0042C930u; return; } if (c.pc != 0x0041B584u) [[unlikely]] return; }
L_0041B584:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0041B5A4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[6], c.r[29].w[0] + 66u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B5A0u); set32(c.r[5], ld32((c.r[29].w[0] + 36u)));  if (depth < kMaxDepth) unit_00CB(c, 41u, depth + 1u); else { c.pc = 0x0042C930u; return; } if (c.pc != 0x0041B5A0u) [[unlikely]] return; }
L_0041B5A0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0041B5A4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 64u)));
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 66u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_0041B5F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0041B658; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B5D0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B5D0u) [[unlikely]] return; }
L_0041B5D0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B5E8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B5E8u) [[unlikely]] return; }
L_0041B5E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0041B6FC; } }
L_0041B5F0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B608u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B608u) [[unlikely]] return; }
L_0041B608:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B620u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x0041B620u) [[unlikely]] return; }
L_0041B620:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B638u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B638u) [[unlikely]] return; }
L_0041B638:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B650u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B650u) [[unlikely]] return; }
L_0041B650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041B6B8; } }
L_0041B658:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B670u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B670u) [[unlikely]] return; }
L_0041B670:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B688u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x0041B688u) [[unlikely]] return; }
L_0041B688:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B6A0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B6A0u) [[unlikely]] return; }
L_0041B6A0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B6B8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B6B8u) [[unlikely]] return; }
L_0041B6B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B6C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 376u, depth + 1u); else { c.pc = 0x00416D78u; return; } if (c.pc != 0x0041B6C0u) [[unlikely]] return; }
L_0041B6C0:
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B6D4u); st32((c.r[20].w[0] + 164u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C5(c, 269u, depth + 1u); else { c.pc = 0x00415F10u; return; } if (c.pc != 0x0041B6D4u) [[unlikely]] return; }
L_0041B6D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B6DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 267u, depth + 1u); else { c.pc = 0x00415EE0u; return; } if (c.pc != 0x0041B6DCu) [[unlikely]] return; }
L_0041B6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B6E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 349u, depth + 1u); else { c.pc = 0x004169D8u; return; } if (c.pc != 0x0041B6E4u) [[unlikely]] return; }
L_0041B6E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B6ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 260u, depth + 1u); else { c.pc = 0x00415E28u; return; } if (c.pc != 0x0041B6ECu) [[unlikely]] return; }
L_0041B6EC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[20].w[0] + 72u)));  goto L_0041B710; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0041B6FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B704u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 362u, depth + 1u); else { c.pc = 0x0041A780u; return; } if (c.pc != 0x0041B704u) [[unlikely]] return; }
L_0041B704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0041B748; } }
    c.budget -= 1;
L_0041B710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B718u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 263u, depth + 1u); else { c.pc = 0x00415E70u; return; } if (c.pc != 0x0041B718u) [[unlikely]] return; }
L_0041B718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B720u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 389u, depth + 1u); else { c.pc = 0x00416E40u; return; } if (c.pc != 0x0041B720u) [[unlikely]] return; }
L_0041B720:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B72Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 381u, depth + 1u); else { c.pc = 0x00416DB0u; return; } if (c.pc != 0x0041B72Cu) [[unlikely]] return; }
L_0041B72C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B738u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 383u, depth + 1u); else { c.pc = 0x00416DC0u; return; } if (c.pc != 0x0041B738u) [[unlikely]] return; }
L_0041B738:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B744u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 382u, depth + 1u); else { c.pc = 0x00416DB8u; return; } if (c.pc != 0x0041B744u) [[unlikely]] return; }
L_0041B744:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0041B748:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 136u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0041B770:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    set32(c.r[19], 0u + 2048u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    st32((c.r[29].w[0] + 36u), 0u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 168u), 0u);  if (t) { goto L_0041B810; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 172u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0041B810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B7CCu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C5(c, 456u, depth + 1u); else { c.pc = 0x004176D0u; return; } if (c.pc != 0x0041B7CCu) [[unlikely]] return; }
L_0041B7CC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0041BB5C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 180u)));  goto L_0041B7F8; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B7F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B7F4u) [[unlikely]] return; }
L_0041B7F4:
    set32(c.r[5], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 1;
L_0041B7F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B80Cu); set32(c.r[8], ld32((c.r[16].w[0] + 192u)));  if (depth < kMaxDepth) unit_00C6(c, 163u, depth + 1u); else { c.pc = 0x004190C8u; return; } if (c.pc != 0x0041B80Cu) [[unlikely]] return; }
L_0041B80C:
    st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0041B810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B818u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 260u, depth + 1u); else { c.pc = 0x00415E28u; return; } if (c.pc != 0x0041B818u) [[unlikely]] return; }
L_0041B818:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0041BB48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B830u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 386u, depth + 1u); else { c.pc = 0x00416DF8u; return; } if (c.pc != 0x0041B830u) [[unlikely]] return; }
L_0041B830:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0041B870; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B850u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_00CB(c, 73u, depth + 1u); else { c.pc = 0x0042D468u; return; } if (c.pc != 0x0041B850u) [[unlikely]] return; }
L_0041B850:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 22032u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B860u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 65u, depth + 1u); else { c.pc = 0x0042D2F0u; return; } if (c.pc != 0x0041B860u) [[unlikely]] return; }
L_0041B860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B868u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 188u, depth + 1u); else { c.pc = 0x00419308u; return; } if (c.pc != 0x0041B868u) [[unlikely]] return; }
L_0041B868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0041BB5C; } }
L_0041B870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B878u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 385u, depth + 1u); else { c.pc = 0x00416DE0u; return; } if (c.pc != 0x0041B878u) [[unlikely]] return; }
L_0041B878:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B884u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 390u, depth + 1u); else { c.pc = 0x00416E58u; return; } if (c.pc != 0x0041B884u) [[unlikely]] return; }
L_0041B884:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].sd[0] <= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_0041B8B8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    mmi::div(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0041B89Cu);  goto L_0041B8A0; }
L_0041B8A0:
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_0041B8E0; } }
    c.budget -= 1;
L_0041B8B8:
    mmi::div(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0041B8C0u);  goto L_0041B8C4; }
L_0041B8C4:
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 7;
L_0041B8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B8E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 388u, depth + 1u); else { c.pc = 0x00416E28u; return; } if (c.pc != 0x0041B8E8u) [[unlikely]] return; }
L_0041B8E8:
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0041B8FCu);  goto L_0041B900; }
L_0041B900:
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B914u); st32((c.r[16].w[0] + 72u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00C5(c, 263u, depth + 1u); else { c.pc = 0x00415E70u; return; } if (c.pc != 0x0041B914u) [[unlikely]] return; }
L_0041B914:
    c.budget -= 2;
    if (c.r[20].sd[0] <= 0) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_0041B9E8; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0041B938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), 0u);  if (t) { goto L_0041B994; } }
    c.budget -= 1;
L_0041B938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B940u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 394u, depth + 1u); else { c.pc = 0x00416ED0u; return; } if (c.pc != 0x0041B940u) [[unlikely]] return; }
L_0041B940:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { breakpoint(c, 0x0041B944u);  goto L_0041B948; }
L_0041B948:
    mmi::div(c, 0, c.r[2].w[0], c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2047u);
    c.r[3].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[19].w[0]);
    set32(c.r[3], c.r[19].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.hi.d[0];
    st32((c.r[16].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B980u); st32((c.r[16].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C5(c, 504u, depth + 1u); else { c.pc = 0x00417A80u; return; } if (c.pc != 0x0041B980u) [[unlikely]] return; }
L_0041B980:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] - 19592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B994u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 500u, depth + 1u); else { c.pc = 0x00417A20u; return; } if (c.pc != 0x0041B994u) [[unlikely]] return; }
L_0041B994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B99Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 393u, depth + 1u); else { c.pc = 0x00416EB8u; return; } if (c.pc != 0x0041B99Cu) [[unlikely]] return; }
L_0041B99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B9A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 391u, depth + 1u); else { c.pc = 0x00416E70u; return; } if (c.pc != 0x0041B9A4u) [[unlikely]] return; }
L_0041B9A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B9B4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 381u, depth + 1u); else { c.pc = 0x00416DB0u; return; } if (c.pc != 0x0041B9B4u) [[unlikely]] return; }
L_0041B9B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B9C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 383u, depth + 1u); else { c.pc = 0x00416DC0u; return; } if (c.pc != 0x0041B9C0u) [[unlikely]] return; }
L_0041B9C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B9CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 382u, depth + 1u); else { c.pc = 0x00416DB8u; return; } if (c.pc != 0x0041B9CCu) [[unlikely]] return; }
L_0041B9CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] - 20184u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B9E0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 380u, depth + 1u); else { c.pc = 0x00416DA0u; return; } if (c.pc != 0x0041B9E0u) [[unlikely]] return; }
L_0041B9E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041BA3C; } }
L_0041B9E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041B9FC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B9FCu); c.r[5].d[0] = c.r[5].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00C5(c, 504u, depth + 1u); else { c.pc = 0x00417A80u; return; } if (c.pc != 0x0041B9FCu) [[unlikely]] return; }
L_0041B9FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 389u, depth + 1u); else { c.pc = 0x00416E40u; return; } if (c.pc != 0x0041BA04u) [[unlikely]] return; }
L_0041BA04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA10u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 381u, depth + 1u); else { c.pc = 0x00416DB0u; return; } if (c.pc != 0x0041BA10u) [[unlikely]] return; }
L_0041BA10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 383u, depth + 1u); else { c.pc = 0x00416DC0u; return; } if (c.pc != 0x0041BA1Cu) [[unlikely]] return; }
L_0041BA1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 382u, depth + 1u); else { c.pc = 0x00416DB8u; return; } if (c.pc != 0x0041BA28u) [[unlikely]] return; }
L_0041BA28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] - 19320u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA3Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 380u, depth + 1u); else { c.pc = 0x00416DA0u; return; } if (c.pc != 0x0041BA3Cu) [[unlikely]] return; }
L_0041BA3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 385u, depth + 1u); else { c.pc = 0x00416DE0u; return; } if (c.pc != 0x0041BA44u) [[unlikely]] return; }
L_0041BA44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA50u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 386u, depth + 1u); else { c.pc = 0x00416DF8u; return; } if (c.pc != 0x0041BA50u) [[unlikely]] return; }
L_0041BA50:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA5Cu); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 389u, depth + 1u); else { c.pc = 0x00416E40u; return; } if (c.pc != 0x0041BA5Cu) [[unlikely]] return; }
L_0041BA5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA68u); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 387u, depth + 1u); else { c.pc = 0x00416E10u; return; } if (c.pc != 0x0041BA68u) [[unlikely]] return; }
L_0041BA68:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA74u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 236u, depth + 1u); else { c.pc = 0x00415AC8u; return; } if (c.pc != 0x0041BA74u) [[unlikely]] return; }
L_0041BA74:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA80u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 232u, depth + 1u); else { c.pc = 0x00415A68u; return; } if (c.pc != 0x0041BA80u) [[unlikely]] return; }
L_0041BA80:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA8Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 231u, depth + 1u); else { c.pc = 0x00415A50u; return; } if (c.pc != 0x0041BA8Cu) [[unlikely]] return; }
L_0041BA8C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA98u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 238u, depth + 1u); else { c.pc = 0x00415B30u; return; } if (c.pc != 0x0041BA98u) [[unlikely]] return; }
L_0041BA98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BAA4u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00C6(c, 264u, depth + 1u); else { c.pc = 0x00419D60u; return; } if (c.pc != 0x0041BAA4u) [[unlikely]] return; }
L_0041BAA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BAB4u); set32(c.r[6], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_00C6(c, 345u, depth + 1u); else { c.pc = 0x0041A5B0u; return; } if (c.pc != 0x0041BAB4u) [[unlikely]] return; }
L_0041BAB4:
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 36u)));  if (t) { goto L_0041BAC8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0041BAD0; } }
L_0041BAC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BAD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 344u, depth + 1u); else { c.pc = 0x0041A5A8u; return; } if (c.pc != 0x0041BAD0u) [[unlikely]] return; }
L_0041BAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BAD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 463u, depth + 1u); else { c.pc = 0x0041B420u; return; } if (c.pc != 0x0041BAD8u) [[unlikely]] return; }
L_0041BAD8:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0041BAF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BAECu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 265u, depth + 1u); else { c.pc = 0x0042A398u; return; } if (c.pc != 0x0041BAECu) [[unlikely]] return; }
L_0041BAEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041BAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BAF8u); set32(c.r[19], 0u + 2u);  if (depth < kMaxDepth) unit_00C5(c, 384u, depth + 1u); else { c.pc = 0x00416DC8u; return; } if (c.pc != 0x0041BAF8u) [[unlikely]] return; }
L_0041BAF8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[19].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  goto L_0041BB18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BB08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 401u, depth + 1u); else { c.pc = 0x00416FA8u; return; } if (c.pc != 0x0041BB08u) [[unlikely]] return; }
L_0041BB08:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BB14u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 239u, depth + 1u); else { c.pc = 0x00415B38u; return; } if (c.pc != 0x0041BB14u) [[unlikely]] return; }
L_0041BB14:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_0041BB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BB20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C5(c, 226u, depth + 1u); else { c.pc = 0x004159C0u; return; } if (c.pc != 0x0041BB20u) [[unlikely]] return; }
L_0041BB20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 11108u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0041BB40; } }
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BB40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041BB40u) [[unlikely]] return; }
L_0041BB40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[19].w[0]));  if (t) { goto L_0041BB58; } }
L_0041BB48:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0041BB5C; }
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0041BB58:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0041BB5C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0041BB80:
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 2;
L_0041BB88:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[20], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BBB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 228u, depth + 1u); else { c.pc = 0x004159F8u; return; } if (c.pc != 0x0041BBB8u) [[unlikely]] return; }
L_0041BBB8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BBC4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 229u, depth + 1u); else { c.pc = 0x00415A10u; return; } if (c.pc != 0x0041BBC4u) [[unlikely]] return; }
L_0041BBC4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[3], 0u + 16384u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[4].d[0] = c.r[2].sd[0] < 16385ll ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[16].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[16].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));  goto L_0041BC14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BBF0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 388u, depth + 1u); else { c.pc = 0x00416E28u; return; } if (c.pc != 0x0041BBF0u) [[unlikely]] return; }
L_0041BBF0:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));  goto L_0041BC14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BC04u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 260u, depth + 1u); else { c.pc = 0x00415E28u; return; } if (c.pc != 0x0041BC04u) [[unlikely]] return; }
L_0041BC04:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0041BC58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_0041BC14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0041BC54; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 114u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 3u);  goto L_0041BC4C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BC34u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C5(c, 227u, depth + 1u); else { c.pc = 0x004159D8u; return; } if (c.pc != 0x0041BC34u) [[unlikely]] return; }
L_0041BC34:
    st32((c.r[17].w[0] + 156u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + 13456u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 6;
L_0041BC4C:
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0041BC54:
    st8((c.r[17].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0041BC58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BC60u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 260u, depth + 1u); else { c.pc = 0x00415E28u; return; } if (c.pc != 0x0041BC60u) [[unlikely]] return; }
L_0041BC60:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0041BCF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BC74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 237u, depth + 1u); else { c.pc = 0x00419A18u; return; } if (c.pc != 0x0041BC74u) [[unlikely]] return; }
L_0041BC74:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[19], c.r[2].w[0] << 1);  if (t) { goto L_0041BCEC; } }
    set32(c.r[18], c.r[17].w[0] + 24u);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 4;
L_0041BC98:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BCBCu); set32(c.r[17], c.r[17].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041BCBCu) [[unlikely]] return; }
L_0041BCBC:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BCCCu); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0041BCCCu) [[unlikely]] return; }
L_0041BCCC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BCE4u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041BCE4u) [[unlikely]] return; }
L_0041BCE4:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[16], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041BC98u | kUnwind; return; } goto L_0041BC98; }
L_0041BCEC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041BCF0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041BD10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 108u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041BD60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BD44u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 375u, depth + 1u); else { c.pc = 0x00416D70u; return; } if (c.pc != 0x0041BD44u) [[unlikely]] return; }
L_0041BD44:
    set32(c.r[3], ld32((c.r[17].w[0] + 196u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041BD60; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BD60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C5(c, 381u, depth + 1u); else { c.pc = 0x00416DB0u; return; } if (c.pc != 0x0041BD60u) [[unlikely]] return; }
L_0041BD60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BD68u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 260u, depth + 1u); else { c.pc = 0x00415E28u; return; } if (c.pc != 0x0041BD68u) [[unlikely]] return; }
L_0041BD68:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0041BDDC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BD88u); set32(c.r[16], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_00C5(c, 386u, depth + 1u); else { c.pc = 0x00416DF8u; return; } if (c.pc != 0x0041BD88u) [[unlikely]] return; }
L_0041BD88:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 11104u), c.r[18].w[0]);  if (t) { goto L_0041BD9C; } }
L_0041BD98:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0041BD9C:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041BDCC; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BDC0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041BDC0u) [[unlikely]] return; }
L_0041BDC0:
    c.r[3].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[20].w[0] - 11100u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041BD98u | kUnwind; return; } goto L_0041BD98; } }
L_0041BDCC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[18].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0041BDDC; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0041BDDC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041BDF8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BE34u); set32(c.r[4], ld32((c.r[22].w[0] + 12u)));  if (depth < kMaxDepth) unit_00C5(c, 228u, depth + 1u); else { c.pc = 0x004159F8u; return; } if (c.pc != 0x0041BE34u) [[unlikely]] return; }
L_0041BE34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[3].w[0] - 11096u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BE44u); set32(c.r[4], ld32((c.r[22].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 386u, depth + 1u); else { c.pc = 0x00416DF8u; return; } if (c.pc != 0x0041BE44u) [[unlikely]] return; }
L_0041BE44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BE4Cu); c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 32u, depth + 1u); else { c.pc = 0x0042C790u; return; } if (c.pc != 0x0041BE4Cu) [[unlikely]] return; }
L_0041BE4C:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] <= 0; set32(c.r[21], ld32((c.r[22].w[0] + 72u)));  if (t) { goto L_0041BEA0; } }
    set32(c.r[17], c.r[22].w[0] + 24u);
    c.budget -= 1;
L_0041BE58:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[16], c.r[20].w[0] << 3);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[21].w[0] << 1);
    set32(c.r[7], c.r[29].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BE80u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041BE80u) [[unlikely]] return; }
L_0041BE80:
    c.r[4].d[0] = c.r[20].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[29].w[0] + 4u);
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; if (c.r[2].d[0] != 0) c.r[21].d[0] = c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041BE58u | kUnwind; return; } goto L_0041BE58; } }
L_0041BEA0:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] <= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0041BF34; } }
    set32(c.r[30], c.r[21].w[0] << 1);
    set32(c.r[19], c.r[22].w[0] + 24u);
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_0041BEB8:
    set32(c.r[16], c.r[20].w[0] << 3);
    set32(c.r[17], c.r[29].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[2].w[0] + c.r[16].w[0]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BED8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x0041BED8u) [[unlikely]] return; }
L_0041BED8:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[29].w[0] + 4u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BEF4u); set32(c.r[6], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0041BEF4u) [[unlikely]] return; }
L_0041BEF4:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BF0Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041BF0Cu) [[unlikely]] return; }
L_0041BF0C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BF28u); set32(c.r[19], c.r[19].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041BF28u) [[unlikely]] return; }
L_0041BF28:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[29].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041BEB8u | kUnwind; return; } goto L_0041BEB8; } }
L_0041BF34:
    set32(c.r[2], ld32((c.r[22].w[0] + 168u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BF48u); st32((c.r[22].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CB(c, 33u, depth + 1u); else { c.pc = 0x0042C7A8u; return; } if (c.pc != 0x0041BF48u) [[unlikely]] return; }
L_0041BF48:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] <= 0;  if (t) { goto L_0041BF84; } }
    c.r[20].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[16], c.r[22].w[0] + 24u);
    c.budget -= 2;
L_0041BF58:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BF74u); set32(c.r[20], c.r[20].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041BF74u) [[unlikely]] return; }
L_0041BF74:
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != 0ull; if (c.r[3].d[0] == 0) c.r[17].d[0] = c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041BF58u | kUnwind; return; } goto L_0041BF58; } }
L_0041BF84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BF8Cu); set32(c.r[4], ld32((c.r[22].w[0] + 12u)));  if (depth < kMaxDepth) unit_00C5(c, 228u, depth + 1u); else { c.pc = 0x004159F8u; return; } if (c.pc != 0x0041BF8Cu) [[unlikely]] return; }
L_0041BF8C:
    set32(c.r[3], ld32((c.r[22].w[0] + 168u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[2].sd[0] > 0) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0041BFD0; }
    set32(c.r[4], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BFACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 226u, depth + 1u); else { c.pc = 0x004159C0u; return; } if (c.pc != 0x0041BFACu) [[unlikely]] return; }
L_0041BFAC:
    set32(c.r[4], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BFB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 227u, depth + 1u); else { c.pc = 0x004159D8u; return; } if (c.pc != 0x0041BFB8u) [[unlikely]] return; }
L_0041BFB8:
    set32(c.r[4], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BFC4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C8(c, 431u, depth + 1u); else { c.pc = 0x00423C50u; return; } if (c.pc != 0x0041BFC4u) [[unlikely]] return; }
L_0041BFC4:
    set32(c.r[2], 0u + 5u);
    st8((c.r[22].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
L_0041BFD0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
}

}
