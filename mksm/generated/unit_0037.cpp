#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0037[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0,
    14, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0,
    0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0,
    29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0,
    0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 99, 0, 0,
    0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0,
    0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0,
    0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0, 0, 0, 183, 0, 184, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 244, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0,
    272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0,
    312, 0, 0, 0, 313, 0, 314, 0, 0, 0, 315, 0, 316, 0, 0, 0, 317, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 0, 321, 0, 322, 0,
    0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 326, 0, 0, 0, 327, 0, 328, 0, 0, 0, 329, 0, 330, 0, 0, 0, 331, 0, 332, 0, 0, 0,
    333, 0, 334, 0, 0, 0, 335, 0, 336, 0, 0, 0, 337, 0, 338, 0, 0, 0, 339, 0, 340, 0, 0, 0, 341, 0, 342, 0, 0, 0, 343, 0,
    344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349,
    0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0,
    0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0,
    369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 373, 0, 0, 0, 374, 0, 375, 0, 376, 0, 377, 0, 0, 0, 0, 0, 378, 0,
    0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 384, 0, 0, 0, 385, 0, 386, 0, 0,
    0, 387, 0, 388, 0, 0, 0, 389, 0, 390, 0, 0, 0, 391, 0, 392, 0, 0, 0, 393, 0, 394, 0, 0, 0, 395, 0, 396, 0, 0, 0, 397,
    0, 398, 0, 0, 0, 399, 0, 400, 0, 0, 0, 401, 0, 402, 0, 0, 0, 403, 0, 404, 0, 0, 0, 405, 0, 406, 0, 0, 0, 407, 0, 408,
    0, 0, 0, 409, 0, 410, 0, 0, 0, 411, 0, 412, 0, 0, 0, 413, 0, 414, 0, 0, 0, 415, 0, 416, 0, 0, 0, 417, 0, 418, 0, 0,
    0, 419, 0, 420, 0, 0, 0, 421, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 425, 0, 0, 0, 426, 0, 427, 0, 0, 0, 428, 0, 0,
    0, 429, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0,
    434, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0,
    0, 0, 440, 0, 441, 0, 442, 0, 0, 443, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 448, 0, 0, 449,
    0, 450, 0, 451, 0, 0, 452, 0, 453, 0, 454, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0,
    466, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476,
    0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 480, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 487, 0, 488, 0,
    0, 489, 0, 490, 0, 0, 0, 0, 0, 491, 0, 492, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0,
    0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0,
    500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 507, 0, 0, 508, 0, 0, 509, 0, 0, 510, 0, 0, 511,
    0, 0, 512, 0, 0, 513, 0, 0, 514, 0, 515, 0, 0, 516, 0, 0, 517, 0, 518, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521,
    0, 0, 0, 522, 0, 523, 0, 524, 0, 525, 0, 0, 0, 526, 0, 0, 527, 0, 0, 528, 0, 529, 0, 530, 0, 0, 0, 531, 0, 532, 0, 0,
    533, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 538, 0, 539, 0, 540, 0, 541, 0, 0, 0, 542, 0, 0, 543,
    0, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 550, 0, 551, 0, 552, 0, 553,
    0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 558, 0, 559, 0, 0, 0, 560, 0, 0, 0, 561,
    0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 0, 569, 0, 0,
    570, 0, 0, 571, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 578,
    0, 0, 0, 579, 0, 0, 0, 580, 0, 581, 0, 0, 582, 0, 0, 583, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 587, 0,
    588, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0,
    596, 0, 0, 0, 597, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0,
};

void unit_0037(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001DC000;
    case 2u: goto L_001DC024;
    case 3u: goto L_001DC048;
    case 4u: goto L_001DC050;
    case 5u: goto L_001DC068;
    case 6u: goto L_001DC078;
    case 7u: goto L_001DC094;
    case 8u: goto L_001DC0B0;
    case 9u: goto L_001DC0E0;
    case 10u: goto L_001DC138;
    case 11u: goto L_001DC150;
    case 12u: goto L_001DC168;
    case 13u: goto L_001DC178;
    case 14u: goto L_001DC180;
    case 15u: goto L_001DC188;
    case 16u: goto L_001DC198;
    case 17u: goto L_001DC1B0;
    case 18u: goto L_001DC1BC;
    case 19u: goto L_001DC1E8;
    case 20u: goto L_001DC1F4;
    case 21u: goto L_001DC204;
    case 22u: goto L_001DC214;
    case 23u: goto L_001DC224;
    case 24u: goto L_001DC234;
    case 25u: goto L_001DC244;
    case 26u: goto L_001DC24C;
    case 27u: goto L_001DC268;
    case 28u: goto L_001DC278;
    case 29u: goto L_001DC280;
    case 30u: goto L_001DC298;
    case 31u: goto L_001DC2A8;
    case 32u: goto L_001DC310;
    case 33u: goto L_001DC33C;
    case 34u: goto L_001DC350;
    case 35u: goto L_001DC364;
    case 36u: goto L_001DC378;
    case 37u: goto L_001DC3A8;
    case 38u: goto L_001DC3B8;
    case 39u: goto L_001DC3C8;
    case 40u: goto L_001DC3D8;
    case 41u: goto L_001DC408;
    case 42u: goto L_001DC430;
    case 43u: goto L_001DC460;
    case 44u: goto L_001DC484;
    case 45u: goto L_001DC4C4;
    case 46u: goto L_001DC4E4;
    case 47u: goto L_001DC4F8;
    case 48u: goto L_001DC518;
    case 49u: goto L_001DC530;
    case 50u: goto L_001DC550;
    case 51u: goto L_001DC560;
    case 52u: goto L_001DC578;
    case 53u: goto L_001DC588;
    case 54u: goto L_001DC598;
    case 55u: goto L_001DC5B0;
    case 56u: goto L_001DC5D8;
    case 57u: goto L_001DC5F0;
    case 58u: goto L_001DC610;
    case 59u: goto L_001DC624;
    case 60u: goto L_001DC644;
    case 61u: goto L_001DC658;
    case 62u: goto L_001DC69C;
    case 63u: goto L_001DC6B0;
    case 64u: goto L_001DC6FC;
    case 65u: goto L_001DC710;
    case 66u: goto L_001DC72C;
    case 67u: goto L_001DC740;
    case 68u: goto L_001DC790;
    case 69u: goto L_001DC7B0;
    case 70u: goto L_001DC7CC;
    case 71u: goto L_001DC7E8;
    case 72u: goto L_001DC804;
    case 73u: goto L_001DC818;
    case 74u: goto L_001DC850;
    case 75u: goto L_001DC868;
    case 76u: goto L_001DC898;
    case 77u: goto L_001DC8E4;
    case 78u: goto L_001DC8FC;
    case 79u: goto L_001DC918;
    case 80u: goto L_001DC950;
    case 81u: goto L_001DC968;
    case 82u: goto L_001DC984;
    case 83u: goto L_001DC9CC;
    case 84u: goto L_001DC9E4;
    case 85u: goto L_001DCA20;
    case 86u: goto L_001DCA38;
    case 87u: goto L_001DCA48;
    case 88u: goto L_001DCA70;
    case 89u: goto L_001DCA90;
    case 90u: goto L_001DCACC;
    case 91u: goto L_001DCAE8;
    case 92u: goto L_001DCAF0;
    case 93u: goto L_001DCB0C;
    case 94u: goto L_001DCB20;
    case 95u: goto L_001DCB48;
    case 96u: goto L_001DCB50;
    case 97u: goto L_001DCB58;
    case 98u: goto L_001DCB60;
    case 99u: goto L_001DCB74;
    case 100u: goto L_001DCB84;
    case 101u: goto L_001DCB98;
    case 102u: goto L_001DCBD8;
    case 103u: goto L_001DCBFC;
    case 104u: goto L_001DCC38;
    case 105u: goto L_001DCC4C;
    case 106u: goto L_001DCC58;
    case 107u: goto L_001DCC80;
    case 108u: goto L_001DCC90;
    case 109u: goto L_001DCCA0;
    case 110u: goto L_001DCCB4;
    case 111u: goto L_001DCCC4;
    case 112u: goto L_001DCCD0;
    case 113u: goto L_001DCCDC;
    case 114u: goto L_001DCCF0;
    case 115u: goto L_001DCD30;
    case 116u: goto L_001DCD80;
    case 117u: goto L_001DCD94;
    case 118u: goto L_001DCE28;
    case 119u: goto L_001DCE38;
    case 120u: goto L_001DCE40;
    case 121u: goto L_001DCE50;
    case 122u: goto L_001DCE60;
    case 123u: goto L_001DCE70;
    case 124u: goto L_001DCE78;
    case 125u: goto L_001DCEC8;
    case 126u: goto L_001DCED8;
    case 127u: goto L_001DCEF4;
    case 128u: goto L_001DCF08;
    case 129u: goto L_001DCF30;
    case 130u: goto L_001DCF48;
    case 131u: goto L_001DCF5C;
    case 132u: goto L_001DCFB0;
    case 133u: goto L_001DCFCC;
    case 134u: goto L_001DCFE8;
    case 135u: goto L_001DCFF8;
    case 136u: goto L_001DD010;
    case 137u: goto L_001DD028;
    case 138u: goto L_001DD058;
    case 139u: goto L_001DD088;
    case 140u: goto L_001DD0A4;
    case 141u: goto L_001DD0B0;
    case 142u: goto L_001DD0C4;
    case 143u: goto L_001DD0F0;
    case 144u: goto L_001DD130;
    case 145u: goto L_001DD148;
    case 146u: goto L_001DD154;
    case 147u: goto L_001DD170;
    case 148u: goto L_001DD18C;
    case 149u: goto L_001DD1A0;
    case 150u: goto L_001DD1B4;
    case 151u: goto L_001DD1C8;
    case 152u: goto L_001DD1D0;
    case 153u: goto L_001DD1E0;
    case 154u: goto L_001DD1F0;
    case 155u: goto L_001DD224;
    case 156u: goto L_001DD234;
    case 157u: goto L_001DD248;
    case 158u: goto L_001DD258;
    case 159u: goto L_001DD270;
    case 160u: goto L_001DD280;
    case 161u: goto L_001DD290;
    case 162u: goto L_001DD2A0;
    case 163u: goto L_001DD2E0;
    case 164u: goto L_001DD338;
    case 165u: goto L_001DD350;
    case 166u: goto L_001DD368;
    case 167u: goto L_001DD380;
    case 168u: goto L_001DD394;
    case 169u: goto L_001DD3C0;
    case 170u: goto L_001DD3D8;
    case 171u: goto L_001DD3F0;
    case 172u: goto L_001DD408;
    case 173u: goto L_001DD41C;
    case 174u: goto L_001DD448;
    case 175u: goto L_001DD468;
    case 176u: goto L_001DD474;
    case 177u: goto L_001DD488;
    case 178u: goto L_001DD498;
    case 179u: goto L_001DD4DC;
    case 180u: goto L_001DD518;
    case 181u: goto L_001DD528;
    case 182u: goto L_001DD530;
    case 183u: goto L_001DD540;
    case 184u: goto L_001DD548;
    case 185u: goto L_001DD550;
    case 186u: goto L_001DD560;
    case 187u: goto L_001DD570;
    case 188u: goto L_001DD580;
    case 189u: goto L_001DD5AC;
    case 190u: goto L_001DD5C0;
    case 191u: goto L_001DD638;
    case 192u: goto L_001DD648;
    case 193u: goto L_001DD674;
    case 194u: goto L_001DD688;
    case 195u: goto L_001DD700;
    case 196u: goto L_001DD710;
    case 197u: goto L_001DD740;
    case 198u: goto L_001DD76C;
    case 199u: goto L_001DD780;
    case 200u: goto L_001DD794;
    case 201u: goto L_001DD7F4;
    case 202u: goto L_001DD858;
    case 203u: goto L_001DD86C;
    case 204u: goto L_001DD8F0;
    case 205u: goto L_001DD900;
    case 206u: goto L_001DD92C;
    case 207u: goto L_001DD940;
    case 208u: goto L_001DD950;
    case 209u: goto L_001DD9D0;
    case 210u: goto L_001DDA14;
    case 211u: goto L_001DDA2C;
    case 212u: goto L_001DDA70;
    case 213u: goto L_001DDAA0;
    case 214u: goto L_001DDAB0;
    case 215u: goto L_001DDB40;
    case 216u: goto L_001DDB50;
    case 217u: goto L_001DDB60;
    case 218u: goto L_001DDB78;
    case 219u: goto L_001DDB88;
    case 220u: goto L_001DDB98;
    case 221u: goto L_001DDBB0;
    case 222u: goto L_001DDBC0;
    case 223u: goto L_001DDBFC;
    case 224u: goto L_001DDC0C;
    case 225u: goto L_001DDC18;
    case 226u: goto L_001DDC28;
    case 227u: goto L_001DDC34;
    case 228u: goto L_001DDC44;
    case 229u: goto L_001DDC50;
    case 230u: goto L_001DDC68;
    case 231u: goto L_001DDC88;
    case 232u: goto L_001DDCA8;
    case 233u: goto L_001DDCB4;
    case 234u: goto L_001DDD10;
    case 235u: goto L_001DDD28;
    case 236u: goto L_001DDD38;
    case 237u: goto L_001DDD58;
    case 238u: goto L_001DDDC4;
    case 239u: goto L_001DDE04;
    case 240u: goto L_001DDE50;
    case 241u: goto L_001DDE90;
    case 242u: goto L_001DDEC8;
    case 243u: goto L_001DDED8;
    case 244u: goto L_001DDEE0;
    case 245u: goto L_001DDEF0;
    case 246u: goto L_001DDF0C;
    case 247u: goto L_001DDF30;
    case 248u: goto L_001DDF44;
    case 249u: goto L_001DDF4C;
    case 250u: goto L_001DDF60;
    case 251u: goto L_001DDF68;
    case 252u: goto L_001DDF80;
    case 253u: goto L_001DDF90;
    case 254u: goto L_001DDFA8;
    case 255u: goto L_001DDFB8;
    case 256u: goto L_001DDFC8;
    case 257u: goto L_001DDFE0;
    case 258u: goto L_001DDFF0;
    case 259u: goto L_001DE000;
    case 260u: goto L_001DE018;
    case 261u: goto L_001DE028;
    case 262u: goto L_001DE038;
    case 263u: goto L_001DE050;
    case 264u: goto L_001DE060;
    case 265u: goto L_001DE070;
    case 266u: goto L_001DE088;
    case 267u: goto L_001DE098;
    case 268u: goto L_001DE0A8;
    case 269u: goto L_001DE0C8;
    case 270u: goto L_001DE0E0;
    case 271u: goto L_001DE0F0;
    case 272u: goto L_001DE100;
    case 273u: goto L_001DE110;
    case 274u: goto L_001DE120;
    case 275u: goto L_001DE140;
    case 276u: goto L_001DE150;
    case 277u: goto L_001DE160;
    case 278u: goto L_001DE1C4;
    case 279u: goto L_001DE1E0;
    case 280u: goto L_001DE1F0;
    case 281u: goto L_001DE208;
    case 282u: goto L_001DE220;
    case 283u: goto L_001DE248;
    case 284u: goto L_001DE26C;
    case 285u: goto L_001DE280;
    case 286u: goto L_001DE294;
    case 287u: goto L_001DE2C0;
    case 288u: goto L_001DE2F8;
    case 289u: goto L_001DE30C;
    case 290u: goto L_001DE340;
    case 291u: goto L_001DE350;
    case 292u: goto L_001DE3B0;
    case 293u: goto L_001DE3BC;
    case 294u: goto L_001DE3D4;
    case 295u: goto L_001DE3E4;
    case 296u: goto L_001DE418;
    case 297u: goto L_001DE430;
    case 298u: goto L_001DE440;
    case 299u: goto L_001DE458;
    case 300u: goto L_001DE468;
    case 301u: goto L_001DE498;
    case 302u: goto L_001DE4C0;
    case 303u: goto L_001DE4D8;
    case 304u: goto L_001DE510;
    case 305u: goto L_001DE574;
    case 306u: goto L_001DE590;
    case 307u: goto L_001DE608;
    case 308u: goto L_001DE61C;
    case 309u: goto L_001DE638;
    case 310u: goto L_001DE668;
    case 311u: goto L_001DE678;
    case 312u: goto L_001DE680;
    case 313u: goto L_001DE690;
    case 314u: goto L_001DE698;
    case 315u: goto L_001DE6A8;
    case 316u: goto L_001DE6B0;
    case 317u: goto L_001DE6C0;
    case 318u: goto L_001DE6C8;
    case 319u: goto L_001DE6D8;
    case 320u: goto L_001DE6E0;
    case 321u: goto L_001DE6F0;
    case 322u: goto L_001DE6F8;
    case 323u: goto L_001DE708;
    case 324u: goto L_001DE710;
    case 325u: goto L_001DE720;
    case 326u: goto L_001DE728;
    case 327u: goto L_001DE738;
    case 328u: goto L_001DE740;
    case 329u: goto L_001DE750;
    case 330u: goto L_001DE758;
    case 331u: goto L_001DE768;
    case 332u: goto L_001DE770;
    case 333u: goto L_001DE780;
    case 334u: goto L_001DE788;
    case 335u: goto L_001DE798;
    case 336u: goto L_001DE7A0;
    case 337u: goto L_001DE7B0;
    case 338u: goto L_001DE7B8;
    case 339u: goto L_001DE7C8;
    case 340u: goto L_001DE7D0;
    case 341u: goto L_001DE7E0;
    case 342u: goto L_001DE7E8;
    case 343u: goto L_001DE7F8;
    case 344u: goto L_001DE800;
    case 345u: goto L_001DE810;
    case 346u: goto L_001DE820;
    case 347u: goto L_001DE854;
    case 348u: goto L_001DE864;
    case 349u: goto L_001DE87C;
    case 350u: goto L_001DE888;
    case 351u: goto L_001DE8A4;
    case 352u: goto L_001DE8BC;
    case 353u: goto L_001DE8CC;
    case 354u: goto L_001DE8D8;
    case 355u: goto L_001DE8F4;
    case 356u: goto L_001DE90C;
    case 357u: goto L_001DE938;
    case 358u: goto L_001DE960;
    case 359u: goto L_001DE980;
    case 360u: goto L_001DE9C8;
    case 361u: goto L_001DE9D0;
    case 362u: goto L_001DEA08;
    case 363u: goto L_001DEA18;
    case 364u: goto L_001DEA30;
    case 365u: goto L_001DEA38;
    case 366u: goto L_001DEA50;
    case 367u: goto L_001DEA60;
    case 368u: goto L_001DEA68;
    case 369u: goto L_001DEA80;
    case 370u: goto L_001DEA90;
    case 371u: goto L_001DEAA0;
    case 372u: goto L_001DEAB0;
    case 373u: goto L_001DEAB8;
    case 374u: goto L_001DEAC8;
    case 375u: goto L_001DEAD0;
    case 376u: goto L_001DEAD8;
    case 377u: goto L_001DEAE0;
    case 378u: goto L_001DEAF8;
    case 379u: goto L_001DEB04;
    case 380u: goto L_001DEB18;
    case 381u: goto L_001DEB70;
    case 382u: goto L_001DEBC4;
    case 383u: goto L_001DEBD4;
    case 384u: goto L_001DEBDC;
    case 385u: goto L_001DEBEC;
    case 386u: goto L_001DEBF4;
    case 387u: goto L_001DEC04;
    case 388u: goto L_001DEC0C;
    case 389u: goto L_001DEC1C;
    case 390u: goto L_001DEC24;
    case 391u: goto L_001DEC34;
    case 392u: goto L_001DEC3C;
    case 393u: goto L_001DEC4C;
    case 394u: goto L_001DEC54;
    case 395u: goto L_001DEC64;
    case 396u: goto L_001DEC6C;
    case 397u: goto L_001DEC7C;
    case 398u: goto L_001DEC84;
    case 399u: goto L_001DEC94;
    case 400u: goto L_001DEC9C;
    case 401u: goto L_001DECAC;
    case 402u: goto L_001DECB4;
    case 403u: goto L_001DECC4;
    case 404u: goto L_001DECCC;
    case 405u: goto L_001DECDC;
    case 406u: goto L_001DECE4;
    case 407u: goto L_001DECF4;
    case 408u: goto L_001DECFC;
    case 409u: goto L_001DED0C;
    case 410u: goto L_001DED14;
    case 411u: goto L_001DED24;
    case 412u: goto L_001DED2C;
    case 413u: goto L_001DED3C;
    case 414u: goto L_001DED44;
    case 415u: goto L_001DED54;
    case 416u: goto L_001DED5C;
    case 417u: goto L_001DED6C;
    case 418u: goto L_001DED74;
    case 419u: goto L_001DED84;
    case 420u: goto L_001DED8C;
    case 421u: goto L_001DED9C;
    case 422u: goto L_001DEDA4;
    case 423u: goto L_001DEDB4;
    case 424u: goto L_001DEDC4;
    case 425u: goto L_001DEDCC;
    case 426u: goto L_001DEDDC;
    case 427u: goto L_001DEDE4;
    case 428u: goto L_001DEDF4;
    case 429u: goto L_001DEE04;
    case 430u: goto L_001DEE0C;
    case 431u: goto L_001DEE1C;
    case 432u: goto L_001DEE38;
    case 433u: goto L_001DEE78;
    case 434u: goto L_001DEE80;
    case 435u: goto L_001DEE88;
    case 436u: goto L_001DEEB0;
    case 437u: goto L_001DEED0;
    case 438u: goto L_001DEEE0;
    case 439u: goto L_001DEEE8;
    case 440u: goto L_001DEF08;
    case 441u: goto L_001DEF10;
    case 442u: goto L_001DEF18;
    case 443u: goto L_001DEF24;
    case 444u: goto L_001DEF2C;
    case 445u: goto L_001DEF3C;
    case 446u: goto L_001DEF54;
    case 447u: goto L_001DEF60;
    case 448u: goto L_001DEF70;
    case 449u: goto L_001DEF7C;
    case 450u: goto L_001DEF84;
    case 451u: goto L_001DEF8C;
    case 452u: goto L_001DEF98;
    case 453u: goto L_001DEFA0;
    case 454u: goto L_001DEFA8;
    case 455u: goto L_001DEFB8;
    case 456u: goto L_001DEFC0;
    case 457u: goto L_001DEFD4;
    case 458u: goto L_001DEFDC;
    case 459u: goto L_001DEFF8;
    case 460u: goto L_001DF030;
    case 461u: goto L_001DF044;
    case 462u: goto L_001DF0F8;
    case 463u: goto L_001DF138;
    case 464u: goto L_001DF148;
    case 465u: goto L_001DF174;
    case 466u: goto L_001DF180;
    case 467u: goto L_001DF18C;
    case 468u: goto L_001DF194;
    case 469u: goto L_001DF214;
    case 470u: goto L_001DF38C;
    case 471u: goto L_001DF3A4;
    case 472u: goto L_001DF538;
    case 473u: goto L_001DF558;
    case 474u: goto L_001DF58C;
    case 475u: goto L_001DF6FC;
    case 476u: goto L_001DF7FC;
    case 477u: goto L_001DF820;
    case 478u: goto L_001DF85C;
    case 479u: goto L_001DF86C;
    case 480u: goto L_001DF878;
    case 481u: goto L_001DF8B0;
    case 482u: goto L_001DF8C0;
    case 483u: goto L_001DF920;
    case 484u: goto L_001DF940;
    case 485u: goto L_001DF950;
    case 486u: goto L_001DF960;
    case 487u: goto L_001DF970;
    case 488u: goto L_001DF978;
    case 489u: goto L_001DF984;
    case 490u: goto L_001DF98C;
    case 491u: goto L_001DF9A4;
    case 492u: goto L_001DF9AC;
    case 493u: goto L_001DF9B4;
    case 494u: goto L_001DF9D0;
    case 495u: goto L_001DF9F8;
    case 496u: goto L_001DFA10;
    case 497u: goto L_001DFA30;
    case 498u: goto L_001DFA6C;
    case 499u: goto L_001DFA78;
    case 500u: goto L_001DFA80;
    case 501u: goto L_001DFA88;
    case 502u: goto L_001DFA90;
    case 503u: goto L_001DFA98;
    case 504u: goto L_001DFAA0;
    case 505u: goto L_001DFAB8;
    case 506u: goto L_001DFAC0;
    case 507u: goto L_001DFACC;
    case 508u: goto L_001DFAD8;
    case 509u: goto L_001DFAE4;
    case 510u: goto L_001DFAF0;
    case 511u: goto L_001DFAFC;
    case 512u: goto L_001DFB08;
    case 513u: goto L_001DFB14;
    case 514u: goto L_001DFB20;
    case 515u: goto L_001DFB28;
    case 516u: goto L_001DFB34;
    case 517u: goto L_001DFB40;
    case 518u: goto L_001DFB48;
    case 519u: goto L_001DFB50;
    case 520u: goto L_001DFB68;
    case 521u: goto L_001DFB7C;
    case 522u: goto L_001DFB8C;
    case 523u: goto L_001DFB94;
    case 524u: goto L_001DFB9C;
    case 525u: goto L_001DFBA4;
    case 526u: goto L_001DFBB4;
    case 527u: goto L_001DFBC0;
    case 528u: goto L_001DFBCC;
    case 529u: goto L_001DFBD4;
    case 530u: goto L_001DFBDC;
    case 531u: goto L_001DFBEC;
    case 532u: goto L_001DFBF4;
    case 533u: goto L_001DFC00;
    case 534u: goto L_001DFC10;
    case 535u: goto L_001DFC18;
    case 536u: goto L_001DFC30;
    case 537u: goto L_001DFC3C;
    case 538u: goto L_001DFC48;
    case 539u: goto L_001DFC50;
    case 540u: goto L_001DFC58;
    case 541u: goto L_001DFC60;
    case 542u: goto L_001DFC70;
    case 543u: goto L_001DFC7C;
    case 544u: goto L_001DFC8C;
    case 545u: goto L_001DFC98;
    case 546u: goto L_001DFCA4;
    case 547u: goto L_001DFCAC;
    case 548u: goto L_001DFCC4;
    case 549u: goto L_001DFCD8;
    case 550u: goto L_001DFCE4;
    case 551u: goto L_001DFCEC;
    case 552u: goto L_001DFCF4;
    case 553u: goto L_001DFCFC;
    case 554u: goto L_001DFD0C;
    case 555u: goto L_001DFD24;
    case 556u: goto L_001DFD34;
    case 557u: goto L_001DFD44;
    case 558u: goto L_001DFD54;
    case 559u: goto L_001DFD5C;
    case 560u: goto L_001DFD6C;
    case 561u: goto L_001DFD7C;
    case 562u: goto L_001DFD8C;
    case 563u: goto L_001DFD9C;
    case 564u: goto L_001DFDA8;
    case 565u: goto L_001DFDBC;
    case 566u: goto L_001DFDD0;
    case 567u: goto L_001DFDDC;
    case 568u: goto L_001DFDE8;
    case 569u: goto L_001DFDF4;
    case 570u: goto L_001DFE00;
    case 571u: goto L_001DFE0C;
    case 572u: goto L_001DFE18;
    case 573u: goto L_001DFE24;
    case 574u: goto L_001DFE3C;
    case 575u: goto L_001DFE4C;
    case 576u: goto L_001DFE5C;
    case 577u: goto L_001DFE6C;
    case 578u: goto L_001DFE7C;
    case 579u: goto L_001DFE8C;
    case 580u: goto L_001DFE9C;
    case 581u: goto L_001DFEA4;
    case 582u: goto L_001DFEB0;
    case 583u: goto L_001DFEBC;
    case 584u: goto L_001DFEC4;
    case 585u: goto L_001DFECC;
    case 586u: goto L_001DFEEC;
    case 587u: goto L_001DFEF8;
    case 588u: goto L_001DFF00;
    case 589u: goto L_001DFF08;
    case 590u: goto L_001DFF1C;
    case 591u: goto L_001DFF2C;
    case 592u: goto L_001DFF40;
    case 593u: goto L_001DFF48;
    case 594u: goto L_001DFF5C;
    case 595u: goto L_001DFF70;
    case 596u: goto L_001DFF80;
    case 597u: goto L_001DFF90;
    case 598u: goto L_001DFF98;
    case 599u: goto L_001DFFA8;
    case 600u: goto L_001DFFB8;
    case 601u: goto L_001DFFC8;
    case 602u: goto L_001DFFDC;
    case 603u: goto L_001DFFF0;
    default: bad_entry(c, 0x001DC000u); return;
    }
L_001DC000:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 17360u);
    set32(c.r[5], ld32((c.r[16].w[0] - 26588u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[3].w[0] + 7524u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 24040u);
    set32(c.r[6], 0u + 44u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC024u);  if (depth < kMaxDepth) unit_007D(c, 251u, depth + 1u); else { c.pc = 0x002F7788u; return; } if (c.pc != 0x001DC024u) [[unlikely]] return; }
L_001DC024:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 5800u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC048u);  if (depth < kMaxDepth) unit_0043(c, 82u, depth + 1u); else { c.pc = 0x0020D200u; return; } if (c.pc != 0x001DC048u) [[unlikely]] return; }
L_001DC048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC050u);  if (depth < kMaxDepth) unit_0039(c, 333u, depth + 1u); else { c.pc = 0x001E6D08u; return; } if (c.pc != 0x001DC050u) [[unlikely]] return; }
L_001DC050:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 3u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC068:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC078:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC094u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001DC094u) [[unlikely]] return; }
L_001DC094:
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001DC0A8; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001DC0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC0B0u);  if (depth < kMaxDepth) unit_0023(c, 81u, depth + 1u); else { c.pc = 0x0018D358u; return; } if (c.pc != 0x001DC0B0u) [[unlikely]] return; }
L_001DC0B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[3].w[0] - 17576u), c.r[2].w[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[18].w[0] + 14664u);
    set32(c.r[2], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001DC0D8; } }
    st32((c.r[16].w[0] + 144u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 148u), 0u);
    c.budget -= 2;
L_001DC0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC0E0u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001DC0E0u) [[unlikely]] return; }
L_001DC0E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DC0FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 19264u);
    st32((c.r[2].w[0] + 272u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 240u), 0u);
    c.budget -= 5;
L_001DC0FC:
    st32((c.r[18].w[0] + 14664u), c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[16].w[0] + 180u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] - 29816u), 0u);
    st32((c.r[4].w[0] + 12352u), 0u);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC138:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC150u);  if (depth < kMaxDepth) unit_0035(c, 485u, depth + 1u); else { c.pc = 0x001D73C8u; return; } if (c.pc != 0x001DC150u) [[unlikely]] return; }
L_001DC150:
    set32(c.r[2], ld32((c.r[16].w[0])));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC168:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC178u);  if (depth < kMaxDepth) unit_0091(c, 146u, depth + 1u); else { c.pc = 0x00345880u; return; } if (c.pc != 0x001DC178u) [[unlikely]] return; }
L_001DC178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC180u);  if (depth < kMaxDepth) unit_0040(c, 59u, depth + 1u); else { c.pc = 0x00200A70u; return; } if (c.pc != 0x001DC180u) [[unlikely]] return; }
L_001DC180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC188u);  if (depth < kMaxDepth) unit_0044(c, 133u, depth + 1u); else { c.pc = 0x00212860u; return; } if (c.pc != 0x001DC188u) [[unlikely]] return; }
L_001DC188:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC198:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC1B0u);  if (depth < kMaxDepth) unit_0037(c, 497u, depth + 1u); else { c.pc = 0x001DFA30u; return; } if (c.pc != 0x001DC1B0u) [[unlikely]] return; }
L_001DC1B0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC1BCu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001DC1BCu) [[unlikely]] return; }
L_001DC1BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], ld32((c.r[3].w[0] - 368u)));
    st32((c.r[4].w[0] - 3028u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 20668u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC1E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DC1E8u) [[unlikely]] return; }
L_001DC1E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 20668u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC1F4u);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001DC1F4u) [[unlikely]] return; }
L_001DC1F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC204u);  if (depth < kMaxDepth) unit_0095(c, 127u, depth + 1u); else { c.pc = 0x003550F8u; return; } if (c.pc != 0x001DC204u) [[unlikely]] return; }
L_001DC204:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] + 29712u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC214u);  if (depth < kMaxDepth) unit_0094(c, 379u, depth + 1u); else { c.pc = 0x00353ED8u; return; } if (c.pc != 0x001DC214u) [[unlikely]] return; }
L_001DC214:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], c.r[4].w[0] + 20032u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC224u);  if (depth < kMaxDepth) unit_0095(c, 379u, depth + 1u); else { c.pc = 0x00356F20u; return; } if (c.pc != 0x001DC224u) [[unlikely]] return; }
L_001DC224:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 12912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC234u);  if (depth < kMaxDepth) unit_0067(c, 259u, depth + 1u); else { c.pc = 0x0029E7E0u; return; } if (c.pc != 0x001DC234u) [[unlikely]] return; }
L_001DC234:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 32380u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC244u);  if (depth < kMaxDepth) unit_006C(c, 89u, depth + 1u); else { c.pc = 0x002B0F10u; return; } if (c.pc != 0x001DC244u) [[unlikely]] return; }
L_001DC244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC24Cu);  if (depth < kMaxDepth) unit_007A(c, 265u, depth + 1u); else { c.pc = 0x002EB940u; return; } if (c.pc != 0x001DC24Cu) [[unlikely]] return; }
L_001DC24C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] - 29664u), 0u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC268:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC278u);  if (depth < kMaxDepth) unit_0039(c, 85u, depth + 1u); else { c.pc = 0x001E4AE0u; return; } if (c.pc != 0x001DC278u) [[unlikely]] return; }
L_001DC278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC280u);  if (depth < kMaxDepth) unit_0035(c, 224u, depth + 1u); else { c.pc = 0x001D5020u; return; } if (c.pc != 0x001DC280u) [[unlikely]] return; }
L_001DC280:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC298:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC2A8u);  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x001DC2A8u) [[unlikely]] return; }
L_001DC2A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + 14664u);
    set32(c.r[2], ld32((c.r[3].w[0] + 220u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DC2D8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 220u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DC2D8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 2;
L_001DC2D8:
    set32(c.r[3], c.r[4].w[0] + 14664u);
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DC2FC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 212u), 0u);
    st32((c.r[3].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DC300; } }
L_001DC2FC:
    st32((c.r[3].w[0] + 224u), 0u);
    c.budget -= 1;
L_001DC300:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] + 14664u);
    set32(c.r[3], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001DC35C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC33Cu);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x001DC33Cu) [[unlikely]] return; }
L_001DC33C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DC364; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 232u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC350u);  if (depth < kMaxDepth) unit_007D(c, 228u, depth + 1u); else { c.pc = 0x002F7258u; return; } if (c.pc != 0x001DC350u) [[unlikely]] return; }
L_001DC350:
    st32((c.r[16].w[0] + 228u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DC364; } }
L_001DC35C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC364u);  if (depth < kMaxDepth) unit_0082(c, 233u, depth + 1u); else { c.pc = 0x0030B418u; return; } if (c.pc != 0x001DC364u) [[unlikely]] return; }
L_001DC364:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC378:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 29664u), c.r[2].w[0]);
    st32((c.r[6].w[0] - 29668u), 0u);
    st32((c.r[4].w[0] - 29660u), 0u);
    st32((c.r[5].w[0] - 29656u), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC3A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] - 29656u), c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC3B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC3C8u);  if (depth < kMaxDepth) unit_007A(c, 278u, depth + 1u); else { c.pc = 0x002EBA80u; return; } if (c.pc != 0x001DC3C8u) [[unlikely]] return; }
L_001DC3C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC3D8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[2].w[0] + 14208u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[17], 0u + 13248u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[19], c.r[18].w[0] + 13248u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
L_001DC408:
    mmi::mult(c, 0, c.r[3].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    mmi::mult(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 112u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DC430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC430u);  if (depth < kMaxDepth) unit_0019(c, 157u, depth + 1u); else { c.pc = 0x00165C70u; return; } if (c.pc != 0x001DC430u) [[unlikely]] return; }
L_001DC430:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DC408u | kUnwind; return; } goto L_001DC408; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC460:
    set32(c.r[29], c.r[29].w[0] - 560u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 528u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 14960u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC484u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DC484u) [[unlikely]] return; }
L_001DC484:
    set32(c.r[3], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[11], 0u + 268u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] - 14152u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC4C4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001DC4C4u) [[unlikely]] return; }
L_001DC4C4:
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 132u));
    c.f[14] = ld32((c.r[29].w[0] + 136u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC4E4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001DC4E4u) [[unlikely]] return; }
L_001DC4E4:
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 528u));
    set32(c.r[29], c.r[29].w[0] + 560u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC4F8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC518u);  if (depth < kMaxDepth) unit_0006(c, 363u, depth + 1u); else { c.pc = 0x0011AFC8u; return; } if (c.pc != 0x001DC518u) [[unlikely]] return; }
L_001DC518:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC530u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DC530u) [[unlikely]] return; }
L_001DC530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23020u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DC590; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC550u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x001DC550u) [[unlikely]] return; }
L_001DC550:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DC590; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC560u);  if (depth < kMaxDepth) unit_007C(c, 89u, depth + 1u); else { c.pc = 0x002F1690u; return; } if (c.pc != 0x001DC560u) [[unlikely]] return; }
L_001DC560:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16428u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DC578; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC578u);  if (depth < kMaxDepth) unit_003B(c, 79u, depth + 1u); else { c.pc = 0x001ED6F0u; return; } if (c.pc != 0x001DC578u) [[unlikely]] return; }
L_001DC578:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[2].w[0] + 25152u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC588u);  if (depth < kMaxDepth) unit_0035(c, 250u, depth + 1u); else { c.pc = 0x001D52A0u; return; } if (c.pc != 0x001DC588u) [[unlikely]] return; }
L_001DC588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DC5E8; } }
L_001DC590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC598u);  if (depth < kMaxDepth) unit_0035(c, 250u, depth + 1u); else { c.pc = 0x001D52A0u; return; } if (c.pc != 0x001DC598u) [[unlikely]] return; }
L_001DC598:
    set32(c.r[17], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[2].w[0] + 14208u);
    set32(c.r[19], c.r[18].w[0] + 13248u);
    c.budget -= 6;
L_001DC5B0:
    set32(c.r[16], c.r[4].w[0] + 1u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DC5D8; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC5D8u);  if (depth < kMaxDepth) unit_0019(c, 157u, depth + 1u); else { c.pc = 0x00165C70u; return; } if (c.pc != 0x001DC5D8u) [[unlikely]] return; }
L_001DC5D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DC5B0u | kUnwind; return; } goto L_001DC5B0; } }
L_001DC5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC5F0u);  if (depth < kMaxDepth) unit_0084(c, 135u, depth + 1u); else { c.pc = 0x00311F48u; return; } if (c.pc != 0x001DC5F0u) [[unlikely]] return; }
L_001DC5F0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC624u);  if (depth < kMaxDepth) unit_007D(c, 64u, depth + 1u); else { c.pc = 0x002F4870u; return; } if (c.pc != 0x001DC624u) [[unlikely]] return; }
L_001DC624:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[16], c.r[2].w[0] - 16432u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DC644; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC644u);  if (depth < kMaxDepth) unit_0087(c, 127u, depth + 1u); else { c.pc = 0x0031DE38u; return; } if (c.pc != 0x001DC644u) [[unlikely]] return; }
L_001DC644:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DC658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC658u);  if (depth < kMaxDepth) unit_0079(c, 130u, depth + 1u); else { c.pc = 0x002E60B8u; return; } if (c.pc != 0x001DC658u) [[unlikely]] return; }
L_001DC658:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 6092u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DC69C; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x001DC66Cu);  goto L_001DC670; }
L_001DC670:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 23016u)));
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DC69C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DC69C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC69Cu);  if (depth < kMaxDepth) unit_0079(c, 130u, depth + 1u); else { c.pc = 0x002E60B8u; return; } if (c.pc != 0x001DC69Cu) [[unlikely]] return; }
L_001DC69C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC6B0:
    set32(c.r[3], 0u + 13248u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10090u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DC748; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DC748; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC6FCu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001DC6FCu) [[unlikely]] return; }
L_001DC6FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DC748; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC710u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x001DC710u) [[unlikely]] return; }
L_001DC710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DC754; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC72Cu);  if (depth < kMaxDepth) unit_0088(c, 304u, depth + 1u); else { c.pc = 0x00323770u; return; } if (c.pc != 0x001DC72Cu) [[unlikely]] return; }
L_001DC72C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DC754; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC740u);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x001DC740u) [[unlikely]] return; }
L_001DC740:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DC754; } }
L_001DC748:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DC77C; } }
L_001DC754:
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DC778; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 13192u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001DC77C; } }
L_001DC778:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DC77C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC7B0u);  if (depth < kMaxDepth) unit_0071(c, 315u, depth + 1u); else { c.pc = 0x002C7578u; return; } if (c.pc != 0x001DC7B0u) [[unlikely]] return; }
L_001DC7B0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(251ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DC7CC; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC7CCu);  if (depth < kMaxDepth) unit_0049(c, 253u, depth + 1u); else { c.pc = 0x00227018u; return; } if (c.pc != 0x001DC7CCu) [[unlikely]] return; }
L_001DC7CC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DC7E8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC7E8u);  if (depth < kMaxDepth) unit_0049(c, 253u, depth + 1u); else { c.pc = 0x00227018u; return; } if (c.pc != 0x001DC7E8u) [[unlikely]] return; }
L_001DC7E8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 3u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(251ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DC804; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC804u);  if (depth < kMaxDepth) unit_0049(c, 253u, depth + 1u); else { c.pc = 0x00227018u; return; } if (c.pc != 0x001DC804u) [[unlikely]] return; }
L_001DC804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC818:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 29700u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001DC854; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 29692u)));
    set32(c.r[4], c.r[4].w[0] + 12224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC850u);  if (depth < kMaxDepth) unit_0038(c, 207u, depth + 1u); else { c.pc = 0x001E15A0u; return; } if (c.pc != 0x001DC850u) [[unlikely]] return; }
L_001DC850:
    st32((c.r[16].w[0] - 29700u), 0u);
    c.budget -= 1;
L_001DC854:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC868:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC898u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001DC898u) [[unlikely]] return; }
L_001DC898:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001DC8FC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DC8D0; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DC8D0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 920u)));
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DC8FC; } }
L_001DC8D0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC8E4u);  if (depth < kMaxDepth) unit_0061(c, 88u, depth + 1u); else { c.pc = 0x00284FE0u; return; } if (c.pc != 0x001DC8E4u) [[unlikely]] return; }
L_001DC8E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 920u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001DC8FC; } }
    set32(c.r[4], c.r[17].w[0] + 10280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC8FCu);  if (depth < kMaxDepth) unit_009E(c, 69u, depth + 1u); else { c.pc = 0x00378A08u; return; } if (c.pc != 0x001DC8FCu) [[unlikely]] return; }
L_001DC8FC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DC918:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    set32(c.r[18], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    set32(c.r[20], 0u + 13u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    set32(c.r[21], 0u + 6u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
L_001DC950:
    set32(c.r[2], c.r[18].w[0] + 10280u);
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC968u);  if (depth < kMaxDepth) unit_009E(c, 64u, depth + 1u); else { c.pc = 0x00378920u; return; } if (c.pc != 0x001DC968u) [[unlikely]] return; }
L_001DC968:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[22].w[0] + 9872u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001DC9E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC984u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001DC984u) [[unlikely]] return; }
L_001DC984:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001DC9E4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 7700u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DC9C4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_001DC9C4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 920u)));
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DC9E4; } }
L_001DC9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC9CCu);  if (depth < kMaxDepth) unit_0061(c, 88u, depth + 1u); else { c.pc = 0x00284FE0u; return; } if (c.pc != 0x001DC9CCu) [[unlikely]] return; }
L_001DC9CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 920u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001DC9E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC9E4u);  if (depth < kMaxDepth) unit_009E(c, 69u, depth + 1u); else { c.pc = 0x00378A08u; return; } if (c.pc != 0x001DC9E4u) [[unlikely]] return; }
L_001DC9E4:
    set32(c.r[18], c.r[18].w[0] + 13248u);
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DC950u | kUnwind; return; } goto L_001DC950; } }
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
L_001DCA20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 928u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCA38u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x003664F8u; return; } if (c.pc != 0x001DCA38u) [[unlikely]] return; }
L_001DCA38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DCA48:
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DCA70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCA90u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x001DCA90u) [[unlikely]] return; }
L_001DCA90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DCAB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 26356u), c.r[2].w[0]);
    set32(c.r[16], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DCAC4; } }
L_001DCAB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 26356u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DCB0C; } }
    st32((c.r[3].w[0] - 26356u), 0u);
    c.budget -= 1;
L_001DCAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCACCu);  if (depth < kMaxDepth) unit_0061(c, 24u, depth + 1u); else { c.pc = 0x00284410u; return; } if (c.pc != 0x001DCACCu) [[unlikely]] return; }
L_001DCACC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCAE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DCAE8u) [[unlikely]] return; }
L_001DCAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCAF0u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001DCAF0u) [[unlikely]] return; }
L_001DCAF0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 176u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 180u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DCB0Cu) [[unlikely]] return; }
L_001DCB0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DCB20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 19360u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DCB84; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB48u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001DCB48u) [[unlikely]] return; }
L_001DCB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB50u);  if (depth < kMaxDepth) unit_001D(c, 50u, depth + 1u); else { c.pc = 0x00174B40u; return; } if (c.pc != 0x001DCB50u) [[unlikely]] return; }
L_001DCB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB58u);  if (depth < kMaxDepth) unit_0091(c, 142u, depth + 1u); else { c.pc = 0x003457D8u; return; } if (c.pc != 0x001DCB58u) [[unlikely]] return; }
L_001DCB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB60u);  if (depth < kMaxDepth) unit_0086(c, 72u, depth + 1u); else { c.pc = 0x00318A98u; return; } if (c.pc != 0x001DCB60u) [[unlikely]] return; }
L_001DCB60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22944u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB74u);  if (depth < kMaxDepth) unit_0085(c, 318u, depth + 1u); else { c.pc = 0x00317590u; return; } if (c.pc != 0x001DCB74u) [[unlikely]] return; }
L_001DCB74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 20768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCB84u);  if (depth < kMaxDepth) unit_0008(c, 84u, depth + 1u); else { c.pc = 0x00120F00u; return; } if (c.pc != 0x001DCB84u) [[unlikely]] return; }
L_001DCB84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DCB98:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 14152u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[2].w[0] + 264u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[16], c.r[3].w[0] + 13248u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[20], 0u + 52u);
    set32(c.r[19], 0u + 82u);
    set32(c.r[17], 0u + 1u);
    c.budget -= 16;
L_001DCBD8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_001DCBEC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001DCBFC; } }
L_001DCBEC:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCBFCu);  if (depth < kMaxDepth) unit_006C(c, 305u, depth + 1u); else { c.pc = 0x002B32E8u; return; } if (c.pc != 0x001DCBFCu) [[unlikely]] return; }
L_001DCBFC:
    set32(c.r[18], c.r[18].w[0] + 268u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DCBD8u | kUnwind; return; } goto L_001DCBD8; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DCC38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCC4Cu);  if (depth < kMaxDepth) unit_002E(c, 64u, depth + 1u); else { c.pc = 0x001B8B28u; return; } if (c.pc != 0x001DCC4Cu) [[unlikely]] return; }
L_001DCC4C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCC58u);  if (depth < kMaxDepth) unit_002E(c, 64u, depth + 1u); else { c.pc = 0x001B8B28u; return; } if (c.pc != 0x001DCC58u) [[unlikely]] return; }
L_001DCC58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[2].w[0] - 29688u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 24088u), 0u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DCC80:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DCC90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DCCA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCB4u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x001DCCB4u) [[unlikely]] return; }
L_001DCCB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCC4u);  if (depth < kMaxDepth) unit_009C(c, 36u, depth + 1u); else { c.pc = 0x00370458u; return; } if (c.pc != 0x001DCCC4u) [[unlikely]] return; }
L_001DCCC4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCD0u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001DCCD0u) [[unlikely]] return; }
L_001DCCD0:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCCDCu);  if (depth < kMaxDepth) unit_0037(c, 114u, depth + 1u); else { c.pc = 0x001DCCF0u; return; } if (c.pc != 0x001DCCDCu) [[unlikely]] return; }
L_001DCCDC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DCCF0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[17], ld32((c.r[2].w[0] + 31060u)));
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 15;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001DCDF0; } }
    c.budget -= 1;
L_001DCD30:
    set32(c.r[2], ld32((c.r[17].w[0] + 288u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DCDE4; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DCDE4; } }
    set32(c.r[4], c.r[17].w[0] + 24u);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DCDE4; } }
    set32(c.r[30], 0u + 2u);
    set32(c.r[23], 0u - 9u);
    set32(c.r[22], 0u - 3u);
    set32(c.r[21], 0u + 8u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 7;
L_001DCD80:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCD94u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001DCD94u) [[unlikely]] return; }
L_001DCD94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DCDB0; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[30].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[23].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DCDBC; } }
L_001DCDB0:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[22].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[21].d[0];
    c.budget -= 3;
L_001DCDBC:
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[18], c.r[18].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DCD80u | kUnwind; return; } goto L_001DCD80; } }
L_001DCDE4:
    set32(c.r[17], ld32((c.r[17].w[0] + 296u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DCD30u | kUnwind; return; } goto L_001DCD30; } }
L_001DCDF0:
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
L_001DCE28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCE38u);  if (depth < kMaxDepth) unit_0035(c, 531u, depth + 1u); else { c.pc = 0x001D7938u; return; } if (c.pc != 0x001DCE38u) [[unlikely]] return; }
L_001DCE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCE40u);  if (depth < kMaxDepth) unit_007D(c, 51u, depth + 1u); else { c.pc = 0x002F4638u; return; } if (c.pc != 0x001DCE40u) [[unlikely]] return; }
L_001DCE40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DCE50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCE60u);  if (depth < kMaxDepth) unit_0073(c, 114u, depth + 1u); else { c.pc = 0x002CDD60u; return; } if (c.pc != 0x001DCE60u) [[unlikely]] return; }
L_001DCE60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DCE70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DCE78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0] + 24044u), 0u);
    st32((c.r[4].w[0] + 24040u), 0u);
    st32((c.r[6].w[0] + 24036u), 0u);
    st32((c.r[8].w[0] + 24032u), 0u);
    st32((c.r[3].w[0] + 24060u), 0u);
    st32((c.r[5].w[0] + 24056u), 0u);
    st32((c.r[7].w[0] + 24052u), 0u);
    st32((c.r[9].w[0] + 24048u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCEC8u);  if (depth < kMaxDepth) unit_0082(c, 2u, depth + 1u); else { c.pc = 0x00308010u; return; } if (c.pc != 0x001DCEC8u) [[unlikely]] return; }
L_001DCEC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DCED8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCEF4u);  if (depth < kMaxDepth) unit_0071(c, 310u, depth + 1u); else { c.pc = 0x002C7418u; return; } if (c.pc != 0x001DCEF4u) [[unlikely]] return; }
L_001DCEF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DCF08:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCF30u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x001DCF30u) [[unlikely]] return; }
L_001DCF30:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001DCF90; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
L_001DCF48:
    set32(c.r[4], c.r[18].w[0] + 17200u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCF5Cu);  if (depth < kMaxDepth) unit_0071(c, 315u, depth + 1u); else { c.pc = 0x002C7578u; return; } if (c.pc != 0x001DCF5Cu) [[unlikely]] return; }
L_001DCF5C:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 4u));
    c.r[3].d[0] = ld16((c.r[29].w[0] + 6u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001DCF80; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DCF94; } }
L_001DCF80:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DCF48u | kUnwind; return; } goto L_001DCF48; } }
L_001DCF90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DCF94:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DCFB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001DD03C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCFCCu);  if (depth < kMaxDepth) unit_001F(c, 328u, depth + 1u); else { c.pc = 0x0017FE50u; return; } if (c.pc != 0x001DCFCCu) [[unlikely]] return; }
L_001DCFCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DD03C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 19344u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCFE8u);  if (depth < kMaxDepth) unit_0088(c, 288u, depth + 1u); else { c.pc = 0x00323520u; return; } if (c.pc != 0x001DCFE8u) [[unlikely]] return; }
L_001DCFE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_001DD030; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCFF8u);  if (depth < kMaxDepth) unit_0018(c, 304u, depth + 1u); else { c.pc = 0x00162A58u; return; } if (c.pc != 0x001DCFF8u) [[unlikely]] return; }
L_001DCFF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_001DD030; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD010u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x001DD010u) [[unlikely]] return; }
L_001DD010:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DD030; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] + 24040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD028u);  if (depth < kMaxDepth) unit_007D(c, 262u, depth + 1u); else { c.pc = 0x002F7A00u; return; } if (c.pc != 0x001DD028u) [[unlikely]] return; }
L_001DD028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DD03C; } }
L_001DD030:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD040; } }
L_001DD03C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DD040:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD058:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], 0u + 2u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] + 17200u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD088u);  if (depth < kMaxDepth) unit_0071(c, 310u, depth + 1u); else { c.pc = 0x002C7418u; return; } if (c.pc != 0x001DD088u) [[unlikely]] return; }
L_001DD088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DD0F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD0A4u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x001DD0A4u) [[unlikely]] return; }
L_001DD0A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_001DD0EC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DD0B0:
    set32(c.r[4], c.r[18].w[0] + 17200u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD0C4u);  if (depth < kMaxDepth) unit_0071(c, 315u, depth + 1u); else { c.pc = 0x002C7578u; return; } if (c.pc != 0x001DD0C4u) [[unlikely]] return; }
L_001DD0C4:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 4u));
    c.r[3].d[0] = ld16((c.r[29].w[0] + 6u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001DD104; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DD0B0u | kUnwind; return; } goto L_001DD0B0; } }
L_001DD0EC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DD0F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DD110; } }
L_001DD0F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD114; } }
L_001DD104:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DD0F0u | kUnwind; return; } goto L_001DD0F0; } }
L_001DD110:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DD114:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD148u);  if (depth < kMaxDepth) unit_001F(c, 306u, depth + 1u); else { c.pc = 0x0017FC00u; return; } if (c.pc != 0x001DD148u) [[unlikely]] return; }
L_001DD148:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD154u);  if (depth < kMaxDepth) unit_0036(c, 31u, depth + 1u); else { c.pc = 0x001D83C0u; return; } if (c.pc != 0x001DD154u) [[unlikely]] return; }
L_001DD154:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] - 21172u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001DD170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD170u);  if (depth < kMaxDepth) unit_000A(c, 274u, depth + 1u); else { c.pc = 0x0012A388u; return; } if (c.pc != 0x001DD170u) [[unlikely]] return; }
L_001DD170:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[16], c.r[16].w[0] + 4040u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD18Cu);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001DD18Cu) [[unlikely]] return; }
L_001DD18C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD1A0u);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001DD1A0u) [[unlikely]] return; }
L_001DD1A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD1B4u);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001DD1B4u) [[unlikely]] return; }
L_001DD1B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD1C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD1D0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD1E0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD1F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], c.r[2].w[0] - 5096u);
    ldl(c.r[3], (c.r[8].w[0] + 7u));
    ldr(c.r[3], (c.r[8].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 7u));
    sdr(c.r[3], (c.r[29].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD224u);  if (depth < kMaxDepth) unit_009E(c, 210u, depth + 1u); else { c.pc = 0x0037A790u; return; } if (c.pc != 0x001DD224u) [[unlikely]] return; }
L_001DD224:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD234u);  if (depth < kMaxDepth) unit_009E(c, 212u, depth + 1u); else { c.pc = 0x0037A7B0u; return; } if (c.pc != 0x001DD234u) [[unlikely]] return; }
L_001DD234:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD248u);  if (depth < kMaxDepth) unit_009E(c, 140u, depth + 1u); else { c.pc = 0x00379AA8u; return; } if (c.pc != 0x001DD248u) [[unlikely]] return; }
L_001DD248:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD258u);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A938u; return; } if (c.pc != 0x001DD258u) [[unlikely]] return; }
L_001DD258:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD270:
    set32(c.r[2], ld32((c.r[4].w[0] + 3748u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD280:
    st32((c.r[4].w[0] + 3748u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD290:
    set32(c.r[2], ld32((c.r[4].w[0] + 3748u)));
    st32((c.r[2].w[0] + 148u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD2A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0A00000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD2E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[4] = c.r[1].w[0];
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_div(c, 1u, c.f[1], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0A00000u);
    c.f[3] = c.r[1].w[0];
    fpu_div(c, 0u, c.f[0], c.f[4]);
    fpu_div(c, 2u, c.f[2], c.f[3]);
    st32((c.r[4].w[0]), c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    st32((c.r[4].w[0] + 8u), c.f[2]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD338:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
L_001DD350:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[17].w[0] - 14960u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD368u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DD368u) [[unlikely]] return; }
L_001DD368:
    set32(c.r[3], ld32((c.r[2].w[0] + 640u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DD394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD380u);  if (depth < kMaxDepth) unit_0068(c, 298u, depth + 1u); else { c.pc = 0x002A3B08u; return; } if (c.pc != 0x001DD380u) [[unlikely]] return; }
L_001DD380:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DD394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD394u);  if (depth < kMaxDepth) unit_0061(c, 303u, depth + 1u); else { c.pc = 0x00287088u; return; } if (c.pc != 0x001DD394u) [[unlikely]] return; }
L_001DD394:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DD350u | kUnwind; return; } goto L_001DD350; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD3C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
L_001DD3D8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[17].w[0] - 14960u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD3F0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DD3F0u) [[unlikely]] return; }
L_001DD3F0:
    set32(c.r[3], ld32((c.r[2].w[0] + 640u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DD41C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD408u);  if (depth < kMaxDepth) unit_0068(c, 298u, depth + 1u); else { c.pc = 0x002A3B08u; return; } if (c.pc != 0x001DD408u) [[unlikely]] return; }
L_001DD408:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DD41C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD41Cu);  if (depth < kMaxDepth) unit_0061(c, 305u, depth + 1u); else { c.pc = 0x002870C0u; return; } if (c.pc != 0x001DD41Cu) [[unlikely]] return; }
L_001DD41C:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DD3D8u | kUnwind; return; } goto L_001DD3D8; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD448:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] + 27456u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD468u);  if (depth < kMaxDepth) unit_0036(c, 114u, depth + 1u); else { c.pc = 0x001D8D20u; return; } if (c.pc != 0x001DD468u) [[unlikely]] return; }
L_001DD468:
    set32(c.r[4], c.r[16].w[0] + 13248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD474u);  if (depth < kMaxDepth) unit_0036(c, 114u, depth + 1u); else { c.pc = 0x001D8D20u; return; } if (c.pc != 0x001DD474u) [[unlikely]] return; }
L_001DD474:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD488:
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD498:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[2].w[0] + 10744u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001DD518; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001DD518; } }
    c.f[12] = ld32((c.r[3].w[0] + 16u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] + 24040u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD4DCu);  if (depth < kMaxDepth) unit_007D(c, 267u, depth + 1u); else { c.pc = 0x002F7AB0u; return; } if (c.pc != 0x001DD4DCu) [[unlikely]] return; }
L_001DD4DC:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC3740000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 23836ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD518u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x001DD518u) [[unlikely]] return; }
L_001DD518:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD528:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD530:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD540:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD548:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD550:
    st32((c.r[4].w[0] + 60u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD560:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD570:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD5ACu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DD5ACu) [[unlikely]] return; }
L_001DD5AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD5C0u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001DD5C0u) [[unlikely]] return; }
L_001DD5C0:
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[16], c.r[16].w[0] << 1);
    set32(c.r[6], 0u + 96u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[16].w[0] + 31u);
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[16].d[0];
    set32(c.r[2], c.r[2].w[0] + 19436u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.r[16].d[0] = c.r[16].d[0] & 31ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 26584u);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD638:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD648:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD674u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DD674u) [[unlikely]] return; }
L_001DD674:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD688u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001DD688u) [[unlikely]] return; }
L_001DD688:
    set32(c.r[6], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[16], c.r[16].w[0] << 1);
    set32(c.r[5], 0u + 96u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[16].w[0] + 31u);
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[16].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.r[16].d[0] = c.r[16].d[0] & 31ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 26584u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 19436u);
    set32(c.r[16], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD700:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD710:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD740u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001DD740u) [[unlikely]] return; }
L_001DD740:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001DD840; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    set32(c.r[18], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], 0u + 96u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD76Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DD76Cu) [[unlikely]] return; }
L_001DD76C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD780u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DD780u) [[unlikely]] return; }
L_001DD780:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD794u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001DD794u) [[unlikely]] return; }
L_001DD794:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.r[5].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[16].w[0] + 31u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    if (c.r[5].d[0] != 0) c.r[4].d[0] = c.r[16].d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[16].d[0] = c.r[16].d[0] & 31ull;
    set32(c.r[17], c.r[17].w[0] - 26584u);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 19428u);
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD7F4u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001DD7F4u) [[unlikely]] return; }
L_001DD7F4:
    set32(c.r[5], ld32((c.r[20].w[0] + 104u)));
    c.r[18].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[16].w[0] + 31u);
    c.r[3].d[0] = c.r[16].d[0] & 31ull;
    set32(c.r[5], c.r[5].w[0] - 1u);
    if (c.r[18].d[0] != 0) c.r[4].d[0] = c.r[16].d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[19].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + 19428u);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD8C0; } }
L_001DD840:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD858u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DD858u) [[unlikely]] return; }
L_001DD858:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD86Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001DD86Cu) [[unlikely]] return; }
L_001DD86C:
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[6], 0u + 96u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[16].w[0] + 31u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[16].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[16].d[0] = c.r[16].d[0] & 31ull;
    set32(c.r[4], c.r[4].w[0] - 26584u);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 19428u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 21;
L_001DD8C0:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD8F0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 4040u);
    st32((c.r[2].w[0] - 29816u), c.r[3].w[0]);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD92Cu);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001DD92Cu) [[unlikely]] return; }
L_001DD92C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD940:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DD950:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    set32(c.r[3], ld32((c.r[2].w[0] + 19360u)));
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DDA70; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[21], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[20], 0u - 1u);
    set32(c.r[22], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_001DD9A8; } }
    set32(c.r[20], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_001DD9A8:
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[19], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + 27456u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    set32(c.r[16], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD9D0u);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x001DD9D0u) [[unlikely]] return; }
L_001DD9D0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001DD9EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 8196u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 4;
L_001DD9EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DDA30; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[21].d[0];  if (t) { goto L_001DDA30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDA14u);  if (depth < kMaxDepth) unit_0007(c, 337u, depth + 1u); else { c.pc = 0x0011EC50u; return; } if (c.pc != 0x001DDA14u) [[unlikely]] return; }
L_001DDA14:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDA2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DDA2Cu) [[unlikely]] return; }
L_001DDA2C:
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];
    c.budget -= 1;
L_001DDA30:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_001DDA64; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_001DDA58; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DDA64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DDA70; } }
L_001DDA58:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DDA70; } }
L_001DDA64:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDA70u);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DDA70u) [[unlikely]] return; }
L_001DDA70:
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
L_001DDAA0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DDAB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 19360u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DDB40; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001DDAE8; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_001DDAE8:
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[4], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u - 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_001DDB34; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001DDB28; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DDB34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DDB40; } }
L_001DDB28:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DDB40; } }
L_001DDB34:
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDB40u);  if (depth < kMaxDepth) unit_0093(c, 76u, depth + 1u); else { c.pc = 0x0034D058u; return; } if (c.pc != 0x001DDB40u) [[unlikely]] return; }
L_001DDB40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DDB50:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DDB60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDB78u);  if (depth < kMaxDepth) unit_0093(c, 79u, depth + 1u); else { c.pc = 0x0034D0D8u; return; } if (c.pc != 0x001DDB78u) [[unlikely]] return; }
L_001DDB78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DDB88:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DDB98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDBB0u);  if (depth < kMaxDepth) unit_0093(c, 83u, depth + 1u); else { c.pc = 0x0034D178u; return; } if (c.pc != 0x001DDBB0u) [[unlikely]] return; }
L_001DDBB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DDBC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDBFCu);  if (depth < kMaxDepth) unit_0060(c, 257u, depth + 1u); else { c.pc = 0x00283BE8u; return; } if (c.pc != 0x001DDBFCu) [[unlikely]] return; }
L_001DDBFC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC0Cu);  if (depth < kMaxDepth) unit_0060(c, 263u, depth + 1u); else { c.pc = 0x00283C68u; return; } if (c.pc != 0x001DDC0Cu) [[unlikely]] return; }
L_001DDC0C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC18u);  if (depth < kMaxDepth) unit_0039(c, 322u, depth + 1u); else { c.pc = 0x001E6BC8u; return; } if (c.pc != 0x001DDC18u) [[unlikely]] return; }
L_001DDC18:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC28u);  if (depth < kMaxDepth) unit_0060(c, 261u, depth + 1u); else { c.pc = 0x00283C28u; return; } if (c.pc != 0x001DDC28u) [[unlikely]] return; }
L_001DDC28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC34u);  if (depth < kMaxDepth) unit_0060(c, 262u, depth + 1u); else { c.pc = 0x00283C48u; return; } if (c.pc != 0x001DDC34u) [[unlikely]] return; }
L_001DDC34:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC44u);  if (depth < kMaxDepth) unit_0060(c, 255u, depth + 1u); else { c.pc = 0x00283BC8u; return; } if (c.pc != 0x001DDC44u) [[unlikely]] return; }
L_001DDC44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC50u);  if (depth < kMaxDepth) unit_0060(c, 262u, depth + 1u); else { c.pc = 0x00283C48u; return; } if (c.pc != 0x001DDC50u) [[unlikely]] return; }
L_001DDC50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], c.r[17].w[0] + 10u);
    st32((c.r[3].w[0] - 3028u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 108u), c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC68u);  if (depth < kMaxDepth) unit_006B(c, 51u, depth + 1u); else { c.pc = 0x002ADAC0u; return; } if (c.pc != 0x001DDC68u) [[unlikely]] return; }
L_001DDC68:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    c.r[6].d[0] = c.r[6].d[0] | 4ull;
    set32(c.r[7], 0u + 2u);
    set32(c.r[6], c.r[19].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDC88u);  if (depth < kMaxDepth) unit_0085(c, 131u, depth + 1u); else { c.pc = 0x00315470u; return; } if (c.pc != 0x001DDC88u) [[unlikely]] return; }
L_001DDC88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 20640u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDCA8u);  if (depth < kMaxDepth) unit_0049(c, 150u, depth + 1u); else { c.pc = 0x00226058u; return; } if (c.pc != 0x001DDCA8u) [[unlikely]] return; }
L_001DDCA8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDCB4u);  if (depth < kMaxDepth) unit_006B(c, 112u, depth + 1u); else { c.pc = 0x002AE620u; return; } if (c.pc != 0x001DDCB4u) [[unlikely]] return; }
L_001DDCB4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[1] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44110000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] - 15096u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[19], c.r[19].w[0] << 2);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[0] = c.f[0] ^ fp::kSign;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[19].w[0]), c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DDD10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDD28u);  if (depth < kMaxDepth) unit_0082(c, 93u, depth + 1u); else { c.pc = 0x0030A460u; return; } if (c.pc != 0x001DDD28u) [[unlikely]] return; }
L_001DDD28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DDD38:
    set32(c.r[3], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DDD58:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[16], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 24;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001DDDD8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDDC4u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x001DDDC4u) [[unlikely]] return; }
L_001DDDC4:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x001DDDCCu);  goto L_001DDDD0; }
L_001DDDD0:
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_001DDDD8:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[16], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001DDE18; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDE04u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x001DDE04u) [[unlikely]] return; }
L_001DDE04:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x001DDE0Cu);  goto L_001DDE10; }
L_001DDE10:
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_001DDE18:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[16], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[6].w[0] - 21440u), c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001DDE64; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDE50u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x001DDE50u) [[unlikely]] return; }
L_001DDE50:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x001DDE58u);  goto L_001DDE5C; }
L_001DDE5C:
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_001DDE64:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[16], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001DDEA4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDE90u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x001DDE90u) [[unlikely]] return; }
L_001DDE90:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x001DDE98u);  goto L_001DDE9C; }
L_001DDE9C:
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_001DDEA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DDEC8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DDED8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DDEE0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DDEF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDF0Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001DDF0Cu) [[unlikely]] return; }
L_001DDF0C:
    set32(c.r[3], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[6], 0u + 4u);
    set32(c.r[4], 0u + 200u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    if (c.r[5].d[0] == 0) c.r[3].d[0] = c.r[6].d[0];
    st32((c.r[2].w[0] + 224u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDF30u);  if (depth < kMaxDepth) unit_003B(c, 195u, depth + 1u); else { c.pc = 0x001EEA68u; return; } if (c.pc != 0x001DDF30u) [[unlikely]] return; }
L_001DDF30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 29824u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDF44u);  if (depth < kMaxDepth) unit_003A(c, 124u, depth + 1u); else { c.pc = 0x001E8E50u; return; } if (c.pc != 0x001DDF44u) [[unlikely]] return; }
L_001DDF44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDF4Cu);  if (depth < kMaxDepth) unit_003B(c, 206u, depth + 1u); else { c.pc = 0x001EEB48u; return; } if (c.pc != 0x001DDF4Cu) [[unlikely]] return; }
L_001DDF4C:
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDF60u);  if (depth < kMaxDepth) unit_003A(c, 147u, depth + 1u); else { c.pc = 0x001E9100u; return; } if (c.pc != 0x001DDF60u) [[unlikely]] return; }
L_001DDF60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDF68u);  if (depth < kMaxDepth) unit_0023(c, 61u, depth + 1u); else { c.pc = 0x0018CFF8u; return; } if (c.pc != 0x001DDF68u) [[unlikely]] return; }
L_001DDF68:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DDF80:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DDF90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDFA8u);  if (depth < kMaxDepth) unit_0030(c, 138u, depth + 1u); else { c.pc = 0x001C19C8u; return; } if (c.pc != 0x001DDFA8u) [[unlikely]] return; }
L_001DDFA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DDFB8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DDFC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDFE0u);  if (depth < kMaxDepth) unit_0030(c, 139u, depth + 1u); else { c.pc = 0x001C1A20u; return; } if (c.pc != 0x001DDFE0u) [[unlikely]] return; }
L_001DDFE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DDFF0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE018u);  if (depth < kMaxDepth) unit_0030(c, 140u, depth + 1u); else { c.pc = 0x001C1A70u; return; } if (c.pc != 0x001DE018u) [[unlikely]] return; }
L_001DE018:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE028:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE038:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE050u);  if (depth < kMaxDepth) unit_0030(c, 142u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x001DE050u) [[unlikely]] return; }
L_001DE050:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE060:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE088u);  if (depth < kMaxDepth) unit_0030(c, 143u, depth + 1u); else { c.pc = 0x001C1B78u; return; } if (c.pc != 0x001DE088u) [[unlikely]] return; }
L_001DE088:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE098:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE0A8:
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DE0C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] - 29800u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE0C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 29800u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE0E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE0F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE100:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE110:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE140u);  if (depth < kMaxDepth) unit_001F(c, 27u, depth + 1u); else { c.pc = 0x0017C478u; return; } if (c.pc != 0x001DE140u) [[unlikely]] return; }
L_001DE140:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE150:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE160:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    c.r[18].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 17;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001DE1E8; } }
    set32(c.r[16], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE1C4u);  if (depth < kMaxDepth) unit_0006(c, 461u, depth + 1u); else { c.pc = 0x0011BBD8u; return; } if (c.pc != 0x001DE1C4u) [[unlikely]] return; }
L_001DE1C4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE1E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DE1E0u) [[unlikely]] return; }
L_001DE1E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE208; } }
L_001DE1E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE1F0u);  if (depth < kMaxDepth) unit_0006(c, 461u, depth + 1u); else { c.pc = 0x0011BBD8u; return; } if (c.pc != 0x001DE1F0u) [[unlikely]] return; }
L_001DE1F0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE208u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DE208u) [[unlikely]] return; }
L_001DE208:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 6896u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001DE320; } }
L_001DE220:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001DE2A0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[4].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001DE268; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 2;
L_001DE248:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001DE288; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE248u | kUnwind; return; } goto L_001DE248; } }
L_001DE268:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DE26C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DE2EC; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE280u);  if (depth < kMaxDepth) unit_0032(c, 384u, depth + 1u); else { c.pc = 0x001CBBD8u; return; } if (c.pc != 0x001DE280u) [[unlikely]] return; }
L_001DE280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE30C; } }
L_001DE288:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE26Cu | kUnwind; return; } goto L_001DE26C; } }
L_001DE294:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE2E4; } }
L_001DE2A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[4].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001DE2E0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 2;
L_001DE2C0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE294u | kUnwind; return; } goto L_001DE294; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE2C0u | kUnwind; return; } goto L_001DE2C0; } }
L_001DE2E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DE2E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DE300; } }
L_001DE2EC:
    set32(c.r[5], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE2F8u);  if (depth < kMaxDepth) unit_0032(c, 384u, depth + 1u); else { c.pc = 0x001CBBD8u; return; } if (c.pc != 0x001DE2F8u) [[unlikely]] return; }
L_001DE2F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE30C; } }
L_001DE300:
    set32(c.r[5], 0u - 65u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE30Cu);  if (depth < kMaxDepth) unit_0032(c, 384u, depth + 1u); else { c.pc = 0x001CBBD8u; return; } if (c.pc != 0x001DE30Cu) [[unlikely]] return; }
L_001DE30C:
    set32(c.r[2], ld32((c.r[19].w[0] - 6896u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE220u | kUnwind; return; } goto L_001DE220; } }
L_001DE320:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE340:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE350:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DE3F4; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[3].w[0] + 27456u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 54400ull;
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[19], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[6].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 13;
L_001DE3B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE3BCu);  if (depth < kMaxDepth) unit_0089(c, 168u, depth + 1u); else { c.pc = 0x00325DD8u; return; } if (c.pc != 0x001DE3BCu) [[unlikely]] return; }
L_001DE3BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DE3E4; } }
    set32(c.r[4], c.r[18].w[0] - 19792u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE3D4u);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x001266A8u; return; } if (c.pc != 0x001DE3D4u) [[unlikely]] return; }
L_001DE3D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE3E4u);  if (depth < kMaxDepth) unit_0089(c, 175u, depth + 1u); else { c.pc = 0x00325F00u; return; } if (c.pc != 0x001DE3E4u) [[unlikely]] return; }
L_001DE3E4:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE3B0u | kUnwind; return; } goto L_001DE3B0; } }
L_001DE3F4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE418:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE430u);  if (depth < kMaxDepth) unit_0036(c, 130u, depth + 1u); else { c.pc = 0x001D9060u; return; } if (c.pc != 0x001DE430u) [[unlikely]] return; }
L_001DE430:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE458u);  if (depth < kMaxDepth) unit_0036(c, 130u, depth + 1u); else { c.pc = 0x001D9060u; return; } if (c.pc != 0x001DE458u) [[unlikely]] return; }
L_001DE458:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE468:
    set32(c.r[3], 0u + 24u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 7120u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE498u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001DE498u) [[unlikely]] return; }
L_001DE498:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[9], 0u + 1843u);
    set32(c.r[7], c.r[7].w[0] + 696u);
    set32(c.r[8], c.r[8].w[0] + 752u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 144u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE4C0u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x001DE4C0u) [[unlikely]] return; }
L_001DE4C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE4D8u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001DE4D8u) [[unlikely]] return; }
L_001DE4D8:
    set32(c.r[3], 0u - 2u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DE538; } }
    set32(c.r[3], 0u + 120u);
    set32(c.r[2], 0u + 480u);
    c.r[4].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE510u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x001DE510u) [[unlikely]] return; }
L_001DE510:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 26u));
    set32(c.r[3], c.r[5].w[0] << 1);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x001DE520u);  goto L_001DE524; }
L_001DE524:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 24u));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_001DE538:
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29328u);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    set32(c.r[5], c.r[16].w[0] + 36u);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[2].d[0] = c.r[2].d[0] | 5ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE574u);  if (depth < kMaxDepth) unit_009E(c, 336u, depth + 1u); else { c.pc = 0x0037B568u; return; } if (c.pc != 0x001DE574u) [[unlikely]] return; }
L_001DE574:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DE5BC; } }
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 3;
L_001DE590:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DE5BC; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE590u | kUnwind; return; } goto L_001DE590; } }
L_001DE5BC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001DE608; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    st16((c.r[16].w[0] + 72u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DE5E4; } }
    set32(c.r[2], 0u + 500u);
    set32(c.r[3], 0u + 3000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE5EC; } }
L_001DE5E4:
    set32(c.r[2], 0u + 1100u);
    set32(c.r[3], 0u + 1200u);
    c.budget -= 2;
L_001DE5EC:
    st16((c.r[16].w[0] + 74u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 76u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22944u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE608u);  if (depth < kMaxDepth) unit_0086(c, 43u, depth + 1u); else { c.pc = 0x00318590u; return; } if (c.pc != 0x001DE608u) [[unlikely]] return; }
L_001DE608:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE61Cu);  if (depth < kMaxDepth) unit_0087(c, 29u, depth + 1u); else { c.pc = 0x0031C608u; return; } if (c.pc != 0x001DE61Cu) [[unlikely]] return; }
L_001DE61C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE638:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(91ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DE800; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 784u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001DC000u < 16384u) { entry = entries_0037[(t - 0x001DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001DE668:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE678u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001DE678u) [[unlikely]] return; }
L_001DE678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE810; } }
L_001DE680:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE690u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001DE690u) [[unlikely]] return; }
L_001DE690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE810; } }
L_001DE698:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 83u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE6A8u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001DE6A8u) [[unlikely]] return; }
L_001DE6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE810; } }
L_001DE6B0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE6C0u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001DE6C0u) [[unlikely]] return; }
L_001DE6C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE810; } }
L_001DE6C8:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE6D8u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001DE6D8u) [[unlikely]] return; }
L_001DE6D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE810; } }
L_001DE6E0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE6F0u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001DE6F0u) [[unlikely]] return; }
L_001DE6F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE810; } }
L_001DE6F8:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE708u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001DE708u) [[unlikely]] return; }
L_001DE708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE810; } }
L_001DE710:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE720u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001DE720u) [[unlikely]] return; }
L_001DE720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE810; } }
L_001DE728:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE738u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001DE738u) [[unlikely]] return; }
L_001DE738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE810; } }
L_001DE740:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 82u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE750u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001DE750u) [[unlikely]] return; }
L_001DE750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE810; } }
L_001DE758:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE768u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001DE768u) [[unlikely]] return; }
L_001DE768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE810; } }
L_001DE770:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE780u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001DE780u) [[unlikely]] return; }
L_001DE780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE810; } }
L_001DE788:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 74u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE798u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001DE798u) [[unlikely]] return; }
L_001DE798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE810; } }
L_001DE7A0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE7B0u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001DE7B0u) [[unlikely]] return; }
L_001DE7B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE810; } }
L_001DE7B8:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE7C8u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001DE7C8u) [[unlikely]] return; }
L_001DE7C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE810; } }
L_001DE7D0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 62u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE7E0u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001DE7E0u) [[unlikely]] return; }
L_001DE7E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE810; } }
L_001DE7E8:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 50u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE7F8u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001DE7F8u) [[unlikely]] return; }
L_001DE7F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE810; } }
L_001DE800:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE810u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001DE810u) [[unlikely]] return; }
L_001DE810:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE820:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 26440u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 13192u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE854u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x001DE854u) [[unlikely]] return; }
L_001DE854:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE864u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x001DE864u) [[unlikely]] return; }
L_001DE864:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[17], c.r[2].w[0] - 14960u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE87Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DE87Cu) [[unlikely]] return; }
L_001DE87C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE888u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001DE888u) [[unlikely]] return; }
L_001DE888:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE8A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DE8A4u) [[unlikely]] return; }
L_001DE8A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DE8BC; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE8BCu);  if (depth < kMaxDepth) unit_0037(c, 309u, depth + 1u); else { c.pc = 0x001DE638u; return; } if (c.pc != 0x001DE8BCu) [[unlikely]] return; }
L_001DE8BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE8CCu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DE8CCu) [[unlikely]] return; }
L_001DE8CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE8D8u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001DE8D8u) [[unlikely]] return; }
L_001DE8D8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE8F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DE8F4u) [[unlikely]] return; }
L_001DE8F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DE90C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE90Cu);  if (depth < kMaxDepth) unit_0037(c, 309u, depth + 1u); else { c.pc = 0x001DE638u; return; } if (c.pc != 0x001DE90Cu) [[unlikely]] return; }
L_001DE90C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[2].w[0] + 3728u);
    st16((c.r[2].w[0] + 3728u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE938:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 7u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], c.r[16].w[0] + 144u);
    set32(c.r[2], c.r[16].w[0] + 172u);
    c.budget -= 10;
L_001DE960:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE960u | kUnwind; return; } goto L_001DE960; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE980u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001DE980u) [[unlikely]] return; }
L_001DE980:
    c.r[4].d[0] = c.r[17].d[0] & 31ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 3));
    c.r[17].d[0] = c.r[3].d[0] & 28ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 168u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DE9C0; } }
    set32(c.r[3], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_001DE9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE9C8u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001DE9C8u) [[unlikely]] return; }
L_001DE9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE9D0u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001DE9D0u) [[unlikely]] return; }
L_001DE9D0:
    set32(c.r[2], c.r[2].w[0] + 168u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DEA08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEA18u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001DEA18u) [[unlikely]] return; }
L_001DEA18:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEA30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DEA30u) [[unlikely]] return; }
L_001DEA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEA38u);  if (depth < kMaxDepth) unit_0007(c, 337u, depth + 1u); else { c.pc = 0x0011EC50u; return; } if (c.pc != 0x001DEA38u) [[unlikely]] return; }
L_001DEA38:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEA50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DEA50u) [[unlikely]] return; }
L_001DEA50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 18848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEA60u);  if (depth < kMaxDepth) unit_0006(c, 78u, depth + 1u); else { c.pc = 0x001189F8u; return; } if (c.pc != 0x001DEA60u) [[unlikely]] return; }
L_001DEA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEA68u);  if (depth < kMaxDepth) unit_002A(c, 408u, depth + 1u); else { c.pc = 0x001AB738u; return; } if (c.pc != 0x001DEA68u) [[unlikely]] return; }
L_001DEA68:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEA80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DEA80u) [[unlikely]] return; }
L_001DEA80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 12584u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEA90u);  if (depth < kMaxDepth) unit_001B(c, 291u, depth + 1u); else { c.pc = 0x0016FAB8u; return; } if (c.pc != 0x001DEA90u) [[unlikely]] return; }
L_001DEA90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 23136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAA0u);  if (depth < kMaxDepth) unit_0074(c, 331u, depth + 1u); else { c.pc = 0x002D3968u; return; } if (c.pc != 0x001DEAA0u) [[unlikely]] return; }
L_001DEAA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAB0u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00126528u; return; } if (c.pc != 0x001DEAB0u) [[unlikely]] return; }
L_001DEAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAB8u);  if (depth < kMaxDepth) unit_003B(c, 333u, depth + 1u); else { c.pc = 0x001EFE58u; return; } if (c.pc != 0x001DEAB8u) [[unlikely]] return; }
L_001DEAB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAC8u);  if (depth < kMaxDepth) unit_006C(c, 205u, depth + 1u); else { c.pc = 0x002B2448u; return; } if (c.pc != 0x001DEAC8u) [[unlikely]] return; }
L_001DEAC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAD0u);  if (depth < kMaxDepth) unit_0018(c, 370u, depth + 1u); else { c.pc = 0x00163278u; return; } if (c.pc != 0x001DEAD0u) [[unlikely]] return; }
L_001DEAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAD8u);  if (depth < kMaxDepth) unit_0037(c, 181u, depth + 1u); else { c.pc = 0x001DD528u; return; } if (c.pc != 0x001DEAD8u) [[unlikely]] return; }
L_001DEAD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAE0u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001DEAE0u) [[unlikely]] return; }
L_001DEAE0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001DEAF8; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAF8u);  if (depth < kMaxDepth) unit_0049(c, 144u, depth + 1u); else { c.pc = 0x00225FC0u; return; } if (c.pc != 0x001DEAF8u) [[unlikely]] return; }
L_001DEAF8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEB04u);  if (depth < kMaxDepth) unit_001F(c, 27u, depth + 1u); else { c.pc = 0x0017C478u; return; } if (c.pc != 0x001DEB04u) [[unlikely]] return; }
L_001DEB04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DEB18:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 12224u);
    c.r[18].d[0] = c.r[3].d[0] & 28ull;
    c.r[2].d[0] = c.r[16].d[0] & 31ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[4].w[0] + 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DEB8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEB70u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001DEB70u) [[unlikely]] return; }
L_001DEB70:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 168u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DEB90; } }
L_001DEB8C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DEB90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DEE1C; } }
    set32(c.r[3], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(197ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DEE1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1152u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001DC000u < 16384u) { entry = entries_0037[(t - 0x001DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001DEBC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xAC070000u);
    c.r[4].d[0] = c.r[4].d[0] | 12562ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEBD4u);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DEBD4u) [[unlikely]] return; }
L_001DEBD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DEBDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x09CB0000u);
    c.r[4].d[0] = c.r[4].d[0] | 40984ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEBECu);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DEBECu) [[unlikely]] return; }
L_001DEBEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DEBF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10BA0000u);
    c.r[4].d[0] = c.r[4].d[0] | 38609ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC04u);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DEC04u) [[unlikely]] return; }
L_001DEC04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DEC0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x05AA0000u);
    c.r[4].d[0] = c.r[4].d[0] | 62252ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC1Cu);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DEC1Cu) [[unlikely]] return; }
L_001DEC1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DEC24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x48620000u);
    c.r[4].d[0] = c.r[4].d[0] | 21031ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC34u);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DEC34u) [[unlikely]] return; }
L_001DEC34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DEC3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBD830000u);
    c.r[4].d[0] = c.r[4].d[0] | 63620ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC4Cu);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DEC4Cu) [[unlikely]] return; }
L_001DEC4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DEC54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x1BF40000u);
    c.r[4].d[0] = c.r[4].d[0] | 62256ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC64u);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DEC64u) [[unlikely]] return; }
L_001DEC64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DEC6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x78240000u);
    c.r[4].d[0] = c.r[4].d[0] | 50698ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC7Cu);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DEC7Cu) [[unlikely]] return; }
L_001DEC7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DEC84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x7E3D0000u);
    c.r[4].d[0] = c.r[4].d[0] | 37315ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC94u);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DEC94u) [[unlikely]] return; }
L_001DEC94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DEC9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xCC1D0000u);
    c.r[4].d[0] = c.r[4].d[0] | 19923ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DECACu);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DECACu) [[unlikely]] return; }
L_001DECAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DECB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x2BA20000u);
    c.r[4].d[0] = c.r[4].d[0] | 64818ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DECC4u);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DECC4u) [[unlikely]] return; }
L_001DECC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DECCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x62B30000u);
    c.r[4].d[0] = c.r[4].d[0] | 31048ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DECDCu);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DECDCu) [[unlikely]] return; }
L_001DECDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DECE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50320000u);
    c.r[4].d[0] = c.r[4].d[0] | 38019ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DECF4u);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DECF4u) [[unlikely]] return; }
L_001DECF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DECFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x8DD40000u);
    c.r[4].d[0] = c.r[4].d[0] | 57338ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED0Cu);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DED0Cu) [[unlikely]] return; }
L_001DED0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DED14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x800D0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65402ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED24u);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DED24u) [[unlikely]] return; }
L_001DED24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DED2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xE8F40000u);
    c.r[4].d[0] = c.r[4].d[0] | 20935ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED3Cu);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DED3Cu) [[unlikely]] return; }
L_001DED3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DED44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x2D530000u);
    c.r[4].d[0] = c.r[4].d[0] | 28489ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED54u);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DED54u) [[unlikely]] return; }
L_001DED54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DED5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x2CC40000u);
    c.r[4].d[0] = c.r[4].d[0] | 33755ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED6Cu);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DED6Cu) [[unlikely]] return; }
L_001DED6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DED74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x5ACD0000u);
    c.r[4].d[0] = c.r[4].d[0] | 51820ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED84u);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DED84u) [[unlikely]] return; }
L_001DED84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DED8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D590000u);
    c.r[4].d[0] = c.r[4].d[0] | 23833ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DED9Cu);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DED9Cu) [[unlikely]] return; }
L_001DED9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DEDA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x76880000u);
    c.r[4].d[0] = c.r[4].d[0] | 35022ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEDB4u);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DEDB4u) [[unlikely]] return; }
L_001DEDB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x90D50000u);
    c.r[4].d[0] = c.r[4].d[0] | 50776ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEDC4u);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DEDC4u) [[unlikely]] return; }
L_001DEDC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DEDCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x6EBD0000u);
    c.r[4].d[0] = c.r[4].d[0] | 17758ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEDDCu);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DEDDCu) [[unlikely]] return; }
L_001DEDDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DEDE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x76880000u);
    c.r[4].d[0] = c.r[4].d[0] | 35022ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEDF4u);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DEDF4u) [[unlikely]] return; }
L_001DEDF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x38530000u);
    c.r[4].d[0] = c.r[4].d[0] | 30665ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEE04u);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DEE04u) [[unlikely]] return; }
L_001DEE04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DEE1C; } }
L_001DEE0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x76880000u);
    c.r[4].d[0] = c.r[4].d[0] | 35022ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEE1Cu);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x001DEE1Cu) [[unlikely]] return; }
L_001DEE1C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DEE38:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[6].w[0] - 29800u), 0u);
    st32((c.r[7].w[0] + 928u), 0u);
    st32((c.r[3].w[0] + 924u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEE78u);  if (depth < kMaxDepth) unit_0039(c, 201u, depth + 1u); else { c.pc = 0x001E5A60u; return; } if (c.pc != 0x001DEE78u) [[unlikely]] return; }
L_001DEE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEE80u);  if (depth < kMaxDepth) unit_009A(c, 143u, depth + 1u); else { c.pc = 0x0036A1C8u; return; } if (c.pc != 0x001DEE80u) [[unlikely]] return; }
L_001DEE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEE88u);  if (depth < kMaxDepth) unit_0039(c, 218u, depth + 1u); else { c.pc = 0x001E5C50u; return; } if (c.pc != 0x001DEE88u) [[unlikely]] return; }
L_001DEE88:
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    st32((c.r[2].w[0] + 10160u), c.r[18].w[0]);
    st32((c.r[3].w[0] + 14880u), c.r[18].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEEB0u);  if (depth < kMaxDepth) unit_009E(c, 375u, depth + 1u); else { c.pc = 0x0037B888u; return; } if (c.pc != 0x001DEEB0u) [[unlikely]] return; }
L_001DEEB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 19264u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[2].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 100u), c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEED0u);  if (depth < kMaxDepth) unit_0037(c, 346u, depth + 1u); else { c.pc = 0x001DE820u; return; } if (c.pc != 0x001DEED0u) [[unlikely]] return; }
L_001DEED0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEEE0u);  if (depth < kMaxDepth) unit_0039(c, 210u, depth + 1u); else { c.pc = 0x001E5B18u; return; } if (c.pc != 0x001DEEE0u) [[unlikely]] return; }
L_001DEEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEEE8u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001DEEE8u) [[unlikely]] return; }
L_001DEEE8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 12224u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF08u);  if (depth < kMaxDepth) unit_0038(c, 305u, depth + 1u); else { c.pc = 0x001E1DD0u; return; } if (c.pc != 0x001DEF08u) [[unlikely]] return; }
L_001DEF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF10u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x001DEF10u) [[unlikely]] return; }
L_001DEF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF18u);  if (depth < kMaxDepth) unit_0093(c, 71u, depth + 1u); else { c.pc = 0x0034CF60u; return; } if (c.pc != 0x001DEF18u) [[unlikely]] return; }
L_001DEF18:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF24u);  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DEB18u; return; } if (c.pc != 0x001DEF24u) [[unlikely]] return; }
L_001DEF24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF2Cu);  if (depth < kMaxDepth) unit_0086(c, 69u, depth + 1u); else { c.pc = 0x00318A50u; return; } if (c.pc != 0x001DEF2Cu) [[unlikely]] return; }
L_001DEF2C:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF3Cu);  if (depth < kMaxDepth) unit_0038(c, 339u, depth + 1u); else { c.pc = 0x001E2428u; return; } if (c.pc != 0x001DEF3Cu) [[unlikely]] return; }
L_001DEF3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[5], c.r[5].w[0] + 26968u);
    set32(c.r[4], c.r[4].w[0] + 26848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF54u);  if (depth < kMaxDepth) unit_0093(c, 257u, depth + 1u); else { c.pc = 0x0034E9C0u; return; } if (c.pc != 0x001DEF54u) [[unlikely]] return; }
L_001DEF54:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF60u);  if (depth < kMaxDepth) unit_0039(c, 223u, depth + 1u); else { c.pc = 0x001E5CF0u; return; } if (c.pc != 0x001DEF60u) [[unlikely]] return; }
L_001DEF60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 20768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF70u);  if (depth < kMaxDepth) unit_0008(c, 66u, depth + 1u); else { c.pc = 0x00120C38u; return; } if (c.pc != 0x001DEF70u) [[unlikely]] return; }
L_001DEF70:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF7Cu);  if (depth < kMaxDepth) unit_0037(c, 300u, depth + 1u); else { c.pc = 0x001DE468u; return; } if (c.pc != 0x001DEF7Cu) [[unlikely]] return; }
L_001DEF7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF84u);  if (depth < kMaxDepth) unit_0036(c, 538u, depth + 1u); else { c.pc = 0x001DBE70u; return; } if (c.pc != 0x001DEF84u) [[unlikely]] return; }
L_001DEF84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF8Cu);  if (depth < kMaxDepth) unit_0066(c, 212u, depth + 1u); else { c.pc = 0x0029A238u; return; } if (c.pc != 0x001DEF8Cu) [[unlikely]] return; }
L_001DEF8C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF98u);  if (depth < kMaxDepth) unit_0040(c, 40u, depth + 1u); else { c.pc = 0x002007E0u; return; } if (c.pc != 0x001DEF98u) [[unlikely]] return; }
L_001DEF98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEFA0u);  if (depth < kMaxDepth) unit_0037(c, 36u, depth + 1u); else { c.pc = 0x001DC378u; return; } if (c.pc != 0x001DEFA0u) [[unlikely]] return; }
L_001DEFA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEFA8u);  if (depth < kMaxDepth) unit_0037(c, 362u, depth + 1u); else { c.pc = 0x001DEA08u; return; } if (c.pc != 0x001DEFA8u) [[unlikely]] return; }
L_001DEFA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEFB8u);  if (depth < kMaxDepth) unit_0037(c, 357u, depth + 1u); else { c.pc = 0x001DE938u; return; } if (c.pc != 0x001DEFB8u) [[unlikely]] return; }
L_001DEFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEFC0u);  if (depth < kMaxDepth) unit_0020(c, 166u, depth + 1u); else { c.pc = 0x001820E8u; return; } if (c.pc != 0x001DEFC0u) [[unlikely]] return; }
L_001DEFC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 4040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEFD4u);  if (depth < kMaxDepth) unit_0034(c, 256u, depth + 1u); else { c.pc = 0x001D2840u; return; } if (c.pc != 0x001DEFD4u) [[unlikely]] return; }
L_001DEFD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEFDCu);  if (depth < kMaxDepth) unit_009E(c, 88u, depth + 1u); else { c.pc = 0x00378E98u; return; } if (c.pc != 0x001DEFDCu) [[unlikely]] return; }
L_001DEFDC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DEFF8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 13264u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 2u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[16].w[0] + 360u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[18], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[20], 0u + 1u);
    set32(c.r[19], 0u + 4u);
    c.budget -= 14;
L_001DF030:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001DF0C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF044u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x001DF044u) [[unlikely]] return; }
L_001DF044:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_001DF090; } }
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF06C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[20].d[0];  if (t) { goto L_001DF084; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF0B4; } }
L_001DF06C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_001DF09C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_001DF0A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF0B4; } }
L_001DF084:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF0D0; } }
L_001DF090:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF0D0; } }
L_001DF09C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF0D0; } }
L_001DF0A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF0D0; } }
L_001DF0B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF0D0; } }
L_001DF0C0:
    set32(c.r[16], c.r[16].w[0] + 20u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DF030u | kUnwind; return; } goto L_001DF030; } }
L_001DF0D0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DF0F8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF138u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x001DF138u) [[unlikely]] return; }
L_001DF138:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF148u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x001DF148u) [[unlikely]] return; }
L_001DF148:
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF184; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1952u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001DC000u < 16384u) { entry = entries_0037[(t - 0x001DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001DF174:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF184; } }
L_001DF180:
    set32(c.r[18], 0u + 2u);
    c.budget -= 1;
L_001DF184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF18Cu);  if (depth < kMaxDepth) unit_0040(c, 42u, depth + 1u); else { c.pc = 0x00200818u; return; } if (c.pc != 0x001DF18Cu) [[unlikely]] return; }
L_001DF18C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF194u);  if (depth < kMaxDepth) unit_0040(c, 43u, depth + 1u); else { c.pc = 0x00200848u; return; } if (c.pc != 0x001DF194u) [[unlikely]] return; }
L_001DF194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF8A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 19364u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DF8A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 13904u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 13640u)));
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] + 13628u), c.r[4].w[0]);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001DF1EC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 13644u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF2D0; } }
L_001DF1EC:
    set32(c.r[2], ld32((c.r[20].w[0] + 13644u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DF20C; } }
    set32(c.r[2], 0u + 1u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[20].w[0] + 13644u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF20C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF214u);  if (depth < kMaxDepth) unit_0040(c, 54u, depth + 1u); else { c.pc = 0x002009D8u; return; } if (c.pc != 0x001DF214u) [[unlikely]] return; }
L_001DF214:
    set32(c.r[16], 0u + 1u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 13640u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF248; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 13660u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF248; } }
    st32((c.r[19].w[0] + 13640u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 13660u), 0u);
    c.budget -= 2;
L_001DF248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 13640u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 13632u)));
    c.r[4].d[0] = 0ull + 0ull;
    if (c.r[6].d[0] != 0) c.r[4].d[0] = c.r[16].d[0];
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[4].d[0];
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001DF27C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001DF28C; } }
L_001DF27C:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    c.budget -= 4;
L_001DF28C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001DF2BC; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 13640u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001DF2B0; } }
    set32(c.r[17], ld32((c.r[21].w[0] + 13632u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF2B0:
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF2BC:
    st32((c.r[19].w[0] + 13640u), 0u);
    set32(c.r[17], 0u - 1u);
    st32((c.r[20].w[0] + 13644u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF2D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 13648u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001DF384; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001DF344; } }
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF310; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001DF324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF7A8; } }
L_001DF310:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001DF364; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF7A8; } }
L_001DF324:
    set32(c.r[2], 0u + 24u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 13664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF7A8; } }
L_001DF344:
    set32(c.r[3], 0u + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 13664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF7A8; } }
L_001DF364:
    set32(c.r[3], 0u + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 13664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF7A8; } }
L_001DF384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF38Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001DF38Cu) [[unlikely]] return; }
L_001DF38C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001DF504; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF3A4u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x001DF3A4u) [[unlikely]] return; }
L_001DF3A4:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DF440; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF3D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DF3E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF3D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_001DF4A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF3E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[4].d[0];  if (t) { goto L_001DF420; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001DF400; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001DF410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF400:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { goto L_001DF430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF410:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x4C580000u);
    c.r[17].d[0] = c.r[17].d[0] | 28298ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF420:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x6FC50000u);
    c.r[17].d[0] = c.r[17].d[0] | 26458ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF430:
    c.r[17].sd[0] = static_cast<std::int32_t>(0xC4570000u);
    c.r[17].d[0] = c.r[17].d[0] | 30911ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF440:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_001DF480; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001DF460; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001DF470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF460:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { goto L_001DF490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF470:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x0BF80000u);
    c.r[17].d[0] = c.r[17].d[0] | 5210ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF480:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x28650000u);
    c.r[17].d[0] = c.r[17].d[0] | 7562ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF490:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x83F70000u);
    c.r[17].d[0] = c.r[17].d[0] | 623ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF4A0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[4].d[0];  if (t) { goto L_001DF4E0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001DF4C0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001DF4D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF4C0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_001DF4F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF4D0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x81B10000u);
    c.r[17].d[0] = c.r[17].d[0] | 18046ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF4E0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0xA56E0000u);
    c.r[17].d[0] = c.r[17].d[0] | 45255ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF4F8; } }
L_001DF4F0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x51E50000u);
    c.r[17].d[0] = c.r[17].d[0] | 11680ull;
    c.budget -= 2;
L_001DF4F8:
    set32(c.r[18], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF7A8; } }
L_001DF504:
    set32(c.r[2], ld32((c.r[22].w[0] + 13628u)));
    set32(c.r[5], 0u + 24u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00640000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + 13664u);
    set32(c.r[4], c.r[4].w[0] + 10168u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF538u);  if (depth < kMaxDepth) unit_0043(c, 33u, depth + 1u); else { c.pc = 0x0020C7E0u; return; } if (c.pc != 0x001DF538u) [[unlikely]] return; }
L_001DF538:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001DF708; } }
    set32(c.r[20], 0u + 24u);
    set32(c.r[30], 0u + 70u);
    set32(c.r[23], 0u + 71u);
    set32(c.r[19], 0u + 72u);
    c.budget -= 5;
L_001DF558:
    set32(c.r[4], ld32((c.r[16].w[0] + 528u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DF6EC; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DF6EC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF6EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF58Cu);  if (depth < kMaxDepth) unit_0065(c, 244u, depth + 1u); else { c.pc = 0x00296A60u; return; } if (c.pc != 0x001DF58Cu) [[unlikely]] return; }
L_001DF58C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001DF6EC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 528u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 7694u));
    set32(c.r[3], ld32((c.r[3].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] - 10u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DF5FC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001DF5FC; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001DF5FC; } }
    set32(c.r[2], c.r[4].w[0] << 16);
    set32(c.r[3], 0u + 26u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001DF6EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 27912u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001DF6EC; } }
L_001DF5FC:
    set32(c.r[3], c.r[4].w[0] << 16);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] - 41u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DF660; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[30].d[0];  if (t) { goto L_001DF660; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[23].d[0];  if (t) { goto L_001DF660; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_001DF660; } }
    set32(c.r[2], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DF660; } }
    set32(c.r[2], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DF660; } }
    set32(c.r[2], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DF660; } }
    set32(c.r[2], 0u + 77u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DF664; } }
L_001DF660:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001DF664:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001DF6EC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[5].w[0] + 13636u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DF698; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DF6AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 13652u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001DF6AC; } }
L_001DF698:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[22].w[0] + 13628u)));
    set32(c.r[3], c.r[3].w[0] + 13672u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF6B8; } }
L_001DF6AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[22].w[0] + 13628u)));
    set32(c.r[3], c.r[3].w[0] + 13668u);
    c.budget -= 3;
L_001DF6B8:
    c.lo.d[0] = c.r[3].d[0];
    mmi::madd(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[2], ld32((c.r[5].w[0] + 13636u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DF708; } }
    set32(c.r[2], 0u + 120u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] + 13656u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF708; } }
L_001DF6EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[4], c.r[5].w[0] + 10168u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF6FCu);  if (depth < kMaxDepth) unit_0043(c, 35u, depth + 1u); else { c.pc = 0x0020C818u; return; } if (c.pc != 0x001DF6FCu) [[unlikely]] return; }
L_001DF6FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DF558u | kUnwind; return; } goto L_001DF558; } }
L_001DF708:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001DF724; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 13624u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001DF770; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[21].w[0] + 13624u), c.r[2].w[0]);
    c.budget -= 2;
L_001DF724:
    set32(c.r[2], ld32((c.r[21].w[0] + 13624u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001DF770; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 13656u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001DF750; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 13656u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF770; } }
L_001DF750:
    set32(c.r[3], ld32((c.r[22].w[0] + 13628u)));
    set32(c.r[4], 0u + 24u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[18], 0u + 2u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + 13664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 8;
L_001DF770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 13636u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DF7A8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001DF7B0; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 13628u)));
    set32(c.r[4], 0u + 24u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + 13664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 7;
L_001DF7A8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001DF7E4; } }
L_001DF7B0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001DF7DC; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 13628u)));
    set32(c.r[4], 0u + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[18].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 13664u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 8;
L_001DF7DC:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_001DF804; } }
L_001DF7E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 13636u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_001DF804; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF7FCu);  if (depth < kMaxDepth) unit_0040(c, 54u, depth + 1u); else { c.pc = 0x002009D8u; return; } if (c.pc != 0x001DF7FCu) [[unlikely]] return; }
L_001DF7FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DF8EC; } }
L_001DF804:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 13632u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_001DF828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF820u);  if (depth < kMaxDepth) unit_0040(c, 54u, depth + 1u); else { c.pc = 0x002009D8u; return; } if (c.pc != 0x001DF820u) [[unlikely]] return; }
L_001DF820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DF87C; } }
L_001DF828:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 13636u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DF840; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] > 0;  if (t) { goto L_001DF854; } }
L_001DF840:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DF864; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001DF864; } }
L_001DF854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF85Cu);  if (depth < kMaxDepth) unit_0040(c, 46u, depth + 1u); else { c.pc = 0x002008C8u; return; } if (c.pc != 0x001DF85Cu) [[unlikely]] return; }
L_001DF85C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF86C; } }
L_001DF864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF86Cu);  if (depth < kMaxDepth) unit_0040(c, 44u, depth + 1u); else { c.pc = 0x00200880u; return; } if (c.pc != 0x001DF86Cu) [[unlikely]] return; }
L_001DF86C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF878u);  if (depth < kMaxDepth) unit_0040(c, 50u, depth + 1u); else { c.pc = 0x00200958u; return; } if (c.pc != 0x001DF878u) [[unlikely]] return; }
L_001DF878:
    st32((c.r[21].w[0] + 13632u), c.r[17].w[0]);
    c.budget -= 1;
L_001DF87C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] + 13636u), c.r[18].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001DF8EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 13652u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 13652u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DF8EC; } }
L_001DF8A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF8B0u);  if (depth < kMaxDepth) unit_0040(c, 54u, depth + 1u); else { c.pc = 0x002009D8u; return; } if (c.pc != 0x001DF8B0u) [[unlikely]] return; }
L_001DF8B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF8EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF8C0u);  if (depth < kMaxDepth) unit_0040(c, 59u, depth + 1u); else { c.pc = 0x00200A70u; return; } if (c.pc != 0x001DF8C0u) [[unlikely]] return; }
L_001DF8C0:
    set32(c.r[4], 0u - 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] + 13636u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 13624u), 0u);
    st32((c.r[6].w[0] + 13628u), c.r[4].w[0]);
    st32((c.r[7].w[0] + 13632u), 0u);
    st32((c.r[3].w[0] + 13656u), 0u);
    c.budget -= 11;
L_001DF8EC:
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
L_001DF920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[3].w[0] - 26392u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF940u);  if (depth < kMaxDepth) unit_0074(c, 93u, depth + 1u); else { c.pc = 0x002D11A0u; return; } if (c.pc != 0x001DF940u) [[unlikely]] return; }
L_001DF940:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[2].w[0] - 27136u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF950u);  if (depth < kMaxDepth) unit_001D(c, 94u, depth + 1u); else { c.pc = 0x00175290u; return; } if (c.pc != 0x001DF950u) [[unlikely]] return; }
L_001DF950:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 31928u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF960u);  if (depth < kMaxDepth) unit_0031(c, 149u, depth + 1u); else { c.pc = 0x001C5458u; return; } if (c.pc != 0x001DF960u) [[unlikely]] return; }
L_001DF960:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[4].w[0] - 4576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF970u);  if (depth < kMaxDepth) unit_0078(c, 52u, depth + 1u); else { c.pc = 0x002E0788u; return; } if (c.pc != 0x001DF970u) [[unlikely]] return; }
L_001DF970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF978u);  if (depth < kMaxDepth) unit_006B(c, 193u, depth + 1u); else { c.pc = 0x002AF790u; return; } if (c.pc != 0x001DF978u) [[unlikely]] return; }
L_001DF978:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF984u);  if (depth < kMaxDepth) unit_006B(c, 195u, depth + 1u); else { c.pc = 0x002AF7C8u; return; } if (c.pc != 0x001DF984u) [[unlikely]] return; }
L_001DF984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF98Cu);  if (depth < kMaxDepth) unit_0007(c, 337u, depth + 1u); else { c.pc = 0x0011EC50u; return; } if (c.pc != 0x001DF98Cu) [[unlikely]] return; }
L_001DF98C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF9A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DF9A4u) [[unlikely]] return; }
L_001DF9A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF9ACu);  if (depth < kMaxDepth) unit_0018(c, 371u, depth + 1u); else { c.pc = 0x00163288u; return; } if (c.pc != 0x001DF9ACu) [[unlikely]] return; }
L_001DF9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF9B4u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001DF9B4u) [[unlikely]] return; }
L_001DF9B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DF9E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[2].w[0] + 27456u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF9D0u);  if (depth < kMaxDepth) unit_0089(c, 171u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x001DF9D0u) [[unlikely]] return; }
L_001DF9D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DFA1C; } }
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DFA1C; } }
L_001DF9E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[2].w[0] + 27456u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF9F8u);  if (depth < kMaxDepth) unit_0089(c, 171u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x001DF9F8u) [[unlikely]] return; }
L_001DF9F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DFA04; } }
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001DFA04:
    set32(c.r[4], c.r[16].w[0] + 13248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA10u);  if (depth < kMaxDepth) unit_0089(c, 171u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x001DFA10u) [[unlikely]] return; }
L_001DFA10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DFA1C; } }
    st8((c.r[16].w[0] + 13364u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001DFA1C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DFA30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA6Cu);  if (depth < kMaxDepth) unit_006C(c, 234u, depth + 1u); else { c.pc = 0x002B2828u; return; } if (c.pc != 0x001DFA6Cu) [[unlikely]] return; }
L_001DFA6C:
    set32(c.r[17], c.r[17].w[0] - 14960u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA78u);  if (depth < kMaxDepth) unit_0023(c, 306u, depth + 1u); else { c.pc = 0x0018FA90u; return; } if (c.pc != 0x001DFA78u) [[unlikely]] return; }
L_001DFA78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA80u);  if (depth < kMaxDepth) unit_0037(c, 483u, depth + 1u); else { c.pc = 0x001DF920u; return; } if (c.pc != 0x001DFA80u) [[unlikely]] return; }
L_001DFA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA88u);  if (depth < kMaxDepth) unit_001F(c, 70u, depth + 1u); else { c.pc = 0x0017CC80u; return; } if (c.pc != 0x001DFA88u) [[unlikely]] return; }
L_001DFA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA90u);  if (depth < kMaxDepth) unit_001F(c, 306u, depth + 1u); else { c.pc = 0x0017FC00u; return; } if (c.pc != 0x001DFA90u) [[unlikely]] return; }
L_001DFA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA98u);  if (depth < kMaxDepth) unit_0036(c, 466u, depth + 1u); else { c.pc = 0x001DB788u; return; } if (c.pc != 0x001DFA98u) [[unlikely]] return; }
L_001DFA98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFAA0u);  if (depth < kMaxDepth) unit_0006(c, 223u, depth + 1u); else { c.pc = 0x00119CD8u; return; } if (c.pc != 0x001DFAA0u) [[unlikely]] return; }
L_001DFAA0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFAB8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DFAB8u) [[unlikely]] return; }
L_001DFAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFAC0u);  if (depth < kMaxDepth) unit_0034(c, 287u, depth + 1u); else { c.pc = 0x001D2D20u; return; } if (c.pc != 0x001DFAC0u) [[unlikely]] return; }
L_001DFAC0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFACCu);  if (depth < kMaxDepth) unit_0036(c, 293u, depth + 1u); else { c.pc = 0x001DA840u; return; } if (c.pc != 0x001DFACCu) [[unlikely]] return; }
L_001DFACC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFAD8u);  if (depth < kMaxDepth) unit_0036(c, 307u, depth + 1u); else { c.pc = 0x001DA928u; return; } if (c.pc != 0x001DFAD8u) [[unlikely]] return; }
L_001DFAD8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFAE4u);  if (depth < kMaxDepth) unit_0036(c, 319u, depth + 1u); else { c.pc = 0x001DA9C8u; return; } if (c.pc != 0x001DFAE4u) [[unlikely]] return; }
L_001DFAE4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFAF0u);  if (depth < kMaxDepth) unit_0036(c, 331u, depth + 1u); else { c.pc = 0x001DAA68u; return; } if (c.pc != 0x001DFAF0u) [[unlikely]] return; }
L_001DFAF0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFAFCu);  if (depth < kMaxDepth) unit_0036(c, 345u, depth + 1u); else { c.pc = 0x001DAB50u; return; } if (c.pc != 0x001DFAFCu) [[unlikely]] return; }
L_001DFAFC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB08u);  if (depth < kMaxDepth) unit_0034(c, 295u, depth + 1u); else { c.pc = 0x001D2E18u; return; } if (c.pc != 0x001DFB08u) [[unlikely]] return; }
L_001DFB08:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB14u);  if (depth < kMaxDepth) unit_0036(c, 358u, depth + 1u); else { c.pc = 0x001DAC10u; return; } if (c.pc != 0x001DFB14u) [[unlikely]] return; }
L_001DFB14:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB20u);  if (depth < kMaxDepth) unit_0034(c, 308u, depth + 1u); else { c.pc = 0x001D2F28u; return; } if (c.pc != 0x001DFB20u) [[unlikely]] return; }
L_001DFB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB28u);  if (depth < kMaxDepth) unit_0001(c, 20u, depth + 1u); else { c.pc = 0x00104250u; return; } if (c.pc != 0x001DFB28u) [[unlikely]] return; }
L_001DFB28:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB34u);  if (depth < kMaxDepth) unit_0036(c, 371u, depth + 1u); else { c.pc = 0x001DACD0u; return; } if (c.pc != 0x001DFB34u) [[unlikely]] return; }
L_001DFB34:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB40u);  if (depth < kMaxDepth) unit_0036(c, 385u, depth + 1u); else { c.pc = 0x001DADC0u; return; } if (c.pc != 0x001DFB40u) [[unlikely]] return; }
L_001DFB40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB48u);  if (depth < kMaxDepth) unit_0036(c, 399u, depth + 1u); else { c.pc = 0x001DAE80u; return; } if (c.pc != 0x001DFB48u) [[unlikely]] return; }
L_001DFB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB50u);  if (depth < kMaxDepth) unit_0061(c, 24u, depth + 1u); else { c.pc = 0x00284410u; return; } if (c.pc != 0x001DFB50u) [[unlikely]] return; }
L_001DFB50:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DFB68u) [[unlikely]] return; }
L_001DFB68:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] + 12224u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB7Cu);  if (depth < kMaxDepth) unit_0039(c, 37u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001DFB7Cu) [[unlikely]] return; }
L_001DFB7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB8Cu);  if (depth < kMaxDepth) unit_009E(c, 365u, depth + 1u); else { c.pc = 0x0037B7B8u; return; } if (c.pc != 0x001DFB8Cu) [[unlikely]] return; }
L_001DFB8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB94u);  if (depth < kMaxDepth) unit_001F(c, 306u, depth + 1u); else { c.pc = 0x0017FC00u; return; } if (c.pc != 0x001DFB94u) [[unlikely]] return; }
L_001DFB94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFB9Cu);  if (depth < kMaxDepth) unit_0028(c, 151u, depth + 1u); else { c.pc = 0x001A2408u; return; } if (c.pc != 0x001DFB9Cu) [[unlikely]] return; }
L_001DFB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFBA4u);  if (depth < kMaxDepth) unit_0018(c, 365u, depth + 1u); else { c.pc = 0x00163188u; return; } if (c.pc != 0x001DFBA4u) [[unlikely]] return; }
L_001DFBA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFBB4u);  if (depth < kMaxDepth) unit_0062(c, 8u, depth + 1u); else { c.pc = 0x002880B0u; return; } if (c.pc != 0x001DFBB4u) [[unlikely]] return; }
L_001DFBB4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFBC0u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x001DFBC0u) [[unlikely]] return; }
L_001DFBC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFBCCu);  if (depth < kMaxDepth) unit_0066(c, 197u, depth + 1u); else { c.pc = 0x00299FB0u; return; } if (c.pc != 0x001DFBCCu) [[unlikely]] return; }
L_001DFBCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFBD4u);  if (depth < kMaxDepth) unit_0069(c, 49u, depth + 1u); else { c.pc = 0x002A4C30u; return; } if (c.pc != 0x001DFBD4u) [[unlikely]] return; }
L_001DFBD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFBDCu);  if (depth < kMaxDepth) unit_0068(c, 265u, depth + 1u); else { c.pc = 0x002A3698u; return; } if (c.pc != 0x001DFBDCu) [[unlikely]] return; }
L_001DFBDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 14016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFBECu);  if (depth < kMaxDepth) unit_009A(c, 233u, depth + 1u); else { c.pc = 0x0036B2D0u; return; } if (c.pc != 0x001DFBECu) [[unlikely]] return; }
L_001DFBEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFBF4u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001DFBF4u) [[unlikely]] return; }
L_001DFBF4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC00u);  if (depth < kMaxDepth) unit_0098(c, 201u, depth + 1u); else { c.pc = 0x00362768u; return; } if (c.pc != 0x001DFC00u) [[unlikely]] return; }
L_001DFC00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 21680u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC10u);  if (depth < kMaxDepth) unit_002A(c, 378u, depth + 1u); else { c.pc = 0x001AB370u; return; } if (c.pc != 0x001DFC10u) [[unlikely]] return; }
L_001DFC10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC18u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001DFC18u) [[unlikely]] return; }
L_001DFC18:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 100u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DFC30u) [[unlikely]] return; }
L_001DFC30:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC3Cu);  if (depth < kMaxDepth) unit_009A(c, 141u, depth + 1u); else { c.pc = 0x0036A178u; return; } if (c.pc != 0x001DFC3Cu) [[unlikely]] return; }
L_001DFC3C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC48u);  if (depth < kMaxDepth) unit_009A(c, 141u, depth + 1u); else { c.pc = 0x0036A178u; return; } if (c.pc != 0x001DFC48u) [[unlikely]] return; }
L_001DFC48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC50u);  if (depth < kMaxDepth) unit_009A(c, 143u, depth + 1u); else { c.pc = 0x0036A1C8u; return; } if (c.pc != 0x001DFC50u) [[unlikely]] return; }
L_001DFC50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC58u);  if (depth < kMaxDepth) unit_0037(c, 124u, depth + 1u); else { c.pc = 0x001DCE78u; return; } if (c.pc != 0x001DFC58u) [[unlikely]] return; }
L_001DFC58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC60u);  if (depth < kMaxDepth) unit_0083(c, 16u, depth + 1u); else { c.pc = 0x0030C178u; return; } if (c.pc != 0x001DFC60u) [[unlikely]] return; }
L_001DFC60:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC70u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DFC70u) [[unlikely]] return; }
L_001DFC70:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC7Cu);  if (depth < kMaxDepth) unit_001D(c, 101u, depth + 1u); else { c.pc = 0x00175330u; return; } if (c.pc != 0x001DFC7Cu) [[unlikely]] return; }
L_001DFC7C:
    set32(c.r[5], 0u + 2u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC8Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DFC8Cu) [[unlikely]] return; }
L_001DFC8C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC98u);  if (depth < kMaxDepth) unit_001D(c, 101u, depth + 1u); else { c.pc = 0x00175330u; return; } if (c.pc != 0x001DFC98u) [[unlikely]] return; }
L_001DFC98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFCA4u);  if (depth < kMaxDepth) unit_0039(c, 201u, depth + 1u); else { c.pc = 0x001E5A60u; return; } if (c.pc != 0x001DFCA4u) [[unlikely]] return; }
L_001DFCA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFCACu);  if (depth < kMaxDepth) unit_0039(c, 218u, depth + 1u); else { c.pc = 0x001E5C50u; return; } if (c.pc != 0x001DFCACu) [[unlikely]] return; }
L_001DFCAC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[16], c.r[16].w[0] - 22944u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFCC4u);  if (depth < kMaxDepth) unit_0085(c, 318u, depth + 1u); else { c.pc = 0x00317590u; return; } if (c.pc != 0x001DFCC4u) [[unlikely]] return; }
L_001DFCC4:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], c.r[17].w[0] - 20768u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFCD8u);  if (depth < kMaxDepth) unit_0008(c, 84u, depth + 1u); else { c.pc = 0x00120F00u; return; } if (c.pc != 0x001DFCD8u) [[unlikely]] return; }
L_001DFCD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFCE4u);  if (depth < kMaxDepth) unit_0086(c, 42u, depth + 1u); else { c.pc = 0x00318570u; return; } if (c.pc != 0x001DFCE4u) [[unlikely]] return; }
L_001DFCE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFCECu);  if (depth < kMaxDepth) unit_0020(c, 145u, depth + 1u); else { c.pc = 0x00181F10u; return; } if (c.pc != 0x001DFCECu) [[unlikely]] return; }
L_001DFCEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFCF4u);  if (depth < kMaxDepth) unit_0043(c, 23u, depth + 1u); else { c.pc = 0x0020C6C0u; return; } if (c.pc != 0x001DFCF4u) [[unlikely]] return; }
L_001DFCF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFCFCu);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x001DFCFCu) [[unlikely]] return; }
L_001DFCFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[3].w[0] + 8576u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD0Cu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x001DFD0Cu) [[unlikely]] return; }
L_001DFD0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st32((c.r[3].w[0] + 10488u), 0u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD24u);  if (depth < kMaxDepth) unit_0095(c, 127u, depth + 1u); else { c.pc = 0x003550F8u; return; } if (c.pc != 0x001DFD24u) [[unlikely]] return; }
L_001DFD24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] + 29712u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD34u);  if (depth < kMaxDepth) unit_0094(c, 379u, depth + 1u); else { c.pc = 0x00353ED8u; return; } if (c.pc != 0x001DFD34u) [[unlikely]] return; }
L_001DFD34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], c.r[4].w[0] + 20032u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD44u);  if (depth < kMaxDepth) unit_0095(c, 379u, depth + 1u); else { c.pc = 0x00356F20u; return; } if (c.pc != 0x001DFD44u) [[unlikely]] return; }
L_001DFD44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 12912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD54u);  if (depth < kMaxDepth) unit_0067(c, 259u, depth + 1u); else { c.pc = 0x0029E7E0u; return; } if (c.pc != 0x001DFD54u) [[unlikely]] return; }
L_001DFD54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD5Cu);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x001DFD5Cu) [[unlikely]] return; }
L_001DFD5C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD6Cu);  if (depth < kMaxDepth) unit_0077(c, 27u, depth + 1u); else { c.pc = 0x002DC6B8u; return; } if (c.pc != 0x001DFD6Cu) [[unlikely]] return; }
L_001DFD6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 32380u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD7Cu);  if (depth < kMaxDepth) unit_006C(c, 89u, depth + 1u); else { c.pc = 0x002B0F10u; return; } if (c.pc != 0x001DFD7Cu) [[unlikely]] return; }
L_001DFD7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 19344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD8Cu);  if (depth < kMaxDepth) unit_0088(c, 270u, depth + 1u); else { c.pc = 0x003231D0u; return; } if (c.pc != 0x001DFD8Cu) [[unlikely]] return; }
L_001DFD8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] + 24040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFD9Cu);  if (depth < kMaxDepth) unit_007D(c, 282u, depth + 1u); else { c.pc = 0x002F7E70u; return; } if (c.pc != 0x001DFD9Cu) [[unlikely]] return; }
L_001DFD9C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFDA8u);  if (depth < kMaxDepth) unit_0023(c, 130u, depth + 1u); else { c.pc = 0x0018DD40u; return; } if (c.pc != 0x001DFDA8u) [[unlikely]] return; }
L_001DFDA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFDBCu);  if (depth < kMaxDepth) unit_008C(c, 101u, depth + 1u); else { c.pc = 0x00331418u; return; } if (c.pc != 0x001DFDBCu) [[unlikely]] return; }
L_001DFDBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFDD0u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x001DFDD0u) [[unlikely]] return; }
L_001DFDD0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFDDCu);  if (depth < kMaxDepth) unit_0082(c, 314u, depth + 1u); else { c.pc = 0x0030BE98u; return; } if (c.pc != 0x001DFDDCu) [[unlikely]] return; }
L_001DFDDC:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFDE8u);  if (depth < kMaxDepth) unit_0082(c, 314u, depth + 1u); else { c.pc = 0x0030BE98u; return; } if (c.pc != 0x001DFDE8u) [[unlikely]] return; }
L_001DFDE8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFDF4u);  if (depth < kMaxDepth) unit_0082(c, 314u, depth + 1u); else { c.pc = 0x0030BE98u; return; } if (c.pc != 0x001DFDF4u) [[unlikely]] return; }
L_001DFDF4:
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE00u);  if (depth < kMaxDepth) unit_0082(c, 314u, depth + 1u); else { c.pc = 0x0030BE98u; return; } if (c.pc != 0x001DFE00u) [[unlikely]] return; }
L_001DFE00:
    set32(c.r[4], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE0Cu);  if (depth < kMaxDepth) unit_0082(c, 314u, depth + 1u); else { c.pc = 0x0030BE98u; return; } if (c.pc != 0x001DFE0Cu) [[unlikely]] return; }
L_001DFE0C:
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE18u);  if (depth < kMaxDepth) unit_0082(c, 314u, depth + 1u); else { c.pc = 0x0030BE98u; return; } if (c.pc != 0x001DFE18u) [[unlikely]] return; }
L_001DFE18:
    set32(c.r[4], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE24u);  if (depth < kMaxDepth) unit_0082(c, 314u, depth + 1u); else { c.pc = 0x0030BE98u; return; } if (c.pc != 0x001DFE24u) [[unlikely]] return; }
L_001DFE24:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 22920u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE3Cu);  if (depth < kMaxDepth) unit_0086(c, 300u, depth + 1u); else { c.pc = 0x0031BB18u; return; } if (c.pc != 0x001DFE3Cu) [[unlikely]] return; }
L_001DFE3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE4Cu);  if (depth < kMaxDepth) unit_0086(c, 300u, depth + 1u); else { c.pc = 0x0031BB18u; return; } if (c.pc != 0x001DFE4Cu) [[unlikely]] return; }
L_001DFE4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE5Cu);  if (depth < kMaxDepth) unit_0086(c, 300u, depth + 1u); else { c.pc = 0x0031BB18u; return; } if (c.pc != 0x001DFE5Cu) [[unlikely]] return; }
L_001DFE5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE6Cu);  if (depth < kMaxDepth) unit_0086(c, 300u, depth + 1u); else { c.pc = 0x0031BB18u; return; } if (c.pc != 0x001DFE6Cu) [[unlikely]] return; }
L_001DFE6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE7Cu);  if (depth < kMaxDepth) unit_0086(c, 300u, depth + 1u); else { c.pc = 0x0031BB18u; return; } if (c.pc != 0x001DFE7Cu) [[unlikely]] return; }
L_001DFE7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE8Cu);  if (depth < kMaxDepth) unit_0086(c, 300u, depth + 1u); else { c.pc = 0x0031BB18u; return; } if (c.pc != 0x001DFE8Cu) [[unlikely]] return; }
L_001DFE8C:
    set32(c.r[5], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE9Cu);  if (depth < kMaxDepth) unit_0087(c, 32u, depth + 1u); else { c.pc = 0x0031C668u; return; } if (c.pc != 0x001DFE9Cu) [[unlikely]] return; }
L_001DFE9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFEA4u);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x001DFEA4u) [[unlikely]] return; }
L_001DFEA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFEB0u);  if (depth < kMaxDepth) unit_0077(c, 19u, depth + 1u); else { c.pc = 0x002DC5A0u; return; } if (c.pc != 0x001DFEB0u) [[unlikely]] return; }
L_001DFEB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFEBCu);  if (depth < kMaxDepth) unit_0008(c, 69u, depth + 1u); else { c.pc = 0x00120C88u; return; } if (c.pc != 0x001DFEBCu) [[unlikely]] return; }
L_001DFEBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFEC4u);  if (depth < kMaxDepth) unit_0074(c, 144u, depth + 1u); else { c.pc = 0x002D1A80u; return; } if (c.pc != 0x001DFEC4u) [[unlikely]] return; }
L_001DFEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFECCu);  if (depth < kMaxDepth) unit_003C(c, 49u, depth + 1u); else { c.pc = 0x001F0808u; return; } if (c.pc != 0x001DFECCu) [[unlikely]] return; }
L_001DFECC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 368u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFEECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DFEECu) [[unlikely]] return; }
L_001DFEEC:
    set32(c.r[4], ld32((c.r[18].w[0] + 20668u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFEF8u);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001DFEF8u) [[unlikely]] return; }
L_001DFEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF00u);  if (depth < kMaxDepth) unit_0008(c, 8u, depth + 1u); else { c.pc = 0x00120108u; return; } if (c.pc != 0x001DFF00u) [[unlikely]] return; }
L_001DFF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF08u);  if (depth < kMaxDepth) unit_0033(c, 44u, depth + 1u); else { c.pc = 0x001CC948u; return; } if (c.pc != 0x001DFF08u) [[unlikely]] return; }
L_001DFF08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20664u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF1Cu);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x001DFF1Cu) [[unlikely]] return; }
L_001DFF1C:
    set32(c.r[4], ld32((c.r[18].w[0] + 20668u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF2Cu);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x001DFF2Cu) [[unlikely]] return; }
L_001DFF2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], ld32((c.r[3].w[0] + 20720u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF40u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x001DFF40u) [[unlikely]] return; }
L_001DFF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF48u);  if (depth < kMaxDepth) unit_001A(c, 181u, depth + 1u); else { c.pc = 0x0016A078u; return; } if (c.pc != 0x001DFF48u) [[unlikely]] return; }
L_001DFF48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20672u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF5Cu);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x001DFF5Cu) [[unlikely]] return; }
L_001DFF5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], ld32((c.r[3].w[0] + 20704u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF70u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x001DFF70u) [[unlikely]] return; }
L_001DFF70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[4].w[0] + 20628u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF80u);  if (depth < kMaxDepth) unit_0044(c, 13u, depth + 1u); else { c.pc = 0x00210A20u; return; } if (c.pc != 0x001DFF80u) [[unlikely]] return; }
L_001DFF80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[4].w[0] + 20632u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF90u);  if (depth < kMaxDepth) unit_0044(c, 13u, depth + 1u); else { c.pc = 0x00210A20u; return; } if (c.pc != 0x001DFF90u) [[unlikely]] return; }
L_001DFF90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[16], c.r[2].w[0] + 20640u);
    c.budget -= 2;
L_001DFF98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFFA8u);  if (depth < kMaxDepth) unit_0044(c, 13u, depth + 1u); else { c.pc = 0x00210A20u; return; } if (c.pc != 0x001DFFA8u) [[unlikely]] return; }
L_001DFFA8:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DFF98u | kUnwind; return; } goto L_001DFF98; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DFFB8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] - 14960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFFC8u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DFFC8u) [[unlikely]] return; }
L_001DFFC8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFFDCu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001DFFDCu) [[unlikely]] return; }
L_001DFFDC:
    c.r[2].d[0] = c.r[16].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DFFB8u | kUnwind; return; } goto L_001DFFB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFFF0u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001DFFF0u) [[unlikely]] return; }
L_001DFFF0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 132u), 0u);
    c.budget -= 4;
    [[clang::musttail]] return unit_0038(c, 1u, depth);
}

}
