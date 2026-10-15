#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00C5[4096] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0,
    42, 0, 43, 0, 44, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106,
    0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0,
    0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 136, 0, 137,
    0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0,
    148, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0,
    172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0,
    0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0,
    0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0,
    0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0,
    283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0,
    0, 0, 0, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 346, 0, 347, 0, 0, 0, 0, 348,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350,
    0, 351, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0,
    357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0,
    377, 0, 378, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 382, 0, 383, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0,
    0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0,
    396, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0,
    421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 426, 0, 0, 0, 0, 427, 0,
    0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0,
    0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 440, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 444,
    0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 450, 0, 0, 0, 0,
    451, 0, 0, 0, 0, 452, 0, 453, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 458, 0, 459, 0, 0,
    0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0,
    0, 0, 0, 467, 0, 468, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    472, 0, 0, 0, 0, 473, 0, 474, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0,
    0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 487, 0, 0, 0, 0,
    0, 0, 488, 0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 498, 0, 499, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0,
    504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0,
    515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    530, 0, 531, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 536, 0,
};

void unit_00C5(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00414000;
    case 2u: goto L_00414008;
    case 3u: goto L_00414018;
    case 4u: goto L_00414028;
    case 5u: goto L_00414038;
    case 6u: goto L_00414048;
    case 7u: goto L_00414084;
    case 8u: goto L_0041408C;
    case 9u: goto L_00414094;
    case 10u: goto L_0041409C;
    case 11u: goto L_004140A4;
    case 12u: goto L_004140AC;
    case 13u: goto L_004140B4;
    case 14u: goto L_004140BC;
    case 15u: goto L_004140C4;
    case 16u: goto L_004140CC;
    case 17u: goto L_004140D4;
    case 18u: goto L_004140DC;
    case 19u: goto L_004140EC;
    case 20u: goto L_004140FC;
    case 21u: goto L_00414110;
    case 22u: goto L_00414130;
    case 23u: goto L_0041414C;
    case 24u: goto L_00414170;
    case 25u: goto L_00414194;
    case 26u: goto L_0041419C;
    case 27u: goto L_004141B8;
    case 28u: goto L_004141C0;
    case 29u: goto L_00414204;
    case 30u: goto L_0041420C;
    case 31u: goto L_00414214;
    case 32u: goto L_0041421C;
    case 33u: goto L_00414224;
    case 34u: goto L_0041422C;
    case 35u: goto L_00414238;
    case 36u: goto L_00414248;
    case 37u: goto L_00414258;
    case 38u: goto L_00414260;
    case 39u: goto L_00414268;
    case 40u: goto L_00414270;
    case 41u: goto L_00414278;
    case 42u: goto L_00414280;
    case 43u: goto L_00414288;
    case 44u: goto L_00414290;
    case 45u: goto L_00414298;
    case 46u: goto L_004142A8;
    case 47u: goto L_004142BC;
    case 48u: goto L_004142C4;
    case 49u: goto L_004142E8;
    case 50u: goto L_00414348;
    case 51u: goto L_00414358;
    case 52u: goto L_00414360;
    case 53u: goto L_00414370;
    case 54u: goto L_00414388;
    case 55u: goto L_004143B4;
    case 56u: goto L_004143CC;
    case 57u: goto L_004143E4;
    case 58u: goto L_00414410;
    case 59u: goto L_00414448;
    case 60u: goto L_00414450;
    case 61u: goto L_00414460;
    case 62u: goto L_00414480;
    case 63u: goto L_004144D8;
    case 64u: goto L_004144E0;
    case 65u: goto L_004144E8;
    case 66u: goto L_004144F0;
    case 67u: goto L_00414510;
    case 68u: goto L_00414568;
    case 69u: goto L_00414590;
    case 70u: goto L_004145A8;
    case 71u: goto L_004145D0;
    case 72u: goto L_004145D8;
    case 73u: goto L_00414600;
    case 74u: goto L_00414668;
    case 75u: goto L_0041467C;
    case 76u: goto L_00414690;
    case 77u: goto L_0041469C;
    case 78u: goto L_004146AC;
    case 79u: goto L_004146B4;
    case 80u: goto L_004146BC;
    case 81u: goto L_004146C4;
    case 82u: goto L_00414708;
    case 83u: goto L_00414768;
    case 84u: goto L_00414790;
    case 85u: goto L_004147B8;
    case 86u: goto L_004147F8;
    case 87u: goto L_00414860;
    case 88u: goto L_00414874;
    case 89u: goto L_00414890;
    case 90u: goto L_004148A0;
    case 91u: goto L_004148B4;
    case 92u: goto L_004148C8;
    case 93u: goto L_004148E0;
    case 94u: goto L_004148EC;
    case 95u: goto L_00414938;
    case 96u: goto L_00414954;
    case 97u: goto L_00414978;
    case 98u: goto L_00414988;
    case 99u: goto L_004149A4;
    case 100u: goto L_004149C8;
    case 101u: goto L_004149D8;
    case 102u: goto L_004149F0;
    case 103u: goto L_00414A14;
    case 104u: goto L_00414A38;
    case 105u: goto L_00414A58;
    case 106u: goto L_00414A7C;
    case 107u: goto L_00414A9C;
    case 108u: goto L_00414AB8;
    case 109u: goto L_00414B04;
    case 110u: goto L_00414B20;
    case 111u: goto L_00414B38;
    case 112u: goto L_00414B4C;
    case 113u: goto L_00414B60;
    case 114u: goto L_00414BB4;
    case 115u: goto L_00414BC8;
    case 116u: goto L_00414BD8;
    case 117u: goto L_00414BE8;
    case 118u: goto L_00414C3C;
    case 119u: goto L_00414C50;
    case 120u: goto L_00414C60;
    case 121u: goto L_00414C70;
    case 122u: goto L_00414CC4;
    case 123u: goto L_00414CD8;
    case 124u: goto L_00414CE8;
    case 125u: goto L_00414CF4;
    case 126u: goto L_00414D08;
    case 127u: goto L_00414D18;
    case 128u: goto L_00414D28;
    case 129u: goto L_00414D40;
    case 130u: goto L_00414D88;
    case 131u: goto L_00414D98;
    case 132u: goto L_00414DA8;
    case 133u: goto L_00414E48;
    case 134u: goto L_00414E5C;
    case 135u: goto L_00414E6C;
    case 136u: goto L_00414E74;
    case 137u: goto L_00414E7C;
    case 138u: goto L_00414E84;
    case 139u: goto L_00414E94;
    case 140u: goto L_00414EA8;
    case 141u: goto L_00414ED0;
    case 142u: goto L_00414F20;
    case 143u: goto L_00414F48;
    case 144u: goto L_00414F50;
    case 145u: goto L_00414F58;
    case 146u: goto L_00414F60;
    case 147u: goto L_00414F68;
    case 148u: goto L_00414F80;
    case 149u: goto L_00414F8C;
    case 150u: goto L_00414F98;
    case 151u: goto L_00414FB8;
    case 152u: goto L_00414FC0;
    case 153u: goto L_00415010;
    case 154u: goto L_00415020;
    case 155u: goto L_00415028;
    case 156u: goto L_00415030;
    case 157u: goto L_00415090;
    case 158u: goto L_004150E0;
    case 159u: goto L_004150F0;
    case 160u: goto L_004150F8;
    case 161u: goto L_00415100;
    case 162u: goto L_00415160;
    case 163u: goto L_004151A8;
    case 164u: goto L_00415208;
    case 165u: goto L_00415218;
    case 166u: goto L_00415220;
    case 167u: goto L_00415228;
    case 168u: goto L_00415290;
    case 169u: goto L_00415298;
    case 170u: goto L_004152E8;
    case 171u: goto L_004152F8;
    case 172u: goto L_00415300;
    case 173u: goto L_00415308;
    case 174u: goto L_00415368;
    case 175u: goto L_00415380;
    case 176u: goto L_004153A0;
    case 177u: goto L_00415414;
    case 178u: goto L_00415434;
    case 179u: goto L_0041543C;
    case 180u: goto L_00415468;
    case 181u: goto L_00415484;
    case 182u: goto L_004154A4;
    case 183u: goto L_004154C8;
    case 184u: goto L_004154E0;
    case 185u: goto L_004154F8;
    case 186u: goto L_00415514;
    case 187u: goto L_00415528;
    case 188u: goto L_00415530;
    case 189u: goto L_0041554C;
    case 190u: goto L_00415580;
    case 191u: goto L_004155B8;
    case 192u: goto L_004155DC;
    case 193u: goto L_00415600;
    case 194u: goto L_00415628;
    case 195u: goto L_00415638;
    case 196u: goto L_00415640;
    case 197u: goto L_00415648;
    case 198u: goto L_00415650;
    case 199u: goto L_004156B0;
    case 200u: goto L_004156D4;
    case 201u: goto L_004156E0;
    case 202u: goto L_00415704;
    case 203u: goto L_00415710;
    case 204u: goto L_00415728;
    case 205u: goto L_00415744;
    case 206u: goto L_00415758;
    case 207u: goto L_004157BC;
    case 208u: goto L_004157C4;
    case 209u: goto L_004157D0;
    case 210u: goto L_0041583C;
    case 211u: goto L_00415844;
    case 212u: goto L_00415850;
    case 213u: goto L_00415890;
    case 214u: goto L_004158A8;
    case 215u: goto L_004158C0;
    case 216u: goto L_004158D8;
    case 217u: goto L_004158F0;
    case 218u: goto L_00415908;
    case 219u: goto L_00415928;
    case 220u: goto L_00415940;
    case 221u: goto L_00415958;
    case 222u: goto L_00415960;
    case 223u: goto L_00415978;
    case 224u: goto L_00415990;
    case 225u: goto L_0041599C;
    case 226u: goto L_004159C0;
    case 227u: goto L_004159D8;
    case 228u: goto L_004159F8;
    case 229u: goto L_00415A10;
    case 230u: goto L_00415A30;
    case 231u: goto L_00415A50;
    case 232u: goto L_00415A68;
    case 233u: goto L_00415A80;
    case 234u: goto L_00415A98;
    case 235u: goto L_00415AB0;
    case 236u: goto L_00415AC8;
    case 237u: goto L_00415B08;
    case 238u: goto L_00415B30;
    case 239u: goto L_00415B38;
    case 240u: goto L_00415B48;
    case 241u: goto L_00415B58;
    case 242u: goto L_00415B68;
    case 243u: goto L_00415B8C;
    case 244u: goto L_00415BA0;
    case 245u: goto L_00415BC0;
    case 246u: goto L_00415C08;
    case 247u: goto L_00415C48;
    case 248u: goto L_00415C90;
    case 249u: goto L_00415CE4;
    case 250u: goto L_00415CF0;
    case 251u: goto L_00415D00;
    case 252u: goto L_00415D24;
    case 253u: goto L_00415D40;
    case 254u: goto L_00415D58;
    case 255u: goto L_00415D84;
    case 256u: goto L_00415DC8;
    case 257u: goto L_00415DF0;
    case 258u: goto L_00415DF8;
    case 259u: goto L_00415E08;
    case 260u: goto L_00415E28;
    case 261u: goto L_00415E30;
    case 262u: goto L_00415E54;
    case 263u: goto L_00415E70;
    case 264u: goto L_00415E94;
    case 265u: goto L_00415EB0;
    case 266u: goto L_00415EC8;
    case 267u: goto L_00415EE0;
    case 268u: goto L_00415EF4;
    case 269u: goto L_00415F10;
    case 270u: goto L_00415F28;
    case 271u: goto L_00415F40;
    case 272u: goto L_00415F84;
    case 273u: goto L_00415FB0;
    case 274u: goto L_00416008;
    case 275u: goto L_00416010;
    case 276u: goto L_0041602C;
    case 277u: goto L_00416048;
    case 278u: goto L_00416060;
    case 279u: goto L_0041607C;
    case 280u: goto L_004160AC;
    case 281u: goto L_004160D4;
    case 282u: goto L_004160F8;
    case 283u: goto L_00416100;
    case 284u: goto L_0041611C;
    case 285u: goto L_00416130;
    case 286u: goto L_00416148;
    case 287u: goto L_0041616C;
    case 288u: goto L_00416174;
    case 289u: goto L_004161B4;
    case 290u: goto L_004161D0;
    case 291u: goto L_004161E8;
    case 292u: goto L_00416200;
    case 293u: goto L_00416220;
    case 294u: goto L_00416248;
    case 295u: goto L_00416298;
    case 296u: goto L_004162B0;
    case 297u: goto L_004162B8;
    case 298u: goto L_004162DC;
    case 299u: goto L_00416368;
    case 300u: goto L_004163BC;
    case 301u: goto L_004163E0;
    case 302u: goto L_00416418;
    case 303u: goto L_00416420;
    case 304u: goto L_00416468;
    case 305u: goto L_00416494;
    case 306u: goto L_004164AC;
    case 307u: goto L_004164C4;
    case 308u: goto L_004164D8;
    case 309u: goto L_00416500;
    case 310u: goto L_00416538;
    case 311u: goto L_00416550;
    case 312u: goto L_00416568;
    case 313u: goto L_00416590;
    case 314u: goto L_004165B0;
    case 315u: goto L_004165DC;
    case 316u: goto L_004165F0;
    case 317u: goto L_00416608;
    case 318u: goto L_00416638;
    case 319u: goto L_00416648;
    case 320u: goto L_00416668;
    case 321u: goto L_00416670;
    case 322u: goto L_00416694;
    case 323u: goto L_004166A4;
    case 324u: goto L_004166AC;
    case 325u: goto L_004166D0;
    case 326u: goto L_0041671C;
    case 327u: goto L_00416728;
    case 328u: goto L_00416734;
    case 329u: goto L_00416760;
    case 330u: goto L_00416778;
    case 331u: goto L_00416790;
    case 332u: goto L_00416798;
    case 333u: goto L_004167A0;
    case 334u: goto L_004167C0;
    case 335u: goto L_004167DC;
    case 336u: goto L_004167F8;
    case 337u: goto L_00416800;
    case 338u: goto L_00416864;
    case 339u: goto L_00416898;
    case 340u: goto L_004168C0;
    case 341u: goto L_004168CC;
    case 342u: goto L_004168D8;
    case 343u: goto L_00416928;
    case 344u: goto L_00416948;
    case 345u: goto L_00416958;
    case 346u: goto L_00416960;
    case 347u: goto L_00416968;
    case 348u: goto L_0041697C;
    case 349u: goto L_004169D8;
    case 350u: goto L_004169FC;
    case 351u: goto L_00416A04;
    case 352u: goto L_00416A0C;
    case 353u: goto L_00416A24;
    case 354u: goto L_00416A40;
    case 355u: goto L_00416A54;
    case 356u: goto L_00416A5C;
    case 357u: goto L_00416A80;
    case 358u: goto L_00416AC0;
    case 359u: goto L_00416AE4;
    case 360u: goto L_00416B0C;
    case 361u: goto L_00416B48;
    case 362u: goto L_00416B64;
    case 363u: goto L_00416B74;
    case 364u: goto L_00416B90;
    case 365u: goto L_00416BD0;
    case 366u: goto L_00416C10;
    case 367u: goto L_00416C34;
    case 368u: goto L_00416C5C;
    case 369u: goto L_00416C98;
    case 370u: goto L_00416CB4;
    case 371u: goto L_00416CD0;
    case 372u: goto L_00416D10;
    case 373u: goto L_00416D38;
    case 374u: goto L_00416D4C;
    case 375u: goto L_00416D70;
    case 376u: goto L_00416D78;
    case 377u: goto L_00416D80;
    case 378u: goto L_00416D88;
    case 379u: goto L_00416D90;
    case 380u: goto L_00416DA0;
    case 381u: goto L_00416DB0;
    case 382u: goto L_00416DB8;
    case 383u: goto L_00416DC0;
    case 384u: goto L_00416DC8;
    case 385u: goto L_00416DE0;
    case 386u: goto L_00416DF8;
    case 387u: goto L_00416E10;
    case 388u: goto L_00416E28;
    case 389u: goto L_00416E40;
    case 390u: goto L_00416E58;
    case 391u: goto L_00416E70;
    case 392u: goto L_00416E88;
    case 393u: goto L_00416EB8;
    case 394u: goto L_00416ED0;
    case 395u: goto L_00416EE8;
    case 396u: goto L_00416F00;
    case 397u: goto L_00416F24;
    case 398u: goto L_00416F40;
    case 399u: goto L_00416F60;
    case 400u: goto L_00416F88;
    case 401u: goto L_00416FA8;
    case 402u: goto L_00416FB0;
    case 403u: goto L_00416FC8;
    case 404u: goto L_00416FF0;
    case 405u: goto L_00417028;
    case 406u: goto L_00417038;
    case 407u: goto L_00417088;
    case 408u: goto L_004170C4;
    case 409u: goto L_0041713C;
    case 410u: goto L_00417154;
    case 411u: goto L_00417190;
    case 412u: goto L_004171F8;
    case 413u: goto L_00417248;
    case 414u: goto L_00417268;
    case 415u: goto L_004172D0;
    case 416u: goto L_00417320;
    case 417u: goto L_00417338;
    case 418u: goto L_00417354;
    case 419u: goto L_00417360;
    case 420u: goto L_00417368;
    case 421u: goto L_00417380;
    case 422u: goto L_004173A8;
    case 423u: goto L_004173B8;
    case 424u: goto L_004173C8;
    case 425u: goto L_004173DC;
    case 426u: goto L_004173E4;
    case 427u: goto L_004173F8;
    case 428u: goto L_00417414;
    case 429u: goto L_0041741C;
    case 430u: goto L_00417450;
    case 431u: goto L_00417484;
    case 432u: goto L_0041749C;
    case 433u: goto L_004174C0;
    case 434u: goto L_004174F4;
    case 435u: goto L_00417538;
    case 436u: goto L_0041756C;
    case 437u: goto L_00417584;
    case 438u: goto L_004175A8;
    case 439u: goto L_004175BC;
    case 440u: goto L_004175C0;
    case 441u: goto L_004175C8;
    case 442u: goto L_004175E0;
    case 443u: goto L_004175F4;
    case 444u: goto L_004175FC;
    case 445u: goto L_00417610;
    case 446u: goto L_00417624;
    case 447u: goto L_0041762C;
    case 448u: goto L_00417650;
    case 449u: goto L_00417664;
    case 450u: goto L_0041766C;
    case 451u: goto L_00417680;
    case 452u: goto L_00417694;
    case 453u: goto L_0041769C;
    case 454u: goto L_004176A8;
    case 455u: goto L_004176B0;
    case 456u: goto L_004176D0;
    case 457u: goto L_004176E4;
    case 458u: goto L_004176EC;
    case 459u: goto L_004176F4;
    case 460u: goto L_00417708;
    case 461u: goto L_00417710;
    case 462u: goto L_0041772C;
    case 463u: goto L_00417738;
    case 464u: goto L_00417740;
    case 465u: goto L_00417758;
    case 466u: goto L_00417778;
    case 467u: goto L_0041778C;
    case 468u: goto L_00417794;
    case 469u: goto L_0041779C;
    case 470u: goto L_004177B0;
    case 471u: goto L_004177C8;
    case 472u: goto L_00417800;
    case 473u: goto L_00417814;
    case 474u: goto L_0041781C;
    case 475u: goto L_00417824;
    case 476u: goto L_00417838;
    case 477u: goto L_0041784C;
    case 478u: goto L_00417854;
    case 479u: goto L_00417864;
    case 480u: goto L_00417878;
    case 481u: goto L_00417894;
    case 482u: goto L_004178A0;
    case 483u: goto L_004178A8;
    case 484u: goto L_004178C0;
    case 485u: goto L_004178DC;
    case 486u: goto L_004178E4;
    case 487u: goto L_004178EC;
    case 488u: goto L_00417908;
    case 489u: goto L_0041791C;
    case 490u: goto L_00417924;
    case 491u: goto L_00417938;
    case 492u: goto L_0041794C;
    case 493u: goto L_004179A0;
    case 494u: goto L_004179B4;
    case 495u: goto L_004179BC;
    case 496u: goto L_004179D0;
    case 497u: goto L_004179EC;
    case 498u: goto L_004179F0;
    case 499u: goto L_004179F8;
    case 500u: goto L_00417A20;
    case 501u: goto L_00417A44;
    case 502u: goto L_00417A54;
    case 503u: goto L_00417A70;
    case 504u: goto L_00417A80;
    case 505u: goto L_00417A9C;
    case 506u: goto L_00417AA8;
    case 507u: goto L_00417AC0;
    case 508u: goto L_00417AD0;
    case 509u: goto L_00417AD8;
    case 510u: goto L_00417AF0;
    case 511u: goto L_00417B1C;
    case 512u: goto L_00417B24;
    case 513u: goto L_00417B48;
    case 514u: goto L_00417B68;
    case 515u: goto L_00417B80;
    case 516u: goto L_00417B98;
    case 517u: goto L_00417BDC;
    case 518u: goto L_00417C3C;
    case 519u: goto L_00417C54;
    case 520u: goto L_00417CB0;
    case 521u: goto L_00417CE4;
    case 522u: goto L_00417D34;
    case 523u: goto L_00417D4C;
    case 524u: goto L_00417D88;
    case 525u: goto L_00417DE0;
    case 526u: goto L_00417E58;
    case 527u: goto L_00417E8C;
    case 528u: goto L_00417EA0;
    case 529u: goto L_00417F18;
    case 530u: goto L_00417F80;
    case 531u: goto L_00417F88;
    case 532u: goto L_00417F94;
    case 533u: goto L_00417F9C;
    case 534u: goto L_00417FC4;
    case 535u: goto L_00417FE0;
    case 536u: goto L_00417FF8;
    default: bad_entry(c, 0x00414000u); return;
    }
L_00414000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00414008:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414018u);  if (depth < kMaxDepth) unit_00C6(c, 299u, depth + 1u); else { c.pc = 0x0041A0C8u; return; } if (c.pc != 0x00414018u) [[unlikely]] return; }
L_00414018:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00414028:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414038u);  if (depth < kMaxDepth) unit_00CB(c, 90u, depth + 1u); else { c.pc = 0x0042D6B0u; return; } if (c.pc != 0x00414038u) [[unlikely]] return; }
L_00414038:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00414048:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[4].w[0] + 13432u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 16952u);
    set32(c.r[2], c.r[2].w[0] + 18496u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 13;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_004141A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414084u);  if (depth < kMaxDepth) unit_00CB(c, 30u, depth + 1u); else { c.pc = 0x0042C730u; return; } if (c.pc != 0x00414084u) [[unlikely]] return; }
L_00414084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041408Cu);  if (depth < kMaxDepth) unit_00CB(c, 32u, depth + 1u); else { c.pc = 0x0042C790u; return; } if (c.pc != 0x0041408Cu) [[unlikely]] return; }
L_0041408C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414094u);  if (depth < kMaxDepth) unit_00C9(c, 159u, depth + 1u); else { c.pc = 0x00425968u; return; } if (c.pc != 0x00414094u) [[unlikely]] return; }
L_00414094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041409Cu);  if (depth < kMaxDepth) unit_00C9(c, 93u, depth + 1u); else { c.pc = 0x00424D78u; return; } if (c.pc != 0x0041409Cu) [[unlikely]] return; }
L_0041409C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004140A4u);  if (depth < kMaxDepth) unit_00C9(c, 25u, depth + 1u); else { c.pc = 0x00424368u; return; } if (c.pc != 0x004140A4u) [[unlikely]] return; }
L_004140A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004140ACu);  if (depth < kMaxDepth) unit_00CB(c, 57u, depth + 1u); else { c.pc = 0x0042D220u; return; } if (c.pc != 0x004140ACu) [[unlikely]] return; }
L_004140AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004140B4u);  if (depth < kMaxDepth) unit_00C5(c, 404u, depth + 1u); else { c.pc = 0x00416FF0u; return; } if (c.pc != 0x004140B4u) [[unlikely]] return; }
L_004140B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004140BCu);  if (depth < kMaxDepth) unit_00C5(c, 242u, depth + 1u); else { c.pc = 0x00415B68u; return; } if (c.pc != 0x004140BCu) [[unlikely]] return; }
L_004140BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004140C4u);  if (depth < kMaxDepth) unit_00CB(c, 80u, depth + 1u); else { c.pc = 0x0042D510u; return; } if (c.pc != 0x004140C4u) [[unlikely]] return; }
L_004140C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004140CCu);  if (depth < kMaxDepth) unit_00C5(c, 219u, depth + 1u); else { c.pc = 0x00415928u; return; } if (c.pc != 0x004140CCu) [[unlikely]] return; }
L_004140CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004140D4u);  if (depth < kMaxDepth) unit_00C8(c, 204u, depth + 1u); else { c.pc = 0x00421640u; return; } if (c.pc != 0x004140D4u) [[unlikely]] return; }
L_004140D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004140DCu);  if (depth < kMaxDepth) unit_00C9(c, 352u, depth + 1u); else { c.pc = 0x00427750u; return; } if (c.pc != 0x004140DCu) [[unlikely]] return; }
L_004140DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004140ECu); set32(c.r[4], c.r[4].w[0] + 16312u);  if (depth < kMaxDepth) unit_00C5(c, 221u, depth + 1u); else { c.pc = 0x00415958u; return; } if (c.pc != 0x004140ECu) [[unlikely]] return; }
L_004140EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], c.r[4].w[0] + 16336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004140FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 197u, depth + 1u); else { c.pc = 0x00421578u; return; } if (c.pc != 0x004140FCu) [[unlikely]] return; }
L_004140FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 13464u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414110u); set32(c.r[6], 0u + 3200u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00414110u) [[unlikely]] return; }
L_00414110:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], c.r[6].w[0] + 16392u);
    set32(c.r[8], c.r[8].w[0] + 18576u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414130u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 320u, depth + 1u); else { c.pc = 0x004272A0u; return; } if (c.pc != 0x00414130u) [[unlikely]] return; }
L_00414130:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] + 16424u);
    set32(c.r[7], c.r[7].w[0] + 18592u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041414Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 308u, depth + 1u); else { c.pc = 0x004270A0u; return; } if (c.pc != 0x0041414Cu) [[unlikely]] return; }
L_0041414C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], c.r[7].w[0] + 18608u);
    set32(c.r[5], c.r[5].w[0] + 16360u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 5u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414170u); st32((c.r[3].w[0] + 13452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C9(c, 308u, depth + 1u); else { c.pc = 0x004270A0u; return; } if (c.pc != 0x00414170u) [[unlikely]] return; }
L_00414170:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + 13456u);
    st32((c.r[5].w[0] + 13440u), c.r[2].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[4], 0u + 60u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414194u); st32((c.r[6].w[0] + 13448u), 0u);  if (depth < kMaxDepth) unit_00C6(c, 277u, depth + 1u); else { c.pc = 0x00419E98u; return; } if (c.pc != 0x00414194u) [[unlikely]] return; }
L_00414194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041419Cu);  if (depth < kMaxDepth) unit_00CB(c, 33u, depth + 1u); else { c.pc = 0x0042C7A8u; return; } if (c.pc != 0x0041419Cu) [[unlikely]] return; }
L_0041419C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_004141A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004141B8:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_004141C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[3].w[0] + 13432u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_004142D0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] - 10916u);
    set32(c.r[17], 0u + 15u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414204u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_00C6(c, 151u, depth + 1u); else { c.pc = 0x00418F38u; return; } if (c.pc != 0x00414204u) [[unlikely]] return; }
L_00414204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041420Cu);  if (depth < kMaxDepth) unit_00C5(c, 220u, depth + 1u); else { c.pc = 0x00415940u; return; } if (c.pc != 0x0041420Cu) [[unlikely]] return; }
L_0041420C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414214u);  if (depth < kMaxDepth) unit_00CB(c, 85u, depth + 1u); else { c.pc = 0x0042D5E8u; return; } if (c.pc != 0x00414214u) [[unlikely]] return; }
L_00414214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041421Cu);  if (depth < kMaxDepth) unit_00C5(c, 406u, depth + 1u); else { c.pc = 0x00417038u; return; } if (c.pc != 0x0041421Cu) [[unlikely]] return; }
L_0041421C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414224u);  if (depth < kMaxDepth) unit_00C8(c, 210u, depth + 1u); else { c.pc = 0x004216C0u; return; } if (c.pc != 0x00414224u) [[unlikely]] return; }
L_00414224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041422Cu);  if (depth < kMaxDepth) unit_00CB(c, 32u, depth + 1u); else { c.pc = 0x0042C790u; return; } if (c.pc != 0x0041422Cu) [[unlikely]] return; }
L_0041422C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414238u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C9(c, 316u, depth + 1u); else { c.pc = 0x004271C8u; return; } if (c.pc != 0x00414238u) [[unlikely]] return; }
L_00414238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 13452u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414248u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_00C9(c, 316u, depth + 1u); else { c.pc = 0x004271C8u; return; } if (c.pc != 0x00414248u) [[unlikely]] return; }
L_00414248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 13440u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414258u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00C9(c, 316u, depth + 1u); else { c.pc = 0x004271C8u; return; } if (c.pc != 0x00414258u) [[unlikely]] return; }
L_00414258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414260u);  if (depth < kMaxDepth) unit_00C9(c, 354u, depth + 1u); else { c.pc = 0x00427790u; return; } if (c.pc != 0x00414260u) [[unlikely]] return; }
L_00414260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414268u);  if (depth < kMaxDepth) unit_00C5(c, 245u, depth + 1u); else { c.pc = 0x00415BC0u; return; } if (c.pc != 0x00414268u) [[unlikely]] return; }
L_00414268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414270u);  if (depth < kMaxDepth) unit_00CB(c, 59u, depth + 1u); else { c.pc = 0x0042D258u; return; } if (c.pc != 0x00414270u) [[unlikely]] return; }
L_00414270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414278u);  if (depth < kMaxDepth) unit_00C9(c, 31u, depth + 1u); else { c.pc = 0x004243E8u; return; } if (c.pc != 0x00414278u) [[unlikely]] return; }
L_00414278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414280u);  if (depth < kMaxDepth) unit_00C9(c, 99u, depth + 1u); else { c.pc = 0x00424DF8u; return; } if (c.pc != 0x00414280u) [[unlikely]] return; }
L_00414280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414288u);  if (depth < kMaxDepth) unit_00C9(c, 165u, depth + 1u); else { c.pc = 0x004259E8u; return; } if (c.pc != 0x00414288u) [[unlikely]] return; }
L_00414288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414290u);  if (depth < kMaxDepth) unit_00CB(c, 33u, depth + 1u); else { c.pc = 0x0042C7A8u; return; } if (c.pc != 0x00414290u) [[unlikely]] return; }
L_00414290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414298u);  if (depth < kMaxDepth) unit_00CB(c, 31u, depth + 1u); else { c.pc = 0x0042C760u; return; } if (c.pc != 0x00414298u) [[unlikely]] return; }
L_00414298:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] + 13464u);
    c.budget -= 4;
L_004142A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_004142C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004142BCu); set32(c.r[4], c.r[18].w[0] + 18632u);  if (depth < kMaxDepth) unit_00C9(c, 304u, depth + 1u); else { c.pc = 0x00427048u; return; } if (c.pc != 0x004142BCu) [[unlikely]] return; }
L_004142BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004142C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 130u, depth + 1u); else { c.pc = 0x00418D30u; return; } if (c.pc != 0x004142C4u) [[unlikely]] return; }
L_004142C4:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_004142C8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 200u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004142A8u | kUnwind; return; } goto L_004142A8; } }
L_004142D0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004142E8:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 24;
L_00414348:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414358u);  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x00414358u) [[unlikely]] return; }
L_00414358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414360u);  if (depth < kMaxDepth) unit_00C5(c, 53u, depth + 1u); else { c.pc = 0x00414370u; return; } if (c.pc != 0x00414360u) [[unlikely]] return; }
L_00414360:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 35u, depth); }
L_00414370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C8(c, 167u, depth); }
L_00414388:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[2].w[0] + 16736u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_004143EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004143B4u); c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (depth < kMaxDepth) unit_00DF(c, 359u, depth + 1u); else { c.pc = 0x0047FD50u; return; } if (c.pc != 0x004143B4u) [[unlikely]] return; }
L_004143B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 16688u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004143CCu); set32(c.r[16], c.r[16].w[0] + 16824u);  if (depth < kMaxDepth) unit_00DF(c, 347u, depth + 1u); else { c.pc = 0x0047FCF0u; return; } if (c.pc != 0x004143CCu) [[unlikely]] return; }
L_004143CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[3].w[0] - 17840u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004143E4u); st32((c.r[5].w[0] - 17836u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00C5(c, 102u, depth + 1u); else { c.pc = 0x004149F0u; return; } if (c.pc != 0x004143E4u) [[unlikely]] return; }
L_004143E4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 2;
L_004143EC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00414410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[3].w[0] + 16736u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00414460; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[16], c.r[16].w[0] + 16824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414448u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00C5(c, 105u, depth + 1u); else { c.pc = 0x00414A58u; return; } if (c.pc != 0x00414448u) [[unlikely]] return; }
L_00414448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414450u); set32(c.r[3], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00DF(c, 359u, depth + 1u); else { c.pc = 0x0047FD50u; return; } if (c.pc != 0x00414450u) [[unlikely]] return; }
L_00414450:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], ld32((c.r[3].w[0] - 17840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414460u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 347u, depth + 1u); else { c.pc = 0x0047FCF0u; return; } if (c.pc != 0x00414460u) [[unlikely]] return; }
L_00414460:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { st32((c.r[17].w[0]), 0u);  goto L_0041446C; }
L_0041446C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00414480:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_00414540; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 16688u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 16740u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x0BEB0000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[18].d[0] | 49663ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004144D8u); c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_00DF(c, 347u, depth + 1u); else { c.pc = 0x0047FCF0u; return; } if (c.pc != 0x004144D8u) [[unlikely]] return; }
L_004144D8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004144E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004144E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 98u, depth + 1u); else { c.pc = 0x00414988u; return; } if (c.pc != 0x004144E8u) [[unlikely]] return; }
L_004144E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004144F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 102u, depth + 1u); else { c.pc = 0x004149F0u; return; } if (c.pc != 0x004144F0u) [[unlikely]] return; }
L_004144F0:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00414510; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004144E0u | kUnwind; return; } goto L_004144E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414510u); set32(c.r[4], c.r[20].w[0] + 19192u);  if (depth < kMaxDepth) unit_00C9(c, 304u, depth + 1u); else { c.pc = 0x00427048u; return; } if (c.pc != 0x00414510u) [[unlikely]] return; }
L_00414510:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_00DF(c, 347u, depth); }
L_00414540:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00414568:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + 16844u);
    set32(c.r[5], ld32((c.r[3].w[0] + 16712u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00414480u | kUnwind; return; } goto L_00414480; }
L_00414590:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + 16768u);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[3].w[0]), c.r[2].d[0]);  c.pc = t; return; }
L_004145A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + 16856u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[3].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_004145E4; }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_004145D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004145D8u);  if (depth < kMaxDepth) unit_00C5(c, 69u, depth + 1u); else { c.pc = 0x00414590u; return; } if (c.pc != 0x004145D8u) [[unlikely]] return; }
L_004145D8:
    c.r[2].d[0] = ld64((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004145D0u | kUnwind; return; } goto L_004145D0; } }
L_004145E4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 16864u);
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DF(c, 337u, depth); }
L_00414600:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[7], c.r[2].w[0] + 16888u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[3].d[0] = ld64((c.r[7].w[0]));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_004146D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[19], c.r[2].w[0] + 16784u);
    set32(c.r[22], c.r[3].w[0] + 16844u);
    set32(c.r[18], c.r[4].w[0] + 16968u);
    set32(c.r[21], c.r[5].w[0] + 16848u);
    set32(c.r[17], c.r[6].w[0] + 16744u);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
L_00414668:
    c.r[2].d[0] = ld64((c.r[19].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[19].w[0]), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041467Cu); set32(c.r[4], ld32((c.r[22].w[0])));  if (depth < kMaxDepth) unit_00C5(c, 105u, depth + 1u); else { c.pc = 0x00414A58u; return; } if (c.pc != 0x0041467Cu) [[unlikely]] return; }
L_0041467C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00414690; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414690u);  if (depth < kMaxDepth) unit_00C5(c, 201u, depth + 1u); else { c.pc = 0x004156E0u; return; } if (c.pc != 0x00414690u) [[unlikely]] return; }
L_00414690:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041469Cu); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_00C5(c, 126u, depth + 1u); else { c.pc = 0x00414D08u; return; } if (c.pc != 0x0041469Cu) [[unlikely]] return; }
L_0041469C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_004146AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004146ACu); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_00C5(c, 105u, depth + 1u); else { c.pc = 0x00414A58u; return; } if (c.pc != 0x004146ACu) [[unlikely]] return; }
L_004146AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004146B4u);  if (depth < kMaxDepth) unit_00C5(c, 190u, depth + 1u); else { c.pc = 0x00415580u; return; } if (c.pc != 0x004146B4u) [[unlikely]] return; }
L_004146B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004146BCu); st32((c.r[17].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00C9(c, 339u, depth + 1u); else { c.pc = 0x00427618u; return; } if (c.pc != 0x004146BCu) [[unlikely]] return; }
L_004146BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004146C4u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_00C5(c, 101u, depth + 1u); else { c.pc = 0x004149D8u; return; } if (c.pc != 0x004146C4u) [[unlikely]] return; }
L_004146C4:
    c.r[2].d[0] = ld64((c.r[20].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00414668u | kUnwind; return; } goto L_00414668; } }
L_004146D0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + 16896u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_00DF(c, 337u, depth); }
L_00414708:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[21].w[0] + 16904u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[3].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_004147C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[20], c.r[2].w[0] + 16792u);
    set32(c.r[19], c.r[3].w[0] + 16752u);
    set32(c.r[17], c.r[4].w[0] + 16964u);
    set32(c.r[22], 0u + 1u);
    c.r[18].d[0] = c.r[18].d[0] | 224ull;
    c.budget -= 10;
L_00414768:
    c.r[2].d[0] = ld64((c.r[20].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[20].w[0]), c.r[2].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[19].w[0]), c.r[22].w[0]);  if (t) { goto L_00414788; } }
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    st64((c.r[18].w[0]), c.r[2].d[0]);
    c.budget -= 2;
L_00414788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414790u);  if (depth < kMaxDepth) unit_00C9(c, 341u, depth + 1u); else { c.pc = 0x00427648u; return; } if (c.pc != 0x00414790u) [[unlikely]] return; }
L_00414790:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st64((c.r[18].w[0]), 0ull);  goto L_0041479C; }
L_0041479C:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[16], c.r[21].w[0] + 16904u);
    c.r[2].d[0] = ld64((c.r[16].w[0]));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_004147C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004147B8u);  if (depth < kMaxDepth) unit_00C5(c, 101u, depth + 1u); else { c.pc = 0x004149D8u; return; } if (c.pc != 0x004147B8u) [[unlikely]] return; }
L_004147B8:
    c.r[2].d[0] = ld64((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00414768u | kUnwind; return; } goto L_00414768; } }
L_004147C4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + 16912u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_00DF(c, 337u, depth); }
L_004147F8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[6], c.r[2].w[0] + 16920u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[3].d[0] = ld64((c.r[6].w[0]));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_004148F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[20], c.r[2].w[0] + 16800u);
    set32(c.r[19], c.r[3].w[0] + 16756u);
    set32(c.r[18], c.r[4].w[0] + 16740u);
    set32(c.r[23], c.r[5].w[0] + 16968u);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[17], 0u + 1u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 11;
L_00414860:
    c.r[2].d[0] = ld64((c.r[20].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[20].w[0]), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414874u); st32((c.r[19].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00C9(c, 343u, depth + 1u); else { c.pc = 0x00427678u; return; } if (c.pc != 0x00414874u) [[unlikely]] return; }
L_00414874:
    st32((c.r[19].w[0]), 0u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00414890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414890u); st32((c.r[18].w[0]), 0u);  if (depth < kMaxDepth) unit_00C5(c, 101u, depth + 1u); else { c.pc = 0x004149D8u; return; } if (c.pc != 0x00414890u) [[unlikely]] return; }
L_00414890:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004148EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004148A0u);  if (depth < kMaxDepth) unit_00C5(c, 126u, depth + 1u); else { c.pc = 0x00414D08u; return; } if (c.pc != 0x004148A0u) [[unlikely]] return; }
L_004148A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[16], c.r[21].w[0] + 16848u);  if (t) { goto L_004148C8; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004148B4u);  if (depth < kMaxDepth) unit_00C5(c, 102u, depth + 1u); else { c.pc = 0x004149F0u; return; } if (c.pc != 0x004148B4u) [[unlikely]] return; }
L_004148B4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_004148C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004148C8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00C5(c, 98u, depth + 1u); else { c.pc = 0x00414988u; return; } if (c.pc != 0x004148C8u) [[unlikely]] return; }
L_004148C8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_004148E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004148E0u);  if (depth < kMaxDepth) unit_00C5(c, 201u, depth + 1u); else { c.pc = 0x004156E0u; return; } if (c.pc != 0x004148E0u) [[unlikely]] return; }
L_004148E0:
    st32((c.r[23].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_004148E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004148ECu);  if (depth < kMaxDepth) unit_00C5(c, 101u, depth + 1u); else { c.pc = 0x004149D8u; return; } if (c.pc != 0x004148ECu) [[unlikely]] return; }
L_004148EC:
    c.r[2].d[0] = ld64((c.r[22].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00414860u | kUnwind; return; } goto L_00414860; } }
L_004148F8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + 16928u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 14;
    { set32(c.r[29], c.r[29].w[0] + 80u);  [[clang::musttail]] return unit_00DF(c, 337u, depth); }
L_00414938:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_00414978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414954u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 363u, depth + 1u); else { c.pc = 0x0047FD70u; return; } if (c.pc != 0x00414954u) [[unlikely]] return; }
L_00414954:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 12u);  if (t) { goto L_00414970; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0041497C; } }
L_00414970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414978u);  if (depth < kMaxDepth) unit_00E0(c, 162u, depth + 1u); else { c.pc = 0x00480BE0u; return; } if (c.pc != 0x00414978u) [[unlikely]] return; }
L_00414978:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0041497C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00414988:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_004149C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004149A4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 361u, depth + 1u); else { c.pc = 0x0047FD60u; return; } if (c.pc != 0x004149A4u) [[unlikely]] return; }
L_004149A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 12u);  if (t) { goto L_004149C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004149CC; } }
L_004149C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004149C8u);  if (depth < kMaxDepth) unit_00DF(c, 367u, depth + 1u); else { c.pc = 0x0047FD90u; return; } if (c.pc != 0x004149C8u) [[unlikely]] return; }
L_004149C8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004149CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004149D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DF(c, 365u, depth); }
L_004149F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_00414A3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414A14u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 361u, depth + 1u); else { c.pc = 0x0047FD60u; return; } if (c.pc != 0x00414A14u) [[unlikely]] return; }
L_00414A14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 8u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 12u);  if (t) { goto L_00414A30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00414A40; } }
L_00414A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414A38u);  if (depth < kMaxDepth) unit_00DF(c, 379u, depth + 1u); else { c.pc = 0x0047FDF0u; return; } if (c.pc != 0x00414A38u) [[unlikely]] return; }
L_00414A38:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00414A3C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00414A40:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00414A58:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_00414AA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414A7Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 361u, depth + 1u); else { c.pc = 0x0047FD60u; return; } if (c.pc != 0x00414A7Cu) [[unlikely]] return; }
L_00414A7C:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 12u);  if (t) { goto L_00414AA0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00414AA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414A9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 375u, depth + 1u); else { c.pc = 0x0047FDD0u; return; } if (c.pc != 0x00414A9Cu) [[unlikely]] return; }
L_00414A9C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00414AA0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00414AA4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00414AB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], ld32((c.r[2].w[0] - 17832u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] + 17832u);
    set32(c.r[3], c.r[3].w[0] + 16976u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 2048u);
    set32(c.r[2], c.r[2].w[0] - 24592u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414B04u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DF(c, 329u, depth + 1u); else { c.pc = 0x0047FC60u; return; } if (c.pc != 0x00414B04u) [[unlikely]] return; }
L_00414B04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[3].w[0] + 16824u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414B20u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00E0(c, 174u, depth + 1u); else { c.pc = 0x00480D48u; return; } if (c.pc != 0x00414B20u) [[unlikely]] return; }
L_00414B20:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00414B40; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414B38u);  if (depth < kMaxDepth) unit_00C5(c, 105u, depth + 1u); else { c.pc = 0x00414A58u; return; } if (c.pc != 0x00414B38u) [[unlikely]] return; }
L_00414B38:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 2;
L_00414B40:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414B4Cu); set32(c.r[5], ld32((c.r[2].w[0] + 16692u)));  if (depth < kMaxDepth) unit_00DF(c, 347u, depth + 1u); else { c.pc = 0x0047FCF0u; return; } if (c.pc != 0x00414B4Cu) [[unlikely]] return; }
L_00414B4C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00414B60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], ld32((c.r[2].w[0] - 17832u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + 23120u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4096u);
    set32(c.r[5], c.r[5].w[0] + 17920u);
    set32(c.r[2], c.r[2].w[0] - 24592u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[16], c.r[16].w[0] + 16832u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414BB4u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DF(c, 329u, depth + 1u); else { c.pc = 0x0047FC60u; return; } if (c.pc != 0x00414BB4u) [[unlikely]] return; }
L_00414BB4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414BC8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00E0(c, 174u, depth + 1u); else { c.pc = 0x00480D48u; return; } if (c.pc != 0x00414BC8u) [[unlikely]] return; }
L_00414BC8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414BD8u); set32(c.r[5], ld32((c.r[2].w[0] + 16700u)));  if (depth < kMaxDepth) unit_00DF(c, 347u, depth + 1u); else { c.pc = 0x0047FCF0u; return; } if (c.pc != 0x00414BD8u) [[unlikely]] return; }
L_00414BD8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00414BE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], ld32((c.r[2].w[0] - 17832u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + 27216u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4096u);
    set32(c.r[5], c.r[5].w[0] + 18184u);
    set32(c.r[2], c.r[2].w[0] - 24592u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[16], c.r[16].w[0] + 16836u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414C3Cu); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DF(c, 329u, depth + 1u); else { c.pc = 0x0047FC60u; return; } if (c.pc != 0x00414C3Cu) [[unlikely]] return; }
L_00414C3C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414C50u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00E0(c, 174u, depth + 1u); else { c.pc = 0x00480D48u; return; } if (c.pc != 0x00414C50u) [[unlikely]] return; }
L_00414C50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414C60u); set32(c.r[5], ld32((c.r[2].w[0] + 16704u)));  if (depth < kMaxDepth) unit_00DF(c, 347u, depth + 1u); else { c.pc = 0x0047FCF0u; return; } if (c.pc != 0x00414C60u) [[unlikely]] return; }
L_00414C60:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00414C70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], ld32((c.r[2].w[0] - 17832u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + 31312u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 8192u);
    set32(c.r[5], c.r[5].w[0] + 18424u);
    set32(c.r[2], c.r[2].w[0] - 24592u);
    set32(c.r[16], c.r[16].w[0] + 16844u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414CC4u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DF(c, 329u, depth + 1u); else { c.pc = 0x0047FC60u; return; } if (c.pc != 0x00414CC4u) [[unlikely]] return; }
L_00414CC4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414CD8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00E0(c, 174u, depth + 1u); else { c.pc = 0x00480D48u; return; } if (c.pc != 0x00414CD8u) [[unlikely]] return; }
L_00414CD8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414CE8u); set32(c.r[5], ld32((c.r[2].w[0] + 16712u)));  if (depth < kMaxDepth) unit_00DF(c, 347u, depth + 1u); else { c.pc = 0x0047FCF0u; return; } if (c.pc != 0x00414CE8u) [[unlikely]] return; }
L_00414CE8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414CF4u);  if (depth < kMaxDepth) unit_00C5(c, 105u, depth + 1u); else { c.pc = 0x00414A58u; return; } if (c.pc != 0x00414CF4u) [[unlikely]] return; }
L_00414CF4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00414D08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 16680u)));  c.pc = t; return; }
L_00414D18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 16676u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00414D28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 329u, depth); }
L_00414D40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 16672u);
    set32(c.r[5], ld32((c.r[18].w[0] + 16676u)));
    set32(c.r[3], c.r[3].w[0] + 16764u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    st32((c.r[3].w[0]), 0u);
    c.budget -= 16;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] + 16676u);  goto L_00414EAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414D88u);  if (depth < kMaxDepth) unit_00C9(c, 352u, depth + 1u); else { c.pc = 0x00427750u; return; } if (c.pc != 0x00414D88u) [[unlikely]] return; }
L_00414D88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414D98u); set32(c.r[4], c.r[4].w[0] + 17288u);  if (depth < kMaxDepth) unit_00C9(c, 331u, depth + 1u); else { c.pc = 0x004274E8u; return; } if (c.pc != 0x00414D98u) [[unlikely]] return; }
L_00414D98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], c.r[4].w[0] + 17424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414DA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 332u, depth + 1u); else { c.pc = 0x00427500u; return; } if (c.pc != 0x00414DA8u) [[unlikely]] return; }
L_00414DA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[2].w[0] - 16944u);
    set32(c.r[3], c.r[3].w[0] - 16936u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_00414E08; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 25u);
    set32(c.r[4], c.r[17].w[0] + 16688u);
    set32(c.r[3], 0u + 24u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], 0u + 8u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 18u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00414E40; } }
L_00414E08:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[17].w[0] + 16688u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 14;
L_00414E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E48u); c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (depth < kMaxDepth) unit_00DF(c, 359u, depth + 1u); else { c.pc = 0x0047FD50u; return; } if (c.pc != 0x00414E48u) [[unlikely]] return; }
L_00414E48:
    set32(c.r[16], c.r[16].w[0] + 16840u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E5Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00DF(c, 361u, depth + 1u); else { c.pc = 0x0047FD60u; return; } if (c.pc != 0x00414E5Cu) [[unlikely]] return; }
L_00414E5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E6Cu); st32((c.r[3].w[0] - 17832u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C5(c, 108u, depth + 1u); else { c.pc = 0x00414AB8u; return; } if (c.pc != 0x00414E6Cu) [[unlikely]] return; }
L_00414E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E74u);  if (depth < kMaxDepth) unit_00C5(c, 113u, depth + 1u); else { c.pc = 0x00414B60u; return; } if (c.pc != 0x00414E74u) [[unlikely]] return; }
L_00414E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E7Cu);  if (depth < kMaxDepth) unit_00C5(c, 117u, depth + 1u); else { c.pc = 0x00414BE8u; return; } if (c.pc != 0x00414E7Cu) [[unlikely]] return; }
L_00414E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E84u);  if (depth < kMaxDepth) unit_00C5(c, 121u, depth + 1u); else { c.pc = 0x00414C70u; return; } if (c.pc != 0x00414E84u) [[unlikely]] return; }
L_00414E84:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[17].w[0] + 16688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E94u); set32(c.r[5], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_00DF(c, 347u, depth + 1u); else { c.pc = 0x0047FCF0u; return; } if (c.pc != 0x00414E94u) [[unlikely]] return; }
L_00414E94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[5].w[0] + 17768u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414EA8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 325u, depth + 1u); else { c.pc = 0x00427410u; return; } if (c.pc != 0x00414EA8u) [[unlikely]] return; }
L_00414EA8:
    set32(c.r[3], c.r[18].w[0] + 16676u);
    c.budget -= 1;
L_00414EAC:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00414ED0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 16856u);
    set32(c.r[4], c.r[4].w[0] + 16872u);
    set32(c.r[5], c.r[5].w[0] + 16888u);
    set32(c.r[6], c.r[6].w[0] + 16904u);
    set32(c.r[7], c.r[7].w[0] + 16920u);
    set32(c.r[8], c.r[8].w[0] + 16936u);
    st64((c.r[3].w[0]), c.r[2].d[0]);
    st64((c.r[4].w[0]), c.r[2].d[0]);
    st64((c.r[5].w[0]), c.r[2].d[0]);
    st64((c.r[6].w[0]), c.r[2].d[0]);
    st64((c.r[7].w[0]), c.r[2].d[0]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[8].w[0]), c.r[2].d[0]);  c.pc = t; return; }
L_00414F20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 16676u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_00414FA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F48u);  if (depth < kMaxDepth) unit_00C5(c, 141u, depth + 1u); else { c.pc = 0x00414ED0u; return; } if (c.pc != 0x00414F48u) [[unlikely]] return; }
L_00414F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F50u);  if (depth < kMaxDepth) unit_00C5(c, 152u, depth + 1u); else { c.pc = 0x00414FC0u; return; } if (c.pc != 0x00414F50u) [[unlikely]] return; }
L_00414F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F58u);  if (depth < kMaxDepth) unit_00C5(c, 162u, depth + 1u); else { c.pc = 0x00415160u; return; } if (c.pc != 0x00414F58u) [[unlikely]] return; }
L_00414F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F60u);  if (depth < kMaxDepth) unit_00C5(c, 157u, depth + 1u); else { c.pc = 0x00415090u; return; } if (c.pc != 0x00414F60u) [[unlikely]] return; }
L_00414F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F68u);  if (depth < kMaxDepth) unit_00C5(c, 169u, depth + 1u); else { c.pc = 0x00415298u; return; } if (c.pc != 0x00414F68u) [[unlikely]] return; }
L_00414F68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 16840u);
    set32(c.r[5], ld32((c.r[3].w[0] - 17832u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F80u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00DF(c, 347u, depth + 1u); else { c.pc = 0x0047FCF0u; return; } if (c.pc != 0x00414F80u) [[unlikely]] return; }
L_00414F80:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 331u, depth + 1u); else { c.pc = 0x004274E8u; return; } if (c.pc != 0x00414F8Cu) [[unlikely]] return; }
L_00414F8C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 332u, depth + 1u); else { c.pc = 0x00427500u; return; } if (c.pc != 0x00414F98u) [[unlikely]] return; }
L_00414F98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 354u, depth); }
L_00414FA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00414FB8:
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 2;
L_00414FC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[22].w[0] + 16928u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00415048; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], c.r[21].w[0] + 16920u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[20].w[0] + 16844u);
    c.budget -= 6;
L_00415010:
    st64((c.r[18].w[0]), c.r[17].d[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415020u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00DF(c, 347u, depth + 1u); else { c.pc = 0x0047FCF0u; return; } if (c.pc != 0x00415020u) [[unlikely]] return; }
L_00415020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415028u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00DF(c, 367u, depth + 1u); else { c.pc = 0x0047FD90u; return; } if (c.pc != 0x00415028u) [[unlikely]] return; }
L_00415028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415030u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00C5(c, 102u, depth + 1u); else { c.pc = 0x004149F0u; return; } if (c.pc != 0x00415030u) [[unlikely]] return; }
L_00415030:
    c.r[3].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] + 16928u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00415010u | kUnwind; return; } goto L_00415010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00415054; } }
    c.budget -= 1;
L_00415048:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[22].w[0] + 16928u);
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_00415054:
    set32(c.r[3], c.r[21].w[0] + 16920u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[4], c.r[20].w[0] + 16844u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    st64((c.r[2].w[0]), 0ull);
    st64((c.r[3].w[0]), 0ull);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00415090:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[22].w[0] + 16896u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00415118; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], c.r[21].w[0] + 16888u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[20].w[0] + 16832u);
    c.budget -= 6;
L_004150E0:
    st64((c.r[18].w[0]), c.r[17].d[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004150F0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00DF(c, 347u, depth + 1u); else { c.pc = 0x0047FCF0u; return; } if (c.pc != 0x004150F0u) [[unlikely]] return; }
L_004150F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004150F8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00DF(c, 367u, depth + 1u); else { c.pc = 0x0047FD90u; return; } if (c.pc != 0x004150F8u) [[unlikely]] return; }
L_004150F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415100u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00C5(c, 102u, depth + 1u); else { c.pc = 0x004149F0u; return; } if (c.pc != 0x00415100u) [[unlikely]] return; }
L_00415100:
    c.r[3].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] + 16896u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004150E0u | kUnwind; return; } goto L_004150E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00415124; } }
    c.budget -= 1;
L_00415118:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[22].w[0] + 16896u);
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_00415124:
    set32(c.r[3], c.r[21].w[0] + 16888u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[4], c.r[20].w[0] + 16832u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    st64((c.r[2].w[0]), 0ull);
    st64((c.r[3].w[0]), 0ull);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00415160:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + 16752u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_004151D0; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[21].w[0] + 16912u);
    c.budget -= 2;
L_004151A8:
    c.r[3].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[23].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004151A8u | kUnwind; return; } goto L_004151A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0041524C; } }
    c.budget -= 1;
L_004151D0:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[2].w[0] + 16972u);
    set32(c.r[4], c.r[21].w[0] + 16912u);
    st32((c.r[3].w[0]), 0u);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[23].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00415248; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], c.r[23].w[0] + 16904u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[22].w[0] + 16836u);
    c.budget -= 7;
L_00415208:
    st64((c.r[19].w[0]), c.r[18].d[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415218u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00DF(c, 347u, depth + 1u); else { c.pc = 0x0047FCF0u; return; } if (c.pc != 0x00415218u) [[unlikely]] return; }
L_00415218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415220u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00DF(c, 367u, depth + 1u); else { c.pc = 0x0047FD90u; return; } if (c.pc != 0x00415220u) [[unlikely]] return; }
L_00415220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415228u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00C5(c, 102u, depth + 1u); else { c.pc = 0x004149F0u; return; } if (c.pc != 0x00415228u) [[unlikely]] return; }
L_00415228:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[20].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[21].w[0] + 16912u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00415208u | kUnwind; return; } goto L_00415208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));  if (t) { goto L_00415254; } }
L_00415248:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_0041524C:
    set32(c.r[2], c.r[21].w[0] + 16912u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 2;
L_00415254:
    set32(c.r[3], c.r[23].w[0] + 16904u);
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    set32(c.r[4], c.r[22].w[0] + 16836u);
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    st64((c.r[2].w[0]), 0ull);
    st64((c.r[3].w[0]), 0ull);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00415290:
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 2;
L_00415298:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[22].w[0] + 16864u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00415320; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], c.r[21].w[0] + 16856u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[20].w[0] + 16824u);
    c.budget -= 6;
L_004152E8:
    st64((c.r[18].w[0]), c.r[17].d[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004152F8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00DF(c, 347u, depth + 1u); else { c.pc = 0x0047FCF0u; return; } if (c.pc != 0x004152F8u) [[unlikely]] return; }
L_004152F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415300u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00DF(c, 367u, depth + 1u); else { c.pc = 0x0047FD90u; return; } if (c.pc != 0x00415300u) [[unlikely]] return; }
L_00415300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415308u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00C5(c, 102u, depth + 1u); else { c.pc = 0x004149F0u; return; } if (c.pc != 0x00415308u) [[unlikely]] return; }
L_00415308:
    c.r[3].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] + 16864u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004152E8u | kUnwind; return; } goto L_004152E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0041532C; } }
    c.budget -= 1;
L_00415320:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[22].w[0] + 16864u);
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_0041532C:
    set32(c.r[3], c.r[21].w[0] + 16856u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[4], c.r[20].w[0] + 16824u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    st64((c.r[2].w[0]), 0ull);
    st64((c.r[3].w[0]), 0ull);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00415368:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 292u, depth); }
L_00415380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 293u, depth); }
L_004153A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + 13456u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[5], c.r[18].w[0] + 16956u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00415490; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 16676u)));
    st32((c.r[5].w[0]), c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0041547C; } }
    set32(c.r[2], c.r[2].w[0] + 16744u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00415414; } }
    set32(c.r[2], c.r[2].w[0] + 16832u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415414u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00C5(c, 95u, depth + 1u); else { c.pc = 0x00414938u; return; } if (c.pc != 0x00415414u) [[unlikely]] return; }
L_00415414:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + 16752u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00415434; } }
    set32(c.r[2], c.r[2].w[0] + 16836u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415434u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00C5(c, 95u, depth + 1u); else { c.pc = 0x00414938u; return; } if (c.pc != 0x00415434u) [[unlikely]] return; }
L_00415434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041543Cu);  if (depth < kMaxDepth) unit_00C5(c, 126u, depth + 1u); else { c.pc = 0x00414D08u; return; } if (c.pc != 0x0041543Cu) [[unlikely]] return; }
L_0041543C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[16].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0041546C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + 16748u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00415468; } }
    set32(c.r[2], c.r[2].w[0] + 16828u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415468u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00C5(c, 95u, depth + 1u); else { c.pc = 0x00414938u; return; } if (c.pc != 0x00415468u) [[unlikely]] return; }
L_00415468:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_0041546C:
    set32(c.r[3], c.r[3].w[0] + 16816u);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.budget -= 4;
L_0041547C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415484u);  if (depth < kMaxDepth) unit_00CB(c, 110u, depth + 1u); else { c.pc = 0x0042D838u; return; } if (c.pc != 0x00415484u) [[unlikely]] return; }
L_00415484:
    set32(c.r[3], c.r[18].w[0] + 16956u);
    st32((c.r[3].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
L_00415490:
    set32(c.r[2], ld32((c.r[2].w[0] + 16960u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004154B0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004154A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004154A4u) [[unlikely]] return; }
L_004154A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004154B4; } }
    c.budget -= 1;
L_004154B0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004154B4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004154C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004153A0u | kUnwind; return; } goto L_004153A0; }
L_004154E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 104u, depth); }
L_004154F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 16844u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415514u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00C5(c, 102u, depth + 1u); else { c.pc = 0x004149F0u; return; } if (c.pc != 0x00415514u) [[unlikely]] return; }
L_00415514:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00415528; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415528u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00C5(c, 98u, depth + 1u); else { c.pc = 0x00414988u; return; } if (c.pc != 0x00415528u) [[unlikely]] return; }
L_00415528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415530u);  if (depth < kMaxDepth) unit_00C5(c, 126u, depth + 1u); else { c.pc = 0x00414D08u; return; } if (c.pc != 0x00415530u) [[unlikely]] return; }
L_00415530:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[16], c.r[3].w[0] + 16848u);  if (t) { goto L_00415570; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041554Cu);  if (depth < kMaxDepth) unit_00C5(c, 102u, depth + 1u); else { c.pc = 0x004149F0u; return; } if (c.pc != 0x0041554Cu) [[unlikely]] return; }
L_0041554C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00415574; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00414988u | kUnwind; return; } goto L_00414988; }
L_00415570:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00415574:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00415580:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] + 16764u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_004155E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + 16840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004155B8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00DF(c, 361u, depth + 1u); else { c.pc = 0x0047FD60u; return; } if (c.pc != 0x004155B8u) [[unlikely]] return; }
L_004155B8:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 12u);  if (t) { goto L_004155D0; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004155EC; }
L_004155D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004155DCu);  if (depth < kMaxDepth) unit_00DF(c, 367u, depth + 1u); else { c.pc = 0x0047FD90u; return; } if (c.pc != 0x004155DCu) [[unlikely]] return; }
L_004155DC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0]), 0u);  goto L_004155E8; }
L_004155E8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004155EC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00415600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 16764u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004149D8u | kUnwind; return; } goto L_004149D8; }
L_00415628:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415638u);  if (depth < kMaxDepth) unit_00C9(c, 362u, depth + 1u); else { c.pc = 0x00427888u; return; } if (c.pc != 0x00415638u) [[unlikely]] return; }
L_00415638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415640u);  if (depth < kMaxDepth) unit_00C5(c, 185u, depth + 1u); else { c.pc = 0x004154F8u; return; } if (c.pc != 0x00415640u) [[unlikely]] return; }
L_00415640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415648u);  if (depth < kMaxDepth) unit_00C5(c, 199u, depth + 1u); else { c.pc = 0x004156B0u; return; } if (c.pc != 0x00415648u) [[unlikely]] return; }
L_00415648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415650u);  if (depth < kMaxDepth) unit_00C5(c, 193u, depth + 1u); else { c.pc = 0x00415600u; return; } if (c.pc != 0x00415650u) [[unlikely]] return; }
L_00415650:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 364u, depth); }
L_004156B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 16944u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004156D8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004156D4u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004156D4u) [[unlikely]] return; }
L_004156D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004156D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004156E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 16936u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00415708; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00415704u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00415704u) [[unlikely]] return; }
L_00415704:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00415708:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00415710:
    set32(c.r[29], c.r[29].w[0] + 32u);
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
L_00415728:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415744u); st32((c.r[2].w[0] - 17824u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00C8(c, 118u, depth + 1u); else { c.pc = 0x00420D08u; return; } if (c.pc != 0x00415744u) [[unlikely]] return; }
L_00415744:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C7(c, 495u, depth); }
L_00415758:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17824u)));
    st64((c.r[29].w[0] + 184u), c.r[5].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[6].d[0]);
    set32(c.r[6], c.r[29].w[0] + 184u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 200u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 208u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 216u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 224u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 232u), c.r[11].d[0]);
    st32((c.r[29].w[0] + 152u), c.f[12]);
    st32((c.r[29].w[0] + 156u), c.f[13]);
    st32((c.r[29].w[0] + 160u), c.f[14]);
    st32((c.r[29].w[0] + 164u), c.f[15]);
    st32((c.r[29].w[0] + 168u), c.f[16]);
    st32((c.r[29].w[0] + 172u), c.f[17]);
    st32((c.r[29].w[0] + 176u), c.f[18]);
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 180u), c.f[19]);  if (t) { goto L_004157C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004157BCu);  if (depth < kMaxDepth) unit_00DD(c, 216u, depth + 1u); else { c.pc = 0x004767A8u; return; } if (c.pc != 0x004157BCu) [[unlikely]] return; }
L_004157BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004157C4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x004157C4u) [[unlikely]] return; }
L_004157C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_004157D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[12], ld32((c.r[2].w[0] - 17824u)));
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[13], 0u + 2u);
    st64((c.r[29].w[0] + 184u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[6].d[0]);
    set32(c.r[6], c.r[29].w[0] + 184u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    st64((c.r[29].w[0] + 200u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 208u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 216u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 224u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 232u), c.r[11].d[0]);
    st32((c.r[29].w[0] + 152u), c.f[12]);
    st32((c.r[29].w[0] + 156u), c.f[13]);
    st32((c.r[29].w[0] + 160u), c.f[14]);
    st32((c.r[29].w[0] + 164u), c.f[15]);
    st32((c.r[29].w[0] + 168u), c.f[16]);
    st32((c.r[29].w[0] + 172u), c.f[17]);
    st32((c.r[29].w[0] + 176u), c.f[18]);
    c.budget -= 25;
    { const bool t = c.r[12].d[0] == c.r[13].d[0]; st32((c.r[29].w[0] + 180u), c.f[19]);  if (t) { goto L_00415844; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041583Cu);  if (depth < kMaxDepth) unit_00DD(c, 216u, depth + 1u); else { c.pc = 0x004767A8u; return; } if (c.pc != 0x0041583Cu) [[unlikely]] return; }
L_0041583C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415844u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 327u, depth + 1u); else { c.pc = 0x00482610u; return; } if (c.pc != 0x00415844u) [[unlikely]] return; }
L_00415844:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00415850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C8(c, 318u, depth); }
L_00415890:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C8(c, 379u, depth); }
L_004158A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C8(c, 381u, depth); }
L_004158C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C8(c, 383u, depth); }
L_004158D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C8(c, 384u, depth); }
L_004158F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C8(c, 385u, depth); }
L_00415908:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C8(c, 387u, depth); }
L_00415928:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C8(c, 353u, depth); }
L_00415940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C8(c, 389u, depth); }
L_00415958:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00415960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C8(c, 398u, depth); }
L_00415978:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415990u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 430u, depth + 1u); else { c.pc = 0x00423C18u; return; } if (c.pc != 0x00415990u) [[unlikely]] return; }
L_00415990:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041599Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 427u, depth + 1u); else { c.pc = 0x00423B80u; return; } if (c.pc != 0x0041599Cu) [[unlikely]] return; }
L_0041599C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C8(c, 420u, depth); }
L_004159C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C8(c, 427u, depth); }
L_004159D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C8(c, 430u, depth); }
L_004159F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C8(c, 432u, depth); }
L_00415A10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C8(c, 434u, depth); }
L_00415A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C8(c, 447u, depth); }
L_00415A50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C8(c, 453u, depth); }
L_00415A68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C8(c, 454u, depth); }
L_00415A80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 3u, depth); }
L_00415A98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 4u, depth); }
L_00415AB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 5u, depth); }
L_00415AC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 6u, depth); }
L_00415B08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 9u, depth); }
L_00415B30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00415B38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415B48u);  if (depth < kMaxDepth) unit_00C9(c, 11u, depth + 1u); else { c.pc = 0x004241D0u; return; } if (c.pc != 0x00415B48u) [[unlikely]] return; }
L_00415B48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00415B58:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_00415B68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 17816u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00415BA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415B8Cu);  if (depth < kMaxDepth) unit_00CA(c, 294u, depth + 1u); else { c.pc = 0x0042A888u; return; } if (c.pc != 0x00415B8Cu) [[unlikely]] return; }
L_00415B8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] - 17808u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415BA0u); set32(c.r[6], 0u + 2688u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00415BA0u) [[unlikely]] return; }
L_00415BA0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00415BC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 17816u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00415C00; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 17808u);
    set32(c.r[6], 0u + 2688u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DD(c, 50u, depth); }
L_00415C00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00415C08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 164u), 0u);
    st32((c.r[4].w[0] + 152u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 160u), 0u);  c.pc = t; return; }
L_00415C48:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[7].w[0] - 17808u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[20].w[0])));  if (t) { goto L_00415CB4; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00415C90:
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 168u);  if (t) { goto L_00415CB4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00415C90u | kUnwind; return; } goto L_00415C90; }
L_00415CB4:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00415DA0; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] - 17808u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415CE4u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C9(c, 150u, depth + 1u); else { c.pc = 0x004258D0u; return; } if (c.pc != 0x00415CE4u) [[unlikely]] return; }
L_00415CE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415CF0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 151u, depth + 1u); else { c.pc = 0x004258D8u; return; } if (c.pc != 0x00415CF0u) [[unlikely]] return; }
L_00415CF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] >> 31);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415D00u); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C9(c, 152u, depth + 1u); else { c.pc = 0x004258E0u; return; } if (c.pc != 0x00415D00u) [[unlikely]] return; }
L_00415D00:
    set32(c.r[7], c.r[2].w[0] >> 31);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415D24u); set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);  if (depth < kMaxDepth) unit_00CA(c, 301u, depth + 1u); else { c.pc = 0x0042A958u; return; } if (c.pc != 0x00415D24u) [[unlikely]] return; }
L_00415D24:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[18].w[0] + 4u), c.r[4].w[0]);  if (t) { goto L_00415DA0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415D40u); set32(c.r[5], c.r[5].w[0] + 25160u);  if (depth < kMaxDepth) unit_00CA(c, 333u, depth + 1u); else { c.pc = 0x0042AFC8u; return; } if (c.pc != 0x00415D40u) [[unlikely]] return; }
L_00415D40:
    st32((c.r[18].w[0] + 8u), c.r[21].w[0]);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00415D78; } }
    set32(c.r[7], c.r[18].w[0] + 12u);
    c.budget -= 2;
L_00415D58:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[6].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00415D58u | kUnwind; return; } goto L_00415D58; } }
L_00415D78:
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415D84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 246u, depth + 1u); else { c.pc = 0x00415C08u; return; } if (c.pc != 0x00415D84u) [[unlikely]] return; }
L_00415D84:
    st32((c.r[18].w[0] + 72u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 76u), 0u);
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 84u), 0u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
L_00415DA0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00415DC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00415E18; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00415DF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415DF0u); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00CA(c, 307u, depth + 1u); else { c.pc = 0x0042AA78u; return; } if (c.pc != 0x00415DF0u) [[unlikely]] return; }
L_00415DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415DF8u);  if (depth < kMaxDepth) unit_00CB(c, 32u, depth + 1u); else { c.pc = 0x0042C790u; return; } if (c.pc != 0x00415DF8u) [[unlikely]] return; }
L_00415DF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415E08u); set32(c.r[6], 0u + 168u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00415E08u) [[unlikely]] return; }
L_00415E08:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 33u, depth); }
L_00415E18:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00415E28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));  c.pc = t; return; }
L_00415E30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415E54u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00CA(c, 275u, depth + 1u); else { c.pc = 0x0042A588u; return; } if (c.pc != 0x00415E54u) [[unlikely]] return; }
L_00415E54:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CA(c, 266u, depth); }
L_00415E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[16].w[0] + 56u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415E94u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00CA(c, 277u, depth + 1u); else { c.pc = 0x0042A5B8u; return; } if (c.pc != 0x00415E94u) [[unlikely]] return; }
L_00415E94:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CA(c, 268u, depth); }
L_00415EB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415EC8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00CA(c, 281u, depth + 1u); else { c.pc = 0x0042A648u; return; } if (c.pc != 0x00415EC8u) [[unlikely]] return; }
L_00415EC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 269u, depth); }
L_00415EE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415EF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 246u, depth + 1u); else { c.pc = 0x00415C08u; return; } if (c.pc != 0x00415EF4u) [[unlikely]] return; }
L_00415EF4:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00415F10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415F28u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00CA(c, 363u, depth + 1u); else { c.pc = 0x0042B348u; return; } if (c.pc != 0x00415F28u) [[unlikely]] return; }
L_00415F28:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00415F40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[6].d[0] = 0ull | 51200ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00415F84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00415F84u) [[unlikely]] return; }
L_00415F84:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00415FD4; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] >> 31);  if (t) { goto L_00415FD8; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
L_00415FB0:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_00415FD4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00415FB0u | kUnwind; return; } goto L_00415FB0; }
L_00415FD4:
    set32(c.r[2], c.r[5].w[0] >> 31);
    c.budget -= 1;
L_00415FD8:
    set32(c.r[3], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[20], c.r[29].w[0] + 16u);  if (t) { goto L_00416038; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416008u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416008u) [[unlikely]] return; }
L_00416008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416010u);  if (depth < kMaxDepth) unit_00CA(c, 293u, depth + 1u); else { c.pc = 0x0042A878u; return; } if (c.pc != 0x00416010u) [[unlikely]] return; }
L_00416010:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_00416224; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 19400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041602Cu); set32(c.r[5], c.r[5].w[0] + 19432u);  if (depth < kMaxDepth) unit_00CB(c, 65u, depth + 1u); else { c.pc = 0x0042D2F0u; return; } if (c.pc != 0x0041602Cu) [[unlikely]] return; }
L_0041602C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00416224; } }
    c.budget -= 1;
L_00416038:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416048u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x00416048u) [[unlikely]] return; }
L_00416048:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416060u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416060u) [[unlikely]] return; }
L_00416060:
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_00416098; }
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041607Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 326u, depth + 1u); else { c.pc = 0x0042AE50u; return; } if (c.pc != 0x0041607Cu) [[unlikely]] return; }
L_0041607C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_00416094; } }
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004160B8; } }
L_00416094:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00416098:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004160ACu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004160ACu) [[unlikely]] return; }
L_004160AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0041622C; } }
    c.budget -= 1;
L_004160B8:
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { st32((c.r[19].w[0] + 152u), c.r[17].w[0]);  goto L_00416128; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 154u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004160E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004160D4u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 325u, depth + 1u); else { c.pc = 0x0042ADB0u; return; } if (c.pc != 0x004160D4u) [[unlikely]] return; }
L_004160D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 152u), c.r[17].w[0]);  if (t) { goto L_00416128; } }
    c.budget -= 1;
L_004160E0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004160F8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004160F8u) [[unlikely]] return; }
L_004160F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416100u);  if (depth < kMaxDepth) unit_00CA(c, 293u, depth + 1u); else { c.pc = 0x0042A878u; return; } if (c.pc != 0x00416100u) [[unlikely]] return; }
L_00416100:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_00416224; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 19464u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041611Cu); set32(c.r[5], c.r[5].w[0] + 19496u);  if (depth < kMaxDepth) unit_00CB(c, 65u, depth + 1u); else { c.pc = 0x0042D2F0u; return; } if (c.pc != 0x0041611Cu) [[unlikely]] return; }
L_0041611C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00416224; } }
    c.budget -= 1;
L_00416128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416130u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 336u, depth + 1u); else { c.pc = 0x0042AFE8u; return; } if (c.pc != 0x00416130u) [[unlikely]] return; }
L_00416130:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00416140; } }
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00416140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416148u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 336u, depth + 1u); else { c.pc = 0x0042AFE8u; return; } if (c.pc != 0x00416148u) [[unlikely]] return; }
L_00416148:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 64u);  if (t) { goto L_0041616C; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[19].w[0] + 88u);
    c.r[2].d[0] = c.r[6].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041616Cu); if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[3].d[0];  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0041616Cu) [[unlikely]] return; }
L_0041616C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416174u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 336u, depth + 1u); else { c.pc = 0x0042AFE8u; return; } if (c.pc != 0x00416174u) [[unlikely]] return; }
L_00416174:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] - 10u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_004161A0; }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15u);  if (t) { goto L_0041619C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_004161C0; } }
L_0041619C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_004161A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004161B4u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004161B4u) [[unlikely]] return; }
L_004161B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 232u)));  if (t) { goto L_00416204; } }
    c.budget -= 1;
L_004161C0:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004161D0u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x004161D0u) [[unlikely]] return; }
L_004161D0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004161E8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004161E8u) [[unlikely]] return; }
L_004161E8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416200u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416200u) [[unlikely]] return; }
L_00416200:
    set32(c.r[2], ld32((c.r[18].w[0] + 232u)));
    c.budget -= 1;
L_00416204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00416220; } }
    set32(c.r[2], ld32((c.r[2].w[0] - 17812u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00416220; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416220u); set32(c.r[5], ld32((c.r[4].w[0] + 20u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416220u) [[unlikely]] return; }
L_00416220:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00416224:
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_0041622C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00416248:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    set32(c.r[17], c.r[18].w[0] + 28u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[16], c.r[18].w[0] + 12u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_004162B0; } }
    c.budget -= 1;
L_00416298:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[8], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[8].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004162B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004162B0u) [[unlikely]] return; }
L_004162B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004162B8u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_00CA(c, 338u, depth + 1u); else { c.pc = 0x0042AFF8u; return; } if (c.pc != 0x004162B8u) [[unlikely]] return; }
L_004162B8:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 16384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00416298u | kUnwind; return; } goto L_00416298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004162DCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 150u, depth + 1u); else { c.pc = 0x004258D0u; return; } if (c.pc != 0x004162DCu) [[unlikely]] return; }
L_004162DC:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[22].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    st32((c.r[23].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 17;
    if (c.r[3].sd[0] < 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x1FFF0000u);  goto L_00416330; }
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);  if (t) { goto L_00416334; } }
    c.budget -= 1;
L_00416330:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 1;
L_00416334:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 80u);  [[clang::musttail]] return unit_00CA(c, 335u, depth); }
L_00416368:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[20], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[17], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_004163BC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));  goto L_004163C0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));  goto L_004163C0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004163BCu); set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004163BCu) [[unlikely]] return; }
L_004163BC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 1;
L_004163C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_004163F8; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004163E0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004163E0u) [[unlikely]] return; }
L_004163E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_004163F8; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004166AC; } }
    c.budget -= 1;
L_004163F8:
    set32(c.r[19], c.r[18].w[0] + 20u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416418u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416418u) [[unlikely]] return; }
L_00416418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416420u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 336u, depth + 1u); else { c.pc = 0x0042AFE8u; return; } if (c.pc != 0x00416420u) [[unlikely]] return; }
L_00416420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004165A8; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull | 32769ull;  if (t) { goto L_004165A8; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_004165A8; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416468u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00CB(c, 54u, depth + 1u); else { c.pc = 0x0042D168u; return; } if (c.pc != 0x00416468u) [[unlikely]] return; }
L_00416468:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 156u)));  goto L_004164C8; }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_00416624; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416494u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x00416494u) [[unlikely]] return; }
L_00416494:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004164ACu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004164ACu) [[unlikely]] return; }
L_004164AC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004164C4u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004164C4u) [[unlikely]] return; }
L_004164C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 156u)));
    c.budget -= 1;
L_004164C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_004166AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0])));  if (t) { goto L_00416574; } }
L_004164D8:
    c.r[16].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0041652C; }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0041652C; }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_00416500:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  goto L_00416528; }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00416500u | kUnwind; return; } goto L_00416500; }
    c.r[16].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00416528:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0041652C:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416538u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x00416538u) [[unlikely]] return; }
L_00416538:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416550u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416550u) [[unlikely]] return; }
L_00416550:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416568u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416568u) [[unlikely]] return; }
L_00416568:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004166B0; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00416574:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416590u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416590u) [[unlikely]] return; }
L_00416590:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004164D8u | kUnwind; return; } goto L_004164D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004166B0; } }
    c.budget -= 1;
L_004165A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004165B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 389u, depth + 1u); else { c.pc = 0x00416E40u; return; } if (c.pc != 0x004165B0u) [[unlikely]] return; }
L_004165B0:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_004165E8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004165DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004165DCu) [[unlikely]] return; }
L_004165DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004166B0; } }
    c.budget -= 1;
L_004165E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004165F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 388u, depth + 1u); else { c.pc = 0x00416E28u; return; } if (c.pc != 0x004165F0u) [[unlikely]] return; }
L_004165F0:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416608u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416608u) [[unlikely]] return; }
L_00416608:
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00416640; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00416624:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416638u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416638u) [[unlikely]] return; }
L_00416638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004166B0; } }
L_00416640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416648u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 336u, depth + 1u); else { c.pc = 0x0042AFE8u; return; } if (c.pc != 0x00416648u) [[unlikely]] return; }
L_00416648:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00416668; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416668u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416668u) [[unlikely]] return; }
L_00416668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416670u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 336u, depth + 1u); else { c.pc = 0x0042AFE8u; return; } if (c.pc != 0x00416670u) [[unlikely]] return; }
L_00416670:
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[18].w[0] + 24u)));  goto L_00416698; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416694u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416694u) [[unlikely]] return; }
L_00416694:
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_00416698:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004166A4u); set32(c.r[5], ld32((c.r[18].w[0] + 20u)));  if (depth < kMaxDepth) unit_00CA(c, 361u, depth + 1u); else { c.pc = 0x0042B2B0u; return; } if (c.pc != 0x004166A4u) [[unlikely]] return; }
L_004166A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004166ACu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 362u, depth + 1u); else { c.pc = 0x0042B330u; return; } if (c.pc != 0x004166ACu) [[unlikely]] return; }
L_004166AC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004166B0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004166D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[20], c.r[18].w[0] + 12u);
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    set32(c.r[21], c.r[18].w[0] + 28u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[31].d[0]);
    set32(c.r[23], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041671Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 344u, depth + 1u); else { c.pc = 0x0042B0B0u; return; } if (c.pc != 0x0041671Cu) [[unlikely]] return; }
L_0041671C:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416728u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 368u, depth + 1u); else { c.pc = 0x0042B3D0u; return; } if (c.pc != 0x00416728u) [[unlikely]] return; }
L_00416728:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416734u); st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CA(c, 369u, depth + 1u); else { c.pc = 0x0042B3D8u; return; } if (c.pc != 0x00416734u) [[unlikely]] return; }
L_00416734:
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[30], c.r[29].w[0] + 16u);
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416760u); if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x00416760u) [[unlikely]] return; }
L_00416760:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416778u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416778u) [[unlikely]] return; }
L_00416778:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416790u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416790u) [[unlikely]] return; }
L_00416790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004167F8; } }
L_00416798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004167A0u);  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x004167A0u) [[unlikely]] return; }
L_004167A0:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[22], c.r[22].w[0] + 1u);  if (t) { goto L_004167C0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004167C0u); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004167C0u) [[unlikely]] return; }
L_004167C0:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004167DCu); set32(c.r[21], c.r[21].w[0] + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004167DCu) [[unlikely]] return; }
L_004167DC:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004167F8u); set32(c.r[20], c.r[20].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004167F8u) [[unlikely]] return; }
L_004167F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416800u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_00CA(c, 338u, depth + 1u); else { c.pc = 0x0042AFF8u; return; } if (c.pc != 0x00416800u) [[unlikely]] return; }
L_00416800:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[19].w[0] << 1);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[30].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00416798u | kUnwind; return; } goto L_00416798; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 48u)));
    st32((c.r[18].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[7], c.r[7].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[6], c.r[6].w[0] + c.r[19].w[0]);
    st32((c.r[18].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[7].w[0]);
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416864u); st32((c.r[18].w[0] + 64u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00CA(c, 366u, depth + 1u); else { c.pc = 0x0042B390u; return; } if (c.pc != 0x00416864u) [[unlikely]] return; }
L_00416864:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 120u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00416898:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004168C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 344u, depth + 1u); else { c.pc = 0x0042B0B0u; return; } if (c.pc != 0x004168C0u) [[unlikely]] return; }
L_004168C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004168CCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 368u, depth + 1u); else { c.pc = 0x0042B3D0u; return; } if (c.pc != 0x004168CCu) [[unlikely]] return; }
L_004168CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004168D8u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 369u, depth + 1u); else { c.pc = 0x0042B3D8u; return; } if (c.pc != 0x004168D8u) [[unlikely]] return; }
L_004168D8:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[16], c.r[16].w[0] - c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 48u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 44u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 48u), c.r[5].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00416928:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416948u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 360u, depth + 1u); else { c.pc = 0x0042B2A8u; return; } if (c.pc != 0x00416948u) [[unlikely]] return; }
L_00416948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00416958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416958u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 299u, depth + 1u); else { c.pc = 0x00416368u; return; } if (c.pc != 0x00416958u) [[unlikely]] return; }
L_00416958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416960u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 398u, depth + 1u); else { c.pc = 0x0042B988u; return; } if (c.pc != 0x00416960u) [[unlikely]] return; }
L_00416960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416968u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 360u, depth + 1u); else { c.pc = 0x0042B2A8u; return; } if (c.pc != 0x00416968u) [[unlikely]] return; }
L_00416968:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 152u)));  goto L_00416980; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041697Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 325u, depth + 1u); else { c.pc = 0x004166D0u; return; } if (c.pc != 0x0041697Cu) [[unlikely]] return; }
L_0041697C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 152u)));
    c.budget -= 1;
L_00416980:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_004169AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_004169AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 12u);  if (t) { goto L_004169AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15u);  if (t) { goto L_004169AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004169C8; } }
L_004169AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00416898u | kUnwind; return; } goto L_00416898; }
L_004169C8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004169D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 7;
    if (c.r[2].sd[0] <= 0) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_00416A10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004169FCu);  if (depth < kMaxDepth) unit_00CB(c, 32u, depth + 1u); else { c.pc = 0x0042C790u; return; } if (c.pc != 0x004169FCu) [[unlikely]] return; }
L_004169FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416A04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 357u, depth + 1u); else { c.pc = 0x00416A80u; return; } if (c.pc != 0x00416A04u) [[unlikely]] return; }
L_00416A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416A0Cu);  if (depth < kMaxDepth) unit_00CB(c, 33u, depth + 1u); else { c.pc = 0x0042C7A8u; return; } if (c.pc != 0x00416A0Cu) [[unlikely]] return; }
L_00416A0C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 1;
L_00416A10:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00416A30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416A24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 343u, depth + 1u); else { c.pc = 0x00416928u; return; } if (c.pc != 0x00416A24u) [[unlikely]] return; }
L_00416A24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 164u)));  if (t) { goto L_00416A44; } }
    c.budget -= 1;
L_00416A30:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 164u)));  goto L_00416A44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416A40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 271u, depth + 1u); else { c.pc = 0x00415F40u; return; } if (c.pc != 0x00416A40u) [[unlikely]] return; }
L_00416A40:
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 1;
L_00416A44:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00416A70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416A54u);  if (depth < kMaxDepth) unit_00CB(c, 32u, depth + 1u); else { c.pc = 0x0042C790u; return; } if (c.pc != 0x00416A54u) [[unlikely]] return; }
L_00416A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416A5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 365u, depth + 1u); else { c.pc = 0x00416BD0u; return; } if (c.pc != 0x00416A5Cu) [[unlikely]] return; }
L_00416A5C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 33u, depth); }
L_00416A70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00416A80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[17], c.r[2].w[0] << 1);
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].d[0] = ld8((c.r[18].w[0] + 2u));  if (t) { goto L_00416B1C; } }
    set32(c.r[16], c.r[18].w[0] + 12u);
    c.budget -= 2;
L_00416AC0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416AE4u); set32(c.r[19], c.r[19].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416AE4u) [[unlikely]] return; }
L_00416AE4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[8], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[7].w[0] + 28u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416B0Cu); if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[8].d[0];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416B0Cu) [[unlikely]] return; }
L_00416B0C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[18].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00416AC0u | kUnwind; return; } goto L_00416AC0; } }
L_00416B1C:
    set32(c.r[2], c.r[17].w[0] >> 31);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[17], c.r[20].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[17].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00416BB0; } }
    set32(c.r[2], c.r[4].w[0] << 24);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00416BA0; } }
    set32(c.r[16], c.r[18].w[0] + 12u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_00416B48:
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416B64u); set32(c.r[19], c.r[19].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416B64u) [[unlikely]] return; }
L_00416B64:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416B74u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00416B74u) [[unlikely]] return; }
L_00416B74:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416B90u); set32(c.r[16], c.r[16].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416B90u) [[unlikely]] return; }
L_00416B90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00416B48u | kUnwind; return; } goto L_00416B48; }
L_00416BA0:
    set32(c.r[2], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    st32((c.r[18].w[0] + 160u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_00416BB0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00416BD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[17], c.r[2].w[0] << 1);
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].d[0] = ld8((c.r[18].w[0] + 2u));  if (t) { goto L_00416C6C; } }
    set32(c.r[16], c.r[18].w[0] + 12u);
    c.budget -= 2;
L_00416C10:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416C34u); set32(c.r[19], c.r[19].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416C34u) [[unlikely]] return; }
L_00416C34:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[8], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[7].w[0] + 28u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416C5Cu); if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[8].d[0];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416C5Cu) [[unlikely]] return; }
L_00416C5C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[18].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00416C10u | kUnwind; return; } goto L_00416C10; } }
L_00416C6C:
    set32(c.r[2], c.r[17].w[0] >> 31);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[17], c.r[20].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[17].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00416CF0; } }
    set32(c.r[2], c.r[4].w[0] << 24);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00416CE0; } }
    set32(c.r[16], c.r[18].w[0] + 12u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_00416C98:
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416CB4u); set32(c.r[19], c.r[19].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416CB4u) [[unlikely]] return; }
L_00416CB4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416CD0u); set32(c.r[16], c.r[16].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416CD0u) [[unlikely]] return; }
L_00416CD0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00416C98u | kUnwind; return; } goto L_00416C98; }
L_00416CE0:
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    st32((c.r[18].w[0] + 164u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_00416CF0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00416D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 17808u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_00416D38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00416D50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416D4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 349u, depth + 1u); else { c.pc = 0x004169D8u; return; } if (c.pc != 0x00416D4Cu) [[unlikely]] return; }
L_00416D4C:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00416D50:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 168u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00416D38u | kUnwind; return; } goto L_00416D38; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00416D70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  c.pc = t; return; }
L_00416D78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  c.pc = t; return; }
L_00416D80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 52u), c.r[5].w[0]);  c.pc = t; return; }
L_00416D88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 156u), c.r[5].w[0]);  c.pc = t; return; }
L_00416D90:
    set32(c.r[29], c.r[29].w[0] + 16u);
    st32((c.r[4].w[0] + 80u), c.r[5].w[0]);
    c.budget -= 4;
L_00416DA0:
    st32((c.r[4].w[0] + 76u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 72u), c.r[5].w[0]);  c.pc = t; return; }
L_00416DB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.r[5].w[0]);  c.pc = t; return; }
L_00416DB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[5].w[0]);  c.pc = t; return; }
L_00416DC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 68u), c.r[5].w[0]);  c.pc = t; return; }
L_00416DC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 336u, depth); }
L_00416DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 337u, depth); }
L_00416DF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 338u, depth); }
L_00416E10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 340u, depth); }
L_00416E28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 343u, depth); }
L_00416E40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 344u, depth); }
L_00416E58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 345u, depth); }
L_00416E70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 346u, depth); }
L_00416E88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00416EA8; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 347u, depth); }
L_00416EA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00416EB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 348u, depth); }
L_00416ED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 349u, depth); }
L_00416EE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416F00u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00CA(c, 350u, depth + 1u); else { c.pc = 0x0042B0F0u; return; } if (c.pc != 0x00416F00u) [[unlikely]] return; }
L_00416F00:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00416F30; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00416F30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416F24u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00CA(c, 351u, depth + 1u); else { c.pc = 0x0042B0F8u; return; } if (c.pc != 0x00416F24u) [[unlikely]] return; }
L_00416F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00416F34; } }
    c.budget -= 1;
L_00416F30:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00416F34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00416F40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416F60u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00CA(c, 350u, depth + 1u); else { c.pc = 0x0042B0F0u; return; } if (c.pc != 0x00416F60u) [[unlikely]] return; }
L_00416F60:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], 0u - 128u);  if (t) { goto L_00416F90; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 128u);  goto L_00416F90; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416F88u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 352u, depth + 1u); else { c.pc = 0x0042B100u; return; } if (c.pc != 0x00416F88u) [[unlikely]] return; }
L_00416F88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00416F94; } }
L_00416F90:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00416F94:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00416FA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 88u);  c.pc = t; return; }
L_00416FB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 353u, depth); }
L_00416FC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CA(c, 355u, depth); }
L_00416FF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 15120u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_00417028; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417028u); set32(c.r[6], 0u + 3840u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00417028u) [[unlikely]] return; }
L_00417028:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00417038:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 15120u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_00417078; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15088u);
    set32(c.r[6], 0u + 3840u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DD(c, 50u, depth); }
L_00417078:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00417088:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004170C4u); set32(c.r[21], 0u + 1u);  if (depth < kMaxDepth) unit_00C6(c, 71u, depth + 1u); else { c.pc = 0x004185E0u; return; } if (c.pc != 0x004170C4u) [[unlikely]] return; }
L_004170C4:
    set32(c.r[7], c.r[16].w[0] + 2047u);
    c.r[2].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    set32(c.r[7], 0u + 512u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[2], c.r[3].w[0] << 11);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[19].w[0] + 92u), c.r[6].w[0]);
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 26;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[19].w[0] + 88u), 0u);  if (t) { goto L_00417164; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041713Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041713Cu) [[unlikely]] return; }
L_0041713C:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00417154u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00417154u) [[unlikely]] return; }
L_00417154:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 28u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 64u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 24u), c.r[16].w[0]);
    c.budget -= 4;
L_00417164:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[19].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_00C6(c, 72u, depth); }
L_00417190:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[9], ld32((c.r[13].w[0] - 15112u)));
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[9].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00417228; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[7], c.r[2].w[0] - 15116u);
    set32(c.r[4], c.r[4].w[0] - 15088u);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], ld32((c.r[13].w[0] - 15112u)));  if (t) { goto L_0041722C; } }
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_004171F8:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[13].w[0] - 15112u)));  if (t) { goto L_0041722C; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004171F8u | kUnwind; return; } goto L_004171F8; }
L_00417228:
    set32(c.r[3], ld32((c.r[13].w[0] - 15112u)));
    c.budget -= 1;
L_0041722C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00417254; } }
    c.r[5].d[0] = c.r[12].d[0] + 0ull;
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417248u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 407u, depth + 1u); else { c.pc = 0x00417088u; return; } if (c.pc != 0x00417248u) [[unlikely]] return; }
L_00417248:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00417254:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00417268:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[9], ld32((c.r[13].w[0] - 15104u)));
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[9].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00417300; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[7], c.r[2].w[0] - 15108u);
    set32(c.r[4], c.r[4].w[0] - 15088u);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], ld32((c.r[13].w[0] - 15104u)));  if (t) { goto L_00417304; } }
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_004172D0:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[13].w[0] - 15104u)));  if (t) { goto L_00417304; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004172D0u | kUnwind; return; } goto L_004172D0; }
L_00417300:
    set32(c.r[3], ld32((c.r[13].w[0] - 15104u)));
    c.budget -= 1;
L_00417304:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00417328; } }
    c.r[5].d[0] = c.r[12].d[0] + 0ull;
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417320u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 407u, depth + 1u); else { c.pc = 0x00417088u; return; } if (c.pc != 0x00417320u) [[unlikely]] return; }
L_00417320:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00417328:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00417338:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417354u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x00417354u) [[unlikely]] return; }
L_00417354:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417360u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 421u, depth + 1u); else { c.pc = 0x00417380u; return; } if (c.pc != 0x00417360u) [[unlikely]] return; }
L_00417360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417368u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 75u, depth + 1u); else { c.pc = 0x00418640u; return; } if (c.pc != 0x00417368u) [[unlikely]] return; }
L_00417368:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00417380:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004173B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004173A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 411u, depth + 1u); else { c.pc = 0x00417190u; return; } if (c.pc != 0x004173A8u) [[unlikely]] return; }
L_004173A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004173BC; } }
L_004173B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004173B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 414u, depth + 1u); else { c.pc = 0x00417268u; return; } if (c.pc != 0x004173B8u) [[unlikely]] return; }
L_004173B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004173BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004173C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004173DCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x004173DCu) [[unlikely]] return; }
L_004173DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004173E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 427u, depth + 1u); else { c.pc = 0x004173F8u; return; } if (c.pc != 0x004173E4u) [[unlikely]] return; }
L_004173E4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C6(c, 75u, depth); }
L_004173F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00417440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417414u);  if (depth < kMaxDepth) unit_00C5(c, 493u, depth + 1u); else { c.pc = 0x004179A0u; return; } if (c.pc != 0x00417414u) [[unlikely]] return; }
L_00417414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041741Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 448u, depth + 1u); else { c.pc = 0x00417650u; return; } if (c.pc != 0x0041741Cu) [[unlikely]] return; }
L_0041741C:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 96u);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DD(c, 50u, depth); }
L_00417440:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00417450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417484u); c.r[20].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x00417484u) [[unlikely]] return; }
L_00417484:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041749Cu); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 433u, depth + 1u); else { c.pc = 0x004174C0u; return; } if (c.pc != 0x0041749Cu) [[unlikely]] return; }
L_0041749C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00C6(c, 75u, depth); }
L_004174C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004174F4u); c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 71u, depth + 1u); else { c.pc = 0x004185E0u; return; } if (c.pc != 0x004174F4u) [[unlikely]] return; }
L_004174F4:
    set32(c.r[3], c.r[18].w[0] << 11);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[20].w[0]);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 16;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00C6(c, 72u, depth); }
L_00417538:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041756Cu); c.r[20].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x0041756Cu) [[unlikely]] return; }
L_0041756C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417584u); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 438u, depth + 1u); else { c.pc = 0x004175A8u; return; } if (c.pc != 0x00417584u) [[unlikely]] return; }
L_00417584:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00C6(c, 75u, depth); }
L_004175A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004175BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 430u, depth + 1u); else { c.pc = 0x00417450u; return; } if (c.pc != 0x004175BCu) [[unlikely]] return; }
L_004175BC:
    c.budget -= 1;
L_004175C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004175C8u);  if (depth < kMaxDepth) unit_00CB(c, 90u, depth + 1u); else { c.pc = 0x0042D6B0u; return; } if (c.pc != 0x004175C8u) [[unlikely]] return; }
L_004175C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 69u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004175C0u | kUnwind; return; } goto L_004175C0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004175E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004175F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x004175F4u) [[unlikely]] return; }
L_004175F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004175FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 445u, depth + 1u); else { c.pc = 0x00417610u; return; } if (c.pc != 0x004175FCu) [[unlikely]] return; }
L_004175FC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C6(c, 75u, depth); }
L_00417610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417624u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 488u, depth + 1u); else { c.pc = 0x00417908u; return; } if (c.pc != 0x00417624u) [[unlikely]] return; }
L_00417624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041762Cu);  if (depth < kMaxDepth) unit_00C6(c, 71u, depth + 1u); else { c.pc = 0x004185E0u; return; } if (c.pc != 0x0041762Cu) [[unlikely]] return; }
L_0041762C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 73u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(c.r[3].w[0]));  goto L_0041763C; }
L_0041763C:
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C6(c, 72u, depth); }
L_00417650:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417664u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x00417664u) [[unlikely]] return; }
L_00417664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041766Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 451u, depth + 1u); else { c.pc = 0x00417680u; return; } if (c.pc != 0x0041766Cu) [[unlikely]] return; }
L_0041766C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C6(c, 75u, depth); }
L_00417680:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417694u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 493u, depth + 1u); else { c.pc = 0x004179A0u; return; } if (c.pc != 0x00417694u) [[unlikely]] return; }
L_00417694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041769Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 442u, depth + 1u); else { c.pc = 0x004175E0u; return; } if (c.pc != 0x0041769Cu) [[unlikely]] return; }
L_0041769C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 73u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_004176C0; }
L_004176A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004176B0u);  if (depth < kMaxDepth) unit_00CB(c, 90u, depth + 1u); else { c.pc = 0x0042D6B0u; return; } if (c.pc != 0x004176B0u) [[unlikely]] return; }
L_004176B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 73u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004176A8u | kUnwind; return; } goto L_004176A8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004176C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004176D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004176E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x004176E4u) [[unlikely]] return; }
L_004176E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004176ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 460u, depth + 1u); else { c.pc = 0x00417708u; return; } if (c.pc != 0x004176ECu) [[unlikely]] return; }
L_004176EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004176F4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 75u, depth + 1u); else { c.pc = 0x00418640u; return; } if (c.pc != 0x004176F4u) [[unlikely]] return; }
L_004176F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00417708:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));  c.pc = t; return; }
L_00417710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041772Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x0041772Cu) [[unlikely]] return; }
L_0041772C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417738u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 465u, depth + 1u); else { c.pc = 0x00417758u; return; } if (c.pc != 0x00417738u) [[unlikely]] return; }
L_00417738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417740u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 75u, depth + 1u); else { c.pc = 0x00418640u; return; } if (c.pc != 0x00417740u) [[unlikely]] return; }
L_00417740:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00417758:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[5].d[0] != 0ull) { st32((c.r[4].w[0] + 88u), c.r[2].w[0]);  goto L_0041776C; }
L_0041776C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 88u)));  c.pc = t; return; }
L_00417778:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041778Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x0041778Cu) [[unlikely]] return; }
L_0041778C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417794u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 470u, depth + 1u); else { c.pc = 0x004177B0u; return; } if (c.pc != 0x00417794u) [[unlikely]] return; }
L_00417794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041779Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 75u, depth + 1u); else { c.pc = 0x00418640u; return; } if (c.pc != 0x0041779Cu) [[unlikely]] return; }
L_0041779C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004177B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004177C0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 1;
L_004177C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004177C8:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[4].w[0] + 52u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 76u), 0u);  if (t) { goto L_004177E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_004177E4; } }
L_004177E0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_004177E4:
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 71u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_00417800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417814u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x00417814u) [[unlikely]] return; }
L_00417814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041781Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 476u, depth + 1u); else { c.pc = 0x00417838u; return; } if (c.pc != 0x0041781Cu) [[unlikely]] return; }
L_0041781C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417824u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 75u, depth + 1u); else { c.pc = 0x00418640u; return; } if (c.pc != 0x00417824u) [[unlikely]] return; }
L_00417824:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00417838:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041784Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 71u, depth + 1u); else { c.pc = 0x004185E0u; return; } if (c.pc != 0x0041784Cu) [[unlikely]] return; }
L_0041784C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417854u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 471u, depth + 1u); else { c.pc = 0x004177C8u; return; } if (c.pc != 0x00417854u) [[unlikely]] return; }
L_00417854:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417864u); st32((c.r[16].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 72u, depth + 1u); else { c.pc = 0x004185F8u; return; } if (c.pc != 0x00417864u) [[unlikely]] return; }
L_00417864:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00417878:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417894u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x00417894u) [[unlikely]] return; }
L_00417894:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004178A0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 484u, depth + 1u); else { c.pc = 0x004178C0u; return; } if (c.pc != 0x004178A0u) [[unlikely]] return; }
L_004178A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004178A8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 75u, depth + 1u); else { c.pc = 0x00418640u; return; } if (c.pc != 0x004178A8u) [[unlikely]] return; }
L_004178A8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004178C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004178DCu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 71u, depth + 1u); else { c.pc = 0x004185E0u; return; } if (c.pc != 0x004178DCu) [[unlikely]] return; }
L_004178DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004178E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 471u, depth + 1u); else { c.pc = 0x004177C8u; return; } if (c.pc != 0x004178E4u) [[unlikely]] return; }
L_004178E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004178ECu); st32((c.r[16].w[0] + 92u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 72u, depth + 1u); else { c.pc = 0x004185F8u; return; } if (c.pc != 0x004178ECu) [[unlikely]] return; }
L_004178EC:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00417908:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041791Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x0041791Cu) [[unlikely]] return; }
L_0041791C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417924u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 491u, depth + 1u); else { c.pc = 0x00417938u; return; } if (c.pc != 0x00417924u) [[unlikely]] return; }
L_00417924:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C6(c, 75u, depth); }
L_00417938:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041794Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 71u, depth + 1u); else { c.pc = 0x004185E0u; return; } if (c.pc != 0x0041794Cu) [[unlikely]] return; }
L_0041794C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65280ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00417988; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 71u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00417990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00417990; } }
    c.budget -= 1;
L_00417988:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00417990:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C6(c, 72u, depth); }
L_004179A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004179B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x004179B4u) [[unlikely]] return; }
L_004179B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004179BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 496u, depth + 1u); else { c.pc = 0x004179D0u; return; } if (c.pc != 0x004179BCu) [[unlikely]] return; }
L_004179BC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C6(c, 75u, depth); }
L_004179D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004179ECu); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_00C5(c, 488u, depth + 1u); else { c.pc = 0x00417908u; return; } if (c.pc != 0x004179ECu) [[unlikely]] return; }
L_004179EC:
    c.budget -= 1;
L_004179F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004179F8u);  if (depth < kMaxDepth) unit_00CB(c, 90u, depth + 1u); else { c.pc = 0x0042D6B0u; return; } if (c.pc != 0x004179F8u) [[unlikely]] return; }
L_004179F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004179F0u | kUnwind; return; } goto L_004179F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004179F0u | kUnwind; return; } goto L_004179F0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00417A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417A44u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x00417A44u) [[unlikely]] return; }
L_00417A44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417A54u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 503u, depth + 1u); else { c.pc = 0x00417A70u; return; } if (c.pc != 0x00417A54u) [[unlikely]] return; }
L_00417A54:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C6(c, 75u, depth); }
L_00417A70:
    st32((c.r[4].w[0] + 60u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 56u), c.r[5].w[0]);  c.pc = t; return; }
L_00417A80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417A9Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 74u, depth + 1u); else { c.pc = 0x00418628u; return; } if (c.pc != 0x00417A9Cu) [[unlikely]] return; }
L_00417A9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417AA8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 507u, depth + 1u); else { c.pc = 0x00417AC0u; return; } if (c.pc != 0x00417AA8u) [[unlikely]] return; }
L_00417AA8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C6(c, 75u, depth); }
L_00417AC0:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_00417AD0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), c.r[5].w[0]);  c.pc = t; return; }
L_00417AD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), c.r[2].w[0]);  c.pc = t; return; }
L_00417AD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] - 15092u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_00417AF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417B1Cu); set32(c.r[20], ld32((c.r[19].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C7(c, 205u, depth + 1u); else { c.pc = 0x0041D628u; return; } if (c.pc != 0x00417B1Cu) [[unlikely]] return; }
L_00417B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417B24u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 71u, depth + 1u); else { c.pc = 0x004185E0u; return; } if (c.pc != 0x00417B24u) [[unlikely]] return; }
L_00417B24:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));  goto L_00417CB4; }
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[2], 0u + 3u);  goto L_00417C28; }
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417B48u); set32(c.r[18], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_00C6(c, 72u, depth + 1u); else { c.pc = 0x004185F8u; return; } if (c.pc != 0x00417B48u) [[unlikely]] return; }
L_00417B48:
    set32(c.r[16], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] << 11);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417B68u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x00417B68u) [[unlikely]] return; }
L_00417B68:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00417B80u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00417B80u) [[unlikely]] return; }
L_00417B80:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00417B98u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00417B98u) [[unlikely]] return; }
L_00417B98:
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[18].w[0]), 0u);
    st32((c.r[19].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 40u), 0u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[16], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_00417BDC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 88u)));  goto L_00417BE0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00417BDCu); set32(c.r[4], ld32((c.r[19].w[0] + 60u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00417BDCu) [[unlikely]] return; }
L_00417BDC:
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.budget -= 1;
L_00417BE0:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00417C1C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] >> 11);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0] + 76u), 0u);  goto L_00417CB0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0] + 76u), 0u);  goto L_00417CB0; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00417C1C:
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 76u), 0u);  if (t) { goto L_00417CB0; } }
L_00417C28:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00417CA8; } }
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417C3Cu); set32(c.r[16], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_00C6(c, 72u, depth + 1u); else { c.pc = 0x004185F8u; return; } if (c.pc != 0x00417C3Cu) [[unlikely]] return; }
L_00417C3C:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00417C54u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00417C54u) [[unlikely]] return; }
L_00417C54:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[19].w[0] + 40u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 15096u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], ld32((c.r[19].w[0] + 76u)));  if (t) { goto L_00417C88; } }
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_00417C8C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00417CB0; } }
    c.budget -= 1;
L_00417C88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 1;
L_00417C8C:
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));  goto L_00417CB4; }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_00417CB0; } }
L_00417CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417CB0u);  if (depth < kMaxDepth) unit_00C6(c, 72u, depth + 1u); else { c.pc = 0x004185F8u; return; } if (c.pc != 0x00417CB0u) [[unlikely]] return; }
L_00417CB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.budget -= 1;
L_00417CB4:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00417EF8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));  if (t) { goto L_00417EFC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 36u), 0u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417CE4u); st32((c.r[19].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_00C6(c, 72u, depth + 1u); else { c.pc = 0x004185F8u; return; } if (c.pc != 0x00417CE4u) [[unlikely]] return; }
L_00417CE4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[17].d[0]) { st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  goto L_00417EF4; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[17].d[0]) { st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  goto L_00417EF4; }
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00417D18; } }
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 32u), 0u);  if (t) { goto L_00417EF4; } }
L_00417D18:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00417D2C; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 36u)));  goto L_00417D40; }
L_00417D2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417D34u); st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C5(c, 509u, depth + 1u); else { c.pc = 0x00417AD8u; return; } if (c.pc != 0x00417D34u) [[unlikely]] return; }
L_00417D34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00417EF8; } }
    c.budget -= 1;
L_00417D40:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00417D4Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00417D4Cu) [[unlikely]] return; }
L_00417D4C:
    set32(c.r[3], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0])));  goto L_00417D70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00417EF4; } }
    c.budget -= 1;
L_00417D70:
    set32(c.r[7], c.r[29].w[0] + 16u);
    set32(c.r[6], ld32((c.r[19].w[0] + 24u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00417D88u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00417D88u) [[unlikely]] return; }
L_00417D88:
    set32(c.r[5], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[4], c.r[3].w[0] + 2047u);
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[5].d[0];
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[8], ld32((c.r[19].w[0] + 44u)));
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417DE0u); if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[8].d[0];  if (depth < kMaxDepth) unit_00C7(c, 193u, depth + 1u); else { c.pc = 0x0041D4F0u; return; } if (c.pc != 0x00417DE0u) [[unlikely]] return; }
L_00417DE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], ld32((c.r[3].w[0] - 11200u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[17].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_00417E18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[2].w[0] - 10944u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00417E10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] - 10940u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00417E14; } }
    c.budget -= 1;
L_00417E10:
    st8((c.r[2].w[0] - 10940u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00417E14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.budget -= 1;
L_00417E18:
    set32(c.r[5], ld32((c.r[19].w[0] + 92u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_00417E4C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[4], c.r[2].w[0] + 2047u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 9;
L_00417E4C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417E58u); set32(c.r[6], ld32((c.r[29].w[0] + 16u)));  if (depth < kMaxDepth) unit_00C7(c, 197u, depth + 1u); else { c.pc = 0x0041D558u; return; } if (c.pc != 0x00417E58u) [[unlikely]] return; }
L_00417E58:
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[19].w[0] + 40u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; st32((c.r[19].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00417EF4; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[16], c.r[19].w[0] + 36u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00417E8Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00417E8Cu) [[unlikely]] return; }
L_00417E8C:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[19].w[0] + 40u), 0u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417EA0u); set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C7(c, 205u, depth + 1u); else { c.pc = 0x0041D628u; return; } if (c.pc != 0x00417EA0u) [[unlikely]] return; }
L_00417EA0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00417EF8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 15096u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], ld32((c.r[19].w[0] + 76u)));  if (t) { goto L_00417ED8; } }
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_00417EDC; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00417EF4; } }
    c.budget -= 1;
L_00417ED8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 1;
L_00417EDC:
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00417EF8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 2;
L_00417EF4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00417EF8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 1;
L_00417EFC:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00417F18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  [[clang::musttail]] return unit_00C6(c, 12u, depth); }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 72u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 70u)));  goto L_00417F64; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 71u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00417F5C; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00417F5C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 70u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00417F64:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00417F94; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00417F80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417F80u); st32((c.r[16].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_00C7(c, 187u, depth + 1u); else { c.pc = 0x0041D410u; return; } if (c.pc != 0x00417F80u) [[unlikely]] return; }
L_00417F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417F88u);  if (depth < kMaxDepth) unit_00C6(c, 71u, depth + 1u); else { c.pc = 0x004185E0u; return; } if (c.pc != 0x00417F88u) [[unlikely]] return; }
L_00417F88:
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417F94u); st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C6(c, 72u, depth + 1u); else { c.pc = 0x004185F8u; return; } if (c.pc != 0x00417F94u) [[unlikely]] return; }
L_00417F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417F9Cu); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 71u, depth + 1u); else { c.pc = 0x004185E0u; return; } if (c.pc != 0x00417F9Cu) [[unlikely]] return; }
L_00417F9C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 69u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00C6(c, 10u, depth); } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 73u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 73u));  if (t) { [[clang::musttail]] return unit_00C6(c, 3u, depth); } }
    st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417FC4u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_00C6(c, 72u, depth + 1u); else { c.pc = 0x004185F8u; return; } if (c.pc != 0x00417FC4u) [[unlikely]] return; }
L_00417FC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 73u));  [[clang::musttail]] return unit_00C6(c, 3u, depth); }
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417FE0u); set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_00C7(c, 167u, depth + 1u); else { c.pc = 0x0041D0C0u; return; } if (c.pc != 0x00417FE0u) [[unlikely]] return; }
L_00417FE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_00C6(c, 2u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417FF8u); set32(c.r[4], c.r[4].w[0] + 19536u);  if (depth < kMaxDepth) unit_00CB(c, 65u, depth + 1u); else { c.pc = 0x0042D2F0u; return; } if (c.pc != 0x00417FF8u) [[unlikely]] return; }
L_00417FF8:
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
    [[clang::musttail]] return unit_00C6(c, 1u, depth);
}

}
