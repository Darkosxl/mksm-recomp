#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002C[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15,
    0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0,
    0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 28, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34,
    0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 48, 0, 0, 49, 0, 50, 0,
    51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83,
    0, 84, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0,
    0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0,
    0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0,
    0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 194, 0, 195, 0, 0, 196, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210,
    0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 0, 216, 0, 217, 0, 218, 0, 0,
    0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231,
    0, 232, 0, 233, 0, 0, 234, 0, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248,
    0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 252, 0, 0, 253, 0, 0, 254, 0, 255, 0, 256, 0, 0,
    0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0,
    0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 277, 0, 0, 278, 0, 0, 279, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0,
    0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 288, 0, 289, 0, 0, 290, 0, 0, 291, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299,
    0, 300, 0, 301, 0, 0, 302, 0, 0, 303, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 313, 0, 0,
    314, 0, 0, 315, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320,
    0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 325, 0, 0, 326, 0, 0, 327, 0, 328,
    0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0,
    0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 342, 0, 343, 0,
    344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0,
    355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 360, 0,
    361, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0,
    0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 377, 378, 0, 379, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392,
    0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 400,
    0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 408,
    0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421,
    0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 426, 0,
    427, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0,
    0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0,
    435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 438, 0, 439, 0, 440, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0,
    0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0,
    449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0,
    454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0,
    0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0,
    0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0,
    481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0,
    0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 491, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497,
    0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0,
    0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0,
    513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 517, 0, 0, 518, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0,
    0, 527, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 0, 530, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0,
    0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0,
    537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0,
    0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0,
    0, 551, 0, 552, 0, 553, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0,
};

void unit_002C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001B0000;
    case 2u: goto L_001B0014;
    case 3u: goto L_001B0024;
    case 4u: goto L_001B0098;
    case 5u: goto L_001B00E0;
    case 6u: goto L_001B0138;
    case 7u: goto L_001B0224;
    case 8u: goto L_001B0244;
    case 9u: goto L_001B0288;
    case 10u: goto L_001B02F8;
    case 11u: goto L_001B030C;
    case 12u: goto L_001B0380;
    case 13u: goto L_001B0410;
    case 14u: goto L_001B0468;
    case 15u: goto L_001B047C;
    case 16u: goto L_001B0484;
    case 17u: goto L_001B0498;
    case 18u: goto L_001B0590;
    case 19u: goto L_001B05F0;
    case 20u: goto L_001B0618;
    case 21u: goto L_001B0660;
    case 22u: goto L_001B0668;
    case 23u: goto L_001B0678;
    case 24u: goto L_001B0688;
    case 25u: goto L_001B0698;
    case 26u: goto L_001B06A8;
    case 27u: goto L_001B06D8;
    case 28u: goto L_001B06DC;
    case 29u: goto L_001B0710;
    case 30u: goto L_001B0728;
    case 31u: goto L_001B0734;
    case 32u: goto L_001B0748;
    case 33u: goto L_001B076C;
    case 34u: goto L_001B077C;
    case 35u: goto L_001B078C;
    case 36u: goto L_001B07AC;
    case 37u: goto L_001B07B4;
    case 38u: goto L_001B07BC;
    case 39u: goto L_001B07C8;
    case 40u: goto L_001B07D0;
    case 41u: goto L_001B07D8;
    case 42u: goto L_001B07F0;
    case 43u: goto L_001B0814;
    case 44u: goto L_001B0824;
    case 45u: goto L_001B0834;
    case 46u: goto L_001B0854;
    case 47u: goto L_001B085C;
    case 48u: goto L_001B0864;
    case 49u: goto L_001B0870;
    case 50u: goto L_001B0878;
    case 51u: goto L_001B0880;
    case 52u: goto L_001B0898;
    case 53u: goto L_001B08D8;
    case 54u: goto L_001B0938;
    case 55u: goto L_001B096C;
    case 56u: goto L_001B0998;
    case 57u: goto L_001B09E0;
    case 58u: goto L_001B0A00;
    case 59u: goto L_001B0A28;
    case 60u: goto L_001B0A50;
    case 61u: goto L_001B0A78;
    case 62u: goto L_001B0AA0;
    case 63u: goto L_001B0AC8;
    case 64u: goto L_001B0AF0;
    case 65u: goto L_001B0B18;
    case 66u: goto L_001B0B40;
    case 67u: goto L_001B0B68;
    case 68u: goto L_001B0B9C;
    case 69u: goto L_001B0BC4;
    case 70u: goto L_001B0BEC;
    case 71u: goto L_001B0C14;
    case 72u: goto L_001B0C1C;
    case 73u: goto L_001B0C38;
    case 74u: goto L_001B0C58;
    case 75u: goto L_001B0C80;
    case 76u: goto L_001B0CA8;
    case 77u: goto L_001B0CD8;
    case 78u: goto L_001B0D0C;
    case 79u: goto L_001B0D1C;
    case 80u: goto L_001B0D2C;
    case 81u: goto L_001B0D3C;
    case 82u: goto L_001B0D54;
    case 83u: goto L_001B0D7C;
    case 84u: goto L_001B0D84;
    case 85u: goto L_001B0D8C;
    case 86u: goto L_001B0DA4;
    case 87u: goto L_001B0DB0;
    case 88u: goto L_001B0DB8;
    case 89u: goto L_001B0DC0;
    case 90u: goto L_001B0DE0;
    case 91u: goto L_001B0E14;
    case 92u: goto L_001B0E24;
    case 93u: goto L_001B0E34;
    case 94u: goto L_001B0E44;
    case 95u: goto L_001B0E5C;
    case 96u: goto L_001B0E84;
    case 97u: goto L_001B0E8C;
    case 98u: goto L_001B0E94;
    case 99u: goto L_001B0EAC;
    case 100u: goto L_001B0EB8;
    case 101u: goto L_001B0EC0;
    case 102u: goto L_001B0EC8;
    case 103u: goto L_001B0EE8;
    case 104u: goto L_001B0F1C;
    case 105u: goto L_001B0F2C;
    case 106u: goto L_001B0F3C;
    case 107u: goto L_001B0F4C;
    case 108u: goto L_001B0F64;
    case 109u: goto L_001B0F8C;
    case 110u: goto L_001B0F94;
    case 111u: goto L_001B0F9C;
    case 112u: goto L_001B0FB4;
    case 113u: goto L_001B0FC0;
    case 114u: goto L_001B0FC8;
    case 115u: goto L_001B0FD0;
    case 116u: goto L_001B0FF0;
    case 117u: goto L_001B1024;
    case 118u: goto L_001B1034;
    case 119u: goto L_001B1044;
    case 120u: goto L_001B1054;
    case 121u: goto L_001B106C;
    case 122u: goto L_001B1094;
    case 123u: goto L_001B109C;
    case 124u: goto L_001B10A4;
    case 125u: goto L_001B10BC;
    case 126u: goto L_001B10C8;
    case 127u: goto L_001B10D0;
    case 128u: goto L_001B10D8;
    case 129u: goto L_001B10F8;
    case 130u: goto L_001B112C;
    case 131u: goto L_001B113C;
    case 132u: goto L_001B114C;
    case 133u: goto L_001B115C;
    case 134u: goto L_001B1174;
    case 135u: goto L_001B119C;
    case 136u: goto L_001B11A4;
    case 137u: goto L_001B11AC;
    case 138u: goto L_001B11C4;
    case 139u: goto L_001B11D0;
    case 140u: goto L_001B11D8;
    case 141u: goto L_001B11E0;
    case 142u: goto L_001B1200;
    case 143u: goto L_001B1234;
    case 144u: goto L_001B1244;
    case 145u: goto L_001B1254;
    case 146u: goto L_001B1264;
    case 147u: goto L_001B127C;
    case 148u: goto L_001B12A4;
    case 149u: goto L_001B12AC;
    case 150u: goto L_001B12B4;
    case 151u: goto L_001B12CC;
    case 152u: goto L_001B12D8;
    case 153u: goto L_001B12E0;
    case 154u: goto L_001B12E8;
    case 155u: goto L_001B1308;
    case 156u: goto L_001B133C;
    case 157u: goto L_001B134C;
    case 158u: goto L_001B135C;
    case 159u: goto L_001B136C;
    case 160u: goto L_001B1384;
    case 161u: goto L_001B13AC;
    case 162u: goto L_001B13B4;
    case 163u: goto L_001B13BC;
    case 164u: goto L_001B13D4;
    case 165u: goto L_001B13E0;
    case 166u: goto L_001B13E8;
    case 167u: goto L_001B13F0;
    case 168u: goto L_001B1410;
    case 169u: goto L_001B1444;
    case 170u: goto L_001B1454;
    case 171u: goto L_001B1464;
    case 172u: goto L_001B1474;
    case 173u: goto L_001B148C;
    case 174u: goto L_001B14B4;
    case 175u: goto L_001B14BC;
    case 176u: goto L_001B14C4;
    case 177u: goto L_001B14DC;
    case 178u: goto L_001B14E8;
    case 179u: goto L_001B14F0;
    case 180u: goto L_001B14F8;
    case 181u: goto L_001B1518;
    case 182u: goto L_001B1560;
    case 183u: goto L_001B1588;
    case 184u: goto L_001B15A0;
    case 185u: goto L_001B15C4;
    case 186u: goto L_001B15E0;
    case 187u: goto L_001B15F0;
    case 188u: goto L_001B160C;
    case 189u: goto L_001B161C;
    case 190u: goto L_001B162C;
    case 191u: goto L_001B163C;
    case 192u: goto L_001B1654;
    case 193u: goto L_001B167C;
    case 194u: goto L_001B1684;
    case 195u: goto L_001B168C;
    case 196u: goto L_001B1698;
    case 197u: goto L_001B16A4;
    case 198u: goto L_001B16AC;
    case 199u: goto L_001B16B4;
    case 200u: goto L_001B16D8;
    case 201u: goto L_001B1720;
    case 202u: goto L_001B1748;
    case 203u: goto L_001B1760;
    case 204u: goto L_001B1784;
    case 205u: goto L_001B17A0;
    case 206u: goto L_001B17B0;
    case 207u: goto L_001B17CC;
    case 208u: goto L_001B17DC;
    case 209u: goto L_001B17EC;
    case 210u: goto L_001B17FC;
    case 211u: goto L_001B1814;
    case 212u: goto L_001B183C;
    case 213u: goto L_001B1844;
    case 214u: goto L_001B184C;
    case 215u: goto L_001B1858;
    case 216u: goto L_001B1864;
    case 217u: goto L_001B186C;
    case 218u: goto L_001B1874;
    case 219u: goto L_001B1898;
    case 220u: goto L_001B18E0;
    case 221u: goto L_001B1908;
    case 222u: goto L_001B1920;
    case 223u: goto L_001B1944;
    case 224u: goto L_001B1960;
    case 225u: goto L_001B1970;
    case 226u: goto L_001B198C;
    case 227u: goto L_001B199C;
    case 228u: goto L_001B19AC;
    case 229u: goto L_001B19BC;
    case 230u: goto L_001B19D4;
    case 231u: goto L_001B19FC;
    case 232u: goto L_001B1A04;
    case 233u: goto L_001B1A0C;
    case 234u: goto L_001B1A18;
    case 235u: goto L_001B1A24;
    case 236u: goto L_001B1A2C;
    case 237u: goto L_001B1A34;
    case 238u: goto L_001B1A58;
    case 239u: goto L_001B1AA0;
    case 240u: goto L_001B1AC8;
    case 241u: goto L_001B1AE0;
    case 242u: goto L_001B1B04;
    case 243u: goto L_001B1B20;
    case 244u: goto L_001B1B30;
    case 245u: goto L_001B1B4C;
    case 246u: goto L_001B1B5C;
    case 247u: goto L_001B1B6C;
    case 248u: goto L_001B1B7C;
    case 249u: goto L_001B1B94;
    case 250u: goto L_001B1BBC;
    case 251u: goto L_001B1BC4;
    case 252u: goto L_001B1BCC;
    case 253u: goto L_001B1BD8;
    case 254u: goto L_001B1BE4;
    case 255u: goto L_001B1BEC;
    case 256u: goto L_001B1BF4;
    case 257u: goto L_001B1C18;
    case 258u: goto L_001B1C58;
    case 259u: goto L_001B1C70;
    case 260u: goto L_001B1C90;
    case 261u: goto L_001B1CA8;
    case 262u: goto L_001B1CC8;
    case 263u: goto L_001B1CE0;
    case 264u: goto L_001B1D00;
    case 265u: goto L_001B1D18;
    case 266u: goto L_001B1D38;
    case 267u: goto L_001B1D50;
    case 268u: goto L_001B1D70;
    case 269u: goto L_001B1D88;
    case 270u: goto L_001B1DA0;
    case 271u: goto L_001B1DCC;
    case 272u: goto L_001B1DDC;
    case 273u: goto L_001B1DEC;
    case 274u: goto L_001B1E04;
    case 275u: goto L_001B1E2C;
    case 276u: goto L_001B1E34;
    case 277u: goto L_001B1E3C;
    case 278u: goto L_001B1E48;
    case 279u: goto L_001B1E54;
    case 280u: goto L_001B1E5C;
    case 281u: goto L_001B1E64;
    case 282u: goto L_001B1E88;
    case 283u: goto L_001B1EB4;
    case 284u: goto L_001B1EC4;
    case 285u: goto L_001B1ED4;
    case 286u: goto L_001B1EEC;
    case 287u: goto L_001B1F14;
    case 288u: goto L_001B1F1C;
    case 289u: goto L_001B1F24;
    case 290u: goto L_001B1F30;
    case 291u: goto L_001B1F3C;
    case 292u: goto L_001B1F44;
    case 293u: goto L_001B1F4C;
    case 294u: goto L_001B1F70;
    case 295u: goto L_001B1F9C;
    case 296u: goto L_001B1FAC;
    case 297u: goto L_001B1FBC;
    case 298u: goto L_001B1FD4;
    case 299u: goto L_001B1FFC;
    case 300u: goto L_001B2004;
    case 301u: goto L_001B200C;
    case 302u: goto L_001B2018;
    case 303u: goto L_001B2024;
    case 304u: goto L_001B202C;
    case 305u: goto L_001B2034;
    case 306u: goto L_001B2058;
    case 307u: goto L_001B2084;
    case 308u: goto L_001B2094;
    case 309u: goto L_001B20A4;
    case 310u: goto L_001B20BC;
    case 311u: goto L_001B20E4;
    case 312u: goto L_001B20EC;
    case 313u: goto L_001B20F4;
    case 314u: goto L_001B2100;
    case 315u: goto L_001B210C;
    case 316u: goto L_001B2114;
    case 317u: goto L_001B211C;
    case 318u: goto L_001B2140;
    case 319u: goto L_001B216C;
    case 320u: goto L_001B217C;
    case 321u: goto L_001B218C;
    case 322u: goto L_001B21A4;
    case 323u: goto L_001B21CC;
    case 324u: goto L_001B21D4;
    case 325u: goto L_001B21DC;
    case 326u: goto L_001B21E8;
    case 327u: goto L_001B21F4;
    case 328u: goto L_001B21FC;
    case 329u: goto L_001B2204;
    case 330u: goto L_001B2228;
    case 331u: goto L_001B2238;
    case 332u: goto L_001B2240;
    case 333u: goto L_001B2248;
    case 334u: goto L_001B2264;
    case 335u: goto L_001B2278;
    case 336u: goto L_001B2288;
    case 337u: goto L_001B2300;
    case 338u: goto L_001B231C;
    case 339u: goto L_001B2328;
    case 340u: goto L_001B233C;
    case 341u: goto L_001B236C;
    case 342u: goto L_001B2370;
    case 343u: goto L_001B2378;
    case 344u: goto L_001B2380;
    case 345u: goto L_001B2388;
    case 346u: goto L_001B23B0;
    case 347u: goto L_001B23F0;
    case 348u: goto L_001B2400;
    case 349u: goto L_001B24A4;
    case 350u: goto L_001B24E8;
    case 351u: goto L_001B252C;
    case 352u: goto L_001B2570;
    case 353u: goto L_001B25B4;
    case 354u: goto L_001B25F4;
    case 355u: goto L_001B2600;
    case 356u: goto L_001B2620;
    case 357u: goto L_001B262C;
    case 358u: goto L_001B2640;
    case 359u: goto L_001B2674;
    case 360u: goto L_001B2678;
    case 361u: goto L_001B2680;
    case 362u: goto L_001B2688;
    case 363u: goto L_001B2690;
    case 364u: goto L_001B26B8;
    case 365u: goto L_001B26F8;
    case 366u: goto L_001B2708;
    case 367u: goto L_001B27B0;
    case 368u: goto L_001B27F8;
    case 369u: goto L_001B2840;
    case 370u: goto L_001B2888;
    case 371u: goto L_001B28D0;
    case 372u: goto L_001B2918;
    case 373u: goto L_001B2924;
    case 374u: goto L_001B2944;
    case 375u: goto L_001B2950;
    case 376u: goto L_001B2964;
    case 377u: goto L_001B2998;
    case 378u: goto L_001B299C;
    case 379u: goto L_001B29A4;
    case 380u: goto L_001B29AC;
    case 381u: goto L_001B29B4;
    case 382u: goto L_001B29DC;
    case 383u: goto L_001B2A18;
    case 384u: goto L_001B2A28;
    case 385u: goto L_001B2A8C;
    case 386u: goto L_001B2A9C;
    case 387u: goto L_001B2AAC;
    case 388u: goto L_001B2ABC;
    case 389u: goto L_001B2ACC;
    case 390u: goto L_001B2ADC;
    case 391u: goto L_001B2AEC;
    case 392u: goto L_001B2AFC;
    case 393u: goto L_001B2B0C;
    case 394u: goto L_001B2B1C;
    case 395u: goto L_001B2B2C;
    case 396u: goto L_001B2B3C;
    case 397u: goto L_001B2B4C;
    case 398u: goto L_001B2B5C;
    case 399u: goto L_001B2B6C;
    case 400u: goto L_001B2B7C;
    case 401u: goto L_001B2B8C;
    case 402u: goto L_001B2B9C;
    case 403u: goto L_001B2BAC;
    case 404u: goto L_001B2BBC;
    case 405u: goto L_001B2BCC;
    case 406u: goto L_001B2BDC;
    case 407u: goto L_001B2BEC;
    case 408u: goto L_001B2BFC;
    case 409u: goto L_001B2C0C;
    case 410u: goto L_001B2C1C;
    case 411u: goto L_001B2C2C;
    case 412u: goto L_001B2C3C;
    case 413u: goto L_001B2C4C;
    case 414u: goto L_001B2C5C;
    case 415u: goto L_001B2CAC;
    case 416u: goto L_001B2CEC;
    case 417u: goto L_001B2D2C;
    case 418u: goto L_001B2D6C;
    case 419u: goto L_001B2DAC;
    case 420u: goto L_001B2DF0;
    case 421u: goto L_001B2DFC;
    case 422u: goto L_001B2E1C;
    case 423u: goto L_001B2E28;
    case 424u: goto L_001B2E3C;
    case 425u: goto L_001B2E74;
    case 426u: goto L_001B2E78;
    case 427u: goto L_001B2E80;
    case 428u: goto L_001B2E88;
    case 429u: goto L_001B2E90;
    case 430u: goto L_001B2EB8;
    case 431u: goto L_001B2EF8;
    case 432u: goto L_001B2F08;
    case 433u: goto L_001B2F58;
    case 434u: goto L_001B2F74;
    case 435u: goto L_001B2F80;
    case 436u: goto L_001B2F94;
    case 437u: goto L_001B2FB0;
    case 438u: goto L_001B2FB4;
    case 439u: goto L_001B2FBC;
    case 440u: goto L_001B2FC4;
    case 441u: goto L_001B2FCC;
    case 442u: goto L_001B2FFC;
    case 443u: goto L_001B3028;
    case 444u: goto L_001B3040;
    case 445u: goto L_001B3070;
    case 446u: goto L_001B3088;
    case 447u: goto L_001B30A8;
    case 448u: goto L_001B30E8;
    case 449u: goto L_001B3100;
    case 450u: goto L_001B3128;
    case 451u: goto L_001B3140;
    case 452u: goto L_001B3150;
    case 453u: goto L_001B3170;
    case 454u: goto L_001B3180;
    case 455u: goto L_001B31A0;
    case 456u: goto L_001B31B0;
    case 457u: goto L_001B31E0;
    case 458u: goto L_001B3228;
    case 459u: goto L_001B324C;
    case 460u: goto L_001B32A8;
    case 461u: goto L_001B32E4;
    case 462u: goto L_001B32F4;
    case 463u: goto L_001B3320;
    case 464u: goto L_001B3370;
    case 465u: goto L_001B3390;
    case 466u: goto L_001B33A8;
    case 467u: goto L_001B33CC;
    case 468u: goto L_001B3420;
    case 469u: goto L_001B3478;
    case 470u: goto L_001B34A0;
    case 471u: goto L_001B34E4;
    case 472u: goto L_001B3508;
    case 473u: goto L_001B3520;
    case 474u: goto L_001B3538;
    case 475u: goto L_001B3560;
    case 476u: goto L_001B3570;
    case 477u: goto L_001B3598;
    case 478u: goto L_001B35A8;
    case 479u: goto L_001B35C8;
    case 480u: goto L_001B35E4;
    case 481u: goto L_001B3600;
    case 482u: goto L_001B3640;
    case 483u: goto L_001B365C;
    case 484u: goto L_001B3674;
    case 485u: goto L_001B36B0;
    case 486u: goto L_001B36C0;
    case 487u: goto L_001B36E8;
    case 488u: goto L_001B3708;
    case 489u: goto L_001B371C;
    case 490u: goto L_001B3730;
    case 491u: goto L_001B3738;
    case 492u: goto L_001B3740;
    case 493u: goto L_001B374C;
    case 494u: goto L_001B3780;
    case 495u: goto L_001B37AC;
    case 496u: goto L_001B37D0;
    case 497u: goto L_001B37FC;
    case 498u: goto L_001B380C;
    case 499u: goto L_001B3820;
    case 500u: goto L_001B3840;
    case 501u: goto L_001B3854;
    case 502u: goto L_001B3864;
    case 503u: goto L_001B3878;
    case 504u: goto L_001B3888;
    case 505u: goto L_001B38A8;
    case 506u: goto L_001B38C0;
    case 507u: goto L_001B38D0;
    case 508u: goto L_001B38E0;
    case 509u: goto L_001B38F0;
    case 510u: goto L_001B3920;
    case 511u: goto L_001B39C0;
    case 512u: goto L_001B39F0;
    case 513u: goto L_001B3A00;
    case 514u: goto L_001B3A2C;
    case 515u: goto L_001B3A48;
    case 516u: goto L_001B3A50;
    case 517u: goto L_001B3A58;
    case 518u: goto L_001B3A64;
    case 519u: goto L_001B3AA0;
    case 520u: goto L_001B3AD8;
    case 521u: goto L_001B3B10;
    case 522u: goto L_001B3B38;
    case 523u: goto L_001B3B60;
    case 524u: goto L_001B3B88;
    case 525u: goto L_001B3BB0;
    case 526u: goto L_001B3BF8;
    case 527u: goto L_001B3C04;
    case 528u: goto L_001B3C24;
    case 529u: goto L_001B3C30;
    case 530u: goto L_001B3C48;
    case 531u: goto L_001B3C54;
    case 532u: goto L_001B3C74;
    case 533u: goto L_001B3C94;
    case 534u: goto L_001B3CB0;
    case 535u: goto L_001B3CC0;
    case 536u: goto L_001B3CEC;
    case 537u: goto L_001B3D00;
    case 538u: goto L_001B3D30;
    case 539u: goto L_001B3D40;
    case 540u: goto L_001B3D50;
    case 541u: goto L_001B3D80;
    case 542u: goto L_001B3DB4;
    case 543u: goto L_001B3E20;
    case 544u: goto L_001B3E58;
    case 545u: goto L_001B3E74;
    case 546u: goto L_001B3E84;
    case 547u: goto L_001B3EAC;
    case 548u: goto L_001B3EC8;
    case 549u: goto L_001B3EDC;
    case 550u: goto L_001B3EF0;
    case 551u: goto L_001B3F04;
    case 552u: goto L_001B3F0C;
    case 553u: goto L_001B3F14;
    case 554u: goto L_001B3F20;
    case 555u: goto L_001B3F60;
    case 556u: goto L_001B3F94;
    case 557u: goto L_001B3FA8;
    case 558u: goto L_001B3FB8;
    case 559u: goto L_001B3FCC;
    case 560u: goto L_001B3FEC;
    default: bad_entry(c, 0x001B0000u); return;
    }
L_001B0000:
    fpu_div(c, 12u, c.f[12], c.f[0]);
    c.f[12] = fp::sub(c.f[12], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0130; } }
L_001B0014:
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0224; } }
L_001B0024:
    c.f[12] = ld32((c.r[17].w[0] + 112u));
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B00A8; } }
    c.f[0] = ld32((c.r[17].w[0] + 96u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B0224; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    fpu_div(c, 12u, c.f[12], c.f[2]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    fpu_div(c, 12u, c.f[12], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0098u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x001B0098u) [[unlikely]] return; }
L_001B0098:
    c.f[6] = ld32((c.r[16].w[0] + 336u));
    set32(c.r[3], c.r[16].w[0] + 336u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0140; } }
L_001B00A8:
    c.f[1] = ld32((c.r[16].w[0] + 336u));
    set32(c.r[2], c.r[16].w[0] + 336u);
    set32(c.r[3], c.r[16].w[0] + 320u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[16].w[0] + 320u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0224; } }
L_001B00E0:
    c.f[12] = ld32((c.r[17].w[0] + 112u));
    c.f[3] = ld32((c.r[17].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B01DC; } }
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[2]);
    fpu_div(c, 12u, c.f[12], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    fpu_div(c, 12u, c.f[12], c.f[2]);
    c.budget -= 14;
L_001B0130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0138u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x001B0138u) [[unlikely]] return; }
L_001B0138:
    c.f[6] = ld32((c.r[16].w[0] + 304u));
    set32(c.r[3], c.r[16].w[0] + 304u);
    c.budget -= 2;
L_001B0140:
    c.f[4] = ld32((c.r[16].w[0] + 320u));
    set32(c.r[2], c.r[16].w[0] + 320u);
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.f[4] = fp::sub(c.f[4], c.f[6]);
    st32((c.r[29].w[0]), c.f[4]);
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[6] = fp::add(c.f[6], c.f[4]);
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[3]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[5] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[16].w[0] + 352u), c.f[6]);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    st32((c.r[29].w[0]), c.f[4]);
    st32((c.r[29].w[0] + 4u), c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 12u), c.f[1]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[1] = ld32((c.r[29].w[0] + 12u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.budget -= 39;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0224; } }
L_001B01DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001B0220; } }
    c.f[1] = ld32((c.r[16].w[0] + 304u));
    set32(c.r[2], c.r[16].w[0] + 304u);
    set32(c.r[3], c.r[16].w[0] + 352u);
    st32((c.r[16].w[0] + 352u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 112u), 0u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0224; } }
L_001B0220:
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 1;
L_001B0224:
    c.f[0] = ld32((c.r[17].w[0] + 112u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 112u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B026C; } }
L_001B0244:
    c.f[1] = ld32((c.r[16].w[0] + 304u));
    set32(c.r[2], c.r[16].w[0] + 304u);
    set32(c.r[3], c.r[16].w[0] + 352u);
    st32((c.r[16].w[0] + 352u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 10;
L_001B026C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B0288:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[1] = c.r[1].w[0];
    st32((c.r[29].w[0] + 80u), c.f[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[2] = 0u;
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B02D8; } }
    st32((c.r[19].w[0] + 8u), c.f[2]);
    c.budget -= 1;
L_001B02D8:
    set32(c.r[16], c.r[19].w[0] + 12u);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001B0320; } }
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001B02F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[12] = c.f[20];
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B030Cu);  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001AFF20u; return; } if (c.pc != 0x001B030Cu) [[unlikely]] return; }
L_001B030C:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B02F8u | kUnwind; return; } goto L_001B02F8; } }
L_001B0320:
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B03E8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 260u)));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B0354; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B0354:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001B03E8; } }
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B03A4; } }
    set32(c.r[2], c.r[4].w[0] - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001B03A4; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001B0380:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0380u | kUnwind; return; } goto L_001B0380; } }
L_001B03A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B03E4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B03E4; } }
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B03E8; } }
L_001B03E4:
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 1;
L_001B03E8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B0410:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[22].w[0] + 12u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 18;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001B0628; } }
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[30], 0u + 6u);
    c.r[21].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
L_001B0468:
    set32(c.r[17], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B047Cu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B047Cu) [[unlikely]] return; }
L_001B047C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0484u);  if (depth < kMaxDepth) unit_0049(c, 178u, depth + 1u); else { c.pc = 0x00226558u; return; } if (c.pc != 0x001B0484u) [[unlikely]] return; }
L_001B0484:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0498u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x001B0498u) [[unlikely]] return; }
L_001B0498:
    mmi::div(c, 0, c.r[2].w[0], c.r[30].w[0]);
    c.budget -= 3;
    if (c.r[30].d[0] == 0ull) { breakpoint(c, 0x001B04A0u);  goto L_001B04A4; }
L_001B04A4:
    set32(c.r[5], ld32((c.r[22].w[0] + 4u)));
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 3u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001B04D4; } }
    set32(c.r[18], c.r[2].w[0] + 110u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B04DC; } }
L_001B04D4:
    set32(c.r[2], c.r[2].w[0] + 110u);
    set32(c.r[18], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_001B04DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 264u)));
    c.f[0] = c.r[19].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[1].w[0];
    c.f[4] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    c.f[3] = c.r[1].w[0];
    fpu_div(c, 2u, c.f[2], c.f[4]);
    c.f[1] = ld32((c.r[22].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[20]));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[20], c.f[1]);
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B0590; } }
    c.f[0] = fp::sub(c.f[20], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32639ull;
    c.f[13] = fp::add(c.f[2], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    if (c.r[4].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0590u);  if (depth < kMaxDepth) unit_002C(c, 53u, depth + 1u); else { c.pc = 0x001B08D8u; return; } if (c.pc != 0x001B0590u) [[unlikely]] return; }
L_001B0590:
    set32(c.r[2], c.r[17].w[0] + 352u);
    c.f[0] = ld32((c.r[17].w[0] + 352u));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.f[3] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[3]);
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[16], c.f[0]);
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[1]);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[16], c.r[16].w[0] << 24);
    c.r[16].d[0] = c.r[16].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[16], 0u - c.r[16].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B05F0u);  if (depth < kMaxDepth) unit_0036(c, 318u, depth + 1u); else { c.pc = 0x001DA9B8u; return; } if (c.pc != 0x001B05F0u) [[unlikely]] return; }
L_001B05F0:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.f[13] = c.f[12];
    set32(c.r[8], 0u + 2u);
    c.r[9].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0618u);  if (depth < kMaxDepth) unit_001D(c, 166u, depth + 1u); else { c.pc = 0x00176090u; return; } if (c.pc != 0x001B0618u) [[unlikely]] return; }
L_001B0618:
    set32(c.r[2], ld32((c.r[23].w[0] + 40u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0468u | kUnwind; return; } goto L_001B0468; } }
L_001B0628:
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
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B0660:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B0668:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B0678:
    set32(c.r[2], ld32((c.r[4].w[0] + 260u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B0688:
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B0698:
    set32(c.r[2], c.r[4].w[0] + 272u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B06A8:
    set32(c.r[2], ld32((c.r[4].w[0] + 260u)));
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B06CC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B06CC:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B06D8:
    set32(c.r[4], c.r[4].w[0] + 12u);
    c.budget -= 1;
L_001B06DC:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0708; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B06DCu | kUnwind; return; } goto L_001B06DC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B06DCu | kUnwind; return; } goto L_001B06DC; } }
    c.budget -= 1;
L_001B0708:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B0710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0728u);  if (depth < kMaxDepth) unit_002C(c, 9u, depth + 1u); else { c.pc = 0x001B0288u; return; } if (c.pc != 0x001B0728u) [[unlikely]] return; }
L_001B0728:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0734u);  if (depth < kMaxDepth) unit_002C(c, 13u, depth + 1u); else { c.pc = 0x001B0410u; return; } if (c.pc != 0x001B0734u) [[unlikely]] return; }
L_001B0734:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B0748:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B076Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B076Cu) [[unlikely]] return; }
L_001B076C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B077Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B077Cu) [[unlikely]] return; }
L_001B077C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B078Cu);  if (depth < kMaxDepth) unit_002B(c, 396u, depth + 1u); else { c.pc = 0x001AFC20u; return; } if (c.pc != 0x001B078Cu) [[unlikely]] return; }
L_001B078C:
    set32(c.r[3], c.r[17].w[0] + 12u);
    set32(c.r[4], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 8;
L_001B07AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B07D8; } }
L_001B07B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B07BCu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B07BCu) [[unlikely]] return; }
L_001B07BC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B07C8u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B07C8u) [[unlikely]] return; }
L_001B07C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B07B4u | kUnwind; return; } goto L_001B07B4; } }
L_001B07D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B07D8u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B07D8u) [[unlikely]] return; }
L_001B07D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B07F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0814u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B0814u) [[unlikely]] return; }
L_001B0814:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0824u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B0824u) [[unlikely]] return; }
L_001B0824:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0834u);  if (depth < kMaxDepth) unit_002B(c, 396u, depth + 1u); else { c.pc = 0x001AFC20u; return; } if (c.pc != 0x001B0834u) [[unlikely]] return; }
L_001B0834:
    set32(c.r[3], c.r[17].w[0] + 12u);
    set32(c.r[4], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 8;
L_001B0854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0880; } }
L_001B085C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0864u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B0864u) [[unlikely]] return; }
L_001B0864:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0870u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B0870u) [[unlikely]] return; }
L_001B0870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B085Cu | kUnwind; return; } goto L_001B085C; } }
L_001B0878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0880u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B0880u) [[unlikely]] return; }
L_001B0880:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B0898:
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    c.f[2] = c.r[1].w[0];
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B08D8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[9].d[0] = c.r[29].d[0] | 4ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 120u), c.f[21]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.f[21] = c.f[13];
    c.f[20] = c.f[12];
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0938u);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x001B0938u) [[unlikely]] return; }
L_001B0938:
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] >> 31);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.f[12] = c.f[20];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.f[13] = c.f[21];
    set32(c.r[5], c.r[20].w[0] - c.r[5].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B096Cu);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001B096Cu) [[unlikely]] return; }
L_001B096C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[21] = ld32((c.r[29].w[0] + 120u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B0998:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001B09D4; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 640u)));
    if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[6].d[0];
    c.budget -= 2;
L_001B09D4:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0C20; } }
L_001B09E0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B0A08; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0A00u);  if (depth < kMaxDepth) unit_002C(c, 270u, depth + 1u); else { c.pc = 0x001B1DA0u; return; } if (c.pc != 0x001B0A00u) [[unlikely]] return; }
L_001B0A00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0C14; } }
L_001B0A08:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B0A30; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0A28u);  if (depth < kMaxDepth) unit_002C(c, 282u, depth + 1u); else { c.pc = 0x001B1E88u; return; } if (c.pc != 0x001B0A28u) [[unlikely]] return; }
L_001B0A28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0C14; } }
L_001B0A30:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B0A58; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0A50u);  if (depth < kMaxDepth) unit_002C(c, 294u, depth + 1u); else { c.pc = 0x001B1F70u; return; } if (c.pc != 0x001B0A50u) [[unlikely]] return; }
L_001B0A50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0C14; } }
L_001B0A58:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B0A80; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0A78u);  if (depth < kMaxDepth) unit_002C(c, 116u, depth + 1u); else { c.pc = 0x001B0FF0u; return; } if (c.pc != 0x001B0A78u) [[unlikely]] return; }
L_001B0A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0C14; } }
L_001B0A80:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B0AA8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0AA0u);  if (depth < kMaxDepth) unit_002C(c, 129u, depth + 1u); else { c.pc = 0x001B10F8u; return; } if (c.pc != 0x001B0AA0u) [[unlikely]] return; }
L_001B0AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0C14; } }
L_001B0AA8:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B0AD0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0AC8u);  if (depth < kMaxDepth) unit_002C(c, 142u, depth + 1u); else { c.pc = 0x001B1200u; return; } if (c.pc != 0x001B0AC8u) [[unlikely]] return; }
L_001B0AC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0C14; } }
L_001B0AD0:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B0AF8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0AF0u);  if (depth < kMaxDepth) unit_002C(c, 155u, depth + 1u); else { c.pc = 0x001B1308u; return; } if (c.pc != 0x001B0AF0u) [[unlikely]] return; }
L_001B0AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0C14; } }
L_001B0AF8:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B0B20; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0B18u);  if (depth < kMaxDepth) unit_002C(c, 168u, depth + 1u); else { c.pc = 0x001B1410u; return; } if (c.pc != 0x001B0B18u) [[unlikely]] return; }
L_001B0B18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0C14; } }
L_001B0B20:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B0B48; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0B40u);  if (depth < kMaxDepth) unit_002C(c, 181u, depth + 1u); else { c.pc = 0x001B1518u; return; } if (c.pc != 0x001B0B40u) [[unlikely]] return; }
L_001B0B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0C14; } }
L_001B0B48:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B0B70; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0B68u);  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B16D8u; return; } if (c.pc != 0x001B0B68u) [[unlikely]] return; }
L_001B0B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0C14; } }
L_001B0B70:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B0CB0; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B0BA4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0B9Cu);  if (depth < kMaxDepth) unit_002C(c, 219u, depth + 1u); else { c.pc = 0x001B1898u; return; } if (c.pc != 0x001B0B9Cu) [[unlikely]] return; }
L_001B0B9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0C14; } }
L_001B0BA4:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B0BCC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0BC4u);  if (depth < kMaxDepth) unit_002C(c, 238u, depth + 1u); else { c.pc = 0x001B1A58u; return; } if (c.pc != 0x001B0BC4u) [[unlikely]] return; }
L_001B0BC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0C14; } }
L_001B0BCC:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B0BF4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0BECu);  if (depth < kMaxDepth) unit_002C(c, 306u, depth + 1u); else { c.pc = 0x001B2058u; return; } if (c.pc != 0x001B0BECu) [[unlikely]] return; }
L_001B0BEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0C14; } }
L_001B0BF4:
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B0CB0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0C14u);  if (depth < kMaxDepth) unit_002C(c, 318u, depth + 1u); else { c.pc = 0x001B2140u; return; } if (c.pc != 0x001B0C14u) [[unlikely]] return; }
L_001B0C14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B0CB0; } }
L_001B0C1C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001B0C20:
    c.r[2].d[0] = c.r[19].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0CB0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0C38u);  if (depth < kMaxDepth) unit_0097(c, 298u, depth + 1u); else { c.pc = 0x0035F358u; return; } if (c.pc != 0x001B0C38u) [[unlikely]] return; }
L_001B0C38:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B0C60; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0C58u);  if (depth < kMaxDepth) unit_002C(c, 77u, depth + 1u); else { c.pc = 0x001B0CD8u; return; } if (c.pc != 0x001B0C58u) [[unlikely]] return; }
L_001B0C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0C14u | kUnwind; return; } goto L_001B0C14; } }
L_001B0C60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B0C88; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0C80u);  if (depth < kMaxDepth) unit_002C(c, 90u, depth + 1u); else { c.pc = 0x001B0DE0u; return; } if (c.pc != 0x001B0C80u) [[unlikely]] return; }
L_001B0C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0C14u | kUnwind; return; } goto L_001B0C14; } }
L_001B0C88:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B09E0u | kUnwind; return; } goto L_001B09E0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0CA8u);  if (depth < kMaxDepth) unit_002C(c, 103u, depth + 1u); else { c.pc = 0x001B0EE8u; return; } if (c.pc != 0x001B0CA8u) [[unlikely]] return; }
L_001B0CA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0C1Cu | kUnwind; return; } goto L_001B0C1C; } }
L_001B0CB0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B0CD8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28720u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0D0Cu);  if (depth < kMaxDepth) unit_002D(c, 17u, depth + 1u); else { c.pc = 0x001B41F8u; return; } if (c.pc != 0x001B0D0Cu) [[unlikely]] return; }
L_001B0D0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0D1Cu);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B0D1Cu) [[unlikely]] return; }
L_001B0D1C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0D2Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B0D2Cu) [[unlikely]] return; }
L_001B0D2C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0D3Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B0D3Cu) [[unlikely]] return; }
L_001B0D3C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0D54u);  if (depth < kMaxDepth) unit_002D(c, 193u, depth + 1u); else { c.pc = 0x001B5CB8u; return; } if (c.pc != 0x001B0D54u) [[unlikely]] return; }
L_001B0D54:
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[2].w[0] + 304u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_001B0D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0D8C; } }
L_001B0D84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0D8Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B0D8Cu) [[unlikely]] return; }
L_001B0D8C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0DC0; } }
L_001B0D98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0DC0; } }
L_001B0DA4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0DB0u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B0DB0u) [[unlikely]] return; }
L_001B0DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0D84u | kUnwind; return; } goto L_001B0D84; } }
L_001B0DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0DC0u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B0DC0u) [[unlikely]] return; }
L_001B0DC0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B0DE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28784u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0E14u);  if (depth < kMaxDepth) unit_002D(c, 17u, depth + 1u); else { c.pc = 0x001B41F8u; return; } if (c.pc != 0x001B0E14u) [[unlikely]] return; }
L_001B0E14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0EA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0E24u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B0E24u) [[unlikely]] return; }
L_001B0E24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0E34u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B0E34u) [[unlikely]] return; }
L_001B0E34:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0E44u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B0E44u) [[unlikely]] return; }
L_001B0E44:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0E5Cu);  if (depth < kMaxDepth) unit_002D(c, 205u, depth + 1u); else { c.pc = 0x001B5E58u; return; } if (c.pc != 0x001B0E5Cu) [[unlikely]] return; }
L_001B0E5C:
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[2].w[0] + 304u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_001B0E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0E94; } }
L_001B0E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0E94u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B0E94u) [[unlikely]] return; }
L_001B0E94:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0EC8; } }
L_001B0EA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0EC8; } }
L_001B0EAC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0EB8u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B0EB8u) [[unlikely]] return; }
L_001B0EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0E8Cu | kUnwind; return; } goto L_001B0E8C; } }
L_001B0EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0EC8u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B0EC8u) [[unlikely]] return; }
L_001B0EC8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B0EE8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28848u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0F1Cu);  if (depth < kMaxDepth) unit_002D(c, 17u, depth + 1u); else { c.pc = 0x001B41F8u; return; } if (c.pc != 0x001B0F1Cu) [[unlikely]] return; }
L_001B0F1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0FA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0F2Cu);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B0F2Cu) [[unlikely]] return; }
L_001B0F2C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0F3Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B0F3Cu) [[unlikely]] return; }
L_001B0F3C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0F4Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B0F4Cu) [[unlikely]] return; }
L_001B0F4C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0F64u);  if (depth < kMaxDepth) unit_002D(c, 217u, depth + 1u); else { c.pc = 0x001B5FF8u; return; } if (c.pc != 0x001B0F64u) [[unlikely]] return; }
L_001B0F64:
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[2].w[0] + 304u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_001B0F8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0F9C; } }
L_001B0F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0F9Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B0F9Cu) [[unlikely]] return; }
L_001B0F9C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0FD0; } }
L_001B0FA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0FD0; } }
L_001B0FB4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0FC0u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B0FC0u) [[unlikely]] return; }
L_001B0FC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0F94u | kUnwind; return; } goto L_001B0F94; } }
L_001B0FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0FD0u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B0FD0u) [[unlikely]] return; }
L_001B0FD0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B0FF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28912u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1024u);  if (depth < kMaxDepth) unit_002D(c, 17u, depth + 1u); else { c.pc = 0x001B41F8u; return; } if (c.pc != 0x001B1024u) [[unlikely]] return; }
L_001B1024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B10B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1034u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B1034u) [[unlikely]] return; }
L_001B1034:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1044u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B1044u) [[unlikely]] return; }
L_001B1044:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1054u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B1054u) [[unlikely]] return; }
L_001B1054:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B106Cu);  if (depth < kMaxDepth) unit_002D(c, 229u, depth + 1u); else { c.pc = 0x001B6198u; return; } if (c.pc != 0x001B106Cu) [[unlikely]] return; }
L_001B106C:
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[2].w[0] + 304u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_001B1094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B10A4; } }
L_001B109C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B10A4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B10A4u) [[unlikely]] return; }
L_001B10A4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B10D8; } }
L_001B10B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B10D8; } }
L_001B10BC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B10C8u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B10C8u) [[unlikely]] return; }
L_001B10C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B109Cu | kUnwind; return; } goto L_001B109C; } }
L_001B10D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B10D8u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B10D8u) [[unlikely]] return; }
L_001B10D8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B10F8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28976u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B112Cu);  if (depth < kMaxDepth) unit_002D(c, 17u, depth + 1u); else { c.pc = 0x001B41F8u; return; } if (c.pc != 0x001B112Cu) [[unlikely]] return; }
L_001B112C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B11B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B113Cu);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B113Cu) [[unlikely]] return; }
L_001B113C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B114Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B114Cu) [[unlikely]] return; }
L_001B114C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B115Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B115Cu) [[unlikely]] return; }
L_001B115C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1174u);  if (depth < kMaxDepth) unit_002D(c, 241u, depth + 1u); else { c.pc = 0x001B6338u; return; } if (c.pc != 0x001B1174u) [[unlikely]] return; }
L_001B1174:
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[2].w[0] + 304u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_001B119C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B11AC; } }
L_001B11A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B11ACu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B11ACu) [[unlikely]] return; }
L_001B11AC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B11E0; } }
L_001B11B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B11E0; } }
L_001B11C4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B11D0u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B11D0u) [[unlikely]] return; }
L_001B11D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B11A4u | kUnwind; return; } goto L_001B11A4; } }
L_001B11D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B11E0u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B11E0u) [[unlikely]] return; }
L_001B11E0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B1200:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29040u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1234u);  if (depth < kMaxDepth) unit_002D(c, 17u, depth + 1u); else { c.pc = 0x001B41F8u; return; } if (c.pc != 0x001B1234u) [[unlikely]] return; }
L_001B1234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B12C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1244u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B1244u) [[unlikely]] return; }
L_001B1244:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1254u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B1254u) [[unlikely]] return; }
L_001B1254:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1264u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B1264u) [[unlikely]] return; }
L_001B1264:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B127Cu);  if (depth < kMaxDepth) unit_002D(c, 253u, depth + 1u); else { c.pc = 0x001B64D8u; return; } if (c.pc != 0x001B127Cu) [[unlikely]] return; }
L_001B127C:
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[2].w[0] + 304u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_001B12A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B12B4; } }
L_001B12AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B12B4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B12B4u) [[unlikely]] return; }
L_001B12B4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B12E8; } }
L_001B12C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B12E8; } }
L_001B12CC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B12D8u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B12D8u) [[unlikely]] return; }
L_001B12D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B12ACu | kUnwind; return; } goto L_001B12AC; } }
L_001B12E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B12E8u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B12E8u) [[unlikely]] return; }
L_001B12E8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B1308:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29104u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B133Cu);  if (depth < kMaxDepth) unit_002D(c, 17u, depth + 1u); else { c.pc = 0x001B41F8u; return; } if (c.pc != 0x001B133Cu) [[unlikely]] return; }
L_001B133C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B13C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B134Cu);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B134Cu) [[unlikely]] return; }
L_001B134C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B135Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B135Cu) [[unlikely]] return; }
L_001B135C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B136Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B136Cu) [[unlikely]] return; }
L_001B136C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1384u);  if (depth < kMaxDepth) unit_002D(c, 265u, depth + 1u); else { c.pc = 0x001B6678u; return; } if (c.pc != 0x001B1384u) [[unlikely]] return; }
L_001B1384:
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[2].w[0] + 304u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_001B13AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B13BC; } }
L_001B13B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B13BCu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B13BCu) [[unlikely]] return; }
L_001B13BC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B13F0; } }
L_001B13C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B13F0; } }
L_001B13D4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B13E0u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B13E0u) [[unlikely]] return; }
L_001B13E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B13B4u | kUnwind; return; } goto L_001B13B4; } }
L_001B13E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B13F0u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B13F0u) [[unlikely]] return; }
L_001B13F0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B1410:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29168u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1444u);  if (depth < kMaxDepth) unit_002D(c, 17u, depth + 1u); else { c.pc = 0x001B41F8u; return; } if (c.pc != 0x001B1444u) [[unlikely]] return; }
L_001B1444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B14D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1454u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B1454u) [[unlikely]] return; }
L_001B1454:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1464u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B1464u) [[unlikely]] return; }
L_001B1464:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1474u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B1474u) [[unlikely]] return; }
L_001B1474:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B148Cu);  if (depth < kMaxDepth) unit_002D(c, 277u, depth + 1u); else { c.pc = 0x001B6818u; return; } if (c.pc != 0x001B148Cu) [[unlikely]] return; }
L_001B148C:
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[2].w[0] + 304u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_001B14B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B14C4; } }
L_001B14BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B14C4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B14C4u) [[unlikely]] return; }
L_001B14C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B14F8; } }
L_001B14D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B14F8; } }
L_001B14DC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B14E8u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B14E8u) [[unlikely]] return; }
L_001B14E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B14BCu | kUnwind; return; } goto L_001B14BC; } }
L_001B14F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B14F8u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B14F8u) [[unlikely]] return; }
L_001B14F8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B1518:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[16].w[0] - 31928u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[2].w[0] + 29616u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1560u);  if (depth < kMaxDepth) unit_0031(c, 143u, depth + 1u); else { c.pc = 0x001C5318u; return; } if (c.pc != 0x001B1560u) [[unlikely]] return; }
L_001B1560:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B15AC; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1588u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B1588u) [[unlikely]] return; }
L_001B1588:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] - 30680u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B15A0u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001B15A0u) [[unlikely]] return; }
L_001B15A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B16B4; } }
L_001B15AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16056u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B15A0u | kUnwind; return; } goto L_001B15A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B15C4u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001B15C4u) [[unlikely]] return; }
L_001B15C4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 120u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B15E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B15E0u) [[unlikely]] return; }
L_001B15E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B15A0u | kUnwind; return; } goto L_001B15A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B15F0u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001B15F0u) [[unlikely]] return; }
L_001B15F0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 136u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 140u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B160Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B160Cu) [[unlikely]] return; }
L_001B160C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B15A0u | kUnwind; return; } goto L_001B15A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B161Cu);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B161Cu) [[unlikely]] return; }
L_001B161C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B162Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B162Cu) [[unlikely]] return; }
L_001B162C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B163Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B163Cu) [[unlikely]] return; }
L_001B163C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1654u);  if (depth < kMaxDepth) unit_002D(c, 432u, depth + 1u); else { c.pc = 0x001B7F60u; return; } if (c.pc != 0x001B1654u) [[unlikely]] return; }
L_001B1654:
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[2].w[0] + 288u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_001B167C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B168C; } }
L_001B1684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B168Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B168Cu) [[unlikely]] return; }
L_001B168C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B16B4; } }
L_001B1698:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B16A4u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B16A4u) [[unlikely]] return; }
L_001B16A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1684u | kUnwind; return; } goto L_001B1684; } }
L_001B16AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B16B4u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B16B4u) [[unlikely]] return; }
L_001B16B4:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B16D8:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[16].w[0] - 31928u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[2].w[0] + 29872u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1720u);  if (depth < kMaxDepth) unit_0031(c, 143u, depth + 1u); else { c.pc = 0x001C5318u; return; } if (c.pc != 0x001B1720u) [[unlikely]] return; }
L_001B1720:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B176C; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1748u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B1748u) [[unlikely]] return; }
L_001B1748:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] - 30680u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1760u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001B1760u) [[unlikely]] return; }
L_001B1760:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1874; } }
L_001B176C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 15864u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1760u | kUnwind; return; } goto L_001B1760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1784u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001B1784u) [[unlikely]] return; }
L_001B1784:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 120u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B17A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B17A0u) [[unlikely]] return; }
L_001B17A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1760u | kUnwind; return; } goto L_001B1760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B17B0u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001B17B0u) [[unlikely]] return; }
L_001B17B0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 136u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 140u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B17CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B17CCu) [[unlikely]] return; }
L_001B17CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1760u | kUnwind; return; } goto L_001B1760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B17DCu);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B17DCu) [[unlikely]] return; }
L_001B17DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B17ECu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B17ECu) [[unlikely]] return; }
L_001B17EC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B17FCu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B17FCu) [[unlikely]] return; }
L_001B17FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1814u);  if (depth < kMaxDepth) unit_002E(c, 9u, depth + 1u); else { c.pc = 0x001B8108u; return; } if (c.pc != 0x001B1814u) [[unlikely]] return; }
L_001B1814:
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[2].w[0] + 288u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_001B183C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B184C; } }
L_001B1844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B184Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B184Cu) [[unlikely]] return; }
L_001B184C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1874; } }
L_001B1858:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1864u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B1864u) [[unlikely]] return; }
L_001B1864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1844u | kUnwind; return; } goto L_001B1844; } }
L_001B186C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1874u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B1874u) [[unlikely]] return; }
L_001B1874:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B1898:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[16].w[0] - 31928u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[2].w[0] + 30128u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B18E0u);  if (depth < kMaxDepth) unit_0031(c, 143u, depth + 1u); else { c.pc = 0x001C5318u; return; } if (c.pc != 0x001B18E0u) [[unlikely]] return; }
L_001B18E0:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B192C; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1908u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B1908u) [[unlikely]] return; }
L_001B1908:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] - 30680u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1920u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001B1920u) [[unlikely]] return; }
L_001B1920:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1A34; } }
L_001B192C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 15672u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1920u | kUnwind; return; } goto L_001B1920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1944u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001B1944u) [[unlikely]] return; }
L_001B1944:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 120u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1960u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B1960u) [[unlikely]] return; }
L_001B1960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1920u | kUnwind; return; } goto L_001B1920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1970u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001B1970u) [[unlikely]] return; }
L_001B1970:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 136u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 140u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B198Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B198Cu) [[unlikely]] return; }
L_001B198C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1920u | kUnwind; return; } goto L_001B1920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B199Cu);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B199Cu) [[unlikely]] return; }
L_001B199C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B19ACu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B19ACu) [[unlikely]] return; }
L_001B19AC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B19BCu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B19BCu) [[unlikely]] return; }
L_001B19BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B19D4u);  if (depth < kMaxDepth) unit_002E(c, 20u, depth + 1u); else { c.pc = 0x001B82B0u; return; } if (c.pc != 0x001B19D4u) [[unlikely]] return; }
L_001B19D4:
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[2].w[0] + 288u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_001B19FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1A0C; } }
L_001B1A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1A0Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B1A0Cu) [[unlikely]] return; }
L_001B1A0C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1A34; } }
L_001B1A18:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1A24u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B1A24u) [[unlikely]] return; }
L_001B1A24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1A04u | kUnwind; return; } goto L_001B1A04; } }
L_001B1A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1A34u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B1A34u) [[unlikely]] return; }
L_001B1A34:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B1A58:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[16].w[0] - 31928u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[2].w[0] + 30384u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1AA0u);  if (depth < kMaxDepth) unit_0031(c, 143u, depth + 1u); else { c.pc = 0x001C5318u; return; } if (c.pc != 0x001B1AA0u) [[unlikely]] return; }
L_001B1AA0:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B1AEC; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1AC8u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B1AC8u) [[unlikely]] return; }
L_001B1AC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] - 30680u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1AE0u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001B1AE0u) [[unlikely]] return; }
L_001B1AE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1BF4; } }
L_001B1AEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 15480u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1AE0u | kUnwind; return; } goto L_001B1AE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B04u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001B1B04u) [[unlikely]] return; }
L_001B1B04:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 120u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B1B20u) [[unlikely]] return; }
L_001B1B20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1AE0u | kUnwind; return; } goto L_001B1AE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B30u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001B1B30u) [[unlikely]] return; }
L_001B1B30:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 136u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 140u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B1B4Cu) [[unlikely]] return; }
L_001B1B4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1AE0u | kUnwind; return; } goto L_001B1AE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B5Cu);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B1B5Cu) [[unlikely]] return; }
L_001B1B5C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B6Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B1B6Cu) [[unlikely]] return; }
L_001B1B6C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B7Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B1B7Cu) [[unlikely]] return; }
L_001B1B7C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B94u);  if (depth < kMaxDepth) unit_002E(c, 31u, depth + 1u); else { c.pc = 0x001B8458u; return; } if (c.pc != 0x001B1B94u) [[unlikely]] return; }
L_001B1B94:
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[2].w[0] + 288u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_001B1BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1BCC; } }
L_001B1BC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1BCCu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B1BCCu) [[unlikely]] return; }
L_001B1BCC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1BF4; } }
L_001B1BD8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1BE4u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B1BE4u) [[unlikely]] return; }
L_001B1BE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1BC4u | kUnwind; return; } goto L_001B1BC4; } }
L_001B1BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1BF4u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B1BF4u) [[unlikely]] return; }
L_001B1BF4:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B1C18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B1D88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B1D88; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 28496u);
    set32(c.r[2], c.r[2].w[0] - 30376u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1C58u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001B1C58u) [[unlikely]] return; }
L_001B1C58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 30776u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1C70u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001B1C70u) [[unlikely]] return; }
L_001B1C70:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 28512u);
    set32(c.r[2], c.r[2].w[0] - 30424u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1C90u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001B1C90u) [[unlikely]] return; }
L_001B1C90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 30760u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1CA8u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001B1CA8u) [[unlikely]] return; }
L_001B1CA8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 28528u);
    set32(c.r[2], c.r[2].w[0] - 30472u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1CC8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001B1CC8u) [[unlikely]] return; }
L_001B1CC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 30744u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1CE0u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001B1CE0u) [[unlikely]] return; }
L_001B1CE0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 28544u);
    set32(c.r[2], c.r[2].w[0] - 30520u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D00u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001B1D00u) [[unlikely]] return; }
L_001B1D00:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 30728u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D18u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001B1D18u) [[unlikely]] return; }
L_001B1D18:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 28560u);
    set32(c.r[2], c.r[2].w[0] - 30568u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D38u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001B1D38u) [[unlikely]] return; }
L_001B1D38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 30712u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D50u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001B1D50u) [[unlikely]] return; }
L_001B1D50:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 28576u);
    set32(c.r[2], c.r[2].w[0] - 30616u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D70u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001B1D70u) [[unlikely]] return; }
L_001B1D70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 30696u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D88u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001B1D88u) [[unlikely]] return; }
L_001B1D88:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B1DA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1DCCu);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B1DCCu) [[unlikely]] return; }
L_001B1DCC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1DDCu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B1DDCu) [[unlikely]] return; }
L_001B1DDC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1DECu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B1DECu) [[unlikely]] return; }
L_001B1DEC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E04u);  if (depth < kMaxDepth) unit_002D(c, 401u, depth + 1u); else { c.pc = 0x001B7BA0u; return; } if (c.pc != 0x001B1E04u) [[unlikely]] return; }
L_001B1E04:
    set32(c.r[5], c.r[19].w[0] + 4u);
    set32(c.r[4], c.r[2].w[0] + 288u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_001B1E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1E3C; } }
L_001B1E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E3Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B1E3Cu) [[unlikely]] return; }
L_001B1E3C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1E64; } }
L_001B1E48:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E54u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B1E54u) [[unlikely]] return; }
L_001B1E54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1E34u | kUnwind; return; } goto L_001B1E34; } }
L_001B1E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E64u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B1E64u) [[unlikely]] return; }
L_001B1E64:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B1E88:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1EB4u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B1EB4u) [[unlikely]] return; }
L_001B1EB4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1EC4u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B1EC4u) [[unlikely]] return; }
L_001B1EC4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1ED4u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B1ED4u) [[unlikely]] return; }
L_001B1ED4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1EECu);  if (depth < kMaxDepth) unit_002D(c, 389u, depth + 1u); else { c.pc = 0x001B7958u; return; } if (c.pc != 0x001B1EECu) [[unlikely]] return; }
L_001B1EEC:
    set32(c.r[5], c.r[19].w[0] + 4u);
    set32(c.r[4], c.r[2].w[0] + 288u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_001B1F14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1F24; } }
L_001B1F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F24u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B1F24u) [[unlikely]] return; }
L_001B1F24:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1F4C; } }
L_001B1F30:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F3Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B1F3Cu) [[unlikely]] return; }
L_001B1F3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1F1Cu | kUnwind; return; } goto L_001B1F1C; } }
L_001B1F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F4Cu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B1F4Cu) [[unlikely]] return; }
L_001B1F4C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B1F70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F9Cu);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B1F9Cu) [[unlikely]] return; }
L_001B1F9C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1FACu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B1FACu) [[unlikely]] return; }
L_001B1FAC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1FBCu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B1FBCu) [[unlikely]] return; }
L_001B1FBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1FD4u);  if (depth < kMaxDepth) unit_002D(c, 377u, depth + 1u); else { c.pc = 0x001B7710u; return; } if (c.pc != 0x001B1FD4u) [[unlikely]] return; }
L_001B1FD4:
    set32(c.r[5], c.r[19].w[0] + 4u);
    set32(c.r[4], c.r[2].w[0] + 288u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_001B1FFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B200C; } }
L_001B2004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B200Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B200Cu) [[unlikely]] return; }
L_001B200C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2034; } }
L_001B2018:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2024u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B2024u) [[unlikely]] return; }
L_001B2024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2004u | kUnwind; return; } goto L_001B2004; } }
L_001B202C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2034u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B2034u) [[unlikely]] return; }
L_001B2034:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B2058:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2084u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B2084u) [[unlikely]] return; }
L_001B2084:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2094u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B2094u) [[unlikely]] return; }
L_001B2094:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B20A4u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B20A4u) [[unlikely]] return; }
L_001B20A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B20BCu);  if (depth < kMaxDepth) unit_002D(c, 331u, depth + 1u); else { c.pc = 0x001B6F60u; return; } if (c.pc != 0x001B20BCu) [[unlikely]] return; }
L_001B20BC:
    set32(c.r[5], c.r[19].w[0] + 4u);
    set32(c.r[4], c.r[2].w[0] + 288u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_001B20E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B20F4; } }
L_001B20EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B20F4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B20F4u) [[unlikely]] return; }
L_001B20F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B211C; } }
L_001B2100:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B210Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B210Cu) [[unlikely]] return; }
L_001B210C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B20ECu | kUnwind; return; } goto L_001B20EC; } }
L_001B2114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B211Cu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B211Cu) [[unlikely]] return; }
L_001B211C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B2140:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B216Cu);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B216Cu) [[unlikely]] return; }
L_001B216C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B217Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B217Cu) [[unlikely]] return; }
L_001B217C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B218Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B218Cu) [[unlikely]] return; }
L_001B218C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B21A4u);  if (depth < kMaxDepth) unit_002D(c, 319u, depth + 1u); else { c.pc = 0x001B6D98u; return; } if (c.pc != 0x001B21A4u) [[unlikely]] return; }
L_001B21A4:
    set32(c.r[5], c.r[19].w[0] + 4u);
    set32(c.r[4], c.r[2].w[0] + 288u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_001B21CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B21DC; } }
L_001B21D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B21DCu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B21DCu) [[unlikely]] return; }
L_001B21DC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2204; } }
L_001B21E8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B21F4u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B21F4u) [[unlikely]] return; }
L_001B21F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B21D4u | kUnwind; return; } goto L_001B21D4; } }
L_001B21FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2204u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B2204u) [[unlikely]] return; }
L_001B2204:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B2228:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B2238:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B2240:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B2248:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2264u);  if (depth < kMaxDepth) unit_002C(c, 444u, depth + 1u); else { c.pc = 0x001B3040u; return; } if (c.pc != 0x001B2264u) [[unlikely]] return; }
L_001B2264:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B2278:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B2288:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 28u), 0u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 16u), c.f[2]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[21], ld32((c.r[2].w[0])));
    set32(c.r[22], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[23], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[30], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2300u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B2300u) [[unlikely]] return; }
L_001B2300:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B231Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001B231Cu) [[unlikely]] return; }
L_001B231C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2328u);  if (depth < kMaxDepth) unit_002C(c, 443u, depth + 1u); else { c.pc = 0x001B3028u; return; } if (c.pc != 0x001B2328u) [[unlikely]] return; }
L_001B2328:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B233Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B233Cu) [[unlikely]] return; }
L_001B233C:
    st32((c.r[29].w[0]), c.r[19].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[22].d[0] + 0ull;
    c.r[10].d[0] = c.r[23].d[0] + 0ull;
    c.r[11].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B236Cu);  if (depth < kMaxDepth) unit_002D(c, 107u, depth + 1u); else { c.pc = 0x001B4EA0u; return; } if (c.pc != 0x001B236Cu) [[unlikely]] return; }
L_001B236C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2380; } }
L_001B2378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2380u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B2380u) [[unlikely]] return; }
L_001B2380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2388u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B2388u) [[unlikely]] return; }
L_001B2388:
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 80u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B23B8; } }
L_001B23B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2378u | kUnwind; return; } goto L_001B2378; } }
L_001B23B8:
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
L_001B23F0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B2400:
    set32(c.r[29], c.r[29].w[0] - 512u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + 6944u);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[17]);
    set32(c.r[16], 0u - 1u);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[19]);
    set32(c.r[8], 0u - 1u);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[21]);
    set32(c.r[7], 0u - 1u);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[22]);
    set32(c.r[9], 0u - 1u);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[23]);
    set32(c.r[10], 0u - 1u);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[30]);
    set32(c.r[11], 0u - 1u);
    st64((c.r[29].w[0] + 352u), c.r[31].d[0]);
    set32(c.r[30], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[29].w[0] + 336u), c.r[6].w[0]);
    set32(c.r[6], 0u - 1u);
    c.f[2] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[2]);
    st32((c.r[29].w[0] + 44u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B24A4u);  if (depth < kMaxDepth) unit_002D(c, 152u, depth + 1u); else { c.pc = 0x001B5570u; return; } if (c.pc != 0x001B24A4u) [[unlikely]] return; }
L_001B24A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[23], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + 6688u);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[16].w[0]);
    set32(c.r[6], 0u - 1u);
    st32((c.r[29].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[7], 0u - 1u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[10], 0u - 1u);
    set32(c.r[11], 0u - 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B24E8u);  if (depth < kMaxDepth) unit_002D(c, 152u, depth + 1u); else { c.pc = 0x001B5570u; return; } if (c.pc != 0x001B24E8u) [[unlikely]] return; }
L_001B24E8:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[22], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[2].w[0] + 6600u);
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[16].w[0]);
    set32(c.r[6], 0u - 1u);
    st32((c.r[29].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[7], 0u - 1u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[10], 0u - 1u);
    set32(c.r[11], 0u - 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B252Cu);  if (depth < kMaxDepth) unit_002D(c, 152u, depth + 1u); else { c.pc = 0x001B5570u; return; } if (c.pc != 0x001B252Cu) [[unlikely]] return; }
L_001B252C:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[21], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] + 6768u);
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[16].w[0]);
    set32(c.r[6], 0u - 1u);
    st32((c.r[29].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[7], 0u - 1u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[10], 0u - 1u);
    set32(c.r[11], 0u - 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2570u);  if (depth < kMaxDepth) unit_002D(c, 152u, depth + 1u); else { c.pc = 0x001B5570u; return; } if (c.pc != 0x001B2570u) [[unlikely]] return; }
L_001B2570:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[20], c.r[29].w[0] + 240u);
    set32(c.r[2], c.r[2].w[0] + 7032u);
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[16].w[0]);
    set32(c.r[6], 0u - 1u);
    st32((c.r[29].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[7], 0u - 1u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[10], 0u - 1u);
    set32(c.r[11], 0u - 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B25B4u);  if (depth < kMaxDepth) unit_002D(c, 152u, depth + 1u); else { c.pc = 0x001B5570u; return; } if (c.pc != 0x001B25B4u) [[unlikely]] return; }
L_001B25B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[18], c.r[29].w[0] + 288u);
    set32(c.r[3], c.r[3].w[0] + 6856u);
    st32((c.r[29].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[6], 0u - 1u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[10], 0u - 1u);
    set32(c.r[11], 0u - 1u);
    set32(c.r[5], 0u - 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B25F4u);  if (depth < kMaxDepth) unit_002D(c, 152u, depth + 1u); else { c.pc = 0x001B5570u; return; } if (c.pc != 0x001B25F4u) [[unlikely]] return; }
L_001B25F4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2600u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B2600u) [[unlikely]] return; }
L_001B2600:
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2620u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001B2620u) [[unlikely]] return; }
L_001B2620:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B262Cu);  if (depth < kMaxDepth) unit_002C(c, 443u, depth + 1u); else { c.pc = 0x001B3028u; return; } if (c.pc != 0x001B262Cu) [[unlikely]] return; }
L_001B262C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2640u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B2640u) [[unlikely]] return; }
L_001B2640:
    st32((c.r[29].w[0]), c.r[21].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 340u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[20].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[18].w[0]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    c.r[10].d[0] = c.r[23].d[0] + 0ull;
    c.r[11].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2674u);  if (depth < kMaxDepth) unit_002D(c, 157u, depth + 1u); else { c.pc = 0x001B5630u; return; } if (c.pc != 0x001B2674u) [[unlikely]] return; }
L_001B2674:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2688; } }
L_001B2680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2688u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B2688u) [[unlikely]] return; }
L_001B2688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2690u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B2690u) [[unlikely]] return; }
L_001B2690:
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 80u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B26C0; } }
L_001B26B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2680u | kUnwind; return; } goto L_001B2680; } }
L_001B26C0:
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 352u));
    set32(c.r[29], c.r[29].w[0] + 512u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B26F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B2708:
    set32(c.r[29], c.r[29].w[0] - 512u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + 6944u);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[18]);
    set32(c.r[17], 0u - 1u);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 352u), c.r[31].d[0]);
    set32(c.r[30], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[29].w[0] + 336u), c.r[6].w[0]);
    c.f[2] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[2]);
    st32((c.r[29].w[0] + 44u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[12], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[9], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[10], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[11], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0]), c.r[12].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B27B0u);  if (depth < kMaxDepth) unit_002D(c, 152u, depth + 1u); else { c.pc = 0x001B5570u; return; } if (c.pc != 0x001B27B0u) [[unlikely]] return; }
L_001B27B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[23], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + 6688u);
    set32(c.r[12], ld32((c.r[3].w[0] + 64u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[9], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[10], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[11], ld32((c.r[3].w[0] + 60u)));
    st32((c.r[29].w[0]), c.r[12].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B27F8u);  if (depth < kMaxDepth) unit_002D(c, 152u, depth + 1u); else { c.pc = 0x001B5570u; return; } if (c.pc != 0x001B27F8u) [[unlikely]] return; }
L_001B27F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[22], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[2].w[0] + 6600u);
    set32(c.r[12], ld32((c.r[3].w[0] + 96u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[9], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[10], ld32((c.r[3].w[0] + 88u)));
    set32(c.r[11], ld32((c.r[3].w[0] + 92u)));
    st32((c.r[29].w[0]), c.r[12].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2840u);  if (depth < kMaxDepth) unit_002D(c, 152u, depth + 1u); else { c.pc = 0x001B5570u; return; } if (c.pc != 0x001B2840u) [[unlikely]] return; }
L_001B2840:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[21], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] + 6768u);
    set32(c.r[12], ld32((c.r[3].w[0] + 128u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 100u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 104u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 112u)));
    set32(c.r[9], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[10], ld32((c.r[3].w[0] + 120u)));
    set32(c.r[11], ld32((c.r[3].w[0] + 124u)));
    st32((c.r[29].w[0]), c.r[12].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2888u);  if (depth < kMaxDepth) unit_002D(c, 152u, depth + 1u); else { c.pc = 0x001B5570u; return; } if (c.pc != 0x001B2888u) [[unlikely]] return; }
L_001B2888:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[20], c.r[29].w[0] + 240u);
    set32(c.r[2], c.r[2].w[0] + 7032u);
    set32(c.r[12], ld32((c.r[3].w[0] + 192u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 164u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 168u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 172u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 176u)));
    set32(c.r[9], ld32((c.r[3].w[0] + 180u)));
    set32(c.r[10], ld32((c.r[3].w[0] + 184u)));
    set32(c.r[11], ld32((c.r[3].w[0] + 188u)));
    st32((c.r[29].w[0]), c.r[12].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B28D0u);  if (depth < kMaxDepth) unit_002D(c, 152u, depth + 1u); else { c.pc = 0x001B5570u; return; } if (c.pc != 0x001B28D0u) [[unlikely]] return; }
L_001B28D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[18], c.r[29].w[0] + 288u);
    set32(c.r[2], c.r[2].w[0] + 6856u);
    set32(c.r[12], ld32((c.r[3].w[0] + 224u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 200u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 204u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 208u)));
    set32(c.r[9], ld32((c.r[3].w[0] + 212u)));
    set32(c.r[10], ld32((c.r[3].w[0] + 216u)));
    set32(c.r[11], ld32((c.r[3].w[0] + 220u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 196u)));
    st32((c.r[29].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[29].w[0]), c.r[12].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2918u);  if (depth < kMaxDepth) unit_002D(c, 152u, depth + 1u); else { c.pc = 0x001B5570u; return; } if (c.pc != 0x001B2918u) [[unlikely]] return; }
L_001B2918:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2924u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B2924u) [[unlikely]] return; }
L_001B2924:
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2944u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001B2944u) [[unlikely]] return; }
L_001B2944:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2950u);  if (depth < kMaxDepth) unit_002C(c, 443u, depth + 1u); else { c.pc = 0x001B3028u; return; } if (c.pc != 0x001B2950u) [[unlikely]] return; }
L_001B2950:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2964u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B2964u) [[unlikely]] return; }
L_001B2964:
    st32((c.r[29].w[0]), c.r[21].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 340u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[20].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[18].w[0]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    c.r[10].d[0] = c.r[23].d[0] + 0ull;
    c.r[11].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2998u);  if (depth < kMaxDepth) unit_002D(c, 157u, depth + 1u); else { c.pc = 0x001B5630u; return; } if (c.pc != 0x001B2998u) [[unlikely]] return; }
L_001B2998:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B299C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B29AC; } }
L_001B29A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B29ACu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B29ACu) [[unlikely]] return; }
L_001B29AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B29B4u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B29B4u) [[unlikely]] return; }
L_001B29B4:
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 80u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B29E4; } }
L_001B29DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B29A4u | kUnwind; return; } goto L_001B29A4; } }
L_001B29E4:
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 352u));
    set32(c.r[29], c.r[29].w[0] + 512u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B2A18:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B2A28:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 432u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 44u), 0u);
    c.f[2] = ld32((c.r[30].w[0] + 4u));
    st32((c.r[29].w[0] + 336u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[30].w[0] + 8u));
    c.f[1] = ld32((c.r[30].w[0] + 12u));
    st32((c.r[29].w[0] + 32u), c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    st32((c.r[29].w[0] + 40u), c.f[1]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2A8Cu);  if (depth < kMaxDepth) unit_0030(c, 237u, depth + 1u); else { c.pc = 0x001C33C0u; return; } if (c.pc != 0x001B2A8Cu) [[unlikely]] return; }
L_001B2A8C:
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2A9Cu);  if (depth < kMaxDepth) unit_0030(c, 238u, depth + 1u); else { c.pc = 0x001C33E8u; return; } if (c.pc != 0x001B2A9Cu) [[unlikely]] return; }
L_001B2A9C:
    st32((c.r[29].w[0] + 344u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2AACu);  if (depth < kMaxDepth) unit_0030(c, 239u, depth + 1u); else { c.pc = 0x001C3420u; return; } if (c.pc != 0x001B2AACu) [[unlikely]] return; }
L_001B2AAC:
    st32((c.r[29].w[0] + 348u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2ABCu);  if (depth < kMaxDepth) unit_0030(c, 240u, depth + 1u); else { c.pc = 0x001C3458u; return; } if (c.pc != 0x001B2ABCu) [[unlikely]] return; }
L_001B2ABC:
    st32((c.r[29].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2ACCu);  if (depth < kMaxDepth) unit_0030(c, 241u, depth + 1u); else { c.pc = 0x001C3490u; return; } if (c.pc != 0x001B2ACCu) [[unlikely]] return; }
L_001B2ACC:
    st32((c.r[29].w[0] + 356u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2ADCu);  if (depth < kMaxDepth) unit_0030(c, 242u, depth + 1u); else { c.pc = 0x001C34C8u; return; } if (c.pc != 0x001B2ADCu) [[unlikely]] return; }
L_001B2ADC:
    st32((c.r[29].w[0] + 360u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2AECu);  if (depth < kMaxDepth) unit_0030(c, 243u, depth + 1u); else { c.pc = 0x001C3500u; return; } if (c.pc != 0x001B2AECu) [[unlikely]] return; }
L_001B2AEC:
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2AFCu);  if (depth < kMaxDepth) unit_0030(c, 244u, depth + 1u); else { c.pc = 0x001C3538u; return; } if (c.pc != 0x001B2AFCu) [[unlikely]] return; }
L_001B2AFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B0Cu);  if (depth < kMaxDepth) unit_0030(c, 245u, depth + 1u); else { c.pc = 0x001C3570u; return; } if (c.pc != 0x001B2B0Cu) [[unlikely]] return; }
L_001B2B0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B1Cu);  if (depth < kMaxDepth) unit_0030(c, 246u, depth + 1u); else { c.pc = 0x001C35A8u; return; } if (c.pc != 0x001B2B1Cu) [[unlikely]] return; }
L_001B2B1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B2Cu);  if (depth < kMaxDepth) unit_0030(c, 247u, depth + 1u); else { c.pc = 0x001C35E0u; return; } if (c.pc != 0x001B2B2Cu) [[unlikely]] return; }
L_001B2B2C:
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B3Cu);  if (depth < kMaxDepth) unit_0030(c, 248u, depth + 1u); else { c.pc = 0x001C3618u; return; } if (c.pc != 0x001B2B3Cu) [[unlikely]] return; }
L_001B2B3C:
    st32((c.r[29].w[0] + 372u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B4Cu);  if (depth < kMaxDepth) unit_0030(c, 249u, depth + 1u); else { c.pc = 0x001C3650u; return; } if (c.pc != 0x001B2B4Cu) [[unlikely]] return; }
L_001B2B4C:
    st32((c.r[29].w[0] + 376u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B5Cu);  if (depth < kMaxDepth) unit_0030(c, 250u, depth + 1u); else { c.pc = 0x001C3688u; return; } if (c.pc != 0x001B2B5Cu) [[unlikely]] return; }
L_001B2B5C:
    st32((c.r[29].w[0] + 380u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B6Cu);  if (depth < kMaxDepth) unit_0030(c, 251u, depth + 1u); else { c.pc = 0x001C36C0u; return; } if (c.pc != 0x001B2B6Cu) [[unlikely]] return; }
L_001B2B6C:
    st32((c.r[29].w[0] + 384u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B7Cu);  if (depth < kMaxDepth) unit_0030(c, 252u, depth + 1u); else { c.pc = 0x001C36F8u; return; } if (c.pc != 0x001B2B7Cu) [[unlikely]] return; }
L_001B2B7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B8Cu);  if (depth < kMaxDepth) unit_0030(c, 253u, depth + 1u); else { c.pc = 0x001C3730u; return; } if (c.pc != 0x001B2B8Cu) [[unlikely]] return; }
L_001B2B8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B9Cu);  if (depth < kMaxDepth) unit_0030(c, 254u, depth + 1u); else { c.pc = 0x001C3768u; return; } if (c.pc != 0x001B2B9Cu) [[unlikely]] return; }
L_001B2B9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2BACu);  if (depth < kMaxDepth) unit_0030(c, 255u, depth + 1u); else { c.pc = 0x001C37A0u; return; } if (c.pc != 0x001B2BACu) [[unlikely]] return; }
L_001B2BAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2BBCu);  if (depth < kMaxDepth) unit_0030(c, 256u, depth + 1u); else { c.pc = 0x001C37D8u; return; } if (c.pc != 0x001B2BBCu) [[unlikely]] return; }
L_001B2BBC:
    st32((c.r[29].w[0] + 388u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2BCCu);  if (depth < kMaxDepth) unit_0030(c, 257u, depth + 1u); else { c.pc = 0x001C3810u; return; } if (c.pc != 0x001B2BCCu) [[unlikely]] return; }
L_001B2BCC:
    st32((c.r[29].w[0] + 392u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2BDCu);  if (depth < kMaxDepth) unit_0030(c, 258u, depth + 1u); else { c.pc = 0x001C3848u; return; } if (c.pc != 0x001B2BDCu) [[unlikely]] return; }
L_001B2BDC:
    st32((c.r[29].w[0] + 396u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2BECu);  if (depth < kMaxDepth) unit_0030(c, 259u, depth + 1u); else { c.pc = 0x001C3880u; return; } if (c.pc != 0x001B2BECu) [[unlikely]] return; }
L_001B2BEC:
    st32((c.r[29].w[0] + 400u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2BFCu);  if (depth < kMaxDepth) unit_0030(c, 260u, depth + 1u); else { c.pc = 0x001C38B8u; return; } if (c.pc != 0x001B2BFCu) [[unlikely]] return; }
L_001B2BFC:
    st32((c.r[29].w[0] + 404u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C0Cu);  if (depth < kMaxDepth) unit_0030(c, 261u, depth + 1u); else { c.pc = 0x001C38F0u; return; } if (c.pc != 0x001B2C0Cu) [[unlikely]] return; }
L_001B2C0C:
    st32((c.r[29].w[0] + 408u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C1Cu);  if (depth < kMaxDepth) unit_0030(c, 262u, depth + 1u); else { c.pc = 0x001C3928u; return; } if (c.pc != 0x001B2C1Cu) [[unlikely]] return; }
L_001B2C1C:
    st32((c.r[29].w[0] + 412u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C2Cu);  if (depth < kMaxDepth) unit_0030(c, 263u, depth + 1u); else { c.pc = 0x001C3960u; return; } if (c.pc != 0x001B2C2Cu) [[unlikely]] return; }
L_001B2C2C:
    st32((c.r[29].w[0] + 416u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C3Cu);  if (depth < kMaxDepth) unit_0030(c, 264u, depth + 1u); else { c.pc = 0x001C3998u; return; } if (c.pc != 0x001B2C3Cu) [[unlikely]] return; }
L_001B2C3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 420u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C4Cu);  if (depth < kMaxDepth) unit_0030(c, 265u, depth + 1u); else { c.pc = 0x001C39D0u; return; } if (c.pc != 0x001B2C4Cu) [[unlikely]] return; }
L_001B2C4C:
    st32((c.r[29].w[0] + 424u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C5Cu);  if (depth < kMaxDepth) unit_0030(c, 178u, depth + 1u); else { c.pc = 0x001C2290u; return; } if (c.pc != 0x001B2C5Cu) [[unlikely]] return; }
L_001B2C5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B2EC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[5], ld32((c.r[29].w[0] + 344u)));
    set32(c.r[2], c.r[2].w[0] + 6856u);
    set32(c.r[6], ld32((c.r[29].w[0] + 348u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 352u)));
    c.r[11].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 356u)));
    set32(c.r[16], 0u - 1u);
    set32(c.r[9], ld32((c.r[29].w[0] + 360u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 364u)));
    st32((c.r[29].w[0] + 428u), c.r[3].w[0]);
    st32((c.r[29].w[0]), c.r[19].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2CACu);  if (depth < kMaxDepth) unit_002D(c, 152u, depth + 1u); else { c.pc = 0x001B5570u; return; } if (c.pc != 0x001B2CACu) [[unlikely]] return; }
L_001B2CAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[22], c.r[29].w[0] + 96u);
    set32(c.r[5], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[2], c.r[2].w[0] + 6944u);
    set32(c.r[6], ld32((c.r[29].w[0] + 372u)));
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 376u)));
    c.r[11].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 380u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 384u)));
    st32((c.r[29].w[0]), c.r[17].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2CECu);  if (depth < kMaxDepth) unit_002D(c, 152u, depth + 1u); else { c.pc = 0x001B5570u; return; } if (c.pc != 0x001B2CECu) [[unlikely]] return; }
L_001B2CEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[21], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] + 6688u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[10], 0u - 1u);
    set32(c.r[11], 0u - 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2D2Cu);  if (depth < kMaxDepth) unit_002D(c, 152u, depth + 1u); else { c.pc = 0x001B5570u; return; } if (c.pc != 0x001B2D2Cu) [[unlikely]] return; }
L_001B2D2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[20], c.r[29].w[0] + 192u);
    set32(c.r[5], ld32((c.r[29].w[0] + 388u)));
    set32(c.r[3], c.r[3].w[0] + 6600u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[16].w[0]);
    set32(c.r[6], 0u - 1u);
    st32((c.r[29].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[10], 0u - 1u);
    set32(c.r[11], 0u - 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2D6Cu);  if (depth < kMaxDepth) unit_002D(c, 152u, depth + 1u); else { c.pc = 0x001B5570u; return; } if (c.pc != 0x001B2D6Cu) [[unlikely]] return; }
L_001B2D6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[19], c.r[29].w[0] + 240u);
    set32(c.r[5], ld32((c.r[29].w[0] + 392u)));
    set32(c.r[3], c.r[3].w[0] + 6768u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[16].w[0]);
    set32(c.r[6], 0u - 1u);
    st32((c.r[29].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[10], 0u - 1u);
    set32(c.r[11], 0u - 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2DACu);  if (depth < kMaxDepth) unit_002D(c, 152u, depth + 1u); else { c.pc = 0x001B5570u; return; } if (c.pc != 0x001B2DACu) [[unlikely]] return; }
L_001B2DAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 424u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 396u)));
    set32(c.r[18], c.r[29].w[0] + 288u);
    set32(c.r[6], ld32((c.r[29].w[0] + 400u)));
    set32(c.r[3], c.r[3].w[0] + 7032u);
    set32(c.r[7], ld32((c.r[29].w[0] + 404u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 408u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 412u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 420u)));
    st32((c.r[29].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2DF0u);  if (depth < kMaxDepth) unit_002D(c, 152u, depth + 1u); else { c.pc = 0x001B5570u; return; } if (c.pc != 0x001B2DF0u) [[unlikely]] return; }
L_001B2DF0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2DFCu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B2DFCu) [[unlikely]] return; }
L_001B2DFC:
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2E1Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001B2E1Cu) [[unlikely]] return; }
L_001B2E1C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2E28u);  if (depth < kMaxDepth) unit_002C(c, 443u, depth + 1u); else { c.pc = 0x001B3028u; return; } if (c.pc != 0x001B2E28u) [[unlikely]] return; }
L_001B2E28:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2E3Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B2E3Cu) [[unlikely]] return; }
L_001B2E3C:
    st32((c.r[29].w[0]), c.r[19].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 428u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[18].w[0]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.r[9].d[0] = c.r[22].d[0] + 0ull;
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    c.r[11].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2E74u);  if (depth < kMaxDepth) unit_002D(c, 157u, depth + 1u); else { c.pc = 0x001B5630u; return; } if (c.pc != 0x001B2E74u) [[unlikely]] return; }
L_001B2E74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2E78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2E88; } }
L_001B2E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2E88u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B2E88u) [[unlikely]] return; }
L_001B2E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2E90u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B2E90u) [[unlikely]] return; }
L_001B2E90:
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 80u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2EC0; } }
L_001B2EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2E80u | kUnwind; return; } goto L_001B2E80; } }
L_001B2EC0:
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 528u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 512u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 432u));
    set32(c.r[29], c.r[29].w[0] + 592u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B2EF8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B2F08:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0]), c.f[2]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2F58u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B2F58u) [[unlikely]] return; }
L_001B2F58:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2F74u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001B2F74u) [[unlikely]] return; }
L_001B2F74:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2F80u);  if (depth < kMaxDepth) unit_002C(c, 443u, depth + 1u); else { c.pc = 0x001B3028u; return; } if (c.pc != 0x001B2F80u) [[unlikely]] return; }
L_001B2F80:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], 0u + 672u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2F94u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B2F94u) [[unlikely]] return; }
L_001B2F94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2FB0u);  if (depth < kMaxDepth) unit_002D(c, 346u, depth + 1u); else { c.pc = 0x001B71F8u; return; } if (c.pc != 0x001B2FB0u) [[unlikely]] return; }
L_001B2FB0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2FB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2FC4; } }
L_001B2FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2FC4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B2FC4u) [[unlikely]] return; }
L_001B2FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2FCCu);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B2FCCu) [[unlikely]] return; }
L_001B2FCC:
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[5], c.r[16].w[0] + 288u);
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    if (c.r[16].d[0] == 0) c.r[5].d[0] = 0ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B3004; } }
L_001B2FFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2FBCu | kUnwind; return; } goto L_001B2FBC; } }
L_001B3004:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B3028:
    set32(c.r[3], ld32((c.r[4].w[0] + 640u)));
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B3040:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3070u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B3070u) [[unlikely]] return; }
L_001B3070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3100; } }
    set32(c.r[2], c.r[29].w[0] + 4u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 80u), 0u);
    set32(c.r[20], c.r[29].w[0] + 96u);
    c.budget -= 4;
L_001B3088:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30A8u);  if (depth < kMaxDepth) unit_0097(c, 297u, depth + 1u); else { c.pc = 0x0035F330u; return; } if (c.pc != 0x001B30A8u) [[unlikely]] return; }
L_001B30A8:
    c.r[2].d[0] = c.r[16].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B3088u | kUnwind; return; } goto L_001B3088; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[29].w[0] + 96u), c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30E8u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001B30E8u) [[unlikely]] return; }
L_001B30E8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3100u);  if (depth < kMaxDepth) unit_002C(c, 56u, depth + 1u); else { c.pc = 0x001B0998u; return; } if (c.pc != 0x001B3100u) [[unlikely]] return; }
L_001B3100:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B3128:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3140u);  if (depth < kMaxDepth) unit_002C(c, 257u, depth + 1u); else { c.pc = 0x001B1C18u; return; } if (c.pc != 0x001B3140u) [[unlikely]] return; }
L_001B3140:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B3150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 84u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3170u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B3170u) [[unlikely]] return; }
L_001B3170:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3180u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B3180u) [[unlikely]] return; }
L_001B3180:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B31A0u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B31A0u) [[unlikely]] return; }
L_001B31A0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B31B0u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B31B0u) [[unlikely]] return; }
L_001B31B0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[3].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B31E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.f[20]);
    set32(c.r[17], c.r[19].w[0] + 4u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001B32D4; } }
    set32(c.r[20], 0u + 1u);
    c.budget -= 2;
L_001B3228:
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.f[12] = c.f[20];
    set32(c.r[16], c.r[19].w[0] + 4u);
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B324Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B324Cu) [[unlikely]] return; }
L_001B324C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B32BC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_001B3270; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_001B3270:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3284; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 2;
L_001B3284:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001B32A8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B32A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B32A8u) [[unlikely]] return; }
L_001B32A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001B32D4; } }
L_001B32BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B3228u | kUnwind; return; } goto L_001B3228; } }
L_001B32D4:
    set32(c.r[4], ld32((c.r[19].w[0] + 88u)));
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B32E4u);  if (depth < kMaxDepth) unit_002C(c, 29u, depth + 1u); else { c.pc = 0x001B0710u; return; } if (c.pc != 0x001B32E4u) [[unlikely]] return; }
L_001B32E4:
    set32(c.r[4], ld32((c.r[19].w[0] + 92u)));
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B32F4u);  if (depth < kMaxDepth) unit_002C(c, 29u, depth + 1u); else { c.pc = 0x001B0710u; return; } if (c.pc != 0x001B32F4u) [[unlikely]] return; }
L_001B32F4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B3320:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    set32(c.r[18], c.r[19].w[0] + 4u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 18;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001B344C; } }
    set32(c.r[22], 0u + 1u);
    c.budget -= 2;
L_001B3370:
    set32(c.r[16], ld32((c.r[18].w[0])));
    set32(c.r[17], c.r[19].w[0] + 4u);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3390u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B3390u) [[unlikely]] return; }
L_001B3390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B3434; } }
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B33A8u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x001B33A8u) [[unlikely]] return; }
L_001B33A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B3434; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B33CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B33CCu) [[unlikely]] return; }
L_001B33CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_001B33E8; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_001B33E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B33FC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 2;
L_001B33FC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001B3420; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3420u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B3420u) [[unlikely]] return; }
L_001B3420:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001B344C; } }
L_001B3434:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B3370u | kUnwind; return; } goto L_001B3370; } }
L_001B344C:
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
L_001B3478:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[17].w[0] + 4u);
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B34F0; } }
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001B34A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B34C0; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 2;
L_001B34C0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001B34E4; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 44u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B34E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B34E4u) [[unlikely]] return; }
L_001B34E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B34A0u | kUnwind; return; } goto L_001B34A0; } }
L_001B34F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B3508; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3508u);  if (depth < kMaxDepth) unit_002C(c, 27u, depth + 1u); else { c.pc = 0x001B06D8u; return; } if (c.pc != 0x001B3508u) [[unlikely]] return; }
L_001B3508:
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B3520; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3520u);  if (depth < kMaxDepth) unit_002C(c, 27u, depth + 1u); else { c.pc = 0x001B06D8u; return; } if (c.pc != 0x001B3520u) [[unlikely]] return; }
L_001B3520:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B3538:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 104u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3560u);  if (depth < kMaxDepth) unit_002C(c, 32u, depth + 1u); else { c.pc = 0x001B0748u; return; } if (c.pc != 0x001B3560u) [[unlikely]] return; }
L_001B3560:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B3570:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 104u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3598u);  if (depth < kMaxDepth) unit_002C(c, 42u, depth + 1u); else { c.pc = 0x001B07F0u; return; } if (c.pc != 0x001B3598u) [[unlikely]] return; }
L_001B3598:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B35A8:
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001B35F0; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001B35C8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001B35E4; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B35E4:
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B35C8u | kUnwind; return; } goto L_001B35C8; } }
L_001B35F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B3600:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[4].w[0] + 4u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001B368C; } }
    set32(c.r[20], 0u + 2u);
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001B3640:
    set32(c.r[16], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B365Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B365Cu) [[unlikely]] return; }
L_001B365C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_001B3674; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3674u);  if (depth < kMaxDepth) unit_002C(c, 523u, depth + 1u); else { c.pc = 0x001B3B60u; return; } if (c.pc != 0x001B3674u) [[unlikely]] return; }
L_001B3674:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B3640u | kUnwind; return; } goto L_001B3640; } }
L_001B368C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B36B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B36C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B36E8u);  if (depth < kMaxDepth) unit_002B(c, 384u, depth + 1u); else { c.pc = 0x001AFA80u; return; } if (c.pc != 0x001B36E8u) [[unlikely]] return; }
L_001B36E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 30328u);
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 48u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[17].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3708u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001B3708u) [[unlikely]] return; }
L_001B3708:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B371Cu);  if (depth < kMaxDepth) unit_0045(c, 30u, depth + 1u); else { c.pc = 0x00214658u; return; } if (c.pc != 0x001B371Cu) [[unlikely]] return; }
L_001B371C:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3730u);  if (depth < kMaxDepth) unit_002D(c, 41u, depth + 1u); else { c.pc = 0x001B4518u; return; } if (c.pc != 0x001B3730u) [[unlikely]] return; }
L_001B3730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B3740; } }
L_001B3738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3740u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B3740u) [[unlikely]] return; }
L_001B3740:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B3760; } }
L_001B374C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 30912u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B3738u | kUnwind; return; } goto L_001B3738; } }
L_001B3760:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B3780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 30328u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B37ACu);  if (depth < kMaxDepth) unit_002D(c, 23u, depth + 1u); else { c.pc = 0x001B4280u; return; } if (c.pc != 0x001B37ACu) [[unlikely]] return; }
L_001B37AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] - 30912u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B37D0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 144u), c.f[20]);
    c.f[20] = c.f[12];
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B37FCu);  if (depth < kMaxDepth) unit_002D(c, 34u, depth + 1u); else { c.pc = 0x001B4418u; return; } if (c.pc != 0x001B37FCu) [[unlikely]] return; }
L_001B37FC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B380Cu);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x001B380Cu) [[unlikely]] return; }
L_001B380C:
    set32(c.r[17], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3820u);  if (depth < kMaxDepth) unit_0044(c, 275u, depth + 1u); else { c.pc = 0x00213C98u; return; } if (c.pc != 0x001B3820u) [[unlikely]] return; }
L_001B3820:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 92u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3840u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x001B3840u) [[unlikely]] return; }
L_001B3840:
    c.f[12] = fp::add(c.f[20], c.f[20]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3854u);  if (depth < kMaxDepth) unit_0045(c, 22u, depth + 1u); else { c.pc = 0x002143A0u; return; } if (c.pc != 0x001B3854u) [[unlikely]] return; }
L_001B3854:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3864u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x001B3864u) [[unlikely]] return; }
L_001B3864:
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3878u);  if (depth < kMaxDepth) unit_002D(c, 41u, depth + 1u); else { c.pc = 0x001B4518u; return; } if (c.pc != 0x001B3878u) [[unlikely]] return; }
L_001B3878:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3888u);  if (depth < kMaxDepth) unit_002B(c, 386u, depth + 1u); else { c.pc = 0x001AFAD0u; return; } if (c.pc != 0x001B3888u) [[unlikely]] return; }
L_001B3888:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B38A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B38C0u);  if (depth < kMaxDepth) unit_002D(c, 23u, depth + 1u); else { c.pc = 0x001B4280u; return; } if (c.pc != 0x001B38C0u) [[unlikely]] return; }
L_001B38C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B38D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B38E0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B38F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.f[20] = c.f[13];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3920u);  if (depth < kMaxDepth) unit_002B(c, 384u, depth + 1u); else { c.pc = 0x001AFA80u; return; } if (c.pc != 0x001B3920u) [[unlikely]] return; }
L_001B3920:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 30256u);
    set32(c.r[17], c.r[18].w[0] + 48u);
    st32((c.r[18].w[0] + 44u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    ldl(c.r[2], (c.r[16].w[0] + 7u));
    ldr(c.r[2], (c.r[16].w[0]));
    ldl(c.r[3], (c.r[16].w[0] + 15u));
    ldr(c.r[3], (c.r[16].w[0] + 8u));
    ldl(c.r[5], (c.r[16].w[0] + 23u));
    ldr(c.r[5], (c.r[16].w[0] + 16u));
    ldl(c.r[6], (c.r[16].w[0] + 31u));
    ldr(c.r[6], (c.r[16].w[0] + 24u));
    sdl(c.r[2], (c.r[18].w[0] + 55u));
    sdr(c.r[2], (c.r[18].w[0] + 48u));
    sdl(c.r[3], (c.r[18].w[0] + 63u));
    sdr(c.r[3], (c.r[18].w[0] + 56u));
    sdl(c.r[5], (c.r[18].w[0] + 71u));
    sdr(c.r[5], (c.r[18].w[0] + 64u));
    sdl(c.r[6], (c.r[18].w[0] + 79u));
    sdr(c.r[6], (c.r[18].w[0] + 72u));
    ldl(c.r[2], (c.r[16].w[0] + 39u));
    ldr(c.r[2], (c.r[16].w[0] + 32u));
    ldl(c.r[3], (c.r[16].w[0] + 47u));
    ldr(c.r[3], (c.r[16].w[0] + 40u));
    ldl(c.r[5], (c.r[16].w[0] + 55u));
    ldr(c.r[5], (c.r[16].w[0] + 48u));
    ldl(c.r[6], (c.r[16].w[0] + 63u));
    ldr(c.r[6], (c.r[16].w[0] + 56u));
    sdl(c.r[2], (c.r[18].w[0] + 87u));
    sdr(c.r[2], (c.r[18].w[0] + 80u));
    sdl(c.r[3], (c.r[18].w[0] + 95u));
    sdr(c.r[3], (c.r[18].w[0] + 88u));
    sdl(c.r[5], (c.r[18].w[0] + 103u));
    sdr(c.r[5], (c.r[18].w[0] + 96u));
    sdl(c.r[6], (c.r[18].w[0] + 111u));
    sdr(c.r[6], (c.r[18].w[0] + 104u));
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B39C0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001B39C0u) [[unlikely]] return; }
L_001B39C0:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], 0u + 12u);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 4u), c.f[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001B3A58; } }
    set32(c.r[19], 0u + 12u);
    c.budget -= 2;
L_001B39F0:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3A00u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001B3A00u) [[unlikely]] return; }
L_001B3A00:
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4E6E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 27432ull;
    c.f[12] = c.r[1].w[0];
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3A2Cu);  if (depth < kMaxDepth) unit_0073(c, 217u, depth + 1u); else { c.pc = 0x002CF120u; return; } if (c.pc != 0x001B3A2Cu) [[unlikely]] return; }
L_001B3A2C:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 12u);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B39F0u | kUnwind; return; } goto L_001B39F0; } }
L_001B3A48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B3A58; } }
L_001B3A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3A58u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B3A58u) [[unlikely]] return; }
L_001B3A58:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B3A78; } }
L_001B3A64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 30912u);
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B3A50u | kUnwind; return; } goto L_001B3A50; } }
L_001B3A78:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B3AA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[4].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 30256u);
    set32(c.r[3], 0u + 12u);
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001B3AF8; } }
    set32(c.r[8], 0u + 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 4;
L_001B3AD8:
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + 12u);
    st32((c.r[3].w[0] + 356u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B3AD8u | kUnwind; return; } goto L_001B3AD8; } }
L_001B3AF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 30912u);
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B3B10:
    set32(c.r[4], c.r[4].w[0] + 48u);
    set32(c.r[3], 0u + 12u);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001B3B58; } }
    set32(c.r[7], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u + 12u);
    c.budget -= 3;
L_001B3B38:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + 12u);
    st32((c.r[3].w[0] + 356u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B3B38u | kUnwind; return; } goto L_001B3B38; } }
L_001B3B58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B3B60:
    set32(c.r[4], c.r[4].w[0] + 48u);
    set32(c.r[3], 0u + 12u);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001B3BA8; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 3;
L_001B3B88:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + 12u);
    st32((c.r[3].w[0] + 348u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B3B88u | kUnwind; return; } goto L_001B3B88; } }
L_001B3BA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B3BB0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[3].w[0] - 30152u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[20], c.r[2].w[0] - 14960u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[19].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[18], c.r[19].w[0] + 48u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3BF8u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001B3BF8u) [[unlikely]] return; }
L_001B3BF8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C04u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001B3C04u) [[unlikely]] return; }
L_001B3C04:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B3C24u) [[unlikely]] return; }
L_001B3C24:
    c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C30u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001B3C30u) [[unlikely]] return; }
L_001B3C30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3C78; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C48u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001B3C48u) [[unlikely]] return; }
L_001B3C48:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C54u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001B3C54u) [[unlikely]] return; }
L_001B3C54:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C74u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B3C74u) [[unlikely]] return; }
L_001B3C74:
    if (c.r[2].d[0] != 0) c.r[17].d[0] = 0ull;
    c.budget -= 1;
L_001B3C78:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001B3D00; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 31928u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C94u);  if (depth < kMaxDepth) unit_0031(c, 146u, depth + 1u); else { c.pc = 0x001C5398u; return; } if (c.pc != 0x001B3C94u) [[unlikely]] return; }
L_001B3C94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001B3D00; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3CB0u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x001B3CB0u) [[unlikely]] return; }
L_001B3CB0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3CC0u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x001B3CC0u) [[unlikely]] return; }
L_001B3CC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3CECu);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x001B3CECu) [[unlikely]] return; }
L_001B3CEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3D00u);  if (depth < kMaxDepth) unit_0049(c, 102u, depth + 1u); else { c.pc = 0x00225700u; return; } if (c.pc != 0x001B3D00u) [[unlikely]] return; }
L_001B3D00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 30912u);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st32((c.r[19].w[0] + 44u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B3D30:
    set32(c.r[2], c.r[4].w[0] + 48u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B3D40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B3D50:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3D80u);  if (depth < kMaxDepth) unit_002B(c, 384u, depth + 1u); else { c.pc = 0x001AFA80u; return; } if (c.pc != 0x001B3D80u) [[unlikely]] return; }
L_001B3D80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] - 30152u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[4].d[0];
    st32((c.r[18].w[0] + 44u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3E0C; } }
    set32(c.r[2], c.r[16].w[0] + 256u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], c.r[29].w[0] + 16u);
    set32(c.r[20], c.r[18].w[0] + 16u);
    c.budget -= 5;
L_001B3DB4:
    ldl(c.r[3], (c.r[16].w[0] + 7u));
    ldr(c.r[3], (c.r[16].w[0]));
    ldl(c.r[5], (c.r[16].w[0] + 15u));
    ldr(c.r[5], (c.r[16].w[0] + 8u));
    ldl(c.r[6], (c.r[16].w[0] + 23u));
    ldr(c.r[6], (c.r[16].w[0] + 16u));
    ldl(c.r[7], (c.r[16].w[0] + 31u));
    ldr(c.r[7], (c.r[16].w[0] + 24u));
    sdl(c.r[3], (c.r[4].w[0] + 7u));
    sdr(c.r[3], (c.r[4].w[0]));
    sdl(c.r[5], (c.r[4].w[0] + 15u));
    sdr(c.r[5], (c.r[4].w[0] + 8u));
    sdl(c.r[6], (c.r[4].w[0] + 23u));
    sdr(c.r[6], (c.r[4].w[0] + 16u));
    sdl(c.r[7], (c.r[4].w[0] + 31u));
    sdr(c.r[7], (c.r[4].w[0] + 24u));
    set32(c.r[16], c.r[16].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B3DB4u | kUnwind; return; } goto L_001B3DB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B3E50; } }
L_001B3E0C:
    set32(c.r[2], c.r[16].w[0] + 256u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], c.r[29].w[0] + 16u);
    set32(c.r[20], c.r[18].w[0] + 16u);
    c.budget -= 5;
L_001B3E20:
    c.r[3].d[0] = ld64((c.r[16].w[0]));
    c.r[5].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[6].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[7].d[0] = ld64((c.r[16].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[3].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[5].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[6].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[7].d[0]);
    set32(c.r[16], c.r[16].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B3E20u | kUnwind; return; } goto L_001B3E20; } }
L_001B3E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3E58u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001B3E58u) [[unlikely]] return; }
L_001B3E58:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 144u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 148u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3E74u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B3E74u) [[unlikely]] return; }
L_001B3E74:
    set32(c.r[4], c.r[21].w[0] - 31928u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3E84u);  if (depth < kMaxDepth) unit_0031(c, 146u, depth + 1u); else { c.pc = 0x001C5398u; return; } if (c.pc != 0x001B3E84u) [[unlikely]] return; }
L_001B3E84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC37A0000u);
    c.f[0] = c.r[1].w[0];
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3EACu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001B3EACu) [[unlikely]] return; }
L_001B3EAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBFC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3EC8u);  if (depth < kMaxDepth) unit_0045(c, 20u, depth + 1u); else { c.pc = 0x00214280u; return; } if (c.pc != 0x001B3EC8u) [[unlikely]] return; }
L_001B3EC8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3EDCu);  if (depth < kMaxDepth) unit_0045(c, 30u, depth + 1u); else { c.pc = 0x00214658u; return; } if (c.pc != 0x001B3EDCu) [[unlikely]] return; }
L_001B3EDC:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3EF0u);  if (depth < kMaxDepth) unit_0045(c, 30u, depth + 1u); else { c.pc = 0x00214658u; return; } if (c.pc != 0x001B3EF0u) [[unlikely]] return; }
L_001B3EF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3F04u);  if (depth < kMaxDepth) unit_0049(c, 102u, depth + 1u); else { c.pc = 0x00225700u; return; } if (c.pc != 0x001B3F04u) [[unlikely]] return; }
L_001B3F04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B3F14; } }
L_001B3F0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3F14u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B3F14u) [[unlikely]] return; }
L_001B3F14:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B3F34; } }
L_001B3F20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 30912u);
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B3F0Cu | kUnwind; return; } goto L_001B3F0C; } }
L_001B3F34:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B3F60:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.f[20]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[5], c.r[18].w[0] + 48u);
    set32(c.r[4], c.r[4].w[0] - 31928u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3F94u);  if (depth < kMaxDepth) unit_0031(c, 146u, depth + 1u); else { c.pc = 0x001C5398u; return; } if (c.pc != 0x001B3F94u) [[unlikely]] return; }
L_001B3F94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3FA8u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x001B3FA8u) [[unlikely]] return; }
L_001B3FA8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3FB8u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x001B3FB8u) [[unlikely]] return; }
L_001B3FB8:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3FCCu);  if (depth < kMaxDepth) unit_0044(c, 275u, depth + 1u); else { c.pc = 0x00213C98u; return; } if (c.pc != 0x001B3FCCu) [[unlikely]] return; }
L_001B3FCC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 92u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3FECu);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x001B3FECu) [[unlikely]] return; }
L_001B3FEC:
    c.f[12] = fp::add(c.f[20], c.f[20]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4000u);  if (depth < kMaxDepth) unit_0045(c, 22u, depth + 1u); else { c.pc = 0x002143A0u; return; } if (c.pc != 0x001B4000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_002D(c, 1u, depth);
}

}
