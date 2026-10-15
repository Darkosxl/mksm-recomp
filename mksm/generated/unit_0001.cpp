#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0001[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0,
    0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0,
    101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0,
    121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0,
    0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0,
    0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0,
    0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 157, 0, 158, 0,
    159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 163, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 169, 0, 170, 0,
    171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 175, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 180, 181, 0, 182,
    0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 187, 0, 188, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 193, 0, 194,
    0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 199, 0, 200, 0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 205, 0, 206,
    0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 0, 221, 0, 222, 0, 0, 223, 0, 224, 0, 0, 225, 0, 226, 0,
    0, 227, 0, 228, 0, 0, 229, 0, 230, 0, 0, 231, 0, 232, 0, 0, 233, 0, 234, 0, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0,
    0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257,
    0, 0, 0, 258, 0, 259, 0, 0, 0, 260, 0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 269, 0, 270, 0, 0, 0, 271,
    0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 279,
    0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0,
    0, 0, 291, 0, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    313, 0, 0, 314, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0,
    0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334,
    0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 354, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 365, 0,
    0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377,
    0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0,
    394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0,
    399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0,
    0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 414,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0,
    0, 429, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0,
    434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 443, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451,
    0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455,
    0, 0, 456, 0, 0, 457, 0, 0, 458, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468,
    0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 474, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 480, 0, 0, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 489, 0,
    0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0,
    0, 0, 0, 0, 497, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0,
    502, 0, 0, 0, 503, 0, 504, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0,
    0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0,
};

void unit_0001(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00104000;
    case 2u: goto L_00104018;
    case 3u: goto L_00104030;
    case 4u: goto L_0010403C;
    case 5u: goto L_00104060;
    case 6u: goto L_00104078;
    case 7u: goto L_00104080;
    case 8u: goto L_001040A8;
    case 9u: goto L_001040C0;
    case 10u: goto L_00104100;
    case 11u: goto L_0010412C;
    case 12u: goto L_0010414C;
    case 13u: goto L_00104188;
    case 14u: goto L_001041A0;
    case 15u: goto L_001041B0;
    case 16u: goto L_001041F0;
    case 17u: goto L_00104208;
    case 18u: goto L_00104224;
    case 19u: goto L_0010423C;
    case 20u: goto L_00104250;
    case 21u: goto L_00104260;
    case 22u: goto L_00104270;
    case 23u: goto L_00104278;
    case 24u: goto L_00104280;
    case 25u: goto L_001042A0;
    case 26u: goto L_001042C4;
    case 27u: goto L_00104300;
    case 28u: goto L_00104318;
    case 29u: goto L_00104328;
    case 30u: goto L_00104360;
    case 31u: goto L_00104378;
    case 32u: goto L_00104394;
    case 33u: goto L_001043D0;
    case 34u: goto L_001043F0;
    case 35u: goto L_00104408;
    case 36u: goto L_00104420;
    case 37u: goto L_00104440;
    case 38u: goto L_00104450;
    case 39u: goto L_00104488;
    case 40u: goto L_001044A0;
    case 41u: goto L_001044E0;
    case 42u: goto L_001044F8;
    case 43u: goto L_00104510;
    case 44u: goto L_00104548;
    case 45u: goto L_0010455C;
    case 46u: goto L_00104578;
    case 47u: goto L_0010459C;
    case 48u: goto L_001045B0;
    case 49u: goto L_001045C8;
    case 50u: goto L_001045F8;
    case 51u: goto L_0010460C;
    case 52u: goto L_0010461C;
    case 53u: goto L_00104628;
    case 54u: goto L_00104644;
    case 55u: goto L_00104658;
    case 56u: goto L_001046B0;
    case 57u: goto L_001046D0;
    case 58u: goto L_001046F4;
    case 59u: goto L_00104708;
    case 60u: goto L_0010471C;
    case 61u: goto L_00104730;
    case 62u: goto L_00104744;
    case 63u: goto L_0010475C;
    case 64u: goto L_00104770;
    case 65u: goto L_00104784;
    case 66u: goto L_001047B4;
    case 67u: goto L_001047D0;
    case 68u: goto L_00104808;
    case 69u: goto L_00104820;
    case 70u: goto L_00104838;
    case 71u: goto L_00104850;
    case 72u: goto L_0010488C;
    case 73u: goto L_001048AC;
    case 74u: goto L_001048C4;
    case 75u: goto L_001048DC;
    case 76u: goto L_001048EC;
    case 77u: goto L_001048FC;
    case 78u: goto L_00104938;
    case 79u: goto L_00104968;
    case 80u: goto L_00104980;
    case 81u: goto L_00104998;
    case 82u: goto L_001049C8;
    case 83u: goto L_001049E0;
    case 84u: goto L_001049F8;
    case 85u: goto L_00104A28;
    case 86u: goto L_00104A5C;
    case 87u: goto L_00104A70;
    case 88u: goto L_00104A7C;
    case 89u: goto L_00104AA0;
    case 90u: goto L_00104AC8;
    case 91u: goto L_00104AD4;
    case 92u: goto L_00104AE4;
    case 93u: goto L_00104B08;
    case 94u: goto L_00104B28;
    case 95u: goto L_00104B44;
    case 96u: goto L_00104B58;
    case 97u: goto L_00104BB4;
    case 98u: goto L_00104BE0;
    case 99u: goto L_00104BF0;
    case 100u: goto L_00104BF8;
    case 101u: goto L_00104C00;
    case 102u: goto L_00104C1C;
    case 103u: goto L_00104C34;
    case 104u: goto L_00104C44;
    case 105u: goto L_00104C64;
    case 106u: goto L_00104C80;
    case 107u: goto L_00104C98;
    case 108u: goto L_00104CA8;
    case 109u: goto L_00104CE8;
    case 110u: goto L_00104D00;
    case 111u: goto L_00104D20;
    case 112u: goto L_00104D38;
    case 113u: goto L_00104D54;
    case 114u: goto L_00104D6C;
    case 115u: goto L_00104D88;
    case 116u: goto L_00104DA0;
    case 117u: goto L_00104DBC;
    case 118u: goto L_00104DD4;
    case 119u: goto L_00104DE8;
    case 120u: goto L_00104DF8;
    case 121u: goto L_00104E00;
    case 122u: goto L_00104E08;
    case 123u: goto L_00104E44;
    case 124u: goto L_00104E54;
    case 125u: goto L_00104E68;
    case 126u: goto L_00104EA0;
    case 127u: goto L_00104EC0;
    case 128u: goto L_00104ECC;
    case 129u: goto L_00104EDC;
    case 130u: goto L_00104EF8;
    case 131u: goto L_00104F08;
    case 132u: goto L_00104F38;
    case 133u: goto L_00104F80;
    case 134u: goto L_00104F8C;
    case 135u: goto L_00105000;
    case 136u: goto L_00105014;
    case 137u: goto L_00105048;
    case 138u: goto L_00105068;
    case 139u: goto L_00105078;
    case 140u: goto L_00105088;
    case 141u: goto L_00105098;
    case 142u: goto L_001050A8;
    case 143u: goto L_001050BC;
    case 144u: goto L_001050E8;
    case 145u: goto L_001050F8;
    case 146u: goto L_00105108;
    case 147u: goto L_0010511C;
    case 148u: goto L_00105148;
    case 149u: goto L_00105158;
    case 150u: goto L_00105168;
    case 151u: goto L_00105190;
    case 152u: goto L_001051A8;
    case 153u: goto L_001051B8;
    case 154u: goto L_0010524C;
    case 155u: goto L_0010525C;
    case 156u: goto L_0010526C;
    case 157u: goto L_00105270;
    case 158u: goto L_00105278;
    case 159u: goto L_00105280;
    case 160u: goto L_0010528C;
    case 161u: goto L_0010529C;
    case 162u: goto L_001052AC;
    case 163u: goto L_001052B0;
    case 164u: goto L_001052B8;
    case 165u: goto L_001052C0;
    case 166u: goto L_001052CC;
    case 167u: goto L_001052DC;
    case 168u: goto L_001052EC;
    case 169u: goto L_001052F0;
    case 170u: goto L_001052F8;
    case 171u: goto L_00105300;
    case 172u: goto L_0010530C;
    case 173u: goto L_0010531C;
    case 174u: goto L_0010532C;
    case 175u: goto L_00105330;
    case 176u: goto L_00105338;
    case 177u: goto L_00105340;
    case 178u: goto L_0010534C;
    case 179u: goto L_0010535C;
    case 180u: goto L_00105370;
    case 181u: goto L_00105374;
    case 182u: goto L_0010537C;
    case 183u: goto L_00105384;
    case 184u: goto L_00105390;
    case 185u: goto L_001053A0;
    case 186u: goto L_001053B0;
    case 187u: goto L_001053B4;
    case 188u: goto L_001053BC;
    case 189u: goto L_001053C4;
    case 190u: goto L_001053D0;
    case 191u: goto L_001053E0;
    case 192u: goto L_001053F0;
    case 193u: goto L_001053F4;
    case 194u: goto L_001053FC;
    case 195u: goto L_00105404;
    case 196u: goto L_00105410;
    case 197u: goto L_00105420;
    case 198u: goto L_00105430;
    case 199u: goto L_00105434;
    case 200u: goto L_0010543C;
    case 201u: goto L_00105444;
    case 202u: goto L_00105450;
    case 203u: goto L_00105460;
    case 204u: goto L_00105470;
    case 205u: goto L_00105474;
    case 206u: goto L_0010547C;
    case 207u: goto L_00105484;
    case 208u: goto L_00105490;
    case 209u: goto L_001054A0;
    case 210u: goto L_001054B0;
    case 211u: goto L_001054B4;
    case 212u: goto L_001054BC;
    case 213u: goto L_001054C4;
    case 214u: goto L_001054F0;
    case 215u: goto L_00105508;
    case 216u: goto L_00105514;
    case 217u: goto L_00105520;
    case 218u: goto L_00105528;
    case 219u: goto L_00105534;
    case 220u: goto L_0010553C;
    case 221u: goto L_00105548;
    case 222u: goto L_00105550;
    case 223u: goto L_0010555C;
    case 224u: goto L_00105564;
    case 225u: goto L_00105570;
    case 226u: goto L_00105578;
    case 227u: goto L_00105584;
    case 228u: goto L_0010558C;
    case 229u: goto L_00105598;
    case 230u: goto L_001055A0;
    case 231u: goto L_001055AC;
    case 232u: goto L_001055B4;
    case 233u: goto L_001055C0;
    case 234u: goto L_001055C8;
    case 235u: goto L_001055D4;
    case 236u: goto L_001055DC;
    case 237u: goto L_001055E4;
    case 238u: goto L_00105600;
    case 239u: goto L_00105620;
    case 240u: goto L_00105650;
    case 241u: goto L_00105668;
    case 242u: goto L_00105698;
    case 243u: goto L_001056C4;
    case 244u: goto L_001056EC;
    case 245u: goto L_00105704;
    case 246u: goto L_00105734;
    case 247u: goto L_00105760;
    case 248u: goto L_00105788;
    case 249u: goto L_001057A0;
    case 250u: goto L_001057D0;
    case 251u: goto L_001057FC;
    case 252u: goto L_00105824;
    case 253u: goto L_0010583C;
    case 254u: goto L_0010586C;
    case 255u: goto L_00105898;
    case 256u: goto L_001058B8;
    case 257u: goto L_001058FC;
    case 258u: goto L_0010590C;
    case 259u: goto L_00105914;
    case 260u: goto L_00105924;
    case 261u: goto L_0010592C;
    case 262u: goto L_0010593C;
    case 263u: goto L_00105944;
    case 264u: goto L_00105988;
    case 265u: goto L_0010599C;
    case 266u: goto L_001059B4;
    case 267u: goto L_001059CC;
    case 268u: goto L_001059D4;
    case 269u: goto L_001059E4;
    case 270u: goto L_001059EC;
    case 271u: goto L_001059FC;
    case 272u: goto L_00105A04;
    case 273u: goto L_00105A14;
    case 274u: goto L_00105A28;
    case 275u: goto L_00105A50;
    case 276u: goto L_00105A5C;
    case 277u: goto L_00105A68;
    case 278u: goto L_00105A74;
    case 279u: goto L_00105A7C;
    case 280u: goto L_00105AA0;
    case 281u: goto L_00105AB0;
    case 282u: goto L_00105AD4;
    case 283u: goto L_00105B04;
    case 284u: goto L_00105B14;
    case 285u: goto L_00105B24;
    case 286u: goto L_00105B40;
    case 287u: goto L_00105B50;
    case 288u: goto L_00105B60;
    case 289u: goto L_00105B6C;
    case 290u: goto L_00105B78;
    case 291u: goto L_00105B88;
    case 292u: goto L_00105B98;
    case 293u: goto L_00105BA4;
    case 294u: goto L_00105BB0;
    case 295u: goto L_00105BD0;
    case 296u: goto L_00105C04;
    case 297u: goto L_00105C60;
    case 298u: goto L_00105CBC;
    case 299u: goto L_00105D18;
    case 300u: goto L_00105D74;
    case 301u: goto L_00105DD0;
    case 302u: goto L_00105E2C;
    case 303u: goto L_00105E88;
    case 304u: goto L_00105EE4;
    case 305u: goto L_00105F40;
    case 306u: goto L_00105F9C;
    case 307u: goto L_00105FF8;
    case 308u: goto L_00106054;
    case 309u: goto L_001060B0;
    case 310u: goto L_0010610C;
    case 311u: goto L_00106168;
    case 312u: goto L_001061C4;
    case 313u: goto L_00106200;
    case 314u: goto L_0010620C;
    case 315u: goto L_00106218;
    case 316u: goto L_00106224;
    case 317u: goto L_00106230;
    case 318u: goto L_0010623C;
    case 319u: goto L_00106260;
    case 320u: goto L_001062C0;
    case 321u: goto L_00106308;
    case 322u: goto L_0010631C;
    case 323u: goto L_00106398;
    case 324u: goto L_001063B8;
    case 325u: goto L_001063F8;
    case 326u: goto L_00106410;
    case 327u: goto L_00106420;
    case 328u: goto L_0010643C;
    case 329u: goto L_00106448;
    case 330u: goto L_00106458;
    case 331u: goto L_00106468;
    case 332u: goto L_001064A0;
    case 333u: goto L_001064E8;
    case 334u: goto L_001064FC;
    case 335u: goto L_00106514;
    case 336u: goto L_00106528;
    case 337u: goto L_00106534;
    case 338u: goto L_00106554;
    case 339u: goto L_00106590;
    case 340u: goto L_001065C8;
    case 341u: goto L_001065D0;
    case 342u: goto L_001065D8;
    case 343u: goto L_00106608;
    case 344u: goto L_0010661C;
    case 345u: goto L_00106680;
    case 346u: goto L_001066D8;
    case 347u: goto L_00106710;
    case 348u: goto L_00106724;
    case 349u: goto L_00106730;
    case 350u: goto L_00106750;
    case 351u: goto L_001067B0;
    case 352u: goto L_001067E0;
    case 353u: goto L_001067E8;
    case 354u: goto L_001067F0;
    case 355u: goto L_00106840;
    case 356u: goto L_00106858;
    case 357u: goto L_00106888;
    case 358u: goto L_001068A8;
    case 359u: goto L_001068CC;
    case 360u: goto L_001068D4;
    case 361u: goto L_001068EC;
    case 362u: goto L_00106900;
    case 363u: goto L_00106958;
    case 364u: goto L_00106964;
    case 365u: goto L_00106978;
    case 366u: goto L_00106998;
    case 367u: goto L_001069B4;
    case 368u: goto L_001069C8;
    case 369u: goto L_001069E0;
    case 370u: goto L_00106A18;
    case 371u: goto L_00106A40;
    case 372u: goto L_00106A58;
    case 373u: goto L_00106A7C;
    case 374u: goto L_00106AAC;
    case 375u: goto L_00106AB8;
    case 376u: goto L_00106AE0;
    case 377u: goto L_00106AFC;
    case 378u: goto L_00106B18;
    case 379u: goto L_00106B38;
    case 380u: goto L_00106B58;
    case 381u: goto L_00106B6C;
    case 382u: goto L_00106B80;
    case 383u: goto L_00106BE4;
    case 384u: goto L_00106C18;
    case 385u: goto L_00106C50;
    case 386u: goto L_00106C88;
    case 387u: goto L_00106CC0;
    case 388u: goto L_00106CF8;
    case 389u: goto L_00106D28;
    case 390u: goto L_00106D40;
    case 391u: goto L_00106D50;
    case 392u: goto L_00106D60;
    case 393u: goto L_00106D70;
    case 394u: goto L_00106D80;
    case 395u: goto L_00106DA0;
    case 396u: goto L_00106DF4;
    case 397u: goto L_00106E10;
    case 398u: goto L_00106E64;
    case 399u: goto L_00106E80;
    case 400u: goto L_00106EA4;
    case 401u: goto L_00106EB8;
    case 402u: goto L_00106EDC;
    case 403u: goto L_00106EF8;
    case 404u: goto L_00106F14;
    case 405u: goto L_00106F28;
    case 406u: goto L_00106F48;
    case 407u: goto L_00106F88;
    case 408u: goto L_00106F9C;
    case 409u: goto L_00106FA8;
    case 410u: goto L_00106FCC;
    case 411u: goto L_00107038;
    case 412u: goto L_0010706C;
    case 413u: goto L_00107074;
    case 414u: goto L_0010707C;
    case 415u: goto L_001070B0;
    case 416u: goto L_001070C8;
    case 417u: goto L_001070D8;
    case 418u: goto L_00107100;
    case 419u: goto L_0010715C;
    case 420u: goto L_001071A0;
    case 421u: goto L_001071E8;
    case 422u: goto L_001071F8;
    case 423u: goto L_00107244;
    case 424u: goto L_00107258;
    case 425u: goto L_0010729C;
    case 426u: goto L_001072B8;
    case 427u: goto L_001072D0;
    case 428u: goto L_001072E0;
    case 429u: goto L_00107304;
    case 430u: goto L_0010730C;
    case 431u: goto L_00107318;
    case 432u: goto L_00107348;
    case 433u: goto L_00107360;
    case 434u: goto L_00107380;
    case 435u: goto L_00107390;
    case 436u: goto L_001073AC;
    case 437u: goto L_001073B8;
    case 438u: goto L_001073D0;
    case 439u: goto L_00107400;
    case 440u: goto L_00107448;
    case 441u: goto L_0010745C;
    case 442u: goto L_00107464;
    case 443u: goto L_00107478;
    case 444u: goto L_001074AC;
    case 445u: goto L_001074C8;
    case 446u: goto L_0010750C;
    case 447u: goto L_00107528;
    case 448u: goto L_00107540;
    case 449u: goto L_00107550;
    case 450u: goto L_00107574;
    case 451u: goto L_0010757C;
    case 452u: goto L_00107588;
    case 453u: goto L_001075B8;
    case 454u: goto L_001075D0;
    case 455u: goto L_001075FC;
    case 456u: goto L_00107608;
    case 457u: goto L_00107614;
    case 458u: goto L_00107620;
    case 459u: goto L_00107630;
    case 460u: goto L_0010763C;
    case 461u: goto L_00107650;
    case 462u: goto L_00107680;
    case 463u: goto L_001076C0;
    case 464u: goto L_001076D4;
    case 465u: goto L_001076EC;
    case 466u: goto L_00107718;
    case 467u: goto L_00107738;
    case 468u: goto L_0010777C;
    case 469u: goto L_00107798;
    case 470u: goto L_001077B0;
    case 471u: goto L_001077C0;
    case 472u: goto L_001077E4;
    case 473u: goto L_001077EC;
    case 474u: goto L_001077F8;
    case 475u: goto L_00107828;
    case 476u: goto L_001078EC;
    case 477u: goto L_00107930;
    case 478u: goto L_00107948;
    case 479u: goto L_00107960;
    case 480u: goto L_00107988;
    case 481u: goto L_00107998;
    case 482u: goto L_001079A4;
    case 483u: goto L_001079B0;
    case 484u: goto L_001079BC;
    case 485u: goto L_001079D0;
    case 486u: goto L_00107A00;
    case 487u: goto L_00107A50;
    case 488u: goto L_00107A70;
    case 489u: goto L_00107A78;
    case 490u: goto L_00107A8C;
    case 491u: goto L_00107AC0;
    case 492u: goto L_00107AE0;
    case 493u: goto L_00107B24;
    case 494u: goto L_00107B40;
    case 495u: goto L_00107B5C;
    case 496u: goto L_00107B6C;
    case 497u: goto L_00107B90;
    case 498u: goto L_00107B98;
    case 499u: goto L_00107BA4;
    case 500u: goto L_00107BD0;
    case 501u: goto L_00107C78;
    case 502u: goto L_00107C80;
    case 503u: goto L_00107C90;
    case 504u: goto L_00107C98;
    case 505u: goto L_00107CA4;
    case 506u: goto L_00107CC4;
    case 507u: goto L_00107CCC;
    case 508u: goto L_00107CD8;
    case 509u: goto L_00107CF0;
    case 510u: goto L_00107D0C;
    case 511u: goto L_00107D38;
    case 512u: goto L_00107D80;
    case 513u: goto L_00107DC4;
    case 514u: goto L_00107E10;
    case 515u: goto L_00107E5C;
    case 516u: goto L_00107E78;
    case 517u: goto L_00107EC0;
    case 518u: goto L_00107F04;
    case 519u: goto L_00107F50;
    case 520u: goto L_00107F9C;
    case 521u: goto L_00107FE8;
    default: bad_entry(c, 0x00104000u); return;
    }
L_00104000:
    set32(c.r[22], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_00104044; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 2;
L_00104018:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[17].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104030u);  if (depth < kMaxDepth) unit_0062(c, 88u, depth + 1u); else { c.pc = 0x00289950u; return; } if (c.pc != 0x00104030u) [[unlikely]] return; }
L_00104030:
    set32(c.r[3], ld32((c.r[2].w[0] + 11264u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 3;
L_0010403C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00104018u | kUnwind; return; } goto L_00104018; } }
L_00104044:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_0010408C; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[20], 0u + 1u);
    set32(c.r[17], c.r[18].w[0] + 1u);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
L_00104060:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 9872u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104078u);  if (depth < kMaxDepth) unit_0062(c, 88u, depth + 1u); else { c.pc = 0x00289950u; return; } if (c.pc != 0x00104078u) [[unlikely]] return; }
L_00104078:
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 11264u)));
    c.budget -= 2;
L_00104080:
    st32((c.r[3].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00104060u | kUnwind; return; } goto L_00104060; } }
L_0010408C:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] <= 0;  if (t) { goto L_001040D4; } }
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[18], 0u + 2u);
    c.budget -= 5;
L_001040A8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 9872u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001040C0u);  if (depth < kMaxDepth) unit_0062(c, 88u, depth + 1u); else { c.pc = 0x00289950u; return; } if (c.pc != 0x001040C0u) [[unlikely]] return; }
L_001040C0:
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 11264u)));
    st32((c.r[3].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001040A8u | kUnwind; return; } goto L_001040A8; } }
L_001040D4:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 19288u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010412Cu);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x0010412Cu) [[unlikely]] return; }
L_0010412C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00104168; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010414Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0010414Cu) [[unlikely]] return; }
L_0010414C:
    set32(c.r[3], ld32((c.r[2].w[0] + 11264u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010416C; } }
L_00104168:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010416C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104188:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001041A0u);  if (depth < kMaxDepth) unit_0000(c, 436u, depth + 1u); else { c.pc = 0x00103E40u; return; } if (c.pc != 0x001041A0u) [[unlikely]] return; }
L_001041A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001041B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0010423C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0010423C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] + 8352u);
    set32(c.r[2], c.r[2].w[0] - 19112u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001041F0u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001041F0u) [[unlikely]] return; }
L_001041F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 19176u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104208u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x00104208u) [[unlikely]] return; }
L_00104208:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] + 8368u);
    set32(c.r[2], c.r[2].w[0] - 19136u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104224u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00104224u) [[unlikely]] return; }
L_00104224:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 19160u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010423Cu);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x0010423Cu) [[unlikely]] return; }
L_0010423C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st32((c.r[2].w[0] + 28480u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104260:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104278:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104280:
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 28480u)));
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 28480u), c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001042A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] - 19144u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001042C4u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x001042C4u) [[unlikely]] return; }
L_001042C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001042E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28480u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001042EC; } }
L_001042E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001042EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104318u);  if (depth < kMaxDepth) unit_0001(c, 15u, depth + 1u); else { c.pc = 0x001041B0u; return; } if (c.pc != 0x00104318u) [[unlikely]] return; }
L_00104318:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104328:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 224u), c.f[20]);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104360u);  if (depth < kMaxDepth) unit_0089(c, 118u, depth + 1u); else { c.pc = 0x00325648u; return; } if (c.pc != 0x00104360u) [[unlikely]] return; }
L_00104360:
    set32(c.r[16], c.r[29].w[0] + 16u);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104378u);  if (depth < kMaxDepth) unit_0089(c, 118u, depth + 1u); else { c.pc = 0x00325648u; return; } if (c.pc != 0x00104378u) [[unlikely]] return; }
L_00104378:
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 112u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104394u);  if (depth < kMaxDepth) unit_0001(c, 85u, depth + 1u); else { c.pc = 0x00104A28u; return; } if (c.pc != 0x00104394u) [[unlikely]] return; }
L_00104394:
    c.f[12] = ld32((c.r[20].w[0] + 12u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0010445C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001043D0u);  if (depth < kMaxDepth) unit_0001(c, 89u, depth + 1u); else { c.pc = 0x00104AA0u; return; } if (c.pc != 0x001043D0u) [[unlikely]] return; }
L_001043D0:
    c.f[12] = ld32((c.r[20].w[0] + 12u));
    set32(c.r[17], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001043F0u);  if (depth < kMaxDepth) unit_0001(c, 89u, depth + 1u); else { c.pc = 0x00104AA0u; return; } if (c.pc != 0x001043F0u) [[unlikely]] return; }
L_001043F0:
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104408u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00104408u) [[unlikely]] return; }
L_00104408:
    set32(c.r[18], c.r[29].w[0] + 96u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104420u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00104420u) [[unlikely]] return; }
L_00104420:
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104440u);  if (depth < kMaxDepth) unit_0001(c, 93u, depth + 1u); else { c.pc = 0x00104B08u; return; } if (c.pc != 0x00104440u) [[unlikely]] return; }
L_00104440:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104450u);  if (depth < kMaxDepth) unit_0001(c, 93u, depth + 1u); else { c.pc = 0x00104B08u; return; } if (c.pc != 0x00104450u) [[unlikely]] return; }
L_00104450:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00104460; } }
L_0010445C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00104460:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104488:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001044A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001044F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001044F8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] + 8384u);
    set32(c.r[2], c.r[2].w[0] - 18736u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001044E0u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001044E0u) [[unlikely]] return; }
L_001044E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 18752u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001044F8u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001044F8u) [[unlikely]] return; }
L_001044F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 8u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.f[12]);
    set32(c.r[6], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104548u);  if (depth < kMaxDepth) unit_0089(c, 118u, depth + 1u); else { c.pc = 0x00325648u; return; } if (c.pc != 0x00104548u) [[unlikely]] return; }
L_00104548:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], c.r[16].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010455Cu);  if (depth < kMaxDepth) unit_0089(c, 118u, depth + 1u); else { c.pc = 0x00325648u; return; } if (c.pc != 0x0010455Cu) [[unlikely]] return; }
L_0010455C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104578:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 32u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010459Cu);  if (depth < kMaxDepth) unit_0089(c, 118u, depth + 1u); else { c.pc = 0x00325648u; return; } if (c.pc != 0x0010459Cu) [[unlikely]] return; }
L_0010459C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], c.r[16].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001045B0u);  if (depth < kMaxDepth) unit_0089(c, 118u, depth + 1u); else { c.pc = 0x00325648u; return; } if (c.pc != 0x001045B0u) [[unlikely]] return; }
L_001045B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001045C8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00104694; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001045F8u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001045F8u) [[unlikely]] return; }
L_001045F8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00104694; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010460Cu);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0010460Cu) [[unlikely]] return; }
L_0010460C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00104694; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010461Cu);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0010461Cu) [[unlikely]] return; }
L_0010461C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104628u);  if (depth < kMaxDepth) unit_009B(c, 432u, depth + 1u); else { c.pc = 0x0036F778u; return; } if (c.pc != 0x00104628u) [[unlikely]] return; }
L_00104628:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00104694; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[2].w[0] + 27456u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104644u);  if (depth < kMaxDepth) unit_0089(c, 163u, depth + 1u); else { c.pc = 0x00325D28u; return; } if (c.pc != 0x00104644u) [[unlikely]] return; }
L_00104644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00104694; } }
    set32(c.r[4], c.r[16].w[0] + 13248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104658u);  if (depth < kMaxDepth) unit_0089(c, 163u, depth + 1u); else { c.pc = 0x00325D28u; return; } if (c.pc != 0x00104658u) [[unlikely]] return; }
L_00104658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00104694; } }
    set32(c.r[4], c.r[16].w[0] - 13248u);
    set32(c.r[2], ld32((c.r[4].w[0] + 13284u)));
    set32(c.r[2], c.r[2].w[0] - 464u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00104694; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 26532u)));
    set32(c.r[2], 0u + 464u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00104694; } }
    set32(c.r[2], 0u + 465u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001046A0; } }
L_00104694:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001046B0; } }
L_001046A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001046B0u);  if (depth < kMaxDepth) unit_0001(c, 57u, depth + 1u); else { c.pc = 0x001046D0u; return; } if (c.pc != 0x001046B0u) [[unlikely]] return; }
L_001046B0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001046D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[20] = c.f[12];
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001046F4u);  if (depth < kMaxDepth) unit_0089(c, 93u, depth + 1u); else { c.pc = 0x00325280u; return; } if (c.pc != 0x001046F4u) [[unlikely]] return; }
L_001046F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00104724; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104708u);  if (depth < kMaxDepth) unit_0089(c, 93u, depth + 1u); else { c.pc = 0x00325280u; return; } if (c.pc != 0x00104708u) [[unlikely]] return; }
L_00104708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00104724; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010471Cu);  if (depth < kMaxDepth) unit_0001(c, 29u, depth + 1u); else { c.pc = 0x00104328u; return; } if (c.pc != 0x0010471Cu) [[unlikely]] return; }
L_0010471C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001047B4; } }
L_00104724:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104730u);  if (depth < kMaxDepth) unit_0089(c, 93u, depth + 1u); else { c.pc = 0x00325280u; return; } if (c.pc != 0x00104730u) [[unlikely]] return; }
L_00104730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00104764; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104744u);  if (depth < kMaxDepth) unit_0089(c, 93u, depth + 1u); else { c.pc = 0x00325280u; return; } if (c.pc != 0x00104744u) [[unlikely]] return; }
L_00104744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00104764; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010475Cu);  if (depth < kMaxDepth) unit_0001(c, 67u, depth + 1u); else { c.pc = 0x001047D0u; return; } if (c.pc != 0x0010475Cu) [[unlikely]] return; }
L_0010475C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001047B4; } }
L_00104764:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104770u);  if (depth < kMaxDepth) unit_0089(c, 93u, depth + 1u); else { c.pc = 0x00325280u; return; } if (c.pc != 0x00104770u) [[unlikely]] return; }
L_00104770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001047A0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104784u);  if (depth < kMaxDepth) unit_0089(c, 93u, depth + 1u); else { c.pc = 0x00325280u; return; } if (c.pc != 0x00104784u) [[unlikely]] return; }
L_00104784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001047A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001047AC; } }
L_001047A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
L_001047AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001047B4u);  if (depth < kMaxDepth) unit_0001(c, 78u, depth + 1u); else { c.pc = 0x00104938u; return; } if (c.pc != 0x001047B4u) [[unlikely]] return; }
L_001047B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001047D0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 240u), c.f[20]);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104808u);  if (depth < kMaxDepth) unit_0089(c, 118u, depth + 1u); else { c.pc = 0x00325648u; return; } if (c.pc != 0x00104808u) [[unlikely]] return; }
L_00104808:
    set32(c.r[17], c.r[29].w[0] + 16u);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104820u);  if (depth < kMaxDepth) unit_0089(c, 118u, depth + 1u); else { c.pc = 0x00325648u; return; } if (c.pc != 0x00104820u) [[unlikely]] return; }
L_00104820:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104838u);  if (depth < kMaxDepth) unit_0001(c, 85u, depth + 1u); else { c.pc = 0x00104A28u; return; } if (c.pc != 0x00104838u) [[unlikely]] return; }
L_00104838:
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104850u);  if (depth < kMaxDepth) unit_008A(c, 267u, depth + 1u); else { c.pc = 0x0032B7E8u; return; } if (c.pc != 0x00104850u) [[unlikely]] return; }
L_00104850:
    c.f[12] = ld32((c.r[20].w[0] + 12u));
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00104908; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010488Cu);  if (depth < kMaxDepth) unit_0001(c, 89u, depth + 1u); else { c.pc = 0x00104AA0u; return; } if (c.pc != 0x0010488Cu) [[unlikely]] return; }
L_0010488C:
    c.f[12] = ld32((c.r[20].w[0] + 12u));
    set32(c.r[18], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001048ACu);  if (depth < kMaxDepth) unit_0001(c, 89u, depth + 1u); else { c.pc = 0x00104AA0u; return; } if (c.pc != 0x001048ACu) [[unlikely]] return; }
L_001048AC:
    set32(c.r[17], c.r[29].w[0] + 96u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001048C4u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001048C4u) [[unlikely]] return; }
L_001048C4:
    set32(c.r[16], c.r[29].w[0] + 112u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001048DCu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001048DCu) [[unlikely]] return; }
L_001048DC:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001048ECu);  if (depth < kMaxDepth) unit_0001(c, 93u, depth + 1u); else { c.pc = 0x00104B08u; return; } if (c.pc != 0x001048ECu) [[unlikely]] return; }
L_001048EC:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001048FCu);  if (depth < kMaxDepth) unit_0001(c, 93u, depth + 1u); else { c.pc = 0x00104B08u; return; } if (c.pc != 0x001048FCu) [[unlikely]] return; }
L_001048FC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010490C; } }
L_00104908:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010490C:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[20] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104938:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104968u);  if (depth < kMaxDepth) unit_0089(c, 118u, depth + 1u); else { c.pc = 0x00325648u; return; } if (c.pc != 0x00104968u) [[unlikely]] return; }
L_00104968:
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104980u);  if (depth < kMaxDepth) unit_0089(c, 118u, depth + 1u); else { c.pc = 0x00325648u; return; } if (c.pc != 0x00104980u) [[unlikely]] return; }
L_00104980:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104998u);  if (depth < kMaxDepth) unit_0001(c, 85u, depth + 1u); else { c.pc = 0x00104A28u; return; } if (c.pc != 0x00104998u) [[unlikely]] return; }
L_00104998:
    c.f[12] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00104A04; } }
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001049C8u);  if (depth < kMaxDepth) unit_0001(c, 89u, depth + 1u); else { c.pc = 0x00104AA0u; return; } if (c.pc != 0x001049C8u) [[unlikely]] return; }
L_001049C8:
    set32(c.r[17], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001049E0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001049E0u) [[unlikely]] return; }
L_001049E0:
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001049F8u);  if (depth < kMaxDepth) unit_0001(c, 93u, depth + 1u); else { c.pc = 0x00104B08u; return; } if (c.pc != 0x001049F8u) [[unlikely]] return; }
L_001049F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00104A08; } }
L_00104A04:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00104A08:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104A28:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104A5Cu);  if (depth < kMaxDepth) unit_008A(c, 267u, depth + 1u); else { c.pc = 0x0032B7E8u; return; } if (c.pc != 0x00104A5Cu) [[unlikely]] return; }
L_00104A5C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104A70u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00104A70u) [[unlikely]] return; }
L_00104A70:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104A7Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00104A7Cu) [[unlikely]] return; }
L_00104A7C:
    st32((c.r[18].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104AA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[20] = c.f[12];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104AC8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00104AC8u) [[unlikely]] return; }
L_00104AC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104AD4u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x00104AD4u) [[unlikely]] return; }
L_00104AD4:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104AE4u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x00104AE4u) [[unlikely]] return; }
L_00104AE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104B08:
    set32(c.r[29], c.r[29].w[0] - 608u);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 560u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104B28u);  if (depth < kMaxDepth) unit_0001(c, 39u, depth + 1u); else { c.pc = 0x00104488u; return; } if (c.pc != 0x00104B28u) [[unlikely]] return; }
L_00104B28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00104BC0; } }
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104B44u);  if (depth < kMaxDepth) unit_0089(c, 118u, depth + 1u); else { c.pc = 0x00325648u; return; } if (c.pc != 0x00104B44u) [[unlikely]] return; }
L_00104B44:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104B58u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00104B58u) [[unlikely]] return; }
L_00104B58:
    c.f[2] = ld32((c.r[16].w[0] + 128u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[29].w[0] + 16u));
    c.f[4] = ld32((c.r[29].w[0] + 20u));
    c.f[5] = ld32((c.r[29].w[0] + 24u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[0] = fp::add(c.f[0], c.f[5]);
    st32((c.r[16].w[0] + 128u), c.f[2]);
    st32((c.r[16].w[0] + 132u), c.f[1]);
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    st32((c.r[29].w[0] + 164u), c.f[1]);
    st32((c.r[29].w[0] + 168u), c.f[2]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104BB4u);  if (depth < kMaxDepth) unit_0049(c, 121u, depth + 1u); else { c.pc = 0x002259F8u; return; } if (c.pc != 0x00104BB4u) [[unlikely]] return; }
L_00104BB4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00104BC4; } }
L_00104BC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00104BC4:
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 560u));
    set32(c.r[29], c.r[29].w[0] + 608u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104BE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104BF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104BF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104C00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104C1Cu);  if (depth < kMaxDepth) unit_0036(c, 370u, depth + 1u); else { c.pc = 0x001DACC0u; return; } if (c.pc != 0x00104C1Cu) [[unlikely]] return; }
L_00104C1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00104C68; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_00104C5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104C34u);  if (depth < kMaxDepth) unit_0036(c, 370u, depth + 1u); else { c.pc = 0x001DACC0u; return; } if (c.pc != 0x00104C34u) [[unlikely]] return; }
L_00104C34:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104C44u);  if (depth < kMaxDepth) unit_0036(c, 370u, depth + 1u); else { c.pc = 0x001DACC0u; return; } if (c.pc != 0x00104C44u) [[unlikely]] return; }
L_00104C44:
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00104C68; } }
L_00104C5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104C64u);  if (depth < kMaxDepth) unit_0036(c, 370u, depth + 1u); else { c.pc = 0x001DACC0u; return; } if (c.pc != 0x00104C64u) [[unlikely]] return; }
L_00104C64:
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 1;
L_00104C68:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104C80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104C98u);  if (depth < kMaxDepth) unit_0001(c, 40u, depth + 1u); else { c.pc = 0x001044A0u; return; } if (c.pc != 0x00104C98u) [[unlikely]] return; }
L_00104C98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104CA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00104DD4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00104DD4; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] + 8400u);
    set32(c.r[2], c.r[2].w[0] - 18456u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104CE8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00104CE8u) [[unlikely]] return; }
L_00104CE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 18656u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104D00u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x00104D00u) [[unlikely]] return; }
L_00104D00:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] + 8416u);
    set32(c.r[2], c.r[2].w[0] - 18504u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104D20u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00104D20u) [[unlikely]] return; }
L_00104D20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 18640u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104D38u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x00104D38u) [[unlikely]] return; }
L_00104D38:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] + 8432u);
    set32(c.r[2], c.r[2].w[0] - 18528u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104D54u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00104D54u) [[unlikely]] return; }
L_00104D54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 18624u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104D6Cu);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x00104D6Cu) [[unlikely]] return; }
L_00104D6C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] + 8448u);
    set32(c.r[2], c.r[2].w[0] - 18552u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104D88u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00104D88u) [[unlikely]] return; }
L_00104D88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 18608u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104DA0u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x00104DA0u) [[unlikely]] return; }
L_00104DA0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] + 8464u);
    set32(c.r[2], c.r[2].w[0] - 18576u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104DBCu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00104DBCu) [[unlikely]] return; }
L_00104DBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 18592u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104DD4u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x00104DD4u) [[unlikely]] return; }
L_00104DD4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104DE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104DF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104E00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104E08:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 160u), c.f[22]);
    st32((c.r[29].w[0] + 152u), c.f[21]);
    st32((c.r[29].w[0] + 144u), c.f[20]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104E44u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x00104E44u) [[unlikely]] return; }
L_00104E44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00105014; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104E54u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x00104E54u) [[unlikely]] return; }
L_00104E54:
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00105014; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104E68u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x00104E68u) [[unlikely]] return; }
L_00104E68:
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00105014; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104EA0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00104EA0u) [[unlikely]] return; }
L_00104EA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4E6E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 27432ull;
    c.f[21] = c.r[1].w[0];
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.f[20] = 0u;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104EC0u);  if (depth < kMaxDepth) unit_0019(c, 243u, depth + 1u); else { c.pc = 0x00166828u; return; } if (c.pc != 0x00104EC0u) [[unlikely]] return; }
L_00104EC0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104ECCu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00104ECCu) [[unlikely]] return; }
L_00104ECC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104EDCu);  if (depth < kMaxDepth) unit_0098(c, 226u, depth + 1u); else { c.pc = 0x00362AF0u; return; } if (c.pc != 0x00104EDCu) [[unlikely]] return; }
L_00104EDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00104F98; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4A740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[22] = c.r[1].w[0];
    c.budget -= 4;
L_00104EF8:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104F08u);  if (depth < kMaxDepth) unit_0089(c, 196u, depth + 1u); else { c.pc = 0x00326188u; return; } if (c.pc != 0x00104F08u) [[unlikely]] return; }
L_00104F08:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[29].w[0] + 28u), 0u);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104F38u);  if (depth < kMaxDepth) unit_008A(c, 166u, depth + 1u); else { c.pc = 0x0032A5B0u; return; } if (c.pc != 0x00104F38u) [[unlikely]] return; }
L_00104F38:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00104F60; } }
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00104F60; } }
    c.f[21] = c.f[0];
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00104F60:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00104F78; } }
    c.f[20] = c.f[0];
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00104F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104F80u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00104F80u) [[unlikely]] return; }
L_00104F80:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104F8Cu);  if (depth < kMaxDepth) unit_0098(c, 228u, depth + 1u); else { c.pc = 0x00362B38u; return; } if (c.pc != 0x00104F8Cu) [[unlikely]] return; }
L_00104F8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00104EF8u | kUnwind; return; } goto L_00104EF8; } }
L_00104F98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    if (c.r[17].d[0] == 0) c.r[2].d[0] = c.r[19].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00105014; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[29].w[0] + 12u), 0u);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00104FEC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.f[20] = ld32((c.r[2].w[0] + 4u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00104FF0; } }
L_00104FEC:
    c.f[20] = ld32((c.r[29].w[0] + 12u));
    c.budget -= 1;
L_00104FF0:
    set32(c.r[4], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105000u);  if (depth < kMaxDepth) unit_0036(c, 356u, depth + 1u); else { c.pc = 0x001DABE0u; return; } if (c.pc != 0x00105000u) [[unlikely]] return; }
L_00105000:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105014u);  if (depth < kMaxDepth) unit_0000(c, 257u, depth + 1u); else { c.pc = 0x001028C8u; return; } if (c.pc != 0x00105014u) [[unlikely]] return; }
L_00105014:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 152u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00105048:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105068u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00105068u) [[unlikely]] return; }
L_00105068:
    set32(c.r[4], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105078u);  if (depth < kMaxDepth) unit_002E(c, 121u, depth + 1u); else { c.pc = 0x001B90B8u; return; } if (c.pc != 0x00105078u) [[unlikely]] return; }
L_00105078:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00105088:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105098u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x00105098u) [[unlikely]] return; }
L_00105098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001050D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001050A8u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x001050A8u) [[unlikely]] return; }
L_001050A8:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001050D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001050BCu);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x001050BCu) [[unlikely]] return; }
L_001050BC:
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001050D4; } }
L_001050D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001050D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001050E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001050F8u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x001050F8u) [[unlikely]] return; }
L_001050F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00105130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105108u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x00105108u) [[unlikely]] return; }
L_00105108:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00105130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010511Cu);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x0010511Cu) [[unlikely]] return; }
L_0010511C:
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00105134; } }
L_00105130:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00105134:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00105148:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105158u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x00105158u) [[unlikely]] return; }
L_00105158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00105178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105168u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x00105168u) [[unlikely]] return; }
L_00105168:
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010517C; } }
L_00105178:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010517C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00105190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001051A8u);  if (depth < kMaxDepth) unit_0001(c, 108u, depth + 1u); else { c.pc = 0x00104CA8u; return; } if (c.pc != 0x001051A8u) [[unlikely]] return; }
L_001051A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001051B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 15506u));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00105218; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00105224; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105230; } }
L_00105218:
    set32(c.r[2], 0u + 180u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105234; } }
L_00105224:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105234; } }
L_00105230:
    set32(c.r[2], 0u + 120u);
    c.budget -= 1;
L_00105234:
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010524Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0010524Cu) [[unlikely]] return; }
L_0010524C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 276u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010525Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x0010525Cu) [[unlikely]] return; }
L_0010525C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010526Cu);  if (depth < kMaxDepth) unit_0002(c, 180u, depth + 1u); else { c.pc = 0x00109378u; return; } if (c.pc != 0x0010526Cu) [[unlikely]] return; }
L_0010526C:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 1;
L_00105270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105280; } }
L_00105278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105280u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00105280u) [[unlikely]] return; }
L_00105280:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010528Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0010528Cu) [[unlikely]] return; }
L_0010528C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 284u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010529Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x0010529Cu) [[unlikely]] return; }
L_0010529C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001052ACu);  if (depth < kMaxDepth) unit_0002(c, 145u, depth + 1u); else { c.pc = 0x00108FD8u; return; } if (c.pc != 0x001052ACu) [[unlikely]] return; }
L_001052AC:
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 1;
L_001052B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001052C0; } }
L_001052B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001052C0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001052C0u) [[unlikely]] return; }
L_001052C0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001052CCu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001052CCu) [[unlikely]] return; }
L_001052CC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001052DCu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001052DCu) [[unlikely]] return; }
L_001052DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001052ECu);  if (depth < kMaxDepth) unit_0001(c, 467u, depth + 1u); else { c.pc = 0x00107738u; return; } if (c.pc != 0x001052ECu) [[unlikely]] return; }
L_001052EC:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_001052F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105300; } }
L_001052F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105300u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00105300u) [[unlikely]] return; }
L_00105300:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010530Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0010530Cu) [[unlikely]] return; }
L_0010530C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010531Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x0010531Cu) [[unlikely]] return; }
L_0010531C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010532Cu);  if (depth < kMaxDepth) unit_0001(c, 445u, depth + 1u); else { c.pc = 0x001074C8u; return; } if (c.pc != 0x0010532Cu) [[unlikely]] return; }
L_0010532C:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_00105330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105340; } }
L_00105338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105340u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00105340u) [[unlikely]] return; }
L_00105340:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010534Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0010534Cu) [[unlikely]] return; }
L_0010534C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 284u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010535Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x0010535Cu) [[unlikely]] return; }
L_0010535C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105370u);  if (depth < kMaxDepth) unit_0002(c, 120u, depth + 1u); else { c.pc = 0x00108BB8u; return; } if (c.pc != 0x00105370u) [[unlikely]] return; }
L_00105370:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_00105374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105384; } }
L_0010537C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105384u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00105384u) [[unlikely]] return; }
L_00105384:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105390u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00105390u) [[unlikely]] return; }
L_00105390:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 284u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001053A0u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001053A0u) [[unlikely]] return; }
L_001053A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001053B0u);  if (depth < kMaxDepth) unit_0001(c, 492u, depth + 1u); else { c.pc = 0x00107AE0u; return; } if (c.pc != 0x001053B0u) [[unlikely]] return; }
L_001053B0:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_001053B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001053C4; } }
L_001053BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001053C4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001053C4u) [[unlikely]] return; }
L_001053C4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001053D0u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001053D0u) [[unlikely]] return; }
L_001053D0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001053E0u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001053E0u) [[unlikely]] return; }
L_001053E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001053F0u);  if (depth < kMaxDepth) unit_0002(c, 188u, depth + 1u); else { c.pc = 0x00109460u; return; } if (c.pc != 0x001053F0u) [[unlikely]] return; }
L_001053F0:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_001053F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105404; } }
L_001053FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105404u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00105404u) [[unlikely]] return; }
L_00105404:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105410u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00105410u) [[unlikely]] return; }
L_00105410:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105420u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x00105420u) [[unlikely]] return; }
L_00105420:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105430u);  if (depth < kMaxDepth) unit_0001(c, 424u, depth + 1u); else { c.pc = 0x00107258u; return; } if (c.pc != 0x00105430u) [[unlikely]] return; }
L_00105430:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 1;
L_00105434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105444; } }
L_0010543C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105444u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00105444u) [[unlikely]] return; }
L_00105444:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105450u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00105450u) [[unlikely]] return; }
L_00105450:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 292u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105460u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x00105460u) [[unlikely]] return; }
L_00105460:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105470u);  if (depth < kMaxDepth) unit_0002(c, 68u, depth + 1u); else { c.pc = 0x001085D0u; return; } if (c.pc != 0x00105470u) [[unlikely]] return; }
L_00105470:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_00105474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105484; } }
L_0010547C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105484u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00105484u) [[unlikely]] return; }
L_00105484:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105490u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00105490u) [[unlikely]] return; }
L_00105490:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001054A0u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001054A0u) [[unlikely]] return; }
L_001054A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001054B0u);  if (depth < kMaxDepth) unit_0002(c, 201u, depth + 1u); else { c.pc = 0x001095F0u; return; } if (c.pc != 0x001054B0u) [[unlikely]] return; }
L_001054B0:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_001054B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001054C4; } }
L_001054BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001054C4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001054C4u) [[unlikely]] return; }
L_001054C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    st32((c.r[16].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 272u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001054F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001054F0u) [[unlikely]] return; }
L_001054F0:
    st32((c.r[16].w[0] + 84u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105508u);  if (depth < kMaxDepth) unit_0001(c, 388u, depth + 1u); else { c.pc = 0x00106CF8u; return; } if (c.pc != 0x00105508u) [[unlikely]] return; }
L_00105508:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001055E4; } }
L_00105514:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105520u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00105520u) [[unlikely]] return; }
L_00105520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105278u | kUnwind; return; } goto L_00105278; } }
L_00105528:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105534u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00105534u) [[unlikely]] return; }
L_00105534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001052B8u | kUnwind; return; } goto L_001052B8; } }
L_0010553C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105548u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00105548u) [[unlikely]] return; }
L_00105548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001052F8u | kUnwind; return; } goto L_001052F8; } }
L_00105550:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010555Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0010555Cu) [[unlikely]] return; }
L_0010555C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105338u | kUnwind; return; } goto L_00105338; } }
L_00105564:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105570u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00105570u) [[unlikely]] return; }
L_00105570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010537Cu | kUnwind; return; } goto L_0010537C; } }
L_00105578:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105584u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00105584u) [[unlikely]] return; }
L_00105584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001053BCu | kUnwind; return; } goto L_001053BC; } }
L_0010558C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105598u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00105598u) [[unlikely]] return; }
L_00105598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001053FCu | kUnwind; return; } goto L_001053FC; } }
L_001055A0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001055ACu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001055ACu) [[unlikely]] return; }
L_001055AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010543Cu | kUnwind; return; } goto L_0010543C; } }
L_001055B4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001055C0u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001055C0u) [[unlikely]] return; }
L_001055C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010547Cu | kUnwind; return; } goto L_0010547C; } }
L_001055C8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001055D4u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001055D4u) [[unlikely]] return; }
L_001055D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001054BCu | kUnwind; return; } goto L_001054BC; } }
L_001055DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001055E4u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001055E4u) [[unlikely]] return; }
L_001055E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00105600:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105620u);  if (depth < kMaxDepth) unit_0049(c, 178u, depth + 1u); else { c.pc = 0x00226558u; return; } if (c.pc != 0x00105620u) [[unlikely]] return; }
L_00105620:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[5], ld32((c.r[17].w[0] + 29812u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[18], c.r[3].w[0] - 74u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001056CC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 386u);
    set32(c.r[16], c.r[16].w[0] - 18272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105650u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x00105650u) [[unlikely]] return; }
L_00105650:
    set32(c.r[6], ld32((c.r[17].w[0] + 29812u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105668u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00105668u) [[unlikely]] return; }
L_00105668:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    set32(c.r[4], 0u + 74u);
    set32(c.r[5], 0u + 440u);
    c.f[13] = c.f[12];
    c.r[6].d[0] = c.r[6].d[0] | 61424ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105698u);  if (depth < kMaxDepth) unit_007D(c, 122u, depth + 1u); else { c.pc = 0x002F58A0u; return; } if (c.pc != 0x00105698u) [[unlikely]] return; }
L_00105698:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7F800000u);
    set32(c.r[4], 0u + 74u);
    set32(c.r[5], 0u + 440u);
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001056C4u);  if (depth < kMaxDepth) unit_007D(c, 122u, depth + 1u); else { c.pc = 0x002F58A0u; return; } if (c.pc != 0x001056C4u) [[unlikely]] return; }
L_001056C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105760; } }
L_001056CC:
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00105760; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 387u);
    set32(c.r[16], c.r[16].w[0] - 18272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001056ECu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001056ECu) [[unlikely]] return; }
L_001056EC:
    set32(c.r[6], ld32((c.r[17].w[0] + 29812u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105704u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00105704u) [[unlikely]] return; }
L_00105704:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    set32(c.r[4], 0u + 74u);
    set32(c.r[5], 0u + 440u);
    c.f[13] = c.f[12];
    c.r[6].d[0] = c.r[6].d[0] | 61424ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105734u);  if (depth < kMaxDepth) unit_007D(c, 122u, depth + 1u); else { c.pc = 0x002F58A0u; return; } if (c.pc != 0x00105734u) [[unlikely]] return; }
L_00105734:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7F800000u);
    set32(c.r[4], 0u + 74u);
    set32(c.r[5], 0u + 440u);
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105760u);  if (depth < kMaxDepth) unit_007D(c, 122u, depth + 1u); else { c.pc = 0x002F58A0u; return; } if (c.pc != 0x00105760u) [[unlikely]] return; }
L_00105760:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 29816u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00105804; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 386u);
    set32(c.r[16], c.r[16].w[0] - 18272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105788u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x00105788u) [[unlikely]] return; }
L_00105788:
    set32(c.r[6], ld32((c.r[17].w[0] + 29816u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001057A0u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001057A0u) [[unlikely]] return; }
L_001057A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 440u);
    c.f[13] = c.f[12];
    c.r[6].d[0] = c.r[6].d[0] | 61424ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001057D0u);  if (depth < kMaxDepth) unit_007D(c, 122u, depth + 1u); else { c.pc = 0x002F58A0u; return; } if (c.pc != 0x001057D0u) [[unlikely]] return; }
L_001057D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7F800000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 440u);
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001057FCu);  if (depth < kMaxDepth) unit_007D(c, 122u, depth + 1u); else { c.pc = 0x002F58A0u; return; } if (c.pc != 0x001057FCu) [[unlikely]] return; }
L_001057FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105898; } }
L_00105804:
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00105898; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 387u);
    set32(c.r[16], c.r[16].w[0] - 18272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105824u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x00105824u) [[unlikely]] return; }
L_00105824:
    set32(c.r[6], ld32((c.r[17].w[0] + 29816u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010583Cu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0010583Cu) [[unlikely]] return; }
L_0010583C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 440u);
    c.f[13] = c.f[12];
    c.r[6].d[0] = c.r[6].d[0] | 61424ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010586Cu);  if (depth < kMaxDepth) unit_007D(c, 122u, depth + 1u); else { c.pc = 0x002F58A0u; return; } if (c.pc != 0x0010586Cu) [[unlikely]] return; }
L_0010586C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7F800000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 440u);
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105898u);  if (depth < kMaxDepth) unit_007D(c, 122u, depth + 1u); else { c.pc = 0x002F58A0u; return; } if (c.pc != 0x00105898u) [[unlikely]] return; }
L_00105898:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001058B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00105A14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 18256u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001058FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010590Cu);  if (depth < kMaxDepth) unit_0001(c, 369u, depth + 1u); else { c.pc = 0x001069E0u; return; } if (c.pc != 0x0010590Cu) [[unlikely]] return; }
L_0010590C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105A14; } }
L_00105914:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105924u);  if (depth < kMaxDepth) unit_0001(c, 369u, depth + 1u); else { c.pc = 0x001069E0u; return; } if (c.pc != 0x00105924u) [[unlikely]] return; }
L_00105924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105A14; } }
L_0010592C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010593Cu);  if (depth < kMaxDepth) unit_0001(c, 369u, depth + 1u); else { c.pc = 0x001069E0u; return; } if (c.pc != 0x0010593Cu) [[unlikely]] return; }
L_0010593C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105A14; } }
L_00105944:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[4].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00105970; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00105970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00105990; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105988u);  if (depth < kMaxDepth) unit_0001(c, 369u, depth + 1u); else { c.pc = 0x001069E0u; return; } if (c.pc != 0x00105988u) [[unlikely]] return; }
L_00105988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105A14; } }
L_00105990:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010599Cu);  if (depth < kMaxDepth) unit_0001(c, 395u, depth + 1u); else { c.pc = 0x00106DA0u; return; } if (c.pc != 0x0010599Cu) [[unlikely]] return; }
L_0010599C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001059BC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001059B4u);  if (depth < kMaxDepth) unit_0001(c, 369u, depth + 1u); else { c.pc = 0x001069E0u; return; } if (c.pc != 0x001059B4u) [[unlikely]] return; }
L_001059B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105A14; } }
L_001059BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001059CCu);  if (depth < kMaxDepth) unit_0001(c, 369u, depth + 1u); else { c.pc = 0x001069E0u; return; } if (c.pc != 0x001059CCu) [[unlikely]] return; }
L_001059CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105A14; } }
L_001059D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001059E4u);  if (depth < kMaxDepth) unit_0001(c, 369u, depth + 1u); else { c.pc = 0x001069E0u; return; } if (c.pc != 0x001059E4u) [[unlikely]] return; }
L_001059E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105A14; } }
L_001059EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001059FCu);  if (depth < kMaxDepth) unit_0001(c, 369u, depth + 1u); else { c.pc = 0x001069E0u; return; } if (c.pc != 0x001059FCu) [[unlikely]] return; }
L_001059FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105A14; } }
L_00105A04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105A14u);  if (depth < kMaxDepth) unit_0001(c, 369u, depth + 1u); else { c.pc = 0x001069E0u; return; } if (c.pc != 0x00105A14u) [[unlikely]] return; }
L_00105A14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00105A28:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105A50u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00105A50u) [[unlikely]] return; }
L_00105A50:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105A5Cu);  if (depth < kMaxDepth) unit_006D(c, 163u, depth + 1u); else { c.pc = 0x002B7888u; return; } if (c.pc != 0x00105A5Cu) [[unlikely]] return; }
L_00105A5C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105A68u);  if (depth < kMaxDepth) unit_0039(c, 261u, depth + 1u); else { c.pc = 0x001E6208u; return; } if (c.pc != 0x00105A68u) [[unlikely]] return; }
L_00105A68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105A74u);  if (depth < kMaxDepth) unit_0089(c, 121u, depth + 1u); else { c.pc = 0x00325720u; return; } if (c.pc != 0x00105A74u) [[unlikely]] return; }
L_00105A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105A7Cu);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x00105A7Cu) [[unlikely]] return; }
L_00105A7C:
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 16960ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00105AA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00105AA0u) [[unlikely]] return; }
L_00105AA0:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105AB0u);  if (depth < kMaxDepth) unit_001A(c, 151u, depth + 1u); else { c.pc = 0x00169CB8u; return; } if (c.pc != 0x00105AB0u) [[unlikely]] return; }
L_00105AB0:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 31864u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105AD4u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x00105AD4u) [[unlikely]] return; }
L_00105AD4:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    st64((c.r[18].w[0] + 560u), c.r[2].d[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 7700u), 0u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00105B2C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[16].w[0] + 9872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B04u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x00105B04u) [[unlikely]] return; }
L_00105B04:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B14u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x00105B14u) [[unlikely]] return; }
L_00105B14:
    set32(c.r[5], ld32((c.r[2].w[0] + 928u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B24u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x00105B24u) [[unlikely]] return; }
L_00105B24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105B60; } }
L_00105B2C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[16].w[0] + 9872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B40u);  if (depth < kMaxDepth) unit_0062(c, 75u, depth + 1u); else { c.pc = 0x00289778u; return; } if (c.pc != 0x00105B40u) [[unlikely]] return; }
L_00105B40:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B50u);  if (depth < kMaxDepth) unit_0062(c, 75u, depth + 1u); else { c.pc = 0x00289778u; return; } if (c.pc != 0x00105B50u) [[unlikely]] return; }
L_00105B50:
    set32(c.r[5], ld32((c.r[2].w[0] + 928u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B60u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x00105B60u) [[unlikely]] return; }
L_00105B60:
    set32(c.r[4], c.r[18].w[0] + 10280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B6Cu);  if (depth < kMaxDepth) unit_009E(c, 69u, depth + 1u); else { c.pc = 0x00378A08u; return; } if (c.pc != 0x00105B6Cu) [[unlikely]] return; }
L_00105B6C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B78u);  if (depth < kMaxDepth) unit_0089(c, 130u, depth + 1u); else { c.pc = 0x00325890u; return; } if (c.pc != 0x00105B78u) [[unlikely]] return; }
L_00105B78:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B88u);  if (depth < kMaxDepth) unit_002E(c, 121u, depth + 1u); else { c.pc = 0x001B90B8u; return; } if (c.pc != 0x00105B88u) [[unlikely]] return; }
L_00105B88:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B98u);  if (depth < kMaxDepth) unit_0036(c, 239u, depth + 1u); else { c.pc = 0x001D9E50u; return; } if (c.pc != 0x00105B98u) [[unlikely]] return; }
L_00105B98:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105BA4u);  if (depth < kMaxDepth) unit_0073(c, 185u, depth + 1u); else { c.pc = 0x002CEBD8u; return; } if (c.pc != 0x00105BA4u) [[unlikely]] return; }
L_00105BA4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105BB0u);  if (depth < kMaxDepth) unit_0073(c, 183u, depth + 1u); else { c.pc = 0x002CEBA8u; return; } if (c.pc != 0x00105BB0u) [[unlikely]] return; }
L_00105BB0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00105BD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 169u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12224u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00105C40; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105C04u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00105C04u) [[unlikely]] return; }
L_00105C04:
    set32(c.r[3], 0u + 6u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00105C10u);  goto L_00105C14; }
L_00105C14:
    c.r[4].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00105C40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 18208u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00105C40:
    set32(c.r[2], c.r[16].w[0] + 12224u);
    set32(c.r[4], 0u + 170u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00105C9C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105C60u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00105C60u) [[unlikely]] return; }
L_00105C60:
    set32(c.r[3], 0u + 6u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00105C6Cu);  goto L_00105C70; }
L_00105C70:
    c.r[4].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00105C9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 18176u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00105C9C:
    set32(c.r[2], c.r[16].w[0] + 12224u);
    set32(c.r[4], 0u + 171u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00105CF8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105CBCu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00105CBCu) [[unlikely]] return; }
L_00105CBC:
    set32(c.r[3], 0u + 6u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00105CC8u);  goto L_00105CCC; }
L_00105CCC:
    c.r[4].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00105CF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 18144u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00105CF8:
    set32(c.r[2], c.r[16].w[0] + 12224u);
    set32(c.r[4], 0u + 172u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00105D54; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105D18u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00105D18u) [[unlikely]] return; }
L_00105D18:
    set32(c.r[3], 0u + 6u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00105D24u);  goto L_00105D28; }
L_00105D28:
    c.r[4].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00105D54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 18112u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00105D54:
    set32(c.r[2], c.r[16].w[0] + 12224u);
    set32(c.r[4], 0u + 173u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00105DB0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105D74u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00105D74u) [[unlikely]] return; }
L_00105D74:
    set32(c.r[3], 0u + 6u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00105D80u);  goto L_00105D84; }
L_00105D84:
    c.r[4].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00105DB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 18080u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00105DB0:
    set32(c.r[2], c.r[16].w[0] + 12224u);
    set32(c.r[4], 0u + 174u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00105E0C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105DD0u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00105DD0u) [[unlikely]] return; }
L_00105DD0:
    set32(c.r[3], 0u + 6u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00105DDCu);  goto L_00105DE0; }
L_00105DE0:
    c.r[4].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00105E0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 18048u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00105E0C:
    set32(c.r[2], c.r[16].w[0] + 12224u);
    set32(c.r[4], 0u + 175u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00105E68; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105E2Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00105E2Cu) [[unlikely]] return; }
L_00105E2C:
    set32(c.r[3], 0u + 6u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00105E38u);  goto L_00105E3C; }
L_00105E3C:
    c.r[4].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00105E68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 18016u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00105E68:
    set32(c.r[2], c.r[16].w[0] + 12224u);
    set32(c.r[4], 0u + 176u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00105EC4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105E88u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00105E88u) [[unlikely]] return; }
L_00105E88:
    set32(c.r[3], 0u + 6u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00105E94u);  goto L_00105E98; }
L_00105E98:
    c.r[4].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00105EC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 17984u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00105EC4:
    set32(c.r[2], c.r[16].w[0] + 12224u);
    set32(c.r[4], 0u + 177u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00105F20; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105EE4u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00105EE4u) [[unlikely]] return; }
L_00105EE4:
    set32(c.r[3], 0u + 6u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00105EF0u);  goto L_00105EF4; }
L_00105EF4:
    c.r[4].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00105F20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 17952u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00105F20:
    set32(c.r[2], c.r[16].w[0] + 12224u);
    set32(c.r[4], 0u + 178u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00105F7C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105F40u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00105F40u) [[unlikely]] return; }
L_00105F40:
    set32(c.r[3], 0u + 6u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00105F4Cu);  goto L_00105F50; }
L_00105F50:
    c.r[4].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00105F7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 17920u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00105F7C:
    set32(c.r[2], c.r[16].w[0] + 12224u);
    set32(c.r[4], 0u + 179u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00105FD8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105F9Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00105F9Cu) [[unlikely]] return; }
L_00105F9C:
    set32(c.r[3], 0u + 6u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00105FA8u);  goto L_00105FAC; }
L_00105FAC:
    c.r[4].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00105FD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 17888u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00105FD8:
    set32(c.r[2], c.r[16].w[0] + 12224u);
    set32(c.r[4], 0u + 180u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00106034; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105FF8u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00105FF8u) [[unlikely]] return; }
L_00105FF8:
    set32(c.r[3], 0u + 6u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00106004u);  goto L_00106008; }
L_00106008:
    c.r[4].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00106034; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 17856u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00106034:
    set32(c.r[2], c.r[16].w[0] + 12224u);
    set32(c.r[4], 0u + 181u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00106090; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106054u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00106054u) [[unlikely]] return; }
L_00106054:
    set32(c.r[3], 0u + 6u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00106060u);  goto L_00106064; }
L_00106064:
    c.r[4].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00106090; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 17824u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00106090:
    set32(c.r[2], c.r[16].w[0] + 12224u);
    set32(c.r[4], 0u + 182u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001060EC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001060B0u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x001060B0u) [[unlikely]] return; }
L_001060B0:
    set32(c.r[3], 0u + 6u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x001060BCu);  goto L_001060C0; }
L_001060C0:
    c.r[4].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001060EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 17792u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001060EC:
    set32(c.r[2], c.r[16].w[0] + 12224u);
    set32(c.r[4], 0u + 183u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00106148; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010610Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0010610Cu) [[unlikely]] return; }
L_0010610C:
    set32(c.r[3], 0u + 6u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00106118u);  goto L_0010611C; }
L_0010611C:
    c.r[4].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00106148; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 17760u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00106148:
    set32(c.r[2], c.r[16].w[0] + 12224u);
    set32(c.r[4], 0u + 184u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001061A4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106168u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00106168u) [[unlikely]] return; }
L_00106168:
    set32(c.r[3], 0u + 6u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00106174u);  goto L_00106178; }
L_00106178:
    c.r[4].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001061A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 17728u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001061A4:
    set32(c.r[2], c.r[16].w[0] + 12224u);
    set32(c.r[4], 0u + 185u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00106248; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001061C4u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x001061C4u) [[unlikely]] return; }
L_001061C4:
    set32(c.r[3], 0u + 6u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x001061D0u);  goto L_001061D4; }
L_001061D4:
    c.r[4].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00106248; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 17696u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00106200:
    set32(c.r[2], 0u + 2978u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010624C; } }
L_0010620C:
    set32(c.r[2], 0u + 2979u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010624C; } }
L_00106218:
    set32(c.r[2], 0u + 2980u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010624C; } }
L_00106224:
    set32(c.r[2], 0u + 2981u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010624C; } }
L_00106230:
    set32(c.r[2], 0u + 2982u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010624C; } }
L_0010623C:
    set32(c.r[2], 0u + 2983u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010624C; } }
L_00106248:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010624C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00106260:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010646C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[4], c.r[4].w[0] + 12224u);
    c.r[17].d[0] = c.r[17].d[0] | 97ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001062C0u);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x001062C0u) [[unlikely]] return; }
L_001062C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001062DC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[23], c.r[18].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010635C; } }
L_001062DC:
    set32(c.r[4], c.r[2].w[0] + 40u);
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[23], c.r[18].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00106358; } }
    set32(c.r[22], 0u + 1u);
    set32(c.r[21], 0u - 1u);
    c.budget -= 3;
L_00106308:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010631Cu);  if (depth < kMaxDepth) unit_0033(c, 309u, depth + 1u); else { c.pc = 0x001CFEB8u; return; } if (c.pc != 0x0010631Cu) [[unlikely]] return; }
L_0010631C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_00106330; } }
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00106334; } }
L_00106330:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00106334:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00106358; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[21].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106308u | kUnwind; return; } goto L_00106308; } }
L_00106358:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010635C:
    set32(c.r[2], c.r[30].w[0] + 20640u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[20], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00106390; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001063B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001063C8; } }
L_00106390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106398u);  if (depth < kMaxDepth) unit_0039(c, 322u, depth + 1u); else { c.pc = 0x001E6BC8u; return; } if (c.pc != 0x00106398u) [[unlikely]] return; }
L_00106398:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[17].d[0] = c.r[17].d[0] | 97ull;
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001063C8; } }
L_001063B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001063B8u);  if (depth < kMaxDepth) unit_0039(c, 322u, depth + 1u); else { c.pc = 0x001E6BC8u; return; } if (c.pc != 0x001063B8u) [[unlikely]] return; }
L_001063B8:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[20], ld32((c.r[16].w[0])));
    c.r[17].d[0] = c.r[17].d[0] | 98ull;
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_001063C8:
    set32(c.r[2], 0u + 13248u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + 14208u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[4].w[0] - 14960u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001063F8u);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x001063F8u) [[unlikely]] return; }
L_001063F8:
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106410u);  if (depth < kMaxDepth) unit_0060(c, 257u, depth + 1u); else { c.pc = 0x00283BE8u; return; } if (c.pc != 0x00106410u) [[unlikely]] return; }
L_00106410:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106420u);  if (depth < kMaxDepth) unit_0060(c, 255u, depth + 1u); else { c.pc = 0x00283BC8u; return; } if (c.pc != 0x00106420u) [[unlikely]] return; }
L_00106420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 84u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[2].w[0] - 3028u), c.r[21].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010643Cu);  if (depth < kMaxDepth) unit_0056(c, 332u, depth + 1u); else { c.pc = 0x0025B7F0u; return; } if (c.pc != 0x0010643Cu) [[unlikely]] return; }
L_0010643C:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106448u);  if (depth < kMaxDepth) unit_003C(c, 68u, depth + 1u); else { c.pc = 0x001F09B0u; return; } if (c.pc != 0x00106448u) [[unlikely]] return; }
L_00106448:
    set32(c.r[4], ld32((c.r[19].w[0] + 84u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106458u);  if (depth < kMaxDepth) unit_0049(c, 150u, depth + 1u); else { c.pc = 0x00226058u; return; } if (c.pc != 0x00106458u) [[unlikely]] return; }
L_00106458:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106468u);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x00106468u) [[unlikely]] return; }
L_00106468:
    st32((c.r[19].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 1;
L_0010646C:
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
L_001064A0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 12224u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001064E8u);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x001064E8u) [[unlikely]] return; }
L_001064E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001065E4; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010665C; } }
L_001064FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] - 30386u)));
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106514u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x00106514u) [[unlikely]] return; }
L_00106514:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106528u);  if (depth < kMaxDepth) unit_0082(c, 256u, depth + 1u); else { c.pc = 0x0030B710u; return; } if (c.pc != 0x00106528u) [[unlikely]] return; }
L_00106528:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106534u);  if (depth < kMaxDepth) unit_0039(c, 322u, depth + 1u); else { c.pc = 0x001E6BC8u; return; } if (c.pc != 0x00106534u) [[unlikely]] return; }
L_00106534:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 20640u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106554u);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x00106554u) [[unlikely]] return; }
L_00106554:
    set32(c.r[3], 0u + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27016u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 97ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[9], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[9].w[0] + 36u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106590u);  if (depth < kMaxDepth) unit_0034(c, 26u, depth + 1u); else { c.pc = 0x001D0570u; return; } if (c.pc != 0x00106590u) [[unlikely]] return; }
L_00106590:
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[10], c.r[21].w[0] + 10u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[20].w[0] + 29820u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 97ull;
    set32(c.r[11], 0u + 2u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001065C8u);  if (depth < kMaxDepth) unit_0034(c, 47u, depth + 1u); else { c.pc = 0x001D0998u; return; } if (c.pc != 0x001065C8u) [[unlikely]] return; }
L_001065C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001065D0u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x001065D0u) [[unlikely]] return; }
L_001065D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001065D8u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x001065D8u) [[unlikely]] return; }
L_001065D8:
    st32((c.r[20].w[0] + 29820u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001066A4; } }
L_001065E4:
    set32(c.r[4], c.r[2].w[0] + 40u);
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00106658; } }
    set32(c.r[19], 0u + 1u);
    set32(c.r[18], 0u - 1u);
    c.budget -= 3;
L_00106608:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010661Cu);  if (depth < kMaxDepth) unit_0033(c, 309u, depth + 1u); else { c.pc = 0x001CFEB8u; return; } if (c.pc != 0x0010661Cu) [[unlikely]] return; }
L_0010661C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_00106630; } }
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00106634; } }
L_00106630:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00106634:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00106658; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106608u | kUnwind; return; } goto L_00106608; } }
L_00106658:
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010665C:
    c.r[2].d[0] = c.r[21].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010680C; } }
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[4], c.r[20].w[0] + 40u);
    set32(c.r[2], c.r[2].w[0] + 40u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 6;
L_00106680:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[16], c.r[21].w[0] << 2);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001064FCu | kUnwind; return; } goto L_001064FC; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[21].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106680u | kUnwind; return; } goto L_00106680; } }
L_001066A4:
    c.r[2].d[0] = c.r[21].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010680C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[22], c.r[2].w[0] + 27060u);
    set32(c.r[5], c.r[3].w[0] + 14208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[6], c.r[2].w[0] - 18560u);
    set32(c.r[23], 0u + 1u);
    set32(c.r[20], 0u + 48u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 10;
L_001066D8:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[18], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001067FC; } }
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 1422u)));
    c.r[16].d[0] = c.r[23].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 20942u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[17].d[0] ^ c.r[2].d[0];
    if (c.r[2].d[0] != 0) c.r[16].d[0] = 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106710u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x00106710u) [[unlikely]] return; }
L_00106710:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106724u);  if (depth < kMaxDepth) unit_0082(c, 256u, depth + 1u); else { c.pc = 0x0030B710u; return; } if (c.pc != 0x00106724u) [[unlikely]] return; }
L_00106724:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106730u);  if (depth < kMaxDepth) unit_0039(c, 322u, depth + 1u); else { c.pc = 0x001E6BC8u; return; } if (c.pc != 0x00106730u) [[unlikely]] return; }
L_00106730:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 20640u);
    set32(c.r[2], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106750u);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x00106750u) [[unlikely]] return; }
L_00106750:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[23].d[0];  if (t) { goto L_00106770; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] + 27056u);
    set32(c.r[3], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00106788; } }
L_00106770:
    mmi::mult(c, 0, c.r[17].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] + 27052u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] + 27048u);
    c.budget -= 6;
L_00106788:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 98ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001067B0u);  if (depth < kMaxDepth) unit_0034(c, 26u, depth + 1u); else { c.pc = 0x001D0570u; return; } if (c.pc != 0x001067B0u) [[unlikely]] return; }
L_001067B0:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 98ull;
    set32(c.r[10], c.r[6].w[0] + 10u);
    set32(c.r[11], 0u + 2u);
    st32((c.r[30].w[0] + 29820u), c.r[23].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001067E0u);  if (depth < kMaxDepth) unit_0034(c, 47u, depth + 1u); else { c.pc = 0x001D0998u; return; } if (c.pc != 0x001067E0u) [[unlikely]] return; }
L_001067E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001067E8u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x001067E8u) [[unlikely]] return; }
L_001067E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001067F0u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x001067F0u) [[unlikely]] return; }
L_001067F0:
    st32((c.r[30].w[0] + 29820u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010680C; } }
L_001067FC:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001066D8u | kUnwind; return; } goto L_001066D8; } }
L_0010680C:
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
L_00106840:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 40u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], 0u + 9u);
    c.budget -= 6;
L_00106858:
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 3u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00106888; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 272u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00106888u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00106888u) [[unlikely]] return; }
L_00106888:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106858u | kUnwind; return; } goto L_00106858; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001068A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001068CCu);  if (depth < kMaxDepth) unit_0001(c, 388u, depth + 1u); else { c.pc = 0x00106CF8u; return; } if (c.pc != 0x001068CCu) [[unlikely]] return; }
L_001068CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001068D4u);  if (depth < kMaxDepth) unit_0006(c, 223u, depth + 1u); else { c.pc = 0x00119CD8u; return; } if (c.pc != 0x001068D4u) [[unlikely]] return; }
L_001068D4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001068ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001068ECu) [[unlikely]] return; }
L_001068EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00106900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 8480u)));
    c.f[20] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00106958; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7F800000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], 0u + 10u);
    set32(c.r[5], 0u + 420u);
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106958u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x00106958u) [[unlikely]] return; }
L_00106958:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106964u);  if (depth < kMaxDepth) unit_0001(c, 238u, depth + 1u); else { c.pc = 0x00105600u; return; } if (c.pc != 0x00106964u) [[unlikely]] return; }
L_00106964:
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106978u);  if (depth < kMaxDepth) unit_0001(c, 382u, depth + 1u); else { c.pc = 0x00106B80u; return; } if (c.pc != 0x00106978u) [[unlikely]] return; }
L_00106978:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[5].w[0] + 272u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00106998u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00106998u) [[unlikely]] return; }
L_00106998:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 272u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001069B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001069B4u) [[unlikely]] return; }
L_001069B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001069C8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001069C8u);  if (depth < kMaxDepth) unit_0001(c, 256u, depth + 1u); else { c.pc = 0x001058B8u; return; } if (c.pc != 0x001069C8u) [[unlikely]] return; }
L_001069C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001069E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 272u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00106A18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00106A18u) [[unlikely]] return; }
L_00106A18:
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[17].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 272u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00106A40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00106A40u) [[unlikely]] return; }
L_00106A40:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00106A58:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106A7Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x00106A7Cu) [[unlikely]] return; }
L_00106A7C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00106AFC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00106AFC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106AACu);  if (depth < kMaxDepth) unit_0019(c, 243u, depth + 1u); else { c.pc = 0x00166828u; return; } if (c.pc != 0x00106AACu) [[unlikely]] return; }
L_00106AAC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106AB8u);  if (depth < kMaxDepth) unit_0089(c, 163u, depth + 1u); else { c.pc = 0x00325D28u; return; } if (c.pc != 0x00106AB8u) [[unlikely]] return; }
L_00106AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00106AFC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00106AE0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106AE0u);  if (depth < kMaxDepth) unit_0001(c, 386u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x00106AE0u) [[unlikely]] return; }
L_00106AE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_00106AFC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106AFCu);  if (depth < kMaxDepth) unit_0001(c, 384u, depth + 1u); else { c.pc = 0x00106C18u; return; } if (c.pc != 0x00106AFCu) [[unlikely]] return; }
L_00106AFC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00106B18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106B38u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00106B38u) [[unlikely]] return; }
L_00106B38:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00106B60; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106B58u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x00106B58u) [[unlikely]] return; }
L_00106B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00106B6C; } }
L_00106B60:
    set32(c.r[5], ld32((c.r[4].w[0] + 928u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106B6Cu);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x00106B6Cu) [[unlikely]] return; }
L_00106B6C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00106B80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00106C04; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00106BB8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
L_00106BB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00106BD8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
L_00106BD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106BE4u);  if (depth < kMaxDepth) unit_0001(c, 256u, depth + 1u); else { c.pc = 0x001058B8u; return; } if (c.pc != 0x00106BE4u) [[unlikely]] return; }
L_00106BE4:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00106C04; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_00106C04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00106C18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00106C70; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106C50u);  if (depth < kMaxDepth) unit_0001(c, 256u, depth + 1u); else { c.pc = 0x001058B8u; return; } if (c.pc != 0x00106C50u) [[unlikely]] return; }
L_00106C50:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00106C70; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_00106C70:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00106C88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00106CE0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106CC0u);  if (depth < kMaxDepth) unit_0001(c, 256u, depth + 1u); else { c.pc = 0x001058B8u; return; } if (c.pc != 0x00106CC0u) [[unlikely]] return; }
L_00106CC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00106CE0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_00106CE0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00106CF8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u - 1u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 13248u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106D28u);  if (depth < kMaxDepth) unit_0010(c, 298u, depth + 1u); else { c.pc = 0x00143900u; return; } if (c.pc != 0x00106D28u) [[unlikely]] return; }
L_00106D28:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106D40u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00106D40u) [[unlikely]] return; }
L_00106D40:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106D50u);  if (depth < kMaxDepth) unit_0001(c, 274u, depth + 1u); else { c.pc = 0x00105A28u; return; } if (c.pc != 0x00106D50u) [[unlikely]] return; }
L_00106D50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106D60u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00106D60u) [[unlikely]] return; }
L_00106D60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106D70u);  if (depth < kMaxDepth) unit_0001(c, 274u, depth + 1u); else { c.pc = 0x00105A28u; return; } if (c.pc != 0x00106D70u) [[unlikely]] return; }
L_00106D70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 12688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106D80u);  if (depth < kMaxDepth) unit_001A(c, 99u, depth + 1u); else { c.pc = 0x001692E0u; return; } if (c.pc != 0x00106D80u) [[unlikely]] return; }
L_00106D80:
    st32((c.r[17].w[0] + 36u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00106DA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00106DD0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00106DE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00106DF8; } }
L_00106DD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00106DE8; } }
L_00106DE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 2;
L_00106DE8:
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106DF4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00106DF4u) [[unlikely]] return; }
L_00106DF4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00106DF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00106E10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00106E40; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00106E50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00106E68; } }
L_00106E40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00106E58; } }
L_00106E50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_00106E58:
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106E64u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00106E64u) [[unlikely]] return; }
L_00106E64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00106E68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00106E80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00106EA4; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106EA4u);  if (depth < kMaxDepth) unit_0002(c, 119u, depth + 1u); else { c.pc = 0x00108BA8u; return; } if (c.pc != 0x00106EA4u) [[unlikely]] return; }
L_00106EA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00106EB8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00106F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106EDCu);  if (depth < kMaxDepth) unit_0058(c, 6u, depth + 1u); else { c.pc = 0x002600A8u; return; } if (c.pc != 0x00106EDCu) [[unlikely]] return; }
L_00106EDC:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 14516u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106EF8u);  if (depth < kMaxDepth) unit_009E(c, 444u, depth + 1u); else { c.pc = 0x0037BFF0u; return; } if (c.pc != 0x00106EF8u) [[unlikely]] return; }
L_00106EF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106F14u);  if (depth < kMaxDepth) unit_0060(c, 252u, depth + 1u); else { c.pc = 0x00283B68u; return; } if (c.pc != 0x00106F14u) [[unlikely]] return; }
L_00106F14:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106F28u);  if (depth < kMaxDepth) unit_003C(c, 68u, depth + 1u); else { c.pc = 0x001F09B0u; return; } if (c.pc != 0x00106F28u) [[unlikely]] return; }
L_00106F28:
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 2;
L_00106F30:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00106F48:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106F88u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x00106F88u) [[unlikely]] return; }
L_00106F88:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106F9Cu);  if (depth < kMaxDepth) unit_0082(c, 256u, depth + 1u); else { c.pc = 0x0030B710u; return; } if (c.pc != 0x00106F9Cu) [[unlikely]] return; }
L_00106F9C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106FA8u);  if (depth < kMaxDepth) unit_0039(c, 322u, depth + 1u); else { c.pc = 0x001E6BC8u; return; } if (c.pc != 0x00106FA8u) [[unlikely]] return; }
L_00106FA8:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 20640u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106FCCu);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x00106FCCu) [[unlikely]] return; }
L_00106FCC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00107000; } }
    set32(c.r[3], 0u + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27016u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00107020; } }
L_00107000:
    set32(c.r[3], 0u + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27016u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 8;
L_00107020:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107038u);  if (depth < kMaxDepth) unit_0034(c, 26u, depth + 1u); else { c.pc = 0x001D0570u; return; } if (c.pc != 0x00107038u) [[unlikely]] return; }
L_00107038:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[16].w[0] + 29820u), c.r[2].w[0]);
    set32(c.r[11], 0u + 2u);
    set32(c.r[10], c.r[6].w[0] + 10u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010706Cu);  if (depth < kMaxDepth) unit_0034(c, 47u, depth + 1u); else { c.pc = 0x001D0998u; return; } if (c.pc != 0x0010706Cu) [[unlikely]] return; }
L_0010706C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107074u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x00107074u) [[unlikely]] return; }
L_00107074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010707Cu);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x0010707Cu) [[unlikely]] return; }
L_0010707C:
    st32((c.r[16].w[0] + 29820u), 0u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001070B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[4].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001070C8:
    set32(c.r[2], c.r[4].w[0] + 8u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001070D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[9], c.r[4].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    c.r[3].d[0] = c.r[6].d[0] | c.r[9].d[0];
    st32((c.r[4].w[0] + 272u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00107158; } }
    set32(c.r[2], c.r[6].w[0] + 256u);
    c.budget -= 1;
L_00107100:
    ldl(c.r[3], (c.r[6].w[0] + 7u));
    ldr(c.r[3], (c.r[6].w[0]));
    ldl(c.r[5], (c.r[6].w[0] + 15u));
    ldr(c.r[5], (c.r[6].w[0] + 8u));
    ldl(c.r[10], (c.r[6].w[0] + 23u));
    ldr(c.r[10], (c.r[6].w[0] + 16u));
    ldl(c.r[11], (c.r[6].w[0] + 31u));
    ldr(c.r[11], (c.r[6].w[0] + 24u));
    sdl(c.r[3], (c.r[9].w[0] + 7u));
    sdr(c.r[3], (c.r[9].w[0]));
    sdl(c.r[5], (c.r[9].w[0] + 15u));
    sdr(c.r[5], (c.r[9].w[0] + 8u));
    sdl(c.r[10], (c.r[9].w[0] + 23u));
    sdr(c.r[10], (c.r[9].w[0] + 16u));
    sdl(c.r[11], (c.r[9].w[0] + 31u));
    sdr(c.r[11], (c.r[9].w[0] + 24u));
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[9], c.r[9].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107100u | kUnwind; return; } goto L_00107100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010718C; } }
L_00107158:
    set32(c.r[2], c.r[6].w[0] + 256u);
    c.budget -= 1;
L_0010715C:
    c.r[3].d[0] = ld64((c.r[6].w[0]));
    c.r[5].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[10].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[11].d[0] = ld64((c.r[6].w[0] + 24u));
    st64((c.r[9].w[0]), c.r[3].d[0]);
    st64((c.r[9].w[0] + 8u), c.r[5].d[0]);
    st64((c.r[9].w[0] + 16u), c.r[10].d[0]);
    st64((c.r[9].w[0] + 24u), c.r[11].d[0]);
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[9], c.r[9].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010715Cu | kUnwind; return; } goto L_0010715C; } }
L_0010718C:
    st32((c.r[4].w[0] + 264u), c.r[7].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 268u), c.r[8].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001071A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 264u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001071D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], ld32((c.r[2].w[0] + 11264u)));
    st32((c.r[3].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 24512u)));
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 7;
L_001071D4:
    set32(c.r[2], ld32((c.r[6].w[0] + 268u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001071E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001071E8u);  if (depth < kMaxDepth) unit_0037(c, 164u, depth + 1u); else { c.pc = 0x001DD338u; return; } if (c.pc != 0x001071E8u) [[unlikely]] return; }
L_001071E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001071F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 264u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00107230; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], ld32((c.r[2].w[0] + 11264u)));
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[3].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[2].w[0] + 24512u)));
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 8;
L_00107230:
    set32(c.r[2], ld32((c.r[5].w[0] + 268u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00107244; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107244u);  if (depth < kMaxDepth) unit_0037(c, 169u, depth + 1u); else { c.pc = 0x001DD3C0u; return; } if (c.pc != 0x00107244u) [[unlikely]] return; }
L_00107244:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00107258:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 17576u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010728C; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010729C; } }
L_0010728C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010729Cu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x0010729Cu) [[unlikely]] return; }
L_0010729C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001072B8u);  if (depth < kMaxDepth) unit_0001(c, 417u, depth + 1u); else { c.pc = 0x001070D8u; return; } if (c.pc != 0x001072B8u) [[unlikely]] return; }
L_001072B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 17552u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 272u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001072D0u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001072D0u) [[unlikely]] return; }
L_001072D0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001072E0u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001072E0u) [[unlikely]] return; }
L_001072E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010730C; } }
L_00107304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010730Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0010730Cu) [[unlikely]] return; }
L_0010730C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010732C; } }
L_00107318:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[16].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107304u | kUnwind; return; } goto L_00107304; } }
L_0010732C:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 304u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00107348:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[4].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00107360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 276u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107380u);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x001071A0u; return; } if (c.pc != 0x00107380u) [[unlikely]] return; }
L_00107380:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00107390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001073ACu);  if (depth < kMaxDepth) unit_0001(c, 388u, depth + 1u); else { c.pc = 0x00106CF8u; return; } if (c.pc != 0x001073ACu) [[unlikely]] return; }
L_001073AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001073B8u);  if (depth < kMaxDepth) unit_0001(c, 422u, depth + 1u); else { c.pc = 0x001071F8u; return; } if (c.pc != 0x001073B8u) [[unlikely]] return; }
L_001073B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001073D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 276u)));
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001073F4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001073F4:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00107400:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 276u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010742C; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_0010742C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 383u);
    set32(c.r[16], c.r[16].w[0] - 17560u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107448u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x00107448u) [[unlikely]] return; }
L_00107448:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010745Cu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0010745Cu) [[unlikely]] return; }
L_0010745C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107464u);  if (depth < kMaxDepth) unit_0049(c, 178u, depth + 1u); else { c.pc = 0x00226558u; return; } if (c.pc != 0x00107464u) [[unlikely]] return; }
L_00107464:
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107478u);  if (depth < kMaxDepth) unit_0049(c, 177u, depth + 1u); else { c.pc = 0x00226540u; return; } if (c.pc != 0x00107478u) [[unlikely]] return; }
L_00107478:
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    set32(c.r[7], 0u + 2u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001074ACu);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001074ACu) [[unlikely]] return; }
L_001074AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001074C8:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 17296u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001074FC; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010750C; } }
L_001074FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010750Cu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x0010750Cu) [[unlikely]] return; }
L_0010750C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107528u);  if (depth < kMaxDepth) unit_0001(c, 417u, depth + 1u); else { c.pc = 0x001070D8u; return; } if (c.pc != 0x00107528u) [[unlikely]] return; }
L_00107528:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 17280u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 272u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107540u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00107540u) [[unlikely]] return; }
L_00107540:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107550u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x00107550u) [[unlikely]] return; }
L_00107550:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010757C; } }
L_00107574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010757Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0010757Cu) [[unlikely]] return; }
L_0010757C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010759C; } }
L_00107588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[16].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107574u | kUnwind; return; } goto L_00107574; } }
L_0010759C:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 304u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001075B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[4].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001075D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 276u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001075FCu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x001075FCu) [[unlikely]] return; }
L_001075FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107608u);  if (depth < kMaxDepth) unit_0066(c, 219u, depth + 1u); else { c.pc = 0x0029A350u; return; } if (c.pc != 0x00107608u) [[unlikely]] return; }
L_00107608:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107614u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x00107614u) [[unlikely]] return; }
L_00107614:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107620u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x00107620u) [[unlikely]] return; }
L_00107620:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xAC620000u);
    c.r[4].d[0] = c.r[4].d[0] | 10034ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107630u);  if (depth < kMaxDepth) unit_0093(c, 76u, depth + 1u); else { c.pc = 0x0034D058u; return; } if (c.pc != 0x00107630u) [[unlikely]] return; }
L_00107630:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010763Cu);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x001071A0u; return; } if (c.pc != 0x0010763Cu) [[unlikely]] return; }
L_0010763C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00107650:
    set32(c.r[2], ld32((c.r[4].w[0] + 276u)));
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00107674; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00107674:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00107680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 276u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001076B0; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_001076B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001076C0u);  if (depth < kMaxDepth) unit_0049(c, 178u, depth + 1u); else { c.pc = 0x00226558u; return; } if (c.pc != 0x001076C0u) [[unlikely]] return; }
L_001076C0:
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001076D4u);  if (depth < kMaxDepth) unit_0049(c, 177u, depth + 1u); else { c.pc = 0x00226540u; return; } if (c.pc != 0x001076D4u) [[unlikely]] return; }
L_001076D4:
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    set32(c.r[4], 0u + 379u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001076ECu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001076ECu) [[unlikely]] return; }
L_001076EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107718u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x00107718u) [[unlikely]] return; }
L_00107718:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00107738:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 17056u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010776C; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010777C; } }
L_0010776C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010777Cu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x0010777Cu) [[unlikely]] return; }
L_0010777C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107798u);  if (depth < kMaxDepth) unit_0001(c, 417u, depth + 1u); else { c.pc = 0x001070D8u; return; } if (c.pc != 0x00107798u) [[unlikely]] return; }
L_00107798:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 17032u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 272u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001077B0u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001077B0u) [[unlikely]] return; }
L_001077B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001077C0u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001077C0u) [[unlikely]] return; }
L_001077C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001077EC; } }
L_001077E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001077ECu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001077ECu) [[unlikely]] return; }
L_001077EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010780C; } }
L_001077F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[16].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001077E4u | kUnwind; return; } goto L_001077E4; } }
L_0010780C:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 304u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00107828:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[3].w[0] - 16812u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001078B0; } }
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00107870; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00107884; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00107930; } }
L_00107870:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001078F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00107930; } }
L_00107884:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xEC6A0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 46226ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001078D4; } }
L_001078B0:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xDD820000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 44559ull;
    c.budget -= 9;
L_001078D4:
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001078ECu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x001078ECu) [[unlikely]] return; }
L_001078EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00107930; } }
L_001078F4:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x7BF50000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 42427ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107930u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00107930u) [[unlikely]] return; }
L_00107930:
    st32((c.r[16].w[0] - 16812u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00107948:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[4].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00107960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 276u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107988u);  if (depth < kMaxDepth) unit_0001(c, 475u, depth + 1u); else { c.pc = 0x00107828u; return; } if (c.pc != 0x00107988u) [[unlikely]] return; }
L_00107988:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xAC620000u);
    c.r[4].d[0] = c.r[4].d[0] | 10034ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107998u);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x00107998u) [[unlikely]] return; }
L_00107998:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001079A4u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x001079A4u) [[unlikely]] return; }
L_001079A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001079B0u);  if (depth < kMaxDepth) unit_0066(c, 216u, depth + 1u); else { c.pc = 0x0029A278u; return; } if (c.pc != 0x001079B0u) [[unlikely]] return; }
L_001079B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001079BCu);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x001071A0u; return; } if (c.pc != 0x001079BCu) [[unlikely]] return; }
L_001079BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001079D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 276u)));
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001079F4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001079F4:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00107A00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    set32(c.r[3], ld32((c.r[17].w[0] + 276u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00107A34; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_00107A34:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 378u);
    set32(c.r[16], c.r[16].w[0] - 17040u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107A50u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x00107A50u) [[unlikely]] return; }
L_00107A50:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107A70u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00107A70u) [[unlikely]] return; }
L_00107A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107A78u);  if (depth < kMaxDepth) unit_0049(c, 178u, depth + 1u); else { c.pc = 0x00226558u; return; } if (c.pc != 0x00107A78u) [[unlikely]] return; }
L_00107A78:
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107A8Cu);  if (depth < kMaxDepth) unit_0049(c, 177u, depth + 1u); else { c.pc = 0x00226540u; return; } if (c.pc != 0x00107A8Cu) [[unlikely]] return; }
L_00107A8C:
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    set32(c.r[7], 0u + 2u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107AC0u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x00107AC0u) [[unlikely]] return; }
L_00107AC0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00107AE0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16848u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00107B14; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00107B24; } }
L_00107B14:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107B24u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x00107B24u) [[unlikely]] return; }
L_00107B24:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107B40u);  if (depth < kMaxDepth) unit_0001(c, 417u, depth + 1u); else { c.pc = 0x001070D8u; return; } if (c.pc != 0x00107B40u) [[unlikely]] return; }
L_00107B40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 16816u);
    st32((c.r[16].w[0] + 276u), 0u);
    st32((c.r[16].w[0] + 272u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107B5Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00107B5Cu) [[unlikely]] return; }
L_00107B5C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107B6Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x00107B6Cu) [[unlikely]] return; }
L_00107B6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 280u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00107B98; } }
L_00107B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107B98u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00107B98u) [[unlikely]] return; }
L_00107B98:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00107BB8; } }
L_00107BA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[16].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107B90u | kUnwind; return; } goto L_00107B90; } }
L_00107BB8:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 304u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00107BD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[4].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00107C10; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00107C10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00107CB8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00107C38; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00107C58; } }
L_00107C38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 29812u)));
    st32((c.r[3].w[0] + 29816u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 29812u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00107C70; } }
L_00107C58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 29816u)));
    st32((c.r[3].w[0] + 29812u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 29816u), c.r[2].w[0]);
    c.budget -= 6;
L_00107C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107C78u);  if (depth < kMaxDepth) unit_002A(c, 331u, depth + 1u); else { c.pc = 0x001AACE8u; return; } if (c.pc != 0x00107C78u) [[unlikely]] return; }
L_00107C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107C80u);  if (depth < kMaxDepth) unit_0028(c, 196u, depth + 1u); else { c.pc = 0x001A29D0u; return; } if (c.pc != 0x00107C80u) [[unlikely]] return; }
L_00107C80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 7648u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107C90u);  if (depth < kMaxDepth) unit_002A(c, 183u, depth + 1u); else { c.pc = 0x001A9A00u; return; } if (c.pc != 0x00107C90u) [[unlikely]] return; }
L_00107C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107C98u);  if (depth < kMaxDepth) unit_0028(c, 202u, depth + 1u); else { c.pc = 0x001A2A40u; return; } if (c.pc != 0x00107C98u) [[unlikely]] return; }
L_00107C98:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107CA4u);  if (depth < kMaxDepth) unit_0001(c, 358u, depth + 1u); else { c.pc = 0x001068A8u; return; } if (c.pc != 0x00107CA4u) [[unlikely]] return; }
L_00107CA4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00107CC4; } }
L_00107CB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107CC4u);  if (depth < kMaxDepth) unit_0001(c, 388u, depth + 1u); else { c.pc = 0x00106CF8u; return; } if (c.pc != 0x00107CC4u) [[unlikely]] return; }
L_00107CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107CCCu);  if (depth < kMaxDepth) unit_0037(c, 169u, depth + 1u); else { c.pc = 0x001DD3C0u; return; } if (c.pc != 0x00107CCCu) [[unlikely]] return; }
L_00107CCC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107CD8u);  if (depth < kMaxDepth) unit_0001(c, 422u, depth + 1u); else { c.pc = 0x001071F8u; return; } if (c.pc != 0x00107CD8u) [[unlikely]] return; }
L_00107CD8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00107CF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107D0Cu);  if (depth < kMaxDepth) unit_0001(c, 395u, depth + 1u); else { c.pc = 0x00106DA0u; return; } if (c.pc != 0x00107D0Cu) [[unlikely]] return; }
L_00107D0C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] - 16812u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00107DC4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107D38u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00107D38u) [[unlikely]] return; }
L_00107D38:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00107D88; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xE1880000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 55541ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107D80u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00107D80u) [[unlikely]] return; }
L_00107D80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00107DC4; } }
L_00107D88:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xE1880000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 55541ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107DC4u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00107DC4u) [[unlikely]] return; }
L_00107DC4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00107E10; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xED600000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 19690ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107E10u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00107E10u) [[unlikely]] return; }
L_00107E10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[2], 0u + 82u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00107E5C; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x22480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 48766ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107E5Cu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00107E5Cu) [[unlikely]] return; }
L_00107E5C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[2], 0u + 83u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00107F04; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107E78u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00107E78u) [[unlikely]] return; }
L_00107E78:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00107EC8; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x68F10000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 31573ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107EC0u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00107EC0u) [[unlikely]] return; }
L_00107EC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00107F04; } }
L_00107EC8:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x68F10000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 31573ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107F04u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00107F04u) [[unlikely]] return; }
L_00107F04:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[2], 0u + 84u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00107F50; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x96930000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 18963ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107F50u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00107F50u) [[unlikely]] return; }
L_00107F50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[2], 0u + 88u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00107F9C; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x6C470000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 46369ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107F9Cu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00107F9Cu) [[unlikely]] return; }
L_00107F9C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[2], 0u + 89u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00107FE8; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x02210000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 32246ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107FE8u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00107FE8u) [[unlikely]] return; }
L_00107FE8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[2], 0u + 90u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0002(c, 7u, depth); } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108004u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00108004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0002(c, 2u, depth);
}

}
