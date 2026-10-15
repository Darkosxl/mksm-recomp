#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00C7[4096] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0,
    0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101,
    0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 106, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 126, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0,
    0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0,
    164, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0,
    0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0,
    0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0,
    0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224,
    0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 238, 0, 239, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 248, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0,
    263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 274, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 0, 278, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    302, 0, 303, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0,
    0, 0, 309, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0,
    0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0,
    0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 354,
    0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0,
    0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0,
    0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0,
    370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0,
    0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0,
    0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 396, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0,
    401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0,
    0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417,
    0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0,
    0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 426, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0,
    0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0,
    0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0,
    0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 439, 0, 440, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 442, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 446, 0, 447, 0, 0, 448, 0, 0, 0, 0,
    0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0,
    0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0,
    456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 460, 0, 461, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0,
    464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0,
    0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 478, 0, 479, 0,
    480, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 486, 0, 487, 0, 488, 0, 0, 0,
    0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 492, 0,
    493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0,
    0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 501, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0,
    0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0,
    513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0,
    517, 0, 518, 0, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    522, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 526,
    0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0,
    0, 0, 0, 538, 0, 0, 0, 539, 0, 540, 541, 0, 542, 0, 0, 0, 543, 0, 544, 0, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0,
};

void unit_00C7(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0041C000;
    case 2u: goto L_0041C008;
    case 3u: goto L_0041C018;
    case 4u: goto L_0041C03C;
    case 5u: goto L_0041C06C;
    case 6u: goto L_0041C098;
    case 7u: goto L_0041C0BC;
    case 8u: goto L_0041C0F0;
    case 9u: goto L_0041C0F8;
    case 10u: goto L_0041C10C;
    case 11u: goto L_0041C118;
    case 12u: goto L_0041C120;
    case 13u: goto L_0041C130;
    case 14u: goto L_0041C144;
    case 15u: goto L_0041C14C;
    case 16u: goto L_0041C160;
    case 17u: goto L_0041C1A8;
    case 18u: goto L_0041C1C0;
    case 19u: goto L_0041C1D8;
    case 20u: goto L_0041C1F0;
    case 21u: goto L_0041C208;
    case 22u: goto L_0041C210;
    case 23u: goto L_0041C230;
    case 24u: goto L_0041C258;
    case 25u: goto L_0041C278;
    case 26u: goto L_0041C29C;
    case 27u: goto L_0041C2AC;
    case 28u: goto L_0041C2B4;
    case 29u: goto L_0041C2D0;
    case 30u: goto L_0041C300;
    case 31u: goto L_0041C314;
    case 32u: goto L_0041C31C;
    case 33u: goto L_0041C330;
    case 34u: goto L_0041C350;
    case 35u: goto L_0041C364;
    case 36u: goto L_0041C36C;
    case 37u: goto L_0041C374;
    case 38u: goto L_0041C388;
    case 39u: goto L_0041C3A8;
    case 40u: goto L_0041C3C4;
    case 41u: goto L_0041C3D0;
    case 42u: goto L_0041C3E8;
    case 43u: goto L_0041C400;
    case 44u: goto L_0041C424;
    case 45u: goto L_0041C434;
    case 46u: goto L_0041C450;
    case 47u: goto L_0041C488;
    case 48u: goto L_0041C49C;
    case 49u: goto L_0041C4A4;
    case 50u: goto L_0041C4B8;
    case 51u: goto L_0041C4D0;
    case 52u: goto L_0041C4EC;
    case 53u: goto L_0041C4F8;
    case 54u: goto L_0041C510;
    case 55u: goto L_0041C530;
    case 56u: goto L_0041C544;
    case 57u: goto L_0041C54C;
    case 58u: goto L_0041C554;
    case 59u: goto L_0041C568;
    case 60u: goto L_0041C5A0;
    case 61u: goto L_0041C5BC;
    case 62u: goto L_0041C5C8;
    case 63u: goto L_0041C5E0;
    case 64u: goto L_0041C600;
    case 65u: goto L_0041C624;
    case 66u: goto L_0041C634;
    case 67u: goto L_0041C650;
    case 68u: goto L_0041C670;
    case 69u: goto L_0041C68C;
    case 70u: goto L_0041C698;
    case 71u: goto L_0041C6B0;
    case 72u: goto L_0041C6C8;
    case 73u: goto L_0041C6E4;
    case 74u: goto L_0041C6F0;
    case 75u: goto L_0041C708;
    case 76u: goto L_0041C720;
    case 77u: goto L_0041C73C;
    case 78u: goto L_0041C748;
    case 79u: goto L_0041C760;
    case 80u: goto L_0041C778;
    case 81u: goto L_0041C794;
    case 82u: goto L_0041C7A0;
    case 83u: goto L_0041C7B8;
    case 84u: goto L_0041C7E8;
    case 85u: goto L_0041C804;
    case 86u: goto L_0041C810;
    case 87u: goto L_0041C828;
    case 88u: goto L_0041C848;
    case 89u: goto L_0041C864;
    case 90u: goto L_0041C870;
    case 91u: goto L_0041C888;
    case 92u: goto L_0041C8B8;
    case 93u: goto L_0041C8CC;
    case 94u: goto L_0041C8D4;
    case 95u: goto L_0041C8E8;
    case 96u: goto L_0041C900;
    case 97u: goto L_0041C914;
    case 98u: goto L_0041C91C;
    case 99u: goto L_0041C930;
    case 100u: goto L_0041C960;
    case 101u: goto L_0041C97C;
    case 102u: goto L_0041C988;
    case 103u: goto L_0041C990;
    case 104u: goto L_0041C9A8;
    case 105u: goto L_0041CA00;
    case 106u: goto L_0041CA10;
    case 107u: goto L_0041CA18;
    case 108u: goto L_0041CA28;
    case 109u: goto L_0041CA40;
    case 110u: goto L_0041CA50;
    case 111u: goto L_0041CA60;
    case 112u: goto L_0041CA68;
    case 113u: goto L_0041CA78;
    case 114u: goto L_0041CA90;
    case 115u: goto L_0041CAA0;
    case 116u: goto L_0041CAB4;
    case 117u: goto L_0041CABC;
    case 118u: goto L_0041CAD0;
    case 119u: goto L_0041CAF0;
    case 120u: goto L_0041CB08;
    case 121u: goto L_0041CB1C;
    case 122u: goto L_0041CB24;
    case 123u: goto L_0041CB38;
    case 124u: goto L_0041CB58;
    case 125u: goto L_0041CB70;
    case 126u: goto L_0041CB84;
    case 127u: goto L_0041CB8C;
    case 128u: goto L_0041CBA0;
    case 129u: goto L_0041CBC0;
    case 130u: goto L_0041CBF0;
    case 131u: goto L_0041CC10;
    case 132u: goto L_0041CC20;
    case 133u: goto L_0041CC58;
    case 134u: goto L_0041CCA8;
    case 135u: goto L_0041CCDC;
    case 136u: goto L_0041CCE8;
    case 137u: goto L_0041CD08;
    case 138u: goto L_0041CD10;
    case 139u: goto L_0041CD20;
    case 140u: goto L_0041CD40;
    case 141u: goto L_0041CD90;
    case 142u: goto L_0041CDA0;
    case 143u: goto L_0041CDC0;
    case 144u: goto L_0041CDEC;
    case 145u: goto L_0041CE00;
    case 146u: goto L_0041CE14;
    case 147u: goto L_0041CE58;
    case 148u: goto L_0041CE6C;
    case 149u: goto L_0041CE80;
    case 150u: goto L_0041CEB8;
    case 151u: goto L_0041CEC0;
    case 152u: goto L_0041CF00;
    case 153u: goto L_0041CF28;
    case 154u: goto L_0041CF30;
    case 155u: goto L_0041CF3C;
    case 156u: goto L_0041CF88;
    case 157u: goto L_0041CFB8;
    case 158u: goto L_0041CFC8;
    case 159u: goto L_0041D008;
    case 160u: goto L_0041D018;
    case 161u: goto L_0041D04C;
    case 162u: goto L_0041D064;
    case 163u: goto L_0041D06C;
    case 164u: goto L_0041D080;
    case 165u: goto L_0041D088;
    case 166u: goto L_0041D0A0;
    case 167u: goto L_0041D0C0;
    case 168u: goto L_0041D10C;
    case 169u: goto L_0041D128;
    case 170u: goto L_0041D14C;
    case 171u: goto L_0041D15C;
    case 172u: goto L_0041D180;
    case 173u: goto L_0041D190;
    case 174u: goto L_0041D1B4;
    case 175u: goto L_0041D1C4;
    case 176u: goto L_0041D1E8;
    case 177u: goto L_0041D208;
    case 178u: goto L_0041D250;
    case 179u: goto L_0041D260;
    case 180u: goto L_0041D2A0;
    case 181u: goto L_0041D2F8;
    case 182u: goto L_0041D308;
    case 183u: goto L_0041D348;
    case 184u: goto L_0041D3A8;
    case 185u: goto L_0041D3CC;
    case 186u: goto L_0041D3F8;
    case 187u: goto L_0041D410;
    case 188u: goto L_0041D458;
    case 189u: goto L_0041D488;
    case 190u: goto L_0041D4A4;
    case 191u: goto L_0041D4C8;
    case 192u: goto L_0041D4DC;
    case 193u: goto L_0041D4F0;
    case 194u: goto L_0041D50C;
    case 195u: goto L_0041D530;
    case 196u: goto L_0041D544;
    case 197u: goto L_0041D558;
    case 198u: goto L_0041D574;
    case 199u: goto L_0041D598;
    case 200u: goto L_0041D5AC;
    case 201u: goto L_0041D5C0;
    case 202u: goto L_0041D5C8;
    case 203u: goto L_0041D5E8;
    case 204u: goto L_0041D604;
    case 205u: goto L_0041D628;
    case 206u: goto L_0041D648;
    case 207u: goto L_0041D668;
    case 208u: goto L_0041D678;
    case 209u: goto L_0041D690;
    case 210u: goto L_0041D6CC;
    case 211u: goto L_0041D6F4;
    case 212u: goto L_0041D70C;
    case 213u: goto L_0041D720;
    case 214u: goto L_0041D734;
    case 215u: goto L_0041D750;
    case 216u: goto L_0041D7A8;
    case 217u: goto L_0041D7C0;
    case 218u: goto L_0041D7D0;
    case 219u: goto L_0041D7F8;
    case 220u: goto L_0041D808;
    case 221u: goto L_0041D830;
    case 222u: goto L_0041D848;
    case 223u: goto L_0041D870;
    case 224u: goto L_0041D87C;
    case 225u: goto L_0041D89C;
    case 226u: goto L_0041D8E0;
    case 227u: goto L_0041D8F0;
    case 228u: goto L_0041D920;
    case 229u: goto L_0041D938;
    case 230u: goto L_0041D954;
    case 231u: goto L_0041D98C;
    case 232u: goto L_0041D9A8;
    case 233u: goto L_0041D9C4;
    case 234u: goto L_0041D9E4;
    case 235u: goto L_0041DA14;
    case 236u: goto L_0041DA1C;
    case 237u: goto L_0041DA48;
    case 238u: goto L_0041DA8C;
    case 239u: goto L_0041DA94;
    case 240u: goto L_0041DAA0;
    case 241u: goto L_0041DAB4;
    case 242u: goto L_0041DB08;
    case 243u: goto L_0041DB38;
    case 244u: goto L_0041DB74;
    case 245u: goto L_0041DBC0;
    case 246u: goto L_0041DBE8;
    case 247u: goto L_0041DBF0;
    case 248u: goto L_0041DBF8;
    case 249u: goto L_0041DC20;
    case 250u: goto L_0041DC30;
    case 251u: goto L_0041DC38;
    case 252u: goto L_0041DC48;
    case 253u: goto L_0041DC90;
    case 254u: goto L_0041DCA0;
    case 255u: goto L_0041DCB0;
    case 256u: goto L_0041DCBC;
    case 257u: goto L_0041DCD8;
    case 258u: goto L_0041DCEC;
    case 259u: goto L_0041DD18;
    case 260u: goto L_0041DD40;
    case 261u: goto L_0041DD5C;
    case 262u: goto L_0041DD78;
    case 263u: goto L_0041DD80;
    case 264u: goto L_0041DD90;
    case 265u: goto L_0041DDC0;
    case 266u: goto L_0041DDDC;
    case 267u: goto L_0041DE28;
    case 268u: goto L_0041DE30;
    case 269u: goto L_0041DE44;
    case 270u: goto L_0041DE5C;
    case 271u: goto L_0041DE80;
    case 272u: goto L_0041DE98;
    case 273u: goto L_0041DF00;
    case 274u: goto L_0041DF08;
    case 275u: goto L_0041DF10;
    case 276u: goto L_0041DF1C;
    case 277u: goto L_0041DF24;
    case 278u: goto L_0041DF38;
    case 279u: goto L_0041DF40;
    case 280u: goto L_0041DF4C;
    case 281u: goto L_0041DF80;
    case 282u: goto L_0041DFA8;
    case 283u: goto L_0041DFC8;
    case 284u: goto L_0041E018;
    case 285u: goto L_0041E020;
    case 286u: goto L_0041E028;
    case 287u: goto L_0041E034;
    case 288u: goto L_0041E050;
    case 289u: goto L_0041E058;
    case 290u: goto L_0041E060;
    case 291u: goto L_0041E068;
    case 292u: goto L_0041E090;
    case 293u: goto L_0041E098;
    case 294u: goto L_0041E0B8;
    case 295u: goto L_0041E0E8;
    case 296u: goto L_0041E0F4;
    case 297u: goto L_0041E14C;
    case 298u: goto L_0041E154;
    case 299u: goto L_0041E160;
    case 300u: goto L_0041E168;
    case 301u: goto L_0041E1B0;
    case 302u: goto L_0041E200;
    case 303u: goto L_0041E208;
    case 304u: goto L_0041E220;
    case 305u: goto L_0041E228;
    case 306u: goto L_0041E248;
    case 307u: goto L_0041E25C;
    case 308u: goto L_0041E268;
    case 309u: goto L_0041E288;
    case 310u: goto L_0041E298;
    case 311u: goto L_0041E2A4;
    case 312u: goto L_0041E304;
    case 313u: goto L_0041E314;
    case 314u: goto L_0041E324;
    case 315u: goto L_0041E340;
    case 316u: goto L_0041E380;
    case 317u: goto L_0041E388;
    case 318u: goto L_0041E3B4;
    case 319u: goto L_0041E3E4;
    case 320u: goto L_0041E3EC;
    case 321u: goto L_0041E400;
    case 322u: goto L_0041E438;
    case 323u: goto L_0041E440;
    case 324u: goto L_0041E454;
    case 325u: goto L_0041E478;
    case 326u: goto L_0041E488;
    case 327u: goto L_0041E4B8;
    case 328u: goto L_0041E4E4;
    case 329u: goto L_0041E4F0;
    case 330u: goto L_0041E510;
    case 331u: goto L_0041E530;
    case 332u: goto L_0041E550;
    case 333u: goto L_0041E588;
    case 334u: goto L_0041E5C0;
    case 335u: goto L_0041E5C8;
    case 336u: goto L_0041E5EC;
    case 337u: goto L_0041E614;
    case 338u: goto L_0041E630;
    case 339u: goto L_0041E640;
    case 340u: goto L_0041E65C;
    case 341u: goto L_0041E664;
    case 342u: goto L_0041E680;
    case 343u: goto L_0041E6A4;
    case 344u: goto L_0041E6B4;
    case 345u: goto L_0041E6D0;
    case 346u: goto L_0041E6D8;
    case 347u: goto L_0041E6F8;
    case 348u: goto L_0041E714;
    case 349u: goto L_0041E720;
    case 350u: goto L_0041E73C;
    case 351u: goto L_0041E744;
    case 352u: goto L_0041E760;
    case 353u: goto L_0041E774;
    case 354u: goto L_0041E77C;
    case 355u: goto L_0041E798;
    case 356u: goto L_0041E7A0;
    case 357u: goto L_0041E7B8;
    case 358u: goto L_0041E7DC;
    case 359u: goto L_0041E7EC;
    case 360u: goto L_0041E808;
    case 361u: goto L_0041E810;
    case 362u: goto L_0041E830;
    case 363u: goto L_0041E888;
    case 364u: goto L_0041E8A0;
    case 365u: goto L_0041E8E0;
    case 366u: goto L_0041E8F0;
    case 367u: goto L_0041E908;
    case 368u: goto L_0041E928;
    case 369u: goto L_0041E95C;
    case 370u: goto L_0041E980;
    case 371u: goto L_0041E988;
    case 372u: goto L_0041EA14;
    case 373u: goto L_0041EA48;
    case 374u: goto L_0041EA60;
    case 375u: goto L_0041EAA4;
    case 376u: goto L_0041EABC;
    case 377u: goto L_0041EAD4;
    case 378u: goto L_0041EB20;
    case 379u: goto L_0041EB48;
    case 380u: goto L_0041EB50;
    case 381u: goto L_0041EB64;
    case 382u: goto L_0041EB88;
    case 383u: goto L_0041EB98;
    case 384u: goto L_0041EBA8;
    case 385u: goto L_0041EC0C;
    case 386u: goto L_0041EC20;
    case 387u: goto L_0041EC78;
    case 388u: goto L_0041ECA4;
    case 389u: goto L_0041ECBC;
    case 390u: goto L_0041ECE8;
    case 391u: goto L_0041ECF4;
    case 392u: goto L_0041ED18;
    case 393u: goto L_0041ED58;
    case 394u: goto L_0041ED64;
    case 395u: goto L_0041ED74;
    case 396u: goto L_0041ED78;
    case 397u: goto L_0041EDB0;
    case 398u: goto L_0041EE08;
    case 399u: goto L_0041EE48;
    case 400u: goto L_0041EE5C;
    case 401u: goto L_0041EE80;
    case 402u: goto L_0041EEB8;
    case 403u: goto L_0041EEC8;
    case 404u: goto L_0041EF28;
    case 405u: goto L_0041EF38;
    case 406u: goto L_0041EF60;
    case 407u: goto L_0041EF88;
    case 408u: goto L_0041EFA8;
    case 409u: goto L_0041EFB0;
    case 410u: goto L_0041EFC4;
    case 411u: goto L_0041EFE8;
    case 412u: goto L_0041F004;
    case 413u: goto L_0041F018;
    case 414u: goto L_0041F03C;
    case 415u: goto L_0041F048;
    case 416u: goto L_0041F068;
    case 417u: goto L_0041F07C;
    case 418u: goto L_0041F088;
    case 419u: goto L_0041F0A0;
    case 420u: goto L_0041F0C4;
    case 421u: goto L_0041F0CC;
    case 422u: goto L_0041F0F8;
    case 423u: goto L_0041F108;
    case 424u: goto L_0041F130;
    case 425u: goto L_0041F140;
    case 426u: goto L_0041F144;
    case 427u: goto L_0041F168;
    case 428u: goto L_0041F18C;
    case 429u: goto L_0041F1A0;
    case 430u: goto L_0041F1B4;
    case 431u: goto L_0041F1E0;
    case 432u: goto L_0041F1F8;
    case 433u: goto L_0041F20C;
    case 434u: goto L_0041F228;
    case 435u: goto L_0041F270;
    case 436u: goto L_0041F294;
    case 437u: goto L_0041F2B4;
    case 438u: goto L_0041F2BC;
    case 439u: goto L_0041F2C4;
    case 440u: goto L_0041F2CC;
    case 441u: goto L_0041F2D8;
    case 442u: goto L_0041F2F8;
    case 443u: goto L_0041F328;
    case 444u: goto L_0041F348;
    case 445u: goto L_0041F350;
    case 446u: goto L_0041F358;
    case 447u: goto L_0041F360;
    case 448u: goto L_0041F36C;
    case 449u: goto L_0041F384;
    case 450u: goto L_0041F398;
    case 451u: goto L_0041F3B8;
    case 452u: goto L_0041F3C8;
    case 453u: goto L_0041F3F0;
    case 454u: goto L_0041F410;
    case 455u: goto L_0041F460;
    case 456u: goto L_0041F480;
    case 457u: goto L_0041F494;
    case 458u: goto L_0041F4B4;
    case 459u: goto L_0041F4C4;
    case 460u: goto L_0041F4CC;
    case 461u: goto L_0041F4D4;
    case 462u: goto L_0041F4DC;
    case 463u: goto L_0041F4E8;
    case 464u: goto L_0041F500;
    case 465u: goto L_0041F508;
    case 466u: goto L_0041F588;
    case 467u: goto L_0041F5B4;
    case 468u: goto L_0041F5E0;
    case 469u: goto L_0041F5FC;
    case 470u: goto L_0041F678;
    case 471u: goto L_0041F694;
    case 472u: goto L_0041F6B0;
    case 473u: goto L_0041F710;
    case 474u: goto L_0041F740;
    case 475u: goto L_0041F7A0;
    case 476u: goto L_0041F7C0;
    case 477u: goto L_0041F7D0;
    case 478u: goto L_0041F7F0;
    case 479u: goto L_0041F7F8;
    case 480u: goto L_0041F800;
    case 481u: goto L_0041F808;
    case 482u: goto L_0041F810;
    case 483u: goto L_0041F858;
    case 484u: goto L_0041F8CC;
    case 485u: goto L_0041F8D8;
    case 486u: goto L_0041F8E0;
    case 487u: goto L_0041F8E8;
    case 488u: goto L_0041F8F0;
    case 489u: goto L_0041F914;
    case 490u: goto L_0041F940;
    case 491u: goto L_0041F95C;
    case 492u: goto L_0041F978;
    case 493u: goto L_0041F980;
    case 494u: goto L_0041F99C;
    case 495u: goto L_0041F9D0;
    case 496u: goto L_0041F9E0;
    case 497u: goto L_0041F9F0;
    case 498u: goto L_0041FA0C;
    case 499u: goto L_0041FA2C;
    case 500u: goto L_0041FA34;
    case 501u: goto L_0041FA3C;
    case 502u: goto L_0041FA44;
    case 503u: goto L_0041FA50;
    case 504u: goto L_0041FA68;
    case 505u: goto L_0041FA88;
    case 506u: goto L_0041FA98;
    case 507u: goto L_0041FAB8;
    case 508u: goto L_0041FAC0;
    case 509u: goto L_0041FAD8;
    case 510u: goto L_0041FB50;
    case 511u: goto L_0041FB60;
    case 512u: goto L_0041FB70;
    case 513u: goto L_0041FB80;
    case 514u: goto L_0041FBA0;
    case 515u: goto L_0041FBC8;
    case 516u: goto L_0041FBEC;
    case 517u: goto L_0041FC00;
    case 518u: goto L_0041FC08;
    case 519u: goto L_0041FC18;
    case 520u: goto L_0041FC2C;
    case 521u: goto L_0041FC48;
    case 522u: goto L_0041FC80;
    case 523u: goto L_0041FCA4;
    case 524u: goto L_0041FCB0;
    case 525u: goto L_0041FCD8;
    case 526u: goto L_0041FCFC;
    case 527u: goto L_0041FD08;
    case 528u: goto L_0041FD10;
    case 529u: goto L_0041FD28;
    case 530u: goto L_0041FD3C;
    case 531u: goto L_0041FD70;
    case 532u: goto L_0041FDE0;
    case 533u: goto L_0041FE54;
    case 534u: goto L_0041FE5C;
    case 535u: goto L_0041FF08;
    case 536u: goto L_0041FF58;
    case 537u: goto L_0041FF6C;
    case 538u: goto L_0041FF8C;
    case 539u: goto L_0041FF9C;
    case 540u: goto L_0041FFA4;
    case 541u: goto L_0041FFA8;
    case 542u: goto L_0041FFB0;
    case 543u: goto L_0041FFC0;
    case 544u: goto L_0041FFC8;
    case 545u: goto L_0041FFD4;
    case 546u: goto L_0041FFF0;
    default: bad_entry(c, 0x0041C000u); return;
    }
L_0041C000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0041C008:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
L_0041C018:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041C058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C03Cu);  if (depth < kMaxDepth) unit_00C5(c, 456u, depth + 1u); else { c.pc = 0x004176D0u; return; } if (c.pc != 0x0041C03Cu) [[unlikely]] return; }
L_0041C03C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_0041C05C; }
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], 0u + 6u);
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0041C058:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 1;
L_0041C05C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0041C08C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C06Cu);  if (depth < kMaxDepth) unit_00C8(c, 173u, depth + 1u); else { c.pc = 0x00421368u; return; } if (c.pc != 0x0041C06Cu) [[unlikely]] return; }
L_0041C06C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0041C08C; }
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
L_0041C08C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041C098:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0041C124; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C0BCu);  if (depth < kMaxDepth) unit_00C6(c, 197u, depth + 1u); else { c.pc = 0x004193F8u; return; } if (c.pc != 0x0041C0BCu) [[unlikely]] return; }
L_0041C0BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0041C124; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0041C124; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 22096u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0041C000u < 16384u) { entry = entries_00C7[(t - 0x0041C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0041C0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C0F8u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C5(c, 456u, depth + 1u); else { c.pc = 0x004176D0u; return; } if (c.pc != 0x0041C0F8u) [[unlikely]] return; }
L_0041C0F8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0041C124; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C10Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 265u, depth + 1u); else { c.pc = 0x00415EB0u; return; } if (c.pc != 0x0041C10Cu) [[unlikely]] return; }
L_0041C10C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0041C124; } }
    c.budget -= 1;
L_0041C118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C120u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 265u, depth + 1u); else { c.pc = 0x00415EB0u; return; } if (c.pc != 0x0041C120u) [[unlikely]] return; }
L_0041C120:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0041C124:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041C130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C144u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0041C144u) [[unlikely]] return; }
L_0041C144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C14Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 16u, depth + 1u); else { c.pc = 0x0041C160u; return; } if (c.pc != 0x0041C14Cu) [[unlikely]] return; }
L_0041C14C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_0041C160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0041C190; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 22120u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_0041C190:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0041C1B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C1A8u);  if (depth < kMaxDepth) unit_00C6(c, 555u, depth + 1u); else { c.pc = 0x0041BD10u; return; } if (c.pc != 0x0041C1A8u) [[unlikely]] return; }
L_0041C1A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041C208; } }
L_0041C1B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0041C1C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C1C0u);  if (depth < kMaxDepth) unit_00C6(c, 496u, depth + 1u); else { c.pc = 0x0041B770u; return; } if (c.pc != 0x0041C1C0u) [[unlikely]] return; }
L_0041C1C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041C208; } }
L_0041C1C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0041C1E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C1D8u);  if (depth < kMaxDepth) unit_00C6(c, 543u, depth + 1u); else { c.pc = 0x0041BB88u; return; } if (c.pc != 0x0041C1D8u) [[unlikely]] return; }
L_0041C1D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041C208; } }
L_0041C1E0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_0041C1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C1F0u);  if (depth < kMaxDepth) unit_00C6(c, 562u, depth + 1u); else { c.pc = 0x0041BDF8u; return; } if (c.pc != 0x0041C1F0u) [[unlikely]] return; }
L_0041C1F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041C208; } }
L_0041C1F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0041C208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C208u);  if (depth < kMaxDepth) unit_00C7(c, 1u, depth + 1u); else { c.pc = 0x0041C000u; return; } if (c.pc != 0x0041C208u) [[unlikely]] return; }
L_0041C208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C210u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 6u, depth + 1u); else { c.pc = 0x0041C098u; return; } if (c.pc != 0x0041C210u) [[unlikely]] return; }
L_0041C210:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041C018u | kUnwind; return; } goto L_0041C018; }
L_0041C230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] - 11092u);
    set32(c.r[4], ld32((c.r[2].w[0] - 11088u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 144u, depth); }
L_0041C258:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 11088u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 155u, depth); }
L_0041C278:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C29Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041C29Cu) [[unlikely]] return; }
L_0041C29C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C2ACu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 29u, depth + 1u); else { c.pc = 0x0041C2D0u; return; } if (c.pc != 0x0041C2ACu) [[unlikely]] return; }
L_0041C2AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C2B4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 370u, depth + 1u); else { c.pc = 0x00427940u; return; } if (c.pc != 0x0041C2B4u) [[unlikely]] return; }
L_0041C2B4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041C2D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 11088u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 164u, depth); }
L_0041C300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C314u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041C314u) [[unlikely]] return; }
L_0041C314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C31Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 33u, depth + 1u); else { c.pc = 0x0041C330u; return; } if (c.pc != 0x0041C31Cu) [[unlikely]] return; }
L_0041C31C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041C330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 11088u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 172u, depth); }
L_0041C350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C364u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041C364u) [[unlikely]] return; }
L_0041C364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C36Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 38u, depth + 1u); else { c.pc = 0x0041C388u; return; } if (c.pc != 0x0041C36Cu) [[unlikely]] return; }
L_0041C36C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C374u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 370u, depth + 1u); else { c.pc = 0x00427940u; return; } if (c.pc != 0x0041C374u) [[unlikely]] return; }
L_0041C374:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041C388:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 11088u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 176u, depth); }
L_0041C3A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C3C4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041C3C4u) [[unlikely]] return; }
L_0041C3C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C3D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 42u, depth + 1u); else { c.pc = 0x0041C3E8u; return; } if (c.pc != 0x0041C3D0u) [[unlikely]] return; }
L_0041C3D0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041C3E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 395u, depth); }
L_0041C400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C424u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041C424u) [[unlikely]] return; }
L_0041C424:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C434u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 46u, depth + 1u); else { c.pc = 0x0041C450u; return; } if (c.pc != 0x0041C434u) [[unlikely]] return; }
L_0041C434:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041C450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 4u, depth); }
L_0041C488:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C49Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041C49Cu) [[unlikely]] return; }
L_0041C49C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C4A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 50u, depth + 1u); else { c.pc = 0x0041C4B8u; return; } if (c.pc != 0x0041C4A4u) [[unlikely]] return; }
L_0041C4A4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041C4B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 5u, depth); }
L_0041C4D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C4ECu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041C4ECu) [[unlikely]] return; }
L_0041C4EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C4F8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 54u, depth + 1u); else { c.pc = 0x0041C510u; return; } if (c.pc != 0x0041C4F8u) [[unlikely]] return; }
L_0041C4F8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041C510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 13u, depth); }
L_0041C530:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C544u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041C544u) [[unlikely]] return; }
L_0041C544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C54Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 59u, depth + 1u); else { c.pc = 0x0041C568u; return; } if (c.pc != 0x0041C54Cu) [[unlikely]] return; }
L_0041C54C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C554u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 370u, depth + 1u); else { c.pc = 0x00427940u; return; } if (c.pc != 0x0041C554u) [[unlikely]] return; }
L_0041C554:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041C568:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 20u, depth); }
L_0041C5A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C5BCu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041C5BCu) [[unlikely]] return; }
L_0041C5BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C5C8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 63u, depth + 1u); else { c.pc = 0x0041C5E0u; return; } if (c.pc != 0x0041C5C8u) [[unlikely]] return; }
L_0041C5C8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041C5E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 25u, depth); }
L_0041C600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C624u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041C624u) [[unlikely]] return; }
L_0041C624:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C634u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 67u, depth + 1u); else { c.pc = 0x0041C650u; return; } if (c.pc != 0x0041C634u) [[unlikely]] return; }
L_0041C634:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041C650:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 31u, depth); }
L_0041C670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C68Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041C68Cu) [[unlikely]] return; }
L_0041C68C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C698u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 71u, depth + 1u); else { c.pc = 0x0041C6B0u; return; } if (c.pc != 0x0041C698u) [[unlikely]] return; }
L_0041C698:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041C6B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 34u, depth); }
L_0041C6C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C6E4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041C6E4u) [[unlikely]] return; }
L_0041C6E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C6F0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 75u, depth + 1u); else { c.pc = 0x0041C708u; return; } if (c.pc != 0x0041C6F0u) [[unlikely]] return; }
L_0041C6F0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041C708:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 37u, depth); }
L_0041C720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C73Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041C73Cu) [[unlikely]] return; }
L_0041C73C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C748u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 79u, depth + 1u); else { c.pc = 0x0041C760u; return; } if (c.pc != 0x0041C748u) [[unlikely]] return; }
L_0041C748:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041C760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 38u, depth); }
L_0041C778:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C794u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041C794u) [[unlikely]] return; }
L_0041C794:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C7A0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 83u, depth + 1u); else { c.pc = 0x0041C7B8u; return; } if (c.pc != 0x0041C7A0u) [[unlikely]] return; }
L_0041C7A0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041C7B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 39u, depth); }
L_0041C7E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C804u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041C804u) [[unlikely]] return; }
L_0041C804:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C810u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 87u, depth + 1u); else { c.pc = 0x0041C828u; return; } if (c.pc != 0x0041C810u) [[unlikely]] return; }
L_0041C810:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041C828:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 40u, depth); }
L_0041C848:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C864u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041C864u) [[unlikely]] return; }
L_0041C864:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C870u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 91u, depth + 1u); else { c.pc = 0x0041C888u; return; } if (c.pc != 0x0041C870u) [[unlikely]] return; }
L_0041C870:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041C888:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 41u, depth); }
L_0041C8B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C8CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041C8CCu) [[unlikely]] return; }
L_0041C8CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C8D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 95u, depth + 1u); else { c.pc = 0x0041C8E8u; return; } if (c.pc != 0x0041C8D4u) [[unlikely]] return; }
L_0041C8D4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041C8E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 42u, depth); }
L_0041C900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C914u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041C914u) [[unlikely]] return; }
L_0041C914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C91Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 99u, depth + 1u); else { c.pc = 0x0041C930u; return; } if (c.pc != 0x0041C91Cu) [[unlikely]] return; }
L_0041C91C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041C930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 48u, depth); }
L_0041C960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C97Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041C97Cu) [[unlikely]] return; }
L_0041C97C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C988u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 104u, depth + 1u); else { c.pc = 0x0041C9A8u; return; } if (c.pc != 0x0041C988u) [[unlikely]] return; }
L_0041C988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C990u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 370u, depth + 1u); else { c.pc = 0x00427940u; return; } if (c.pc != 0x0041C990u) [[unlikely]] return; }
L_0041C990:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041C9A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 54u, depth); }
L_0041CA00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CA10u);  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041CA10u) [[unlikely]] return; }
L_0041CA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CA18u);  if (depth < kMaxDepth) unit_00C7(c, 108u, depth + 1u); else { c.pc = 0x0041CA28u; return; } if (c.pc != 0x0041CA18u) [[unlikely]] return; }
L_0041CA18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041CA28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] - 11088u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CA40u);  if (depth < kMaxDepth) unit_00CA(c, 193u, depth + 1u); else { c.pc = 0x00429C30u; return; } if (c.pc != 0x0041CA40u) [[unlikely]] return; }
L_0041CA40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 211u, depth); }
L_0041CA50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CA60u);  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041CA60u) [[unlikely]] return; }
L_0041CA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CA68u);  if (depth < kMaxDepth) unit_00C7(c, 113u, depth + 1u); else { c.pc = 0x0041CA78u; return; } if (c.pc != 0x0041CA68u) [[unlikely]] return; }
L_0041CA68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041CA78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] - 11088u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CA90u);  if (depth < kMaxDepth) unit_00CA(c, 193u, depth + 1u); else { c.pc = 0x00429C30u; return; } if (c.pc != 0x0041CA90u) [[unlikely]] return; }
L_0041CA90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 212u, depth); }
L_0041CAA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CAB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041CAB4u) [[unlikely]] return; }
L_0041CAB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CABCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 118u, depth + 1u); else { c.pc = 0x0041CAD0u; return; } if (c.pc != 0x0041CABCu) [[unlikely]] return; }
L_0041CABC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041CAD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 11088u)));
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CAF0u);  if (depth < kMaxDepth) unit_00CA(c, 193u, depth + 1u); else { c.pc = 0x00429C30u; return; } if (c.pc != 0x0041CAF0u) [[unlikely]] return; }
L_0041CAF0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 216u, depth); }
L_0041CB08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CB1Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041CB1Cu) [[unlikely]] return; }
L_0041CB1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CB24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 123u, depth + 1u); else { c.pc = 0x0041CB38u; return; } if (c.pc != 0x0041CB24u) [[unlikely]] return; }
L_0041CB24:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041CB38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 11088u)));
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CB58u);  if (depth < kMaxDepth) unit_00CA(c, 193u, depth + 1u); else { c.pc = 0x00429C30u; return; } if (c.pc != 0x0041CB58u) [[unlikely]] return; }
L_0041CB58:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 217u, depth); }
L_0041CB70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CB84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 369u, depth + 1u); else { c.pc = 0x00427938u; return; } if (c.pc != 0x0041CB84u) [[unlikely]] return; }
L_0041CB84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CB8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 128u, depth + 1u); else { c.pc = 0x0041CBA0u; return; } if (c.pc != 0x0041CB8Cu) [[unlikely]] return; }
L_0041CB8C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 370u, depth); }
L_0041CBA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 11088u)));
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CBC0u);  if (depth < kMaxDepth) unit_00CA(c, 193u, depth + 1u); else { c.pc = 0x00429C30u; return; } if (c.pc != 0x0041CBC0u) [[unlikely]] return; }
L_0041CBC0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 218u, depth); }
L_0041CBF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 11080u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0041CC10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CC10u); set32(c.r[4], ld32((c.r[2].w[0] - 11076u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041CC10u) [[unlikely]] return; }
L_0041CC10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041CC20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] - 11076u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CBF0u | kUnwind; return; } goto L_0041CBF0; }
L_0041CC58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11084u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0041CC88; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 22288u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CC20u | kUnwind; return; } goto L_0041CC20; }
L_0041CC88:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0041CCA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 22328u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CC20u | kUnwind; return; } goto L_0041CC20; }
L_0041CCA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CCA8u);  if (depth < kMaxDepth) unit_00C7(c, 136u, depth + 1u); else { c.pc = 0x0041CCE8u; return; } if (c.pc != 0x0041CCA8u) [[unlikely]] return; }
L_0041CCA8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0041CCC8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 22368u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CC20u | kUnwind; return; } goto L_0041CC20; }
L_0041CCC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0041CCDC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CCDCu); set32(c.r[4], c.r[4].w[0] - 13328u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041CCDCu) [[unlikely]] return; }
L_0041CCDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041CCE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CD08u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 147u, depth + 1u); else { c.pc = 0x0041CE58u; return; } if (c.pc != 0x0041CD08u) [[unlikely]] return; }
L_0041CD08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[16].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CD10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041CD10u) [[unlikely]] return; }
L_0041CD10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CD20u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 143u, depth + 1u); else { c.pc = 0x0041CDC0u; return; } if (c.pc != 0x0041CD20u) [[unlikely]] return; }
L_0041CD20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0041CDA4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], c.r[4].w[0] - 16416u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_0041CD64; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0041CD40:
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { goto L_0041CD64; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CD40u | kUnwind; return; } goto L_0041CD40; }
L_0041CD64:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041CDA4; } }
    set32(c.r[2], c.r[4].w[0] - 16416u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CD90u); st32((c.r[2].w[0]), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0041CD90u) [[unlikely]] return; }
L_0041CD90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CDA0u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0041CDA0u) [[unlikely]] return; }
L_0041CDA0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0041CDA4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041CDC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CDECu); c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0041CDECu) [[unlikely]] return; }
L_0041CDEC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[18], c.r[2].w[0] - 16412u);
    set32(c.r[21], c.r[18].w[0] - 4u);
    set32(c.r[16], c.r[17].w[0] << 4);
    c.budget -= 5;
L_0041CE00:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CE14u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 84u, depth + 1u); else { c.pc = 0x004751D8u; return; } if (c.pc != 0x0041CE14u) [[unlikely]] return; }
L_0041CE14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;  if (t) { goto L_0041CE28; } }
    set32(c.r[3], c.r[16].w[0] + c.r[21].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_0041CE34; } }
L_0041CE28:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CE00u | kUnwind; return; } goto L_0041CE00; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0041CE34:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041CE58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CE6Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0041CE6Cu) [[unlikely]] return; }
L_0041CE6C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0041CEA8; } }
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 2;
L_0041CE80:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[2].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] - 97u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;  if (t) { goto L_0041CEA0; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0041CEA0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CE80u | kUnwind; return; } goto L_0041CE80; } }
L_0041CEA8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041CEB8:
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 2;
L_0041CEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0041CEF8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 22448u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CC20u | kUnwind; return; } goto L_0041CC20; }
L_0041CEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CF00u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0041CF00u) [[unlikely]] return; }
L_0041CF00:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0041CF28; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st8((c.r[2].w[0] - 15904u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041CF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CF30u);  if (depth < kMaxDepth) unit_00C7(c, 147u, depth + 1u); else { c.pc = 0x0041CE58u; return; } if (c.pc != 0x0041CF30u) [[unlikely]] return; }
L_0041CF30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CF3Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 156u, depth + 1u); else { c.pc = 0x0041CF88u; return; } if (c.pc != 0x0041CF3Cu) [[unlikely]] return; }
L_0041CF3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 15904u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[17].w[0] + 1u);  if (t) { goto L_0041CF68; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00DD(c, 40u, depth); }
L_0041CF68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 22488u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CC20u | kUnwind; return; } goto L_0041CC20; }
L_0041CF88:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] - 16412u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
L_0041CFB8:
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CFC8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 84u, depth + 1u); else { c.pc = 0x004751D8u; return; } if (c.pc != 0x0041CFC8u) [[unlikely]] return; }
L_0041CFC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0041CFD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0041CFE8; } }
L_0041CFD8:
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CFB8u | kUnwind; return; } goto L_0041CFB8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0041CFE8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041D008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 15904u);  c.pc = t; return; }
L_0041D018:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0041D058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D04Cu);  if (depth < kMaxDepth) unit_00C7(c, 184u, depth + 1u); else { c.pc = 0x0041D3A8u; return; } if (c.pc != 0x0041D04Cu) [[unlikely]] return; }
L_0041D04C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041D0A4; } }
L_0041D058:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D064u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 222u, depth + 1u); else { c.pc = 0x0041D848u; return; } if (c.pc != 0x0041D064u) [[unlikely]] return; }
L_0041D064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D06Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 143u, depth + 1u); else { c.pc = 0x0041CDC0u; return; } if (c.pc != 0x0041D06Cu) [[unlikely]] return; }
L_0041D06C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0041D0A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D080u);  if (depth < kMaxDepth) unit_00C7(c, 184u, depth + 1u); else { c.pc = 0x0041D3A8u; return; } if (c.pc != 0x0041D080u) [[unlikely]] return; }
L_0041D080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D088u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 143u, depth + 1u); else { c.pc = 0x0041CDC0u; return; } if (c.pc != 0x0041D088u) [[unlikely]] return; }
L_0041D088:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0041D0A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D0A0u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x0041D0A0u) [[unlikely]] return; }
L_0041D0A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0041D0A4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041D0C0:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st64((c.r[29].w[0] + 616u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 632u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 640u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 624u), c.r[18].d[0]);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 648u), c.r[31].d[0]);  if (t) { goto L_0041D0F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 22528u);  if (t) { goto L_0041D1BC; } }
L_0041D0F8:
    set32(c.r[18], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D10Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 179u, depth + 1u); else { c.pc = 0x0041D260u; return; } if (c.pc != 0x0041D10Cu) [[unlikely]] return; }
L_0041D10C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0041D120; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 22528u);  if (t) { goto L_0041D1BC; } }
L_0041D120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D128u);  if (depth < kMaxDepth) unit_00C7(c, 176u, depth + 1u); else { c.pc = 0x0041D1E8u; return; } if (c.pc != 0x0041D128u) [[unlikely]] return; }
L_0041D128:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0041D140; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 22560u);  if (t) { goto L_0041D1BC; } }
L_0041D140:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D14Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 160u, depth + 1u); else { c.pc = 0x0041D018u; return; } if (c.pc != 0x0041D14Cu) [[unlikely]] return; }
L_0041D14C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0041D168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D15Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 178u, depth + 1u); else { c.pc = 0x0041D250u; return; } if (c.pc != 0x0041D15Cu) [[unlikely]] return; }
L_0041D15C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 22632u);  if (t) { goto L_0041D1BC; } }
L_0041D168:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0041D188; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D180u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D180u) [[unlikely]] return; }
L_0041D180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0041D1A0; } }
L_0041D188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D190u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 178u, depth + 1u); else { c.pc = 0x0041D250u; return; } if (c.pc != 0x0041D190u) [[unlikely]] return; }
L_0041D190:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 22664u);  if (t) { goto L_0041D1BC; } }
    c.budget -= 1;
L_0041D1A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0041D1C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D1B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 178u, depth + 1u); else { c.pc = 0x0041D250u; return; } if (c.pc != 0x0041D1B4u) [[unlikely]] return; }
L_0041D1B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 22688u);
    c.budget -= 2;
L_0041D1BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D1C4u);  if (depth < kMaxDepth) unit_00C7(c, 132u, depth + 1u); else { c.pc = 0x0041CC20u; return; } if (c.pc != 0x0041D1C4u) [[unlikely]] return; }
L_0041D1C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0041D1C8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 616u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 632u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 640u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 648u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_0041D1E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[5].w[0] - 16736u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0041D22C; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_0041D208:
    c.r[2].d[0] = c.r[4].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { goto L_0041D22C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041D208u | kUnwind; return; } goto L_0041D208; }
L_0041D22C:
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041D244; } }
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] - 16736u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0041D244:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0041D250:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_0041D260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0041D390; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[2], 0u + 58u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0041D2D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0041D2E8; } }
    set32(c.r[7], 0u + 58u);
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
L_0041D2A0:
    set32(c.r[3], c.r[16].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 297ll ? 1ull : 0ull;
    set32(c.r[5], c.r[6].w[0] + c.r[8].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0041D2DC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_0041D2E0; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041D2A0u | kUnwind; return; } goto L_0041D2A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041D2E0; } }
    c.budget -= 1;
L_0041D2D8:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0041D2DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 1;
L_0041D2E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + c.r[8].w[0]);  if (t) { goto L_0041D310; } }
L_0041D2E8:
    set32(c.r[2], c.r[16].w[0] + c.r[8].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D2F8u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0041D2F8u) [[unlikely]] return; }
L_0041D2F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D308u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0041D308u) [[unlikely]] return; }
L_0041D308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0041D390; } }
L_0041D310:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[2].d[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0041D328; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0041D328:
    c.r[2].d[0] = c.r[8].sd[0] < 297ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0041D36C; } }
    set32(c.r[3], c.r[6].w[0] + c.r[8].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0041D36C; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 1;
L_0041D348:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[4].d[0] = c.r[5].sd[0] < 297ll ? 1ull : 0ull;
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_0041D36C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[3].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041D348u | kUnwind; return; } goto L_0041D348; }
L_0041D36C:
    set32(c.r[2], c.r[5].w[0] - c.r[8].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CE58u | kUnwind; return; } goto L_0041CE58; }
L_0041D390:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041D3A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[16], c.r[16].w[0] - 15904u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D3CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0041D3CCu) [[unlikely]] return; }
L_0041D3CC:
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0041D3F8; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041D3F8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00DD(c, 40u, depth); }
L_0041D410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0041D440; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 22712u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CC20u | kUnwind; return; } goto L_0041CC20; }
L_0041D440:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_0041D470; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D458u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D458u) [[unlikely]] return; }
L_0041D458:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041D250u | kUnwind; return; } goto L_0041D250; }
L_0041D470:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 22744u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CC20u | kUnwind; return; } goto L_0041CC20; }
L_0041D488:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0041D4B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D4A4u); set32(c.r[4], c.r[4].w[0] + 22768u);  if (depth < kMaxDepth) unit_00C7(c, 132u, depth + 1u); else { c.pc = 0x0041CC20u; return; } if (c.pc != 0x0041D4A4u) [[unlikely]] return; }
L_0041D4A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041D4E0; } }
    c.budget -= 1;
L_0041D4B0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_0041D4D0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D4C8u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D4C8u) [[unlikely]] return; }
L_0041D4C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041D4DC; } }
L_0041D4D0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D4DCu); set32(c.r[4], c.r[4].w[0] + 22800u);  if (depth < kMaxDepth) unit_00C7(c, 132u, depth + 1u); else { c.pc = 0x0041CC20u; return; } if (c.pc != 0x0041D4DCu) [[unlikely]] return; }
L_0041D4DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0041D4E0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041D4F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0041D518; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D50Cu); set32(c.r[4], c.r[4].w[0] + 22824u);  if (depth < kMaxDepth) unit_00C7(c, 132u, depth + 1u); else { c.pc = 0x0041CC20u; return; } if (c.pc != 0x0041D50Cu) [[unlikely]] return; }
L_0041D50C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041D548; } }
    c.budget -= 1;
L_0041D518:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_0041D538; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D530u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D530u) [[unlikely]] return; }
L_0041D530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041D544; } }
L_0041D538:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D544u); set32(c.r[4], c.r[4].w[0] + 22856u);  if (depth < kMaxDepth) unit_00C7(c, 132u, depth + 1u); else { c.pc = 0x0041CC20u; return; } if (c.pc != 0x0041D544u) [[unlikely]] return; }
L_0041D544:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0041D548:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041D558:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0041D580; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D574u); set32(c.r[4], c.r[4].w[0] + 22880u);  if (depth < kMaxDepth) unit_00C7(c, 132u, depth + 1u); else { c.pc = 0x0041CC20u; return; } if (c.pc != 0x0041D574u) [[unlikely]] return; }
L_0041D574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041D5B0; } }
    c.budget -= 1;
L_0041D580:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_0041D5A0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D598u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D598u) [[unlikely]] return; }
L_0041D598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041D5AC; } }
L_0041D5A0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D5ACu); set32(c.r[4], c.r[4].w[0] + 22912u);  if (depth < kMaxDepth) unit_00C7(c, 132u, depth + 1u); else { c.pc = 0x0041CC20u; return; } if (c.pc != 0x0041D5ACu) [[unlikely]] return; }
L_0041D5AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0041D5B0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041D5C0:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_0041D5C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 16416u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 31u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 8;
L_0041D5E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { goto L_0041D604; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0041D608; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D604u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D604u) [[unlikely]] return; }
L_0041D604:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0041D608:
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041D5E8u | kUnwind; return; } goto L_0041D5E8; }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041D628:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0041D650; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D648u); set32(c.r[4], c.r[4].w[0] + 23056u);  if (depth < kMaxDepth) unit_00C7(c, 132u, depth + 1u); else { c.pc = 0x0041CC20u; return; } if (c.pc != 0x0041D648u) [[unlikely]] return; }
L_0041D648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0041D67C; } }
L_0041D650:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_0041D670; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D668u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D668u) [[unlikely]] return; }
L_0041D668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041D678; } }
L_0041D670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D678u); set32(c.r[4], c.r[4].w[0] + 23088u);  if (depth < kMaxDepth) unit_00C7(c, 132u, depth + 1u); else { c.pc = 0x0041CC20u; return; } if (c.pc != 0x0041D678u) [[unlikely]] return; }
L_0041D678:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0041D67C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041D690:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 616u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 624u), c.r[31].d[0]);  if (t) { goto L_0041D6B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 23120u);  if (t) { goto L_0041D72C; } }
    c.budget -= 1;
L_0041D6B8:
    set32(c.r[17], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D6CCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 179u, depth + 1u); else { c.pc = 0x0041D260u; return; } if (c.pc != 0x0041D6CCu) [[unlikely]] return; }
L_0041D6CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0041D6E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 23120u);  if (t) { goto L_0041D72C; } }
    c.budget -= 1;
L_0041D6E8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D6F4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 160u, depth + 1u); else { c.pc = 0x0041D018u; return; } if (c.pc != 0x0041D6F4u) [[unlikely]] return; }
L_0041D6F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_0041D710; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D70Cu); set32(c.r[4], c.r[4].w[0] + 23200u);  if (depth < kMaxDepth) unit_00C7(c, 132u, depth + 1u); else { c.pc = 0x0041CC20u; return; } if (c.pc != 0x0041D70Cu) [[unlikely]] return; }
L_0041D70C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0041D710:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_0041D728; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D720u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D720u) [[unlikely]] return; }
L_0041D720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));  if (t) { goto L_0041D73C; } }
L_0041D728:
    set32(c.r[4], c.r[4].w[0] + 23240u);
    c.budget -= 1;
L_0041D72C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D734u);  if (depth < kMaxDepth) unit_00C7(c, 132u, depth + 1u); else { c.pc = 0x0041CC20u; return; } if (c.pc != 0x0041D734u) [[unlikely]] return; }
L_0041D734:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.budget -= 2;
L_0041D73C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 616u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 624u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_0041D750:
    set32(c.r[29], c.r[29].w[0] + 640u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 640u);
    set32(c.r[29], c.r[29].w[0] + 640u);
    set32(c.r[29], c.r[29].w[0] + 656u);
    set32(c.r[29], c.r[29].w[0] + 128u);
    set32(c.r[29], c.r[29].w[0] + 640u);
    set32(c.r[29], c.r[29].w[0] + 640u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 22;
L_0041D7A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_0041D7C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[2].w[0] - 11080u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 11076u), 0u);  c.pc = t; return; }
L_0041D7C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[2].w[0] - 11080u), c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 11076u), c.r[5].w[0]);  c.pc = t; return; }
L_0041D7D0:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 64u);
    set32(c.r[29], c.r[29].w[0] + 64u);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 10;
L_0041D7F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D808u);  if (depth < kMaxDepth) unit_00C7(c, 143u, depth + 1u); else { c.pc = 0x0041CDC0u; return; } if (c.pc != 0x0041D808u) [[unlikely]] return; }
L_0041D808:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0041D840; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0041D838; } }
    set32(c.r[5], 0u + 100u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D830u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D830u) [[unlikely]] return; }
L_0041D830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0041D840; } }
L_0041D838:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0041D840:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041D848:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_0041D874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D870u);  if (depth < kMaxDepth) unit_00C7(c, 159u, depth + 1u); else { c.pc = 0x0041D008u; return; } if (c.pc != 0x0041D870u) [[unlikely]] return; }
L_0041D870:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0041D874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D87Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 219u, depth + 1u); else { c.pc = 0x0041D7F8u; return; } if (c.pc != 0x0041D87Cu) [[unlikely]] return; }
L_0041D87C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[18], c.r[3].w[0] - 15888u);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0041D8C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D89Cu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x0041D89Cu) [[unlikely]] return; }
L_0041D89C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[5], c.r[5].w[0] + 25440u);
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00DD(c, 118u, depth); }
L_0041D8C8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041D8E0:
    set32(c.r[29], c.r[29].w[0] + 656u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_0041D8F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11008u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] - 11064u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 56u);
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DD(c, 50u, depth); }
L_0041D920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D938u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 294u, depth + 1u); else { c.pc = 0x00426F10u; return; } if (c.pc != 0x0041D938u) [[unlikely]] return; }
L_0041D938:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[16], c.r[2].w[0] - 11064u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041D984; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D954u);  if (depth < kMaxDepth) unit_00C7(c, 227u, depth + 1u); else { c.pc = 0x0041D8F0u; return; } if (c.pc != 0x0041D954u) [[unlikely]] return; }
L_0041D954:
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] - 10968u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 12;
L_0041D984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D98Cu);  if (depth < kMaxDepth) unit_00C9(c, 297u, depth + 1u); else { c.pc = 0x00426F58u; return; } if (c.pc != 0x0041D98Cu) [[unlikely]] return; }
L_0041D98C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041D9A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D9C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 294u, depth + 1u); else { c.pc = 0x00426F10u; return; } if (c.pc != 0x0041D9C4u) [[unlikely]] return; }
L_0041D9C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[17].w[0] - 11064u);
    set32(c.r[4], c.r[4].w[0] + 25568u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041D9F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D9E4u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x0041D9E4u) [[unlikely]] return; }
L_0041D9E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0041DA38; } }
    c.budget -= 1;
L_0041D9F0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0041DA14; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_0041DA14; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0041DA14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DA14u); set32(c.r[4], c.r[4].w[0] + 25632u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x0041DA14u) [[unlikely]] return; }
L_0041DA14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DA1Cu);  if (depth < kMaxDepth) unit_00C7(c, 227u, depth + 1u); else { c.pc = 0x0041D8F0u; return; } if (c.pc != 0x0041DA1Cu) [[unlikely]] return; }
L_0041DA1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[17].w[0] - 11064u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 10964u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
L_0041DA38:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C9(c, 297u, depth); }
L_0041DA48:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 4608u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DA8Cu); c.r[22].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041DA8Cu) [[unlikely]] return; }
L_0041DA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DA94u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A1(c, 219u, depth + 1u); else { c.pc = 0x003861F0u; return; } if (c.pc != 0x0041DA94u) [[unlikely]] return; }
L_0041DA94:
    set32(c.r[4], 0u + 4609u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DAA0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041DAA0u) [[unlikely]] return; }
L_0041DAA0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041DB0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DAB4u);  if (depth < kMaxDepth) unit_00C9(c, 294u, depth + 1u); else { c.pc = 0x00426F10u; return; } if (c.pc != 0x0041DAB4u) [[unlikely]] return; }
L_0041DAB4:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0041DAD4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_0041DAD4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0041DB00; } }
L_0041DAD4:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[20], 0u + 1u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 8u), c.r[19].w[0]);
    lwl(c.r[2], (c.r[18].w[0] + 3u));
    lwr(c.r[2], (c.r[18].w[0]));
    swl(c.r[2], (c.r[17].w[0] + 23u));
    swr(c.r[2], (c.r[17].w[0] + 20u));
    st32((c.r[17].w[0] + 12u), c.r[21].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[22].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 11;
L_0041DB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DB08u);  if (depth < kMaxDepth) unit_00C9(c, 297u, depth + 1u); else { c.pc = 0x00426F58u; return; } if (c.pc != 0x0041DB08u) [[unlikely]] return; }
L_0041DB08:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0041DB0C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041DB38:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DB74u); c.r[21].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 294u, depth + 1u); else { c.pc = 0x00426F10u; return; } if (c.pc != 0x0041DB74u) [[unlikely]] return; }
L_0041DB74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0041DB90; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_0041DB90; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0041DBB8; } }
L_0041DB90:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 48u), c.r[18].w[0]);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[20], 0u + 1u);
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st64((c.r[16].w[0] + 32u), c.r[19].d[0]);
    st64((c.r[16].w[0] + 40u), c.r[21].d[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 10;
L_0041DBB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DBC0u);  if (depth < kMaxDepth) unit_00C9(c, 297u, depth + 1u); else { c.pc = 0x00426F58u; return; } if (c.pc != 0x0041DBC0u) [[unlikely]] return; }
L_0041DBC0:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041DBE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));  c.pc = t; return; }
L_0041DBF0:
    set32(c.r[2], 0u + 16383u);
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 2;
L_0041DBF8:
    c.budget -= 7;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[2].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041DBF8u | kUnwind; return; } goto L_0041DBF8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0041DC20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DC30u); set32(c.r[4], 0u + 4864u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041DC30u) [[unlikely]] return; }
L_0041DC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DC38u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 219u, depth + 1u); else { c.pc = 0x003861F0u; return; } if (c.pc != 0x0041DC38u) [[unlikely]] return; }
L_0041DC38:
    set32(c.r[4], 0u + 4865u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0041E510; }
L_0041DC48:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull | 36864ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    set32(c.r[20], 0u + 1u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    set32(c.r[22], 0u + 9u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 18;
L_0041DC90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0041DCF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DCA0u); set32(c.r[4], 0u + 4352u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041DCA0u) [[unlikely]] return; }
L_0041DCA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DCB0u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 342u, depth + 1u); else { c.pc = 0x0041E680u; return; } if (c.pc != 0x0041DCB0u) [[unlikely]] return; }
L_0041DCB0:
    set32(c.r[4], 0u + 4353u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DCBCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041DCBCu) [[unlikely]] return; }
L_0041DCBC:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0041DCD0; } }
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[22].w[0]));  if (t) { goto L_0041DCEC; } }
L_0041DCD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DCD8u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00C7(c, 247u, depth + 1u); else { c.pc = 0x0041DBF0u; return; } if (c.pc != 0x0041DCD8u) [[unlikely]] return; }
L_0041DCD8:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041DC90u | kUnwind; return; } goto L_0041DC90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DCECu); set32(c.r[4], c.r[21].w[0] + 25664u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x0041DCECu) [[unlikely]] return; }
L_0041DCEC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041DCF0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0041DD18:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_0041DD48; } }
L_0041DD40:
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 2;
L_0041DD48:
    c.r[2].d[0] = c.r[16].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));  goto L_0041DD94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DD5Cu);  if (depth < kMaxDepth) unit_00C9(c, 292u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x0041DD5Cu) [[unlikely]] return; }
L_0041DD5C:
    set32(c.r[4], c.r[19].w[0] - 11004u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0041DD88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DD78u);  if (depth < kMaxDepth) unit_00C9(c, 293u, depth + 1u); else { c.pc = 0x00426EF8u; return; } if (c.pc != 0x0041DD78u) [[unlikely]] return; }
L_0041DD78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DD80u);  if (depth < kMaxDepth) unit_00C7(c, 247u, depth + 1u); else { c.pc = 0x0041DBF0u; return; } if (c.pc != 0x0041DD80u) [[unlikely]] return; }
L_0041DD80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041DD40u | kUnwind; return; } goto L_0041DD40; } }
L_0041DD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DD90u); st32((c.r[4].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C9(c, 293u, depth + 1u); else { c.pc = 0x00426EF8u; return; } if (c.pc != 0x0041DD90u) [[unlikely]] return; }
L_0041DD90:
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 1;
L_0041DD94:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { st32((c.r[19].w[0] - 11004u), 0u);  goto L_0041DE08; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] - 11064u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));  if (t) { goto L_0041DDC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DDC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 249u, depth + 1u); else { c.pc = 0x0041DC20u; return; } if (c.pc != 0x0041DDC0u) [[unlikely]] return; }
L_0041DDC0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 1;
L_0041DDC4:
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[18].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));  goto L_0041DDE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DDDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 252u, depth + 1u); else { c.pc = 0x0041DC48u; return; } if (c.pc != 0x0041DDDCu) [[unlikely]] return; }
L_0041DDDC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 1;
L_0041DDE0:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0041DE04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 10972u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_0041DE04:
    st32((c.r[19].w[0] - 11004u), 0u);
    c.budget -= 1;
L_0041DE08:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041DE28:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_0041DE30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DE44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 294u, depth + 1u); else { c.pc = 0x00426F10u; return; } if (c.pc != 0x0041DE44u) [[unlikely]] return; }
L_0041DE44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 25696u);  if (t) { goto L_0041DE68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DE5Cu);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x0041DE5Cu) [[unlikely]] return; }
L_0041DE5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0041DE8C; } }
    c.budget -= 1;
L_0041DE68:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  goto L_0041DE88; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DE80u); set32(c.r[4], c.r[4].w[0] + 25728u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x0041DE80u) [[unlikely]] return; }
L_0041DE80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0041DE8C; } }
L_0041DE88:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0041DE8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 297u, depth); }
L_0041DE98:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[3].w[0] - 10988u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0041DF8C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0041DF90; }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[18].w[0] - 10980u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 10992u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0041DF30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DF00u);  if (depth < kMaxDepth) unit_00C9(c, 296u, depth + 1u); else { c.pc = 0x00426F40u; return; } if (c.pc != 0x0041DF00u) [[unlikely]] return; }
L_0041DF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DF08u); set32(c.r[4], 0u + 5120u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041DF08u) [[unlikely]] return; }
L_0041DF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DF10u);  if (depth < kMaxDepth) unit_00D9(c, 179u, depth + 1u); else { c.pc = 0x00467B28u; return; } if (c.pc != 0x0041DF10u) [[unlikely]] return; }
L_0041DF10:
    set32(c.r[4], 0u + 5121u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DF1Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041DF1Cu) [[unlikely]] return; }
L_0041DF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DF24u);  if (depth < kMaxDepth) unit_00C9(c, 299u, depth + 1u); else { c.pc = 0x00426F88u; return; } if (c.pc != 0x0041DF24u) [[unlikely]] return; }
L_0041DF24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 1u);  if (t) { goto L_0041DF50; } }
    c.budget -= 1;
L_0041DF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DF38u); set32(c.r[4], 0u + 5376u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041DF38u) [[unlikely]] return; }
L_0041DF38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DF40u);  if (depth < kMaxDepth) unit_00D9(c, 179u, depth + 1u); else { c.pc = 0x00467B28u; return; } if (c.pc != 0x0041DF40u) [[unlikely]] return; }
L_0041DF40:
    set32(c.r[4], 0u + 5377u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DF4Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041DF4Cu) [[unlikely]] return; }
L_0041DF4C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0041DF50:
    set32(c.r[3], c.r[18].w[0] - 10980u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st32((c.r[3].w[0]), 0u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041DF8C; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0041DF88; } }
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DF80u); set32(c.r[4], c.r[4].w[0] + 25752u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x0041DF80u) [[unlikely]] return; }
L_0041DF80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0041DF8C; } }
L_0041DF88:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0041DF8C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0041DF90:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041DFA8:
    st8((c.r[2].w[0] + 124u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 120u), c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 124u));
    set32(c.r[2], ld32((c.r[3].w[0] + 120u)));
    c.budget -= 8;
L_0041DFC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].d[0] = ld8((c.r[17].w[0] + 2u));  if (t) { goto L_0041E09C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_0041E09C; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 25840u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0041C000u < 16384u) { entry = entries_00C7[(t - 0x0041C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0041E018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E020u); set32(c.r[4], 0u + 5632u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041E020u) [[unlikely]] return; }
L_0041E020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E028u);  if (depth < kMaxDepth) unit_00D9(c, 184u, depth + 1u); else { c.pc = 0x00467BC0u; return; } if (c.pc != 0x0041E028u) [[unlikely]] return; }
L_0041E028:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E034u); set32(c.r[4], 0u + 5633u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041E034u) [[unlikely]] return; }
L_0041E034:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_0041E050; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 10980u);
    set32(c.r[4], c.r[4].w[0] + 25800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E050u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x0041E050u) [[unlikely]] return; }
L_0041E050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E058u); set32(c.r[4], 0u + 5888u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041E058u) [[unlikely]] return; }
L_0041E058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E060u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 219u, depth + 1u); else { c.pc = 0x003861F0u; return; } if (c.pc != 0x0041E060u) [[unlikely]] return; }
L_0041E060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E068u); set32(c.r[4], 0u + 5889u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041E068u) [[unlikely]] return; }
L_0041E068:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 10972u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_0041E09C; } }
    c.budget -= 1;
L_0041E090:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0041E098:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_0041E09C:
    set32(c.r[2], c.r[5].w[0] << 24);
    set32(c.r[3], 0u + 1u);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 5;
    if (c.r[18].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_0041E138; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E0B8u); set32(c.r[4], 0u + 6144u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041E0B8u) [[unlikely]] return; }
L_0041E0B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 10944u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[18].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_0041E0D8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].d[0] = ld8((c.r[2].w[0] - 10940u));
    st8((c.r[17].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
L_0041E0D8:
    set32(c.r[7], c.r[17].w[0] + 20u);
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E0E8u); set32(c.r[6], ld32((c.r[17].w[0] + 16u)));  if (depth < kMaxDepth) unit_00D9(c, 167u, depth + 1u); else { c.pc = 0x00467940u; return; } if (c.pc != 0x0041E0E8u) [[unlikely]] return; }
L_0041E0E8:
    set32(c.r[4], 0u + 6145u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E0F4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041E0F4u) [[unlikely]] return; }
L_0041E0F4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[18].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_0041E120; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - 10976u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0041E130; } }
L_0041E120:
    set32(c.r[3], 0u - 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 9u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 4;
L_0041E130:
    set32(c.r[2], c.r[5].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    c.budget -= 2;
L_0041E138:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0041E19C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E14Cu); set32(c.r[4], 0u + 6400u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041E14Cu) [[unlikely]] return; }
L_0041E14C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E154u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A1(c, 219u, depth + 1u); else { c.pc = 0x003861F0u; return; } if (c.pc != 0x0041E154u) [[unlikely]] return; }
L_0041E154:
    set32(c.r[4], 0u + 6401u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E160u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041E160u) [[unlikely]] return; }
L_0041E160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E168u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 272u, depth + 1u); else { c.pc = 0x0041DE98u; return; } if (c.pc != 0x0041E168u) [[unlikely]] return; }
L_0041E168:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041E198; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_0041E180; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 1;
L_0041E180:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] - 10972u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_0041E198:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0041E19C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041E1B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = ld8((c.r[17].w[0] + 2u));  if (t) { goto L_0041E22C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_0041E22C; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 25888u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0041C000u < 16384u) { entry = entries_00C7[(t - 0x0041C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0041E200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E208u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 252u, depth + 1u); else { c.pc = 0x0041DC48u; return; } if (c.pc != 0x0041E208u) [[unlikely]] return; }
L_0041E208:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] - 10972u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_0041E220:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0041E228:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_0041E22C:
    set32(c.r[2], c.r[4].w[0] << 24);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[4].w[0] << 24);  goto L_0041E2EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E248u); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041E248u) [[unlikely]] return; }
L_0041E248:
    c.r[5].d[0] = ld64((c.r[17].w[0] + 40u));
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E25Cu); c.r[5].d[0] = c.r[5].d[0] << 11;  if (depth < kMaxDepth) unit_00C7(c, 335u, depth + 1u); else { c.pc = 0x0041E5C8u; return; } if (c.pc != 0x0041E25Cu) [[unlikely]] return; }
L_0041E25C:
    set32(c.r[4], 0u + 8193u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E268u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041E268u) [[unlikely]] return; }
L_0041E268:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], 0u + 9u);  if (t) { goto L_0041E280; } }
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 4;
L_0041E280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E288u); set32(c.r[4], 0u + 8448u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041E288u) [[unlikely]] return; }
L_0041E288:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E298u); set32(c.r[6], ld32((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_00C7(c, 357u, depth + 1u); else { c.pc = 0x0041E7B8u; return; } if (c.pc != 0x0041E298u) [[unlikely]] return; }
L_0041E298:
    set32(c.r[4], 0u + 8449u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E2A4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041E2A4u) [[unlikely]] return; }
L_0041E2A4:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_0041E2D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 10976u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] << 24);  if (t) { goto L_0041E2EC; } }
L_0041E2D0:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], 0u + 9u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 9u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] << 24);
    c.budget -= 7;
L_0041E2EC:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0041E36C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E304u); set32(c.r[4], 0u + 8704u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041E304u) [[unlikely]] return; }
L_0041E304:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E314u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 342u, depth + 1u); else { c.pc = 0x0041E680u; return; } if (c.pc != 0x0041E314u) [[unlikely]] return; }
L_0041E314:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0041E338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E324u); set32(c.r[4], 0u + 8705u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041E324u) [[unlikely]] return; }
L_0041E324:
    set32(c.r[2], 0u + 9u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0041E368; } }
L_0041E338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E340u); set32(c.r[4], 0u + 8706u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041E340u) [[unlikely]] return; }
L_0041E340:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0041E36C; } }
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 10972u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 7;
L_0041E368:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041E36C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041E380:
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 2;
L_0041E388:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[19].w[0] - 11004u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E3B4u); set32(c.r[17], c.r[2].w[0] - 11064u);  if (depth < kMaxDepth) unit_00C9(c, 356u, depth + 1u); else { c.pc = 0x004277E8u; return; } if (c.pc != 0x0041E3B4u) [[unlikely]] return; }
L_0041E3B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0041E458; } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));  if (t) { goto L_0041E404; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[18], c.r[2].w[0] - 11000u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_0041E3E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E3E4u);  if (depth < kMaxDepth) unit_00C9(c, 296u, depth + 1u); else { c.pc = 0x00426F40u; return; } if (c.pc != 0x0041E3E4u) [[unlikely]] return; }
L_0041E3E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E3ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 283u, depth + 1u); else { c.pc = 0x0041DFC8u; return; } if (c.pc != 0x0041E3ECu) [[unlikely]] return; }
L_0041E3EC:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[16].d[0]) { c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));  goto L_0041E404; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E400u);  if (depth < kMaxDepth) unit_00C9(c, 299u, depth + 1u); else { c.pc = 0x00426F88u; return; } if (c.pc != 0x0041E400u) [[unlikely]] return; }
L_0041E400:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.budget -= 1;
L_0041E404:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[19].w[0] - 11004u), 0u);  goto L_0041E458; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[3].w[0] - 10996u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0041E438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E438u);  if (depth < kMaxDepth) unit_00C9(c, 296u, depth + 1u); else { c.pc = 0x00426F40u; return; } if (c.pc != 0x0041E438u) [[unlikely]] return; }
L_0041E438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E440u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 301u, depth + 1u); else { c.pc = 0x0041E1B0u; return; } if (c.pc != 0x0041E440u) [[unlikely]] return; }
L_0041E440:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { st32((c.r[19].w[0] - 11004u), 0u);  goto L_0041E458; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E454u);  if (depth < kMaxDepth) unit_00C9(c, 299u, depth + 1u); else { c.pc = 0x00426F88u; return; } if (c.pc != 0x0041E454u) [[unlikely]] return; }
L_0041E454:
    st32((c.r[19].w[0] - 11004u), 0u);
    c.budget -= 1;
L_0041E458:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041E478:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 4;
L_0041E488:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - 10984u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[7], 0u + 1u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x19640000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[8].w[0] - 11004u)));
    c.budget -= 12;
L_0041E4B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0041E4E8; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[8].w[0] - 11004u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041E4B8u | kUnwind; return; } goto L_0041E4B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E4E4u); set32(c.r[4], c.r[4].w[0] + 25928u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x0041E4E4u) [[unlikely]] return; }
L_0041E4E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0041E4E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041E4F0:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 8;
L_0041E510:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] - 10956u);
    set32(c.r[2], c.r[2].w[0] - 10960u);
    set32(c.r[5], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_0041E530:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[2], ld32((c.r[3].w[0] + 112u)));
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 8;
L_0041E550:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 10948u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0041E578; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 296u, depth); }
L_0041E578:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041E588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 10948u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0041E5B0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 299u, depth); }
L_0041E5B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041E5C0:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_0041E5C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E5ECu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 332u, depth + 1u); else { c.pc = 0x0041E550u; return; } if (c.pc != 0x0041E5ECu) [[unlikely]] return; }
L_0041E5EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], ld32((c.r[2].w[0] - 10952u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0041E638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E614u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 128u, depth + 1u); else { c.pc = 0x00485208u; return; } if (c.pc != 0x0041E614u) [[unlikely]] return; }
L_0041E614:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 26240u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0041E65C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E630u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x0041E630u) [[unlikely]] return; }
L_0041E630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041E65C; } }
L_0041E638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E640u);  if (depth < kMaxDepth) unit_00E1(c, 55u, depth + 1u); else { c.pc = 0x004846B8u; return; } if (c.pc != 0x0041E640u) [[unlikely]] return; }
L_0041E640:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 26272u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0041E65C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E65Cu);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x0041E65Cu) [[unlikely]] return; }
L_0041E65C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E664u);  if (depth < kMaxDepth) unit_00C7(c, 333u, depth + 1u); else { c.pc = 0x0041E588u; return; } if (c.pc != 0x0041E664u) [[unlikely]] return; }
L_0041E664:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041E680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E6A4u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 332u, depth + 1u); else { c.pc = 0x0041E550u; return; } if (c.pc != 0x0041E6A4u) [[unlikely]] return; }
L_0041E6A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E6B4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 107u, depth + 1u); else { c.pc = 0x00484E28u; return; } if (c.pc != 0x0041E6B4u) [[unlikely]] return; }
L_0041E6B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 26304u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0041E6D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E6D0u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x0041E6D0u) [[unlikely]] return; }
L_0041E6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E6D8u);  if (depth < kMaxDepth) unit_00C7(c, 333u, depth + 1u); else { c.pc = 0x0041E588u; return; } if (c.pc != 0x0041E6D8u) [[unlikely]] return; }
L_0041E6D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041E6F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E714u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 332u, depth + 1u); else { c.pc = 0x0041E550u; return; } if (c.pc != 0x0041E714u) [[unlikely]] return; }
L_0041E714:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E720u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 22u, depth + 1u); else { c.pc = 0x004842B0u; return; } if (c.pc != 0x0041E720u) [[unlikely]] return; }
L_0041E720:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 26336u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0041E73C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E73Cu);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x0041E73Cu) [[unlikely]] return; }
L_0041E73C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E744u);  if (depth < kMaxDepth) unit_00C7(c, 333u, depth + 1u); else { c.pc = 0x0041E588u; return; } if (c.pc != 0x0041E744u) [[unlikely]] return; }
L_0041E744:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041E760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E774u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 332u, depth + 1u); else { c.pc = 0x0041E550u; return; } if (c.pc != 0x0041E774u) [[unlikely]] return; }
L_0041E774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E77Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 43u, depth + 1u); else { c.pc = 0x00484540u; return; } if (c.pc != 0x0041E77Cu) [[unlikely]] return; }
L_0041E77C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 26368u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0041E798; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E798u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x0041E798u) [[unlikely]] return; }
L_0041E798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E7A0u);  if (depth < kMaxDepth) unit_00C7(c, 333u, depth + 1u); else { c.pc = 0x0041E588u; return; } if (c.pc != 0x0041E7A0u) [[unlikely]] return; }
L_0041E7A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041E7B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E7DCu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 332u, depth + 1u); else { c.pc = 0x0041E550u; return; } if (c.pc != 0x0041E7DCu) [[unlikely]] return; }
L_0041E7DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E7ECu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 71u, depth + 1u); else { c.pc = 0x004848F8u; return; } if (c.pc != 0x0041E7ECu) [[unlikely]] return; }
L_0041E7EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 26400u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0041E808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E808u);  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x0041E808u) [[unlikely]] return; }
L_0041E808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E810u);  if (depth < kMaxDepth) unit_00C7(c, 333u, depth + 1u); else { c.pc = 0x0041E588u; return; } if (c.pc != 0x0041E810u) [[unlikely]] return; }
L_0041E810:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041E830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[2].w[0] - 15552u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 15296u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] - 8720u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], 0u + 2u);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 16u);
    set32(c.r[10], 0u + 4u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E888u); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_00E0(c, 437u, depth + 1u); else { c.pc = 0x004836C0u; return; } if (c.pc != 0x0041E888u) [[unlikely]] return; }
L_0041E888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041E8A0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[7], c.r[7].w[0] - 15552u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] - 8720u);
    set32(c.r[9], c.r[9].w[0] - 15296u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E8E0u); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_00E0(c, 437u, depth + 1u); else { c.pc = 0x004836C0u; return; } if (c.pc != 0x0041E8E0u) [[unlikely]] return; }
L_0041E8E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041E8F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] - 10912u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_0041E908:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] <= 0; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0041E944; } }
    set32(c.r[7], 0u - 86u);
    c.budget -= 2;
L_0041E928:
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041E928u | kUnwind; return; } goto L_0041E928; } }
L_0041E944:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] - 10908u);
    set32(c.r[5], c.r[5].w[0] + 26480u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E95Cu); set32(c.r[6], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0041E95Cu) [[unlikely]] return; }
L_0041E95C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041E980:
    st32((c.r[4].w[0] + 40u), 0u);
    c.budget -= 2;
L_0041E988:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] & 63ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_0041E9C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 26504u);  if (t) { goto L_0041EA58; } }
    c.budget -= 1;
L_0041E9C8:
    c.r[2].d[0] = c.r[19].d[0] & 31ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 63ull;  if (t) { goto L_0041E9E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 26536u);  if (t) { goto L_0041EA58; } }
L_0041E9E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;  if (t) { goto L_0041E9F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 26568u);  if (t) { goto L_0041EA0C; } }
L_0041E9F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 4);  if (t) { goto L_0041EA20; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 26592u);
    c.budget -= 3;
L_0041EA0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EA14u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x0041EA14u) [[unlikely]] return; }
L_0041EA14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041EB04; } }
    c.budget -= 1;
L_0041EA20:
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[16], c.r[16].w[0] - 10896u);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041EB04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EA48u);  if (depth < kMaxDepth) unit_00C7(c, 362u, depth + 1u); else { c.pc = 0x0041E830u; return; } if (c.pc != 0x0041EA48u) [[unlikely]] return; }
L_0041EA48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0041EA68; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 26616u);
    c.budget -= 2;
L_0041EA58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EA60u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x0041EA60u) [[unlikely]] return; }
L_0041EA60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041EB04; } }
L_0041EA68:
    set32(c.r[3], c.r[17].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EAA4u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0041EAA4u) [[unlikely]] return; }
L_0041EAA4:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EABCu); set32(c.r[5], c.r[5].w[0] + 63u);  if (depth < kMaxDepth) unit_00E0(c, 121u, depth + 1u); else { c.pc = 0x004806A0u; return; } if (c.pc != 0x0041EABCu) [[unlikely]] return; }
L_0041EABC:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EAD4u); set32(c.r[5], c.r[5].w[0] + 63u);  if (depth < kMaxDepth) unit_00E0(c, 127u, depth + 1u); else { c.pc = 0x004807D0u; return; } if (c.pc != 0x0041EAD4u) [[unlikely]] return; }
L_0041EAD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 5880u);
    set32(c.r[2], c.r[2].w[0] - 5904u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
L_0041EB04:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041EB20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[17], 0u + 1u);  if (t) { goto L_0041EB5C; } }
L_0041EB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EB50u);  if (depth < kMaxDepth) unit_00C7(c, 407u, depth + 1u); else { c.pc = 0x0041EF88u; return; } if (c.pc != 0x0041EB50u) [[unlikely]] return; }
L_0041EB50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041EB48u | kUnwind; return; } goto L_0041EB48; } }
L_0041EB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EB64u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C7(c, 364u, depth + 1u); else { c.pc = 0x0041E8A0u; return; } if (c.pc != 0x0041EB64u) [[unlikely]] return; }
L_0041EB64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 68u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00DD(c, 50u, depth); }
L_0041EB88:
    st32((c.r[4].w[0] + 36u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[5].w[0]);  c.pc = t; return; }
L_0041EB98:
    st32((c.r[4].w[0] + 44u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.r[5].w[0]);  c.pc = t; return; }
L_0041EBA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[3], c.r[3].w[0] - 10904u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0041EC30; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_0041EC34; }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EC0Cu); set32(c.r[5], c.r[5].w[0] - 1u);  if (depth < kMaxDepth) unit_00E0(c, 127u, depth + 1u); else { c.pc = 0x004807D0u; return; } if (c.pc != 0x0041EC0Cu) [[unlikely]] return; }
L_0041EC0C:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EC20u); set32(c.r[6], ld32((c.r[16].w[0] + 16u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041EC20u) [[unlikely]] return; }
L_0041EC20:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0041EC30:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0041EC34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65280ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[4].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0041ED08; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] - 10916u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0041ED08; }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[17], c.r[16].w[0] + 48u);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EC78u); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041EC78u) [[unlikely]] return; }
L_0041EC78:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ECA4u); set32(c.r[5], c.r[5].w[0] - 1u);  if (depth < kMaxDepth) unit_00E0(c, 121u, depth + 1u); else { c.pc = 0x004806A0u; return; } if (c.pc != 0x0041ECA4u) [[unlikely]] return; }
L_0041ECA4:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ECBCu); set32(c.r[5], c.r[5].w[0] + 63u);  if (depth < kMaxDepth) unit_00E0(c, 127u, depth + 1u); else { c.pc = 0x004807D0u; return; } if (c.pc != 0x0041ECBCu) [[unlikely]] return; }
L_0041ECBC:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 11;
L_0041ECE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ECF4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00E0(c, 69u, depth + 1u); else { c.pc = 0x00480220u; return; } if (c.pc != 0x0041ECF4u) [[unlikely]] return; }
L_0041ECF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041ECE8u | kUnwind; return; } goto L_0041ECE8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0041ED08:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041ED18:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[19].w[0] - 10900u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_0041EDD8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[17], c.r[16].w[0] - 8720u);
    set32(c.r[5], ld32((c.r[18].w[0] - 10924u)));
    c.budget -= 6;
L_0041ED58:
    set32(c.r[4], c.r[16].w[0] - 8720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ED64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 425u, depth + 1u); else { c.pc = 0x004834E0u; return; } if (c.pc != 0x0041ED64u) [[unlikely]] return; }
L_0041ED64:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_0041ED98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ED74u); set32(c.r[4], c.r[20].w[0] + 26656u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x0041ED74u) [[unlikely]] return; }
L_0041ED74:
    c.budget -= 1;
L_0041ED78:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041ED78u | kUnwind; return; } goto L_0041ED78; } }
    c.budget -= 1;
L_0041ED98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] - 10900u);  if (t) { goto L_0041EDDC; } }
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 4;
L_0041EDB0:
    c.budget -= 7;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[2].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041EDB0u | kUnwind; return; } goto L_0041EDB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] - 10924u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041ED58u | kUnwind; return; } goto L_0041ED58; } }
    c.budget -= 1;
L_0041EDD8:
    set32(c.r[3], c.r[19].w[0] - 10900u);
    c.budget -= 1;
L_0041EDDC:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041EE08:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[3].w[0] - 10900u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0041EE68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] - 10896u);
    set32(c.r[17], 0u + 15u);
    c.budget -= 5;
L_0041EE48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0041EE60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EE5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 378u, depth + 1u); else { c.pc = 0x0041EB20u; return; } if (c.pc != 0x0041EE5Cu) [[unlikely]] return; }
L_0041EE5C:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0041EE60:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 68u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041EE48u | kUnwind; return; } goto L_0041EE48; } }
L_0041EE68:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041EE80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EEB8u); c.r[20].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 292u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x0041EEB8u) [[unlikely]] return; }
L_0041EEB8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0041EEF0; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[8], c.r[7].w[0] - 15552u);
    c.budget -= 2;
L_0041EEC8:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041EEC8u | kUnwind; return; } goto L_0041EEC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_0041EEF8; } }
L_0041EEF0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 2;
L_0041EEF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[18], c.r[21].w[0] - 15296u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 8720u);
    set32(c.r[5], c.r[19].w[0] + 1024u);
    set32(c.r[7], c.r[7].w[0] - 15552u);
    set32(c.r[8], c.r[16].w[0] << 2);
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[10], c.r[17].w[0] << 2);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EF28u); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_00E0(c, 437u, depth + 1u); else { c.pc = 0x004836C0u; return; } if (c.pc != 0x0041EF28u) [[unlikely]] return; }
L_0041EF28:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0041EF58; } }
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0041EF38:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041EF38u | kUnwind; return; } goto L_0041EF38; } }
L_0041EF58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EF60u);  if (depth < kMaxDepth) unit_00C9(c, 293u, depth + 1u); else { c.pc = 0x00426EF8u; return; } if (c.pc != 0x0041EF60u) [[unlikely]] return; }
L_0041EF60:
    set32(c.r[2], ld32((c.r[21].w[0] - 15296u)));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0041EF88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EFA8u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_00C9(c, 18u, depth + 1u); else { c.pc = 0x004242D0u; return; } if (c.pc != 0x0041EFA8u) [[unlikely]] return; }
L_0041EFA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[16], c.r[2].w[0] - 10896u);
    c.budget -= 2;
L_0041EFB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0041EFC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EFC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 384u, depth + 1u); else { c.pc = 0x0041EBA8u; return; } if (c.pc != 0x0041EFC4u) [[unlikely]] return; }
L_0041EFC4:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0041EFC8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 68u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041EFB0u | kUnwind; return; } goto L_0041EFB0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C9(c, 19u, depth); }
L_0041EFE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 7808u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F004u); set32(c.r[3], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00C8(c, 59u, depth + 1u); else { c.pc = 0x00420698u; return; } if (c.pc != 0x0041F004u) [[unlikely]] return; }
L_0041F004:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 7784u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041F018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 7804u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0041F03C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F03Cu); set32(c.r[4], ld32((c.r[2].w[0] - 7800u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041F03Cu) [[unlikely]] return; }
L_0041F03C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041F048:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull | 32768ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F068u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041F068u) [[unlikely]] return; }
L_0041F068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 7796u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F07Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00385CE0u; return; } if (c.pc != 0x0041F07Cu) [[unlikely]] return; }
L_0041F07C:
    c.r[4].d[0] = 0ull | 32769ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F088u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041F088u) [[unlikely]] return; }
L_0041F088:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041F0A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0041F158; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F0C4u);  if (depth < kMaxDepth) unit_00C9(c, 294u, depth + 1u); else { c.pc = 0x00426F10u; return; } if (c.pc != 0x0041F0C4u) [[unlikely]] return; }
L_0041F0C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F0CCu); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_00C7(c, 246u, depth + 1u); else { c.pc = 0x0041DBE8u; return; } if (c.pc != 0x0041F0CCu) [[unlikely]] return; }
L_0041F0CC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0041F148; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 26752u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0041C000u < 16384u) { entry = entries_00C7[(t - 0x0041C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0041F0F8:
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0041F138; } }
L_0041F108:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0041F138; } }
    c.budget -= 1;
L_0041F130:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 2;
L_0041F138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F140u);  if (depth < kMaxDepth) unit_00C7(c, 232u, depth + 1u); else { c.pc = 0x0041D9A8u; return; } if (c.pc != 0x0041F140u) [[unlikely]] return; }
L_0041F140:
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 1;
L_0041F144:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0041F148:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 297u, depth); }
L_0041F158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041F168:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F18Cu); set32(c.r[4], c.r[19].w[0] - 7792u);  if (depth < kMaxDepth) unit_00C9(c, 356u, depth + 1u); else { c.pc = 0x004277E8u; return; } if (c.pc != 0x0041F18Cu) [[unlikely]] return; }
L_0041F18C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_0041F1C4; } }
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] - 7680u);
    set32(c.r[17], 0u + 39u);
    c.budget -= 3;
L_0041F1A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0041F1B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F1B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 419u, depth + 1u); else { c.pc = 0x0041F0A0u; return; } if (c.pc != 0x0041F1B4u) [[unlikely]] return; }
L_0041F1B4:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0041F1B8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 72u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041F1A0u | kUnwind; return; } goto L_0041F1A0; } }
    st32((c.r[19].w[0] - 7792u), 0u);
    c.budget -= 1;
L_0041F1C4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041F1E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[2].w[0] - 7804u), c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 7800u), c.r[5].w[0]);  c.pc = t; return; }
L_0041F1F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F20Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0041F20Cu) [[unlikely]] return; }
L_0041F20C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0041F260; } }
    set32(c.r[9], 0u + 47u);
    set32(c.r[8], 0u + 92u);
    set32(c.r[4], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 4;
L_0041F228:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[5].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[9].d[0]; c.r[3].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_0041F244; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 2;
L_0041F244:
    set32(c.r[2], c.r[3].w[0] - 97u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] - 32u);  if (t) { goto L_0041F258; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0041F258:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041F228u | kUnwind; return; } goto L_0041F228; } }
L_0041F260:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041F270:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_0041F2E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F294u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 40u, depth + 1u); else { c.pc = 0x00420410u; return; } if (c.pc != 0x0041F294u) [[unlikely]] return; }
L_0041F294:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[17], c.r[3].w[0] - 4800u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0041F2E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F2B4u);  if (depth < kMaxDepth) unit_00C7(c, 514u, depth + 1u); else { c.pc = 0x0041FBA0u; return; } if (c.pc != 0x0041F2B4u) [[unlikely]] return; }
L_0041F2B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F2BCu); c.r[4].d[0] = 0ull | 33024ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041F2BCu) [[unlikely]] return; }
L_0041F2BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F2C4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 219u, depth + 1u); else { c.pc = 0x003861F0u; return; } if (c.pc != 0x0041F2C4u) [[unlikely]] return; }
L_0041F2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F2CCu); c.r[4].d[0] = 0ull | 33025ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041F2CCu) [[unlikely]] return; }
L_0041F2CC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F2D8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 415u, depth + 1u); else { c.pc = 0x0041F048u; return; } if (c.pc != 0x0041F2D8u) [[unlikely]] return; }
L_0041F2D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0041F2E8; } }
L_0041F2E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0041F2E4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0041F2E8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0041F2F8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_0041F320; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 26792u);  if (t) { goto L_0041F390; } }
    c.budget -= 1;
L_0041F320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F328u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 40u, depth + 1u); else { c.pc = 0x00420410u; return; } if (c.pc != 0x0041F328u) [[unlikely]] return; }
L_0041F328:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[17], c.r[3].w[0] - 4800u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0041F3A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F348u);  if (depth < kMaxDepth) unit_00C7(c, 514u, depth + 1u); else { c.pc = 0x0041FBA0u; return; } if (c.pc != 0x0041F348u) [[unlikely]] return; }
L_0041F348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F350u); c.r[4].d[0] = 0ull | 33280ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041F350u) [[unlikely]] return; }
L_0041F350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F358u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 219u, depth + 1u); else { c.pc = 0x003861F0u; return; } if (c.pc != 0x0041F358u) [[unlikely]] return; }
L_0041F358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F360u); c.r[4].d[0] = 0ull | 33281ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041F360u) [[unlikely]] return; }
L_0041F360:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F36Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 415u, depth + 1u); else { c.pc = 0x0041F048u; return; } if (c.pc != 0x0041F36Cu) [[unlikely]] return; }
L_0041F36C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 26840u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0041F3A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F384u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x0041F384u) [[unlikely]] return; }
L_0041F384:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] + 26880u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0041F390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F398u);  if (depth < kMaxDepth) unit_00C7(c, 413u, depth + 1u); else { c.pc = 0x0041F018u; return; } if (c.pc != 0x0041F398u) [[unlikely]] return; }
L_0041F398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041F3A4; } }
L_0041F3A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_0041F3A4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0041F3B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] - 7680u);
    set32(c.r[4], 0u + 39u);
    c.budget -= 4;
L_0041F3C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] + 72u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041F3C8u | kUnwind; return; } goto L_0041F3C8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_0041F3F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 72u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DD(c, 50u, depth); }
L_0041F410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_0041F440; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 26928u);  if (t) { goto L_0041F478; } }
L_0041F440:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0041F458; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 26968u);  if (t) { goto L_0041F478; } }
    c.budget -= 1;
L_0041F458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F460u);  if (depth < kMaxDepth) unit_00C7(c, 451u, depth + 1u); else { c.pc = 0x0041F3B8u; return; } if (c.pc != 0x0041F460u) [[unlikely]] return; }
L_0041F460:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[19], c.r[17].w[0] + 32u);  if (t) { goto L_0041F488; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 27008u);
    c.budget -= 3;
L_0041F478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F480u);  if (depth < kMaxDepth) unit_00C7(c, 413u, depth + 1u); else { c.pc = 0x0041F018u; return; } if (c.pc != 0x0041F480u) [[unlikely]] return; }
L_0041F480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041F568; } }
L_0041F488:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F494u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 40u, depth + 1u); else { c.pc = 0x00420410u; return; } if (c.pc != 0x0041F494u) [[unlikely]] return; }
L_0041F494:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041F518; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 4800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F4B4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 514u, depth + 1u); else { c.pc = 0x0041FBA0u; return; } if (c.pc != 0x0041F4B4u) [[unlikely]] return; }
L_0041F4B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F4C4u); set32(c.r[4], c.r[4].w[0] + 27056u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x0041F4C4u) [[unlikely]] return; }
L_0041F4C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F4CCu); c.r[4].d[0] = 0ull | 33536ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041F4CCu) [[unlikely]] return; }
L_0041F4CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F4D4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 219u, depth + 1u); else { c.pc = 0x003861F0u; return; } if (c.pc != 0x0041F4D4u) [[unlikely]] return; }
L_0041F4D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F4DCu); c.r[4].d[0] = 0ull | 33537ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041F4DCu) [[unlikely]] return; }
L_0041F4DC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F4E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 415u, depth + 1u); else { c.pc = 0x0041F048u; return; } if (c.pc != 0x0041F4E8u) [[unlikely]] return; }
L_0041F4E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));  goto L_0041F510; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F500u); set32(c.r[5], c.r[5].w[0] + 27096u);  if (depth < kMaxDepth) unit_00C7(c, 413u, depth + 1u); else { c.pc = 0x0041F018u; return; } if (c.pc != 0x0041F500u) [[unlikely]] return; }
L_0041F500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F508u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 453u, depth + 1u); else { c.pc = 0x0041F3F0u; return; } if (c.pc != 0x0041F508u) [[unlikely]] return; }
L_0041F508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041F568; } }
L_0041F510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 36u)));  if (t) { goto L_0041F520; } }
L_0041F518:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0041F520:
    set32(c.r[2], c.r[5].w[0] + 2047u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] >> 11);
    set32(c.r[4], 0u + 1u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { const bool t = c.r[20].d[0] != c.r[4].d[0]; st32((c.r[17].w[0] + 28u), 0u);  if (t) { goto L_0041F564; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_0041F564:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041F568:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041F588:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0041F5D0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  goto L_0041F5B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F5B4u);  if (depth < kMaxDepth) unit_00C7(c, 483u, depth + 1u); else { c.pc = 0x0041F858u; return; } if (c.pc != 0x0041F5B4u) [[unlikely]] return; }
L_0041F5B4:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0041F5B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041F3F0u | kUnwind; return; } goto L_0041F3F0; }
L_0041F5D0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041F5E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0041F608; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F5FCu); set32(c.r[5], c.r[5].w[0] + 27144u);  if (depth < kMaxDepth) unit_00C7(c, 413u, depth + 1u); else { c.pc = 0x0041F018u; return; } if (c.pc != 0x0041F5FCu) [[unlikely]] return; }
L_0041F5FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041F668; } }
    c.budget -= 1;
L_0041F608:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0041F618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0041F648; } }
L_0041F618:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0041F630; } }
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0041F64C; } }
L_0041F630:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[7].w[0] + 8u)));  if (t) { goto L_0041F64C; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0041F64C; } }
L_0041F648:
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 1;
L_0041F64C:
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    st32((c.r[7].w[0] + 20u), 0u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = 0ull;
    st32((c.r[7].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 7;
L_0041F668:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041F678:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0041F6A0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F694u); set32(c.r[5], c.r[5].w[0] + 27144u);  if (depth < kMaxDepth) unit_00C7(c, 413u, depth + 1u); else { c.pc = 0x0041F018u; return; } if (c.pc != 0x0041F694u) [[unlikely]] return; }
L_0041F694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041F6A4; } }
    c.budget -= 1;
L_0041F6A0:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_0041F6A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041F6B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_0041F6E8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 27144u);  if (t) { goto L_0041F708; } }
    c.budget -= 1;
L_0041F6E8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0041F6F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 27168u);  if (t) { goto L_0041F708; } }
L_0041F6F8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  goto L_0041F718; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] + 27200u);
    c.budget -= 2;
L_0041F708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F710u);  if (depth < kMaxDepth) unit_00C7(c, 413u, depth + 1u); else { c.pc = 0x0041F018u; return; } if (c.pc != 0x0041F710u) [[unlikely]] return; }
L_0041F710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041F838; } }
L_0041F718:
    set32(c.r[19], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[19].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041F838; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0041F738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0041F838; } }
    c.budget -= 1;
L_0041F738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F740u);  if (depth < kMaxDepth) unit_00C7(c, 228u, depth + 1u); else { c.pc = 0x0041D920u; return; } if (c.pc != 0x0041F740u) [[unlikely]] return; }
L_0041F740:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_0041F838; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] - 4480u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[7].d[0] = c.r[3].d[0];
    c.r[8].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[5], c.r[7].w[0] << 11);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2u));
    st32((c.r[16].w[0] + 16u), c.r[7].w[0]);
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F7A0u); st32((c.r[16].w[0] + 24u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00E0(c, 127u, depth + 1u); else { c.pc = 0x004807D0u; return; } if (c.pc != 0x0041F7A0u) [[unlikely]] return; }
L_0041F7A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[8], c.r[16].w[0] + 68u);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F7C0u); set32(c.r[7], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_00C7(c, 237u, depth + 1u); else { c.pc = 0x0041DA48u; return; } if (c.pc != 0x0041F7C0u) [[unlikely]] return; }
L_0041F7C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_0041F7D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F7D0u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_00C7(c, 232u, depth + 1u); else { c.pc = 0x0041D9A8u; return; } if (c.pc != 0x0041F7D0u) [[unlikely]] return; }
L_0041F7D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041F838; } }
L_0041F7D8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[17], ld32((c.r[2].w[0] - 4476u)));
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[3].d[0]) { st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[19].w[0]));  goto L_0041F830; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F7F0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 219u, depth + 1u); else { c.pc = 0x003861F0u; return; } if (c.pc != 0x0041F7F0u) [[unlikely]] return; }
L_0041F7F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F7F8u);  if (depth < kMaxDepth) unit_00C7(c, 326u, depth + 1u); else { c.pc = 0x0041E488u; return; } if (c.pc != 0x0041F7F8u) [[unlikely]] return; }
L_0041F7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F800u);  if (depth < kMaxDepth) unit_00C7(c, 317u, depth + 1u); else { c.pc = 0x0041E388u; return; } if (c.pc != 0x0041F800u) [[unlikely]] return; }
L_0041F800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F808u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_00C7(c, 259u, depth + 1u); else { c.pc = 0x0041DD18u; return; } if (c.pc != 0x0041F808u) [[unlikely]] return; }
L_0041F808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F810u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_00C7(c, 232u, depth + 1u); else { c.pc = 0x0041D9A8u; return; } if (c.pc != 0x0041F810u) [[unlikely]] return; }
L_0041F810:
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[16].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0041F834; } }
L_0041F830:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0041F834:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0041F838:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041F858:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_0041F8A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 27144u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041F018u | kUnwind; return; } goto L_0041F018; }
L_0041F8A8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0041F920; }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00090000u);  if (t) { goto L_0041F8CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F8CCu);  if (depth < kMaxDepth) unit_00C7(c, 268u, depth + 1u); else { c.pc = 0x0041DE30u; return; } if (c.pc != 0x0041F8CCu) [[unlikely]] return; }
L_0041F8CC:
    set32(c.r[19], 0u + 2u);
    c.r[17].d[0] = c.r[17].d[0] | 65535ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
L_0041F8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F8E0u);  if (depth < kMaxDepth) unit_00C7(c, 317u, depth + 1u); else { c.pc = 0x0041E388u; return; } if (c.pc != 0x0041F8E0u) [[unlikely]] return; }
L_0041F8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F8E8u);  if (depth < kMaxDepth) unit_00C7(c, 427u, depth + 1u); else { c.pc = 0x0041F168u; return; } if (c.pc != 0x0041F8E8u) [[unlikely]] return; }
L_0041F8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F8F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 490u, depth + 1u); else { c.pc = 0x0041F940u; return; } if (c.pc != 0x0041F8F0u) [[unlikely]] return; }
L_0041F8F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[19].d[0]) { st32((c.r[16].w[0] + 20u), 0u);  goto L_0041F918; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041F8D8u | kUnwind; return; } goto L_0041F8D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F914u); set32(c.r[4], c.r[20].w[0] + 27240u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x0041F914u) [[unlikely]] return; }
L_0041F914:
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 1;
L_0041F918:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0041F920:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041F940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0041F968; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F95Cu); set32(c.r[5], c.r[5].w[0] + 27144u);  if (depth < kMaxDepth) unit_00C7(c, 413u, depth + 1u); else { c.pc = 0x0041F018u; return; } if (c.pc != 0x0041F95Cu) [[unlikely]] return; }
L_0041F95C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041F96C; } }
    c.budget -= 1;
L_0041F968:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 1;
L_0041F96C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041F978:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2048u);  c.pc = t; return; }
L_0041F980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0041F9A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F99Cu); set32(c.r[5], c.r[5].w[0] + 27144u);  if (depth < kMaxDepth) unit_00C7(c, 413u, depth + 1u); else { c.pc = 0x0041F018u; return; } if (c.pc != 0x0041F99Cu) [[unlikely]] return; }
L_0041F99C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041F9C0; } }
    c.budget -= 1;
L_0041F9A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0041F9C0; }
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 11);
    c.budget -= 2;
L_0041F9C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041F9D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 4472u), c.r[4].w[0]);  c.pc = t; return; }
L_0041F9E0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
L_0041F9F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FA0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 40u, depth + 1u); else { c.pc = 0x00420410u; return; } if (c.pc != 0x0041FA0Cu) [[unlikely]] return; }
L_0041FA0C:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[17], c.r[3].w[0] - 4800u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0041FA74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FA2Cu);  if (depth < kMaxDepth) unit_00C7(c, 514u, depth + 1u); else { c.pc = 0x0041FBA0u; return; } if (c.pc != 0x0041FA2Cu) [[unlikely]] return; }
L_0041FA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FA34u); c.r[4].d[0] = 0ull | 33792ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041FA34u) [[unlikely]] return; }
L_0041FA34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FA3Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 219u, depth + 1u); else { c.pc = 0x003861F0u; return; } if (c.pc != 0x0041FA3Cu) [[unlikely]] return; }
L_0041FA3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FA44u); c.r[4].d[0] = 0ull | 33793ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041FA44u) [[unlikely]] return; }
L_0041FA44:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FA50u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 415u, depth + 1u); else { c.pc = 0x0041F048u; return; } if (c.pc != 0x0041FA50u) [[unlikely]] return; }
L_0041FA50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 26840u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0041FA70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FA68u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x0041FA68u) [[unlikely]] return; }
L_0041FA68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041FA74; } }
L_0041FA70:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_0041FA74:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0041FA88:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] << 11;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_0041FA98:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 11;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_0041FAB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0041FAC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041F9F0u | kUnwind; return; } goto L_0041F9F0; }
L_0041FAD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041FB90; } }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 204ll ? 1ull : 0ull;  if (t) { goto L_0041FB78; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 205u);  if (t) { goto L_0041FB28; } }
    set32(c.r[2], 0u + 201u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 202ll ? 1ull : 0ull;  if (t) { goto L_0041FB58; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 200u);  if (t) { goto L_0041FB68; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0041FB48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0041FB94; } }
    c.budget -= 1;
L_0041FB28:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 205ll ? 1ull : 0ull;  if (t) { goto L_0041FB78; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 299u);  if (t) { goto L_0041FB68; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0041FB88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0041FB94; } }
L_0041FB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FB50u);  if (depth < kMaxDepth) unit_00C7(c, 505u, depth + 1u); else { c.pc = 0x0041FA88u; return; } if (c.pc != 0x0041FB50u) [[unlikely]] return; }
L_0041FB50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041FB8C; } }
L_0041FB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FB60u);  if (depth < kMaxDepth) unit_00C7(c, 506u, depth + 1u); else { c.pc = 0x0041FA98u; return; } if (c.pc != 0x0041FB60u) [[unlikely]] return; }
L_0041FB60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041FB8C; } }
L_0041FB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FB70u);  if (depth < kMaxDepth) unit_00C7(c, 507u, depth + 1u); else { c.pc = 0x0041FAB8u; return; } if (c.pc != 0x0041FB70u) [[unlikely]] return; }
L_0041FB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041FB8C; } }
L_0041FB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FB80u);  if (depth < kMaxDepth) unit_00C7(c, 508u, depth + 1u); else { c.pc = 0x0041FAC0u; return; } if (c.pc != 0x0041FB80u) [[unlikely]] return; }
L_0041FB80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041FB8C; } }
L_0041FB88:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0041FB8C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0041FB90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0041FB94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041FBA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], c.r[5].w[0] - 4464u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FBC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x0041FBC8u) [[unlikely]] return; }
L_0041FBC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 47u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 92u);  if (t) { goto L_0041FBEC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0041FBEC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FBECu); set32(c.r[5], c.r[5].w[0] + 27280u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x0041FBECu) [[unlikely]] return; }
L_0041FBEC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC00u); set32(c.r[16], c.r[16].w[0] + 27288u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x0041FC00u) [[unlikely]] return; }
L_0041FC00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0041FC08u) [[unlikely]] return; }
L_0041FC08:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC18u); set32(c.r[4], c.r[2].w[0] - 2u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x0041FC18u) [[unlikely]] return; }
L_0041FC18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0041FC30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC2Cu);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x0041FC2Cu) [[unlikely]] return; }
L_0041FC2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041FC30:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041F1F8u | kUnwind; return; } goto L_0041F1F8; }
L_0041FC48:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    set32(c.r[2], c.r[4].w[0] - 97u);
    set32(c.r[3], c.r[4].w[0] - 32u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    set32(c.r[5], c.r[3].w[0] << 24);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041FC6C; } }
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 24));
    c.budget -= 1;
L_0041FC6C:
    c.r[3].d[0] = c.r[3].d[0] ^ 92ull;
    set32(c.r[2], 0u + 47u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];  c.pc = t; return; }
L_0041FC80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], c.r[4].w[0] << 24);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[5].w[0] << 24);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 24));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FCA4u); set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));  if (depth < kMaxDepth) unit_00C7(c, 521u, depth + 1u); else { c.pc = 0x0041FC48u; return; } if (c.pc != 0x0041FCA4u) [[unlikely]] return; }
L_0041FCA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FCB0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 521u, depth + 1u); else { c.pc = 0x0041FC48u; return; } if (c.pc != 0x0041FCB0u) [[unlikely]] return; }
L_0041FCB0:
    set32(c.r[3], 0u - 1u);
    c.r[16].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[16].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041FCD8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FCFCu); c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0041FCFCu) [[unlikely]] return; }
L_0041FCFC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FD08u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0041FD08u) [[unlikely]] return; }
L_0041FD08:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0041FD18; } }
L_0041FD10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0041FD50; } }
L_0041FD18:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0041FD4C; } }
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 2;
L_0041FD28:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FD3Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00C7(c, 522u, depth + 1u); else { c.pc = 0x0041FC80u; return; } if (c.pc != 0x0041FD3Cu) [[unlikely]] return; }
L_0041FD3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041FD10u | kUnwind; return; } goto L_0041FD10; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041FD28u | kUnwind; return; } goto L_0041FD28; } }
L_0041FD4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0041FD50:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041FD70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_0041FEA8; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[22].w[0] << 3);
    set32(c.r[20], 0u + 10u);
    set32(c.r[30], 0u + 13u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 7;
L_0041FDE0:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[20].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));  goto L_0041FDF4; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + 1u);  if (t) { goto L_0041FE84; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 1;
L_0041FDF4:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[20].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0041FE08; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] - 1u);  if (t) { goto L_0041FE10; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0041FE08:
    set32(c.r[5], c.r[19].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 2;
L_0041FE10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0]; set32(c.r[17], c.r[18].w[0] - c.r[4].w[0]);  if (t) { goto L_0041FE24; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[30].d[0]; set32(c.r[2], c.r[5].w[0] - 2u);  if (t) { goto L_0041FE2C; } }
L_0041FE24:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[5].w[0] - 2u);
    c.budget -= 2;
L_0041FE2C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[20].d[0]) { st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  goto L_0041FE44; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[30].d[0]; set32(c.r[5], c.r[19].w[0] + c.r[4].w[0]);  if (t) { goto L_0041FE48; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0041FE44:
    set32(c.r[5], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_0041FE48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FE54u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0041FE54u) [[unlikely]] return; }
L_0041FE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FE5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 432u, depth + 1u); else { c.pc = 0x0041F1F8u; return; } if (c.pc != 0x0041FE5Cu) [[unlikely]] return; }
L_0041FE5C:
    set32(c.r[6], c.r[16].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] - 1u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));  goto L_0041FE6C; }
L_0041FE6C:
    set32(c.r[3], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[23].w[0] + c.r[16].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[16], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[21].d[0] == c.r[22].d[0]; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0041FEA8; } }
L_0041FE84:
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0041FEA8; } }
    set32(c.r[2], c.r[19].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041FDE0u | kUnwind; return; } goto L_0041FDE0; }
L_0041FEA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 4496u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[21].d[0] + 0ull;  goto L_0041FED4; }
    st32((c.r[2].w[0] + 12u), c.r[23].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0])));
    st32((c.r[2].w[0] + 8u), c.r[22].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[21].w[0]);
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
L_0041FED4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0041FF08:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 88u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    st64((c.r[29].w[0] + 104u), c.r[19].d[0]);
    set32(c.r[5], c.r[3].w[0] + 27296u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    lwl(c.r[3], (c.r[17].w[0] + 3u));
    lwr(c.r[3], (c.r[17].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    swl(c.r[3], (c.r[2].w[0] + 3u));
    swr(c.r[3], (c.r[2].w[0]));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FF58u); st8((c.r[29].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00DE(c, 72u, depth + 1u); else { c.pc = 0x00478998u; return; } if (c.pc != 0x0041FF58u) [[unlikely]] return; }
L_0041FF58:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[19].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_0041FF78; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FF6Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 91u, depth + 1u); else { c.pc = 0x00420A60u; return; } if (c.pc != 0x0041FF6Cu) [[unlikely]] return; }
L_0041FF6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { [[clang::musttail]] return unit_00C8(c, 11u, depth); } }
    c.budget -= 1;
L_0041FF78:
    set32(c.r[6], 0u + 128u);
    set32(c.r[16], c.r[19].w[0] - 4200u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FF8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0041FF8Cu) [[unlikely]] return; }
L_0041FF8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FF9Cu); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_00C7(c, 514u, depth + 1u); else { c.pc = 0x0041FBA0u; return; } if (c.pc != 0x0041FF9Cu) [[unlikely]] return; }
L_0041FF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FFA4u); c.r[4].d[0] = 0ull | 36864ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041FFA4u) [[unlikely]] return; }
L_0041FFA4:
    c.budget -= 1;
L_0041FFA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FFB0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A1(c, 219u, depth + 1u); else { c.pc = 0x003861F0u; return; } if (c.pc != 0x0041FFB0u) [[unlikely]] return; }
L_0041FFB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041FFA8u | kUnwind; return; } goto L_0041FFA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FFC0u); c.r[4].d[0] = 0ull | 36865ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041FFC0u) [[unlikely]] return; }
L_0041FFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FFC8u); c.r[4].d[0] = 0ull | 37120ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041FFC8u) [[unlikely]] return; }
L_0041FFC8:
    set32(c.r[5], c.r[19].w[0] - 4200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FFD4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 415u, depth + 1u); else { c.pc = 0x0041F048u; return; } if (c.pc != 0x0041FFD4u) [[unlikely]] return; }
L_0041FFD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041FFE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull | 37121ull;  if (t) { [[clang::musttail]] return unit_00C8(c, 4u, depth); } }
    c.budget -= 1;
L_0041FFE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FFF0u); c.r[4].d[0] = 0ull | 37122ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0041FFF0u) [[unlikely]] return; }
L_0041FFF0:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull | 37376ull;
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    [[clang::musttail]] return unit_00C8(c, 1u, depth);
}

}
