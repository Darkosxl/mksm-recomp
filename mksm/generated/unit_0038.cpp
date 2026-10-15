#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0038[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 12, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0,
    41, 0, 0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 50, 0, 51, 0, 0,
    0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 105,
    0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0,
    116, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0,
    0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137,
    0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 143, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0,
    149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0,
    0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 170,
    0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0,
    189, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 196, 0, 197, 0, 0, 0, 198, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0,
    209, 0, 210, 0, 211, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0,
    0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0,
    0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239,
    240, 241, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0,
    0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0,
    257, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0,
    266, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 272, 0, 273, 0, 274,
    0, 0, 275, 0, 0, 276, 0, 0, 0, 277, 0, 0, 278, 0, 279, 0, 280, 0, 0, 281, 0, 282, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0,
    0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 289, 0, 290, 0, 0, 0, 291, 0, 292, 0, 0,
    293, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0,
    0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0,
    329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345,
    0, 0, 346, 0, 347, 0, 0, 348, 0, 0, 0, 0, 349, 0, 350, 0, 351, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 355,
    0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    360, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 368, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 373,
    0, 0, 0, 374, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0,
    389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0,
    0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0,
    400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0,
    0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419,
    420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0,
    0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0,
    0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0,
    0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0,
    0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0,
    0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455,
    0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0,
    0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470,
    0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0,
    0, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 486, 0,
    0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    491, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0,
    497, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0,
    507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 512, 0, 513, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0,
    0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0,
    0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0,
    548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0038(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001E0000;
    case 2u: goto L_001E001C;
    case 3u: goto L_001E0028;
    case 4u: goto L_001E0050;
    case 5u: goto L_001E0068;
    case 6u: goto L_001E0080;
    case 7u: goto L_001E0094;
    case 8u: goto L_001E00A8;
    case 9u: goto L_001E00BC;
    case 10u: goto L_001E00D0;
    case 11u: goto L_001E00E4;
    case 12u: goto L_001E00E8;
    case 13u: goto L_001E0100;
    case 14u: goto L_001E0110;
    case 15u: goto L_001E0128;
    case 16u: goto L_001E014C;
    case 17u: goto L_001E015C;
    case 18u: goto L_001E0164;
    case 19u: goto L_001E0188;
    case 20u: goto L_001E01B4;
    case 21u: goto L_001E01C4;
    case 22u: goto L_001E01CC;
    case 23u: goto L_001E01E4;
    case 24u: goto L_001E0220;
    case 25u: goto L_001E0230;
    case 26u: goto L_001E0240;
    case 27u: goto L_001E0250;
    case 28u: goto L_001E0260;
    case 29u: goto L_001E0274;
    case 30u: goto L_001E028C;
    case 31u: goto L_001E0298;
    case 32u: goto L_001E02A8;
    case 33u: goto L_001E02C0;
    case 34u: goto L_001E02F8;
    case 35u: goto L_001E0328;
    case 36u: goto L_001E0340;
    case 37u: goto L_001E034C;
    case 38u: goto L_001E0358;
    case 39u: goto L_001E0368;
    case 40u: goto L_001E0370;
    case 41u: goto L_001E0380;
    case 42u: goto L_001E038C;
    case 43u: goto L_001E0398;
    case 44u: goto L_001E03A0;
    case 45u: goto L_001E03B0;
    case 46u: goto L_001E03BC;
    case 47u: goto L_001E03CC;
    case 48u: goto L_001E03D8;
    case 49u: goto L_001E03E0;
    case 50u: goto L_001E03EC;
    case 51u: goto L_001E03F4;
    case 52u: goto L_001E0408;
    case 53u: goto L_001E0410;
    case 54u: goto L_001E0418;
    case 55u: goto L_001E0420;
    case 56u: goto L_001E0448;
    case 57u: goto L_001E04B4;
    case 58u: goto L_001E0550;
    case 59u: goto L_001E0590;
    case 60u: goto L_001E059C;
    case 61u: goto L_001E05A8;
    case 62u: goto L_001E05B8;
    case 63u: goto L_001E05F8;
    case 64u: goto L_001E0628;
    case 65u: goto L_001E063C;
    case 66u: goto L_001E0680;
    case 67u: goto L_001E0710;
    case 68u: goto L_001E075C;
    case 69u: goto L_001E077C;
    case 70u: goto L_001E0794;
    case 71u: goto L_001E07C0;
    case 72u: goto L_001E07D8;
    case 73u: goto L_001E0804;
    case 74u: goto L_001E0880;
    case 75u: goto L_001E08C0;
    case 76u: goto L_001E08CC;
    case 77u: goto L_001E08D8;
    case 78u: goto L_001E08E8;
    case 79u: goto L_001E0928;
    case 80u: goto L_001E0958;
    case 81u: goto L_001E096C;
    case 82u: goto L_001E09B0;
    case 83u: goto L_001E0A40;
    case 84u: goto L_001E0A8C;
    case 85u: goto L_001E0B18;
    case 86u: goto L_001E0B58;
    case 87u: goto L_001E0B64;
    case 88u: goto L_001E0B70;
    case 89u: goto L_001E0B80;
    case 90u: goto L_001E0BC0;
    case 91u: goto L_001E0BF0;
    case 92u: goto L_001E0C04;
    case 93u: goto L_001E0C48;
    case 94u: goto L_001E0CD8;
    case 95u: goto L_001E0D24;
    case 96u: goto L_001E0D44;
    case 97u: goto L_001E0D5C;
    case 98u: goto L_001E0D88;
    case 99u: goto L_001E0DA0;
    case 100u: goto L_001E0DCC;
    case 101u: goto L_001E0DE4;
    case 102u: goto L_001E0E10;
    case 103u: goto L_001E0E64;
    case 104u: goto L_001E0E70;
    case 105u: goto L_001E0E7C;
    case 106u: goto L_001E0E88;
    case 107u: goto L_001E0E94;
    case 108u: goto L_001E0EA0;
    case 109u: goto L_001E0EAC;
    case 110u: goto L_001E0EB8;
    case 111u: goto L_001E0EC4;
    case 112u: goto L_001E0ED0;
    case 113u: goto L_001E0EDC;
    case 114u: goto L_001E0EE8;
    case 115u: goto L_001E0EF4;
    case 116u: goto L_001E0F00;
    case 117u: goto L_001E0F0C;
    case 118u: goto L_001E0F18;
    case 119u: goto L_001E0F24;
    case 120u: goto L_001E0F30;
    case 121u: goto L_001E0F3C;
    case 122u: goto L_001E0F48;
    case 123u: goto L_001E0F54;
    case 124u: goto L_001E0F60;
    case 125u: goto L_001E0F6C;
    case 126u: goto L_001E0F78;
    case 127u: goto L_001E0F84;
    case 128u: goto L_001E0F90;
    case 129u: goto L_001E0F9C;
    case 130u: goto L_001E0FA8;
    case 131u: goto L_001E0FB4;
    case 132u: goto L_001E0FC0;
    case 133u: goto L_001E0FCC;
    case 134u: goto L_001E0FD8;
    case 135u: goto L_001E0FE4;
    case 136u: goto L_001E0FF0;
    case 137u: goto L_001E0FFC;
    case 138u: goto L_001E1008;
    case 139u: goto L_001E1014;
    case 140u: goto L_001E1020;
    case 141u: goto L_001E102C;
    case 142u: goto L_001E1038;
    case 143u: goto L_001E1040;
    case 144u: goto L_001E1044;
    case 145u: goto L_001E1050;
    case 146u: goto L_001E105C;
    case 147u: goto L_001E1068;
    case 148u: goto L_001E1074;
    case 149u: goto L_001E1080;
    case 150u: goto L_001E108C;
    case 151u: goto L_001E1098;
    case 152u: goto L_001E10A4;
    case 153u: goto L_001E10B0;
    case 154u: goto L_001E10BC;
    case 155u: goto L_001E10C8;
    case 156u: goto L_001E10D4;
    case 157u: goto L_001E10E0;
    case 158u: goto L_001E10EC;
    case 159u: goto L_001E10F8;
    case 160u: goto L_001E1104;
    case 161u: goto L_001E1110;
    case 162u: goto L_001E111C;
    case 163u: goto L_001E1128;
    case 164u: goto L_001E1134;
    case 165u: goto L_001E1140;
    case 166u: goto L_001E114C;
    case 167u: goto L_001E1158;
    case 168u: goto L_001E1164;
    case 169u: goto L_001E1170;
    case 170u: goto L_001E117C;
    case 171u: goto L_001E1188;
    case 172u: goto L_001E1194;
    case 173u: goto L_001E11A0;
    case 174u: goto L_001E11AC;
    case 175u: goto L_001E11B8;
    case 176u: goto L_001E11C4;
    case 177u: goto L_001E11D0;
    case 178u: goto L_001E11DC;
    case 179u: goto L_001E11E8;
    case 180u: goto L_001E11F0;
    case 181u: goto L_001E1228;
    case 182u: goto L_001E1284;
    case 183u: goto L_001E129C;
    case 184u: goto L_001E12F8;
    case 185u: goto L_001E1334;
    case 186u: goto L_001E1350;
    case 187u: goto L_001E1390;
    case 188u: goto L_001E13F4;
    case 189u: goto L_001E1400;
    case 190u: goto L_001E1410;
    case 191u: goto L_001E141C;
    case 192u: goto L_001E1428;
    case 193u: goto L_001E1434;
    case 194u: goto L_001E1444;
    case 195u: goto L_001E145C;
    case 196u: goto L_001E1460;
    case 197u: goto L_001E1468;
    case 198u: goto L_001E1478;
    case 199u: goto L_001E14B4;
    case 200u: goto L_001E14C0;
    case 201u: goto L_001E14CC;
    case 202u: goto L_001E14D8;
    case 203u: goto L_001E1510;
    case 204u: goto L_001E1534;
    case 205u: goto L_001E1548;
    case 206u: goto L_001E1568;
    case 207u: goto L_001E15A0;
    case 208u: goto L_001E15E4;
    case 209u: goto L_001E1600;
    case 210u: goto L_001E1608;
    case 211u: goto L_001E1610;
    case 212u: goto L_001E1620;
    case 213u: goto L_001E1628;
    case 214u: goto L_001E1630;
    case 215u: goto L_001E1644;
    case 216u: goto L_001E1650;
    case 217u: goto L_001E166C;
    case 218u: goto L_001E1674;
    case 219u: goto L_001E1688;
    case 220u: goto L_001E1698;
    case 221u: goto L_001E16A8;
    case 222u: goto L_001E16B8;
    case 223u: goto L_001E16C4;
    case 224u: goto L_001E16CC;
    case 225u: goto L_001E1730;
    case 226u: goto L_001E1738;
    case 227u: goto L_001E1750;
    case 228u: goto L_001E175C;
    case 229u: goto L_001E1768;
    case 230u: goto L_001E1774;
    case 231u: goto L_001E1784;
    case 232u: goto L_001E1798;
    case 233u: goto L_001E17AC;
    case 234u: goto L_001E17B8;
    case 235u: goto L_001E1810;
    case 236u: goto L_001E1840;
    case 237u: goto L_001E1850;
    case 238u: goto L_001E1868;
    case 239u: goto L_001E187C;
    case 240u: goto L_001E1880;
    case 241u: goto L_001E1884;
    case 242u: goto L_001E1890;
    case 243u: goto L_001E189C;
    case 244u: goto L_001E18F4;
    case 245u: goto L_001E1940;
    case 246u: goto L_001E1950;
    case 247u: goto L_001E1970;
    case 248u: goto L_001E1978;
    case 249u: goto L_001E198C;
    case 250u: goto L_001E19A8;
    case 251u: goto L_001E19B8;
    case 252u: goto L_001E19C4;
    case 253u: goto L_001E19D0;
    case 254u: goto L_001E19DC;
    case 255u: goto L_001E19E8;
    case 256u: goto L_001E19F4;
    case 257u: goto L_001E1A00;
    case 258u: goto L_001E1A0C;
    case 259u: goto L_001E1A18;
    case 260u: goto L_001E1A24;
    case 261u: goto L_001E1A2C;
    case 262u: goto L_001E1A40;
    case 263u: goto L_001E1A54;
    case 264u: goto L_001E1A64;
    case 265u: goto L_001E1A78;
    case 266u: goto L_001E1A80;
    case 267u: goto L_001E1A90;
    case 268u: goto L_001E1A98;
    case 269u: goto L_001E1AA0;
    case 270u: goto L_001E1AD8;
    case 271u: goto L_001E1AE0;
    case 272u: goto L_001E1AEC;
    case 273u: goto L_001E1AF4;
    case 274u: goto L_001E1AFC;
    case 275u: goto L_001E1B08;
    case 276u: goto L_001E1B14;
    case 277u: goto L_001E1B24;
    case 278u: goto L_001E1B30;
    case 279u: goto L_001E1B38;
    case 280u: goto L_001E1B40;
    case 281u: goto L_001E1B4C;
    case 282u: goto L_001E1B54;
    case 283u: goto L_001E1B64;
    case 284u: goto L_001E1B6C;
    case 285u: goto L_001E1B88;
    case 286u: goto L_001E1B90;
    case 287u: goto L_001E1BB4;
    case 288u: goto L_001E1BCC;
    case 289u: goto L_001E1BD4;
    case 290u: goto L_001E1BDC;
    case 291u: goto L_001E1BEC;
    case 292u: goto L_001E1BF4;
    case 293u: goto L_001E1C00;
    case 294u: goto L_001E1C0C;
    case 295u: goto L_001E1C18;
    case 296u: goto L_001E1C3C;
    case 297u: goto L_001E1C54;
    case 298u: goto L_001E1C88;
    case 299u: goto L_001E1CB8;
    case 300u: goto L_001E1D0C;
    case 301u: goto L_001E1D3C;
    case 302u: goto L_001E1D6C;
    case 303u: goto L_001E1D9C;
    case 304u: goto L_001E1DB0;
    case 305u: goto L_001E1DD0;
    case 306u: goto L_001E1E04;
    case 307u: goto L_001E1E14;
    case 308u: goto L_001E1E24;
    case 309u: goto L_001E1E3C;
    case 310u: goto L_001E1E44;
    case 311u: goto L_001E1E50;
    case 312u: goto L_001E1E90;
    case 313u: goto L_001E1EB4;
    case 314u: goto L_001E1EC0;
    case 315u: goto L_001E1F08;
    case 316u: goto L_001E1F14;
    case 317u: goto L_001E1F54;
    case 318u: goto L_001E1F78;
    case 319u: goto L_001E1F88;
    case 320u: goto L_001E1F98;
    case 321u: goto L_001E1FA8;
    case 322u: goto L_001E1FB8;
    case 323u: goto L_001E1FC8;
    case 324u: goto L_001E1FD0;
    case 325u: goto L_001E1FF0;
    case 326u: goto L_001E2054;
    case 327u: goto L_001E2060;
    case 328u: goto L_001E2078;
    case 329u: goto L_001E2080;
    case 330u: goto L_001E20C8;
    case 331u: goto L_001E2178;
    case 332u: goto L_001E22C0;
    case 333u: goto L_001E2300;
    case 334u: goto L_001E2320;
    case 335u: goto L_001E2374;
    case 336u: goto L_001E23A4;
    case 337u: goto L_001E23D4;
    case 338u: goto L_001E2404;
    case 339u: goto L_001E2428;
    case 340u: goto L_001E245C;
    case 341u: goto L_001E2490;
    case 342u: goto L_001E24BC;
    case 343u: goto L_001E24CC;
    case 344u: goto L_001E24DC;
    case 345u: goto L_001E24FC;
    case 346u: goto L_001E2508;
    case 347u: goto L_001E2510;
    case 348u: goto L_001E251C;
    case 349u: goto L_001E2530;
    case 350u: goto L_001E2538;
    case 351u: goto L_001E2540;
    case 352u: goto L_001E254C;
    case 353u: goto L_001E2558;
    case 354u: goto L_001E2564;
    case 355u: goto L_001E257C;
    case 356u: goto L_001E2584;
    case 357u: goto L_001E25A8;
    case 358u: goto L_001E25B4;
    case 359u: goto L_001E25CC;
    case 360u: goto L_001E2600;
    case 361u: goto L_001E2608;
    case 362u: goto L_001E2610;
    case 363u: goto L_001E264C;
    case 364u: goto L_001E2658;
    case 365u: goto L_001E26C0;
    case 366u: goto L_001E26E8;
    case 367u: goto L_001E26F0;
    case 368u: goto L_001E26F8;
    case 369u: goto L_001E2720;
    case 370u: goto L_001E274C;
    case 371u: goto L_001E275C;
    case 372u: goto L_001E276C;
    case 373u: goto L_001E277C;
    case 374u: goto L_001E278C;
    case 375u: goto L_001E2794;
    case 376u: goto L_001E27A4;
    case 377u: goto L_001E27B4;
    case 378u: goto L_001E27BC;
    case 379u: goto L_001E27D4;
    case 380u: goto L_001E27E8;
    case 381u: goto L_001E27F4;
    case 382u: goto L_001E2800;
    case 383u: goto L_001E2820;
    case 384u: goto L_001E282C;
    case 385u: goto L_001E2840;
    case 386u: goto L_001E284C;
    case 387u: goto L_001E2858;
    case 388u: goto L_001E2878;
    case 389u: goto L_001E2880;
    case 390u: goto L_001E28E0;
    case 391u: goto L_001E2900;
    case 392u: goto L_001E2910;
    case 393u: goto L_001E2920;
    case 394u: goto L_001E2934;
    case 395u: goto L_001E2978;
    case 396u: goto L_001E2994;
    case 397u: goto L_001E29A4;
    case 398u: goto L_001E29D4;
    case 399u: goto L_001E29F0;
    case 400u: goto L_001E2A00;
    case 401u: goto L_001E2A14;
    case 402u: goto L_001E2A2C;
    case 403u: goto L_001E2A38;
    case 404u: goto L_001E2A48;
    case 405u: goto L_001E2A5C;
    case 406u: goto L_001E2AA0;
    case 407u: goto L_001E2ABC;
    case 408u: goto L_001E2ACC;
    case 409u: goto L_001E2AF8;
    case 410u: goto L_001E2B10;
    case 411u: goto L_001E2B28;
    case 412u: goto L_001E2B34;
    case 413u: goto L_001E2B44;
    case 414u: goto L_001E2B58;
    case 415u: goto L_001E2B84;
    case 416u: goto L_001E2BA0;
    case 417u: goto L_001E2BB0;
    case 418u: goto L_001E2BE0;
    case 419u: goto L_001E2BFC;
    case 420u: goto L_001E2C00;
    case 421u: goto L_001E2C1C;
    case 422u: goto L_001E2C58;
    case 423u: goto L_001E2CA4;
    case 424u: goto L_001E2CB0;
    case 425u: goto L_001E2CCC;
    case 426u: goto L_001E2CE0;
    case 427u: goto L_001E2CF0;
    case 428u: goto L_001E2D04;
    case 429u: goto L_001E2D1C;
    case 430u: goto L_001E2D2C;
    case 431u: goto L_001E2D38;
    case 432u: goto L_001E2D48;
    case 433u: goto L_001E2D60;
    case 434u: goto L_001E2D6C;
    case 435u: goto L_001E2D88;
    case 436u: goto L_001E2DB0;
    case 437u: goto L_001E2DE8;
    case 438u: goto L_001E2DF8;
    case 439u: goto L_001E2E18;
    case 440u: goto L_001E2E40;
    case 441u: goto L_001E2E54;
    case 442u: goto L_001E2E64;
    case 443u: goto L_001E2E74;
    case 444u: goto L_001E2E8C;
    case 445u: goto L_001E2EA8;
    case 446u: goto L_001E2EE4;
    case 447u: goto L_001E2EF4;
    case 448u: goto L_001E2F0C;
    case 449u: goto L_001E2F24;
    case 450u: goto L_001E2F60;
    case 451u: goto L_001E2F70;
    case 452u: goto L_001E2F98;
    case 453u: goto L_001E2FD4;
    case 454u: goto L_001E2FE4;
    case 455u: goto L_001E2FFC;
    case 456u: goto L_001E3008;
    case 457u: goto L_001E3050;
    case 458u: goto L_001E3060;
    case 459u: goto L_001E3078;
    case 460u: goto L_001E30A8;
    case 461u: goto L_001E30B8;
    case 462u: goto L_001E30E4;
    case 463u: goto L_001E30F4;
    case 464u: goto L_001E3104;
    case 465u: goto L_001E3118;
    case 466u: goto L_001E313C;
    case 467u: goto L_001E3144;
    case 468u: goto L_001E3154;
    case 469u: goto L_001E316C;
    case 470u: goto L_001E317C;
    case 471u: goto L_001E318C;
    case 472u: goto L_001E319C;
    case 473u: goto L_001E31A8;
    case 474u: goto L_001E31B8;
    case 475u: goto L_001E31CC;
    case 476u: goto L_001E31E8;
    case 477u: goto L_001E3220;
    case 478u: goto L_001E3288;
    case 479u: goto L_001E32C8;
    case 480u: goto L_001E32E4;
    case 481u: goto L_001E3308;
    case 482u: goto L_001E3324;
    case 483u: goto L_001E3348;
    case 484u: goto L_001E3360;
    case 485u: goto L_001E336C;
    case 486u: goto L_001E3378;
    case 487u: goto L_001E3390;
    case 488u: goto L_001E33A8;
    case 489u: goto L_001E33C0;
    case 490u: goto L_001E33D8;
    case 491u: goto L_001E3400;
    case 492u: goto L_001E3410;
    case 493u: goto L_001E3420;
    case 494u: goto L_001E3438;
    case 495u: goto L_001E3450;
    case 496u: goto L_001E3468;
    case 497u: goto L_001E3480;
    case 498u: goto L_001E3498;
    case 499u: goto L_001E34B0;
    case 500u: goto L_001E34C8;
    case 501u: goto L_001E3540;
    case 502u: goto L_001E35A0;
    case 503u: goto L_001E35A8;
    case 504u: goto L_001E35C8;
    case 505u: goto L_001E35E0;
    case 506u: goto L_001E35F0;
    case 507u: goto L_001E3600;
    case 508u: goto L_001E3618;
    case 509u: goto L_001E3628;
    case 510u: goto L_001E3650;
    case 511u: goto L_001E3660;
    case 512u: goto L_001E3670;
    case 513u: goto L_001E3678;
    case 514u: goto L_001E36A0;
    case 515u: goto L_001E36A8;
    case 516u: goto L_001E36C8;
    case 517u: goto L_001E36E8;
    case 518u: goto L_001E3730;
    case 519u: goto L_001E3750;
    case 520u: goto L_001E37B8;
    case 521u: goto L_001E37D8;
    case 522u: goto L_001E3818;
    case 523u: goto L_001E3848;
    case 524u: goto L_001E3868;
    case 525u: goto L_001E38C0;
    case 526u: goto L_001E38F8;
    case 527u: goto L_001E3920;
    case 528u: goto L_001E393C;
    case 529u: goto L_001E3948;
    case 530u: goto L_001E3998;
    case 531u: goto L_001E3A00;
    case 532u: goto L_001E3A4C;
    case 533u: goto L_001E3AD0;
    case 534u: goto L_001E3B3C;
    case 535u: goto L_001E3B78;
    case 536u: goto L_001E3B84;
    case 537u: goto L_001E3BC0;
    case 538u: goto L_001E3BD8;
    case 539u: goto L_001E3BE8;
    case 540u: goto L_001E3C30;
    case 541u: goto L_001E3C78;
    case 542u: goto L_001E3C88;
    case 543u: goto L_001E3D08;
    case 544u: goto L_001E3D30;
    case 545u: goto L_001E3D40;
    case 546u: goto L_001E3D98;
    case 547u: goto L_001E3DE8;
    case 548u: goto L_001E3E00;
    case 549u: goto L_001E3E14;
    case 550u: goto L_001E3E3C;
    case 551u: goto L_001E3E60;
    case 552u: goto L_001E3EA8;
    case 553u: goto L_001E3F08;
    case 554u: goto L_001E3F28;
    case 555u: goto L_001E3F38;
    case 556u: goto L_001E3F80;
    case 557u: goto L_001E3FA8;
    case 558u: goto L_001E3FB0;
    default: bad_entry(c, 0x001E0000u); return;
    }
L_001E0000:
    st32((c.r[17].w[0] + 212u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 220u), 0u);
    st32((c.r[17].w[0] + 224u), 0u);
    st32((c.r[17].w[0] + 216u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E001Cu);  if (depth < kMaxDepth) unit_000B(c, 342u, depth + 1u); else { c.pc = 0x0012FAB8u; return; } if (c.pc != 0x001E001Cu) [[unlikely]] return; }
L_001E001C:
    st32((c.r[17].w[0] + 164u), 0u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], c.r[17].w[0] + 196u);
    c.budget -= 3;
L_001E0028:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0028u | kUnwind; return; } goto L_001E0028; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0050u);  if (depth < kMaxDepth) unit_000B(c, 352u, depth + 1u); else { c.pc = 0x0012FC48u; return; } if (c.pc != 0x001E0050u) [[unlikely]] return; }
L_001E0050:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0068u);  if (depth < kMaxDepth) unit_000B(c, 343u, depth + 1u); else { c.pc = 0x0012FAC8u; return; } if (c.pc != 0x001E0068u) [[unlikely]] return; }
L_001E0068:
    set32(c.r[19], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0080u);  if (depth < kMaxDepth) unit_000B(c, 344u, depth + 1u); else { c.pc = 0x0012FAE0u; return; } if (c.pc != 0x001E0080u) [[unlikely]] return; }
L_001E0080:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0094u);  if (depth < kMaxDepth) unit_000B(c, 345u, depth + 1u); else { c.pc = 0x0012FAF8u; return; } if (c.pc != 0x001E0094u) [[unlikely]] return; }
L_001E0094:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E00A8u);  if (depth < kMaxDepth) unit_000B(c, 346u, depth + 1u); else { c.pc = 0x0012FB10u; return; } if (c.pc != 0x001E00A8u) [[unlikely]] return; }
L_001E00A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E00BCu);  if (depth < kMaxDepth) unit_000B(c, 347u, depth + 1u); else { c.pc = 0x0012FB28u; return; } if (c.pc != 0x001E00BCu) [[unlikely]] return; }
L_001E00BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E00D0u);  if (depth < kMaxDepth) unit_000B(c, 348u, depth + 1u); else { c.pc = 0x0012FB40u; return; } if (c.pc != 0x001E00D0u) [[unlikely]] return; }
L_001E00D0:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E00E4u);  if (depth < kMaxDepth) unit_000B(c, 349u, depth + 1u); else { c.pc = 0x0012FB58u; return; } if (c.pc != 0x001E00E4u) [[unlikely]] return; }
L_001E00E4:
    c.budget -= 1;
L_001E00E8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0100u);  if (depth < kMaxDepth) unit_000B(c, 351u, depth + 1u); else { c.pc = 0x0012FBE8u; return; } if (c.pc != 0x001E0100u) [[unlikely]] return; }
L_001E0100:
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E00E8u | kUnwind; return; } goto L_001E00E8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E0110:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0128u);  if (depth < kMaxDepth) unit_000B(c, 350u, depth + 1u); else { c.pc = 0x0012FB70u; return; } if (c.pc != 0x001E0128u) [[unlikely]] return; }
L_001E0128:
    c.r[2].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0110u | kUnwind; return; } goto L_001E0110; } }
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0050u | kUnwind; return; } goto L_001E0050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E014Cu);  if (depth < kMaxDepth) unit_004C(c, 13u, depth + 1u); else { c.pc = 0x00230528u; return; } if (c.pc != 0x001E014Cu) [[unlikely]] return; }
L_001E014C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 31920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E015Cu);  if (depth < kMaxDepth) unit_0043(c, 26u, depth + 1u); else { c.pc = 0x0020C728u; return; } if (c.pc != 0x001E015Cu) [[unlikely]] return; }
L_001E015C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0164u);  if (depth < kMaxDepth) unit_0018(c, 297u, depth + 1u); else { c.pc = 0x00162978u; return; } if (c.pc != 0x001E0164u) [[unlikely]] return; }
L_001E0164:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E0188:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E01B4u);  if (depth < kMaxDepth) unit_001F(c, 70u, depth + 1u); else { c.pc = 0x0017CC80u; return; } if (c.pc != 0x001E01B4u) [[unlikely]] return; }
L_001E01B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 23136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E01C4u);  if (depth < kMaxDepth) unit_0074(c, 331u, depth + 1u); else { c.pc = 0x002D3968u; return; } if (c.pc != 0x001E01C4u) [[unlikely]] return; }
L_001E01C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E01CCu);  if (depth < kMaxDepth) unit_0006(c, 223u, depth + 1u); else { c.pc = 0x00119CD8u; return; } if (c.pc != 0x001E01CCu) [[unlikely]] return; }
L_001E01CC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E01E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E01E4u) [[unlikely]] return; }
L_001E01E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[16], c.r[2].w[0] - 22920u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[5].w[0] + 924u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 14664u);
    st32((c.r[4].w[0] + 928u), 0u);
    set32(c.r[5], 0u + 5u);
    st32((c.r[3].w[0] + 208u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 204u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0220u);  if (depth < kMaxDepth) unit_0086(c, 300u, depth + 1u); else { c.pc = 0x0031BB18u; return; } if (c.pc != 0x001E0220u) [[unlikely]] return; }
L_001E0220:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0230u);  if (depth < kMaxDepth) unit_0086(c, 300u, depth + 1u); else { c.pc = 0x0031BB18u; return; } if (c.pc != 0x001E0230u) [[unlikely]] return; }
L_001E0230:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0240u);  if (depth < kMaxDepth) unit_0086(c, 300u, depth + 1u); else { c.pc = 0x0031BB18u; return; } if (c.pc != 0x001E0240u) [[unlikely]] return; }
L_001E0240:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[4], c.r[4].w[0] - 5800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0250u);  if (depth < kMaxDepth) unit_0043(c, 172u, depth + 1u); else { c.pc = 0x0020E850u; return; } if (c.pc != 0x001E0250u) [[unlikely]] return; }
L_001E0250:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_001E02D0; } }
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E0260:
    set32(c.r[16], c.r[17].w[0] + 10u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0274u);  if (depth < kMaxDepth) unit_0086(c, 280u, depth + 1u); else { c.pc = 0x0031B7E0u; return; } if (c.pc != 0x001E0274u) [[unlikely]] return; }
L_001E0274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E02B0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E028Cu);  if (depth < kMaxDepth) unit_0086(c, 300u, depth + 1u); else { c.pc = 0x0031BB18u; return; } if (c.pc != 0x001E028Cu) [[unlikely]] return; }
L_001E028C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0298u);  if (depth < kMaxDepth) unit_0039(c, 322u, depth + 1u); else { c.pc = 0x001E6BC8u; return; } if (c.pc != 0x001E0298u) [[unlikely]] return; }
L_001E0298:
    c.r[4].d[0] = c.r[2].d[0] | 1024ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E02A8u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x001E02A8u) [[unlikely]] return; }
L_001E02A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E02C0; } }
L_001E02B0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E02C0u);  if (depth < kMaxDepth) unit_0086(c, 295u, depth + 1u); else { c.pc = 0x0031B9F0u; return; } if (c.pc != 0x001E02C0u) [[unlikely]] return; }
L_001E02C0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0260u | kUnwind; return; } goto L_001E0260; } }
L_001E02D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 2816ull;
    c.r[5].d[0] = 0ull | 39744ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] - 29800u), 0u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 10;
L_001E02F8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E0310; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 11264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E0310; } }
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 1;
L_001E0310:
    set32(c.r[4], c.r[4].w[0] + 13248u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E02F8u | kUnwind; return; } goto L_001E02F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0328u);  if (depth < kMaxDepth) unit_0081(c, 300u, depth + 1u); else { c.pc = 0x00307BD8u; return; } if (c.pc != 0x001E0328u) [[unlikely]] return; }
L_001E0328:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0340u);  if (depth < kMaxDepth) unit_0062(c, 8u, depth + 1u); else { c.pc = 0x002880B0u; return; } if (c.pc != 0x001E0340u) [[unlikely]] return; }
L_001E0340:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E034Cu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x001E034Cu) [[unlikely]] return; }
L_001E034C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0358u);  if (depth < kMaxDepth) unit_0066(c, 197u, depth + 1u); else { c.pc = 0x00299FB0u; return; } if (c.pc != 0x001E0358u) [[unlikely]] return; }
L_001E0358:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 20768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0368u);  if (depth < kMaxDepth) unit_0008(c, 69u, depth + 1u); else { c.pc = 0x00120C88u; return; } if (c.pc != 0x001E0368u) [[unlikely]] return; }
L_001E0368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0370u);  if (depth < kMaxDepth) unit_0069(c, 49u, depth + 1u); else { c.pc = 0x002A4C30u; return; } if (c.pc != 0x001E0370u) [[unlikely]] return; }
L_001E0370:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 14016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0380u);  if (depth < kMaxDepth) unit_009A(c, 233u, depth + 1u); else { c.pc = 0x0036B2D0u; return; } if (c.pc != 0x001E0380u) [[unlikely]] return; }
L_001E0380:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E038Cu);  if (depth < kMaxDepth) unit_009A(c, 141u, depth + 1u); else { c.pc = 0x0036A178u; return; } if (c.pc != 0x001E038Cu) [[unlikely]] return; }
L_001E038C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0398u);  if (depth < kMaxDepth) unit_009A(c, 141u, depth + 1u); else { c.pc = 0x0036A178u; return; } if (c.pc != 0x001E0398u) [[unlikely]] return; }
L_001E0398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E03A0u);  if (depth < kMaxDepth) unit_009A(c, 143u, depth + 1u); else { c.pc = 0x0036A1C8u; return; } if (c.pc != 0x001E03A0u) [[unlikely]] return; }
L_001E03A0:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E03B0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001E03B0u) [[unlikely]] return; }
L_001E03B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E03BCu);  if (depth < kMaxDepth) unit_001D(c, 101u, depth + 1u); else { c.pc = 0x00175330u; return; } if (c.pc != 0x001E03BCu) [[unlikely]] return; }
L_001E03BC:
    set32(c.r[5], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E03CCu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001E03CCu) [[unlikely]] return; }
L_001E03CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E03D8u);  if (depth < kMaxDepth) unit_001D(c, 101u, depth + 1u); else { c.pc = 0x00175330u; return; } if (c.pc != 0x001E03D8u) [[unlikely]] return; }
L_001E03D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E03E0u);  if (depth < kMaxDepth) unit_0037(c, 36u, depth + 1u); else { c.pc = 0x001DC378u; return; } if (c.pc != 0x001E03E0u) [[unlikely]] return; }
L_001E03E0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E03ECu);  if (depth < kMaxDepth) unit_0039(c, 201u, depth + 1u); else { c.pc = 0x001E5A60u; return; } if (c.pc != 0x001E03ECu) [[unlikely]] return; }
L_001E03EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E03F4u);  if (depth < kMaxDepth) unit_0039(c, 218u, depth + 1u); else { c.pc = 0x001E5C50u; return; } if (c.pc != 0x001E03F4u) [[unlikely]] return; }
L_001E03F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20664u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0408u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x001E0408u) [[unlikely]] return; }
L_001E0408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0410u);  if (depth < kMaxDepth) unit_0020(c, 145u, depth + 1u); else { c.pc = 0x00181F10u; return; } if (c.pc != 0x001E0410u) [[unlikely]] return; }
L_001E0410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0418u);  if (depth < kMaxDepth) unit_0043(c, 23u, depth + 1u); else { c.pc = 0x0020C6C0u; return; } if (c.pc != 0x001E0418u) [[unlikely]] return; }
L_001E0418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0420u);  if (depth < kMaxDepth) unit_0034(c, 287u, depth + 1u); else { c.pc = 0x001D2D20u; return; } if (c.pc != 0x001E0420u) [[unlikely]] return; }
L_001E0420:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E0448:
    set32(c.r[29], c.r[29].w[0] - 304u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[19].w[0] + 31u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[19].d[0];
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[20]);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E0E24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2048u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001E0000u < 16384u) { entry = entries_0038[(t - 0x001E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E04B4:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001E04E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 14208u)));
    c.r[11].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[11]);
    set32(c.r[4], 0u + 1336u);
    st32((c.r[3].w[0] + 14236u), c.r[5].w[0]);
    set32(c.r[23], 0u + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0E08; } }
L_001E04E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[21], c.r[3].w[0] + 12448u);
    set32(c.r[2], c.r[19].w[0] + 31u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 128u)));
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[19].d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_001E0530; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[22], c.r[21].w[0] + 128u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[23].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(200ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_001E06E4; } }
L_001E0530:
    c.r[7].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[22], c.r[21].w[0] + 128u);
    c.r[23].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(200ll) ? 1ull : 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 31u);
    set32(c.r[2], c.r[21].w[0] + 124u);
    c.budget -= 8;
L_001E0550:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0550u | kUnwind; return; } goto L_001E0550; } }
    set32(c.r[2], c.r[21].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001E05A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + 2080u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001E0000u < 16384u) { entry = entries_0038[(t - 0x001E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E0590:
    set32(c.r[20], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E05AC; } }
L_001E059C:
    set32(c.r[20], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E05AC; } }
L_001E05A8:
    set32(c.r[20], 0u + 1u);
    c.budget -= 1;
L_001E05AC:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u - 1u);
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
L_001E05B8:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E05D0; } }
    st32((c.r[3].w[0]), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E05D4; } }
L_001E05D0:
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_001E05D4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E05B8u | kUnwind; return; } goto L_001E05B8; } }
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 31u);
    set32(c.r[2], c.r[22].w[0] + 124u);
    c.budget -= 4;
L_001E05F8:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E05F8u | kUnwind; return; } goto L_001E05F8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001E06E4; } }
    set32(c.r[30], 0u - 1u);
    c.budget -= 1;
L_001E0628:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_001E06A8; } }
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[11]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E063Cu);  if (depth < kMaxDepth) unit_00DD(c, 309u, depth + 1u); else { c.pc = 0x004777F0u; return; } if (c.pc != 0x001E063Cu) [[unlikely]] return; }
L_001E063C:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x001E0644u);  goto L_001E0648; }
L_001E0648:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[9], c.r[18].w[0] << 2);
    set32(c.r[8], c.r[17].w[0] + 1u);
    set32(c.r[7], c.r[18].w[0] + 1u);
    set32(c.r[6], c.r[16].w[0] - 1u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[11]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[30].d[0];  if (t) { goto L_001E0698; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 2;
L_001E0680:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0680u | kUnwind; return; } goto L_001E0680; } }
L_001E0698:
    set32(c.r[2], c.r[22].w[0] + c.r[9].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E06CC; } }
L_001E06A8:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[22].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[8], c.r[17].w[0] + 1u);
    set32(c.r[7], c.r[18].w[0] + 1u);
    set32(c.r[6], c.r[16].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 9;
L_001E06CC:
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0628u | kUnwind; return; } goto L_001E0628; } }
L_001E06E4:
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[21].w[0] + 128u)));
    set32(c.r[2], c.r[8].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001E0734; } }
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 1u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 4u);
    c.budget -= 4;
L_001E0710:
    set32(c.r[4], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0710u | kUnwind; return; } goto L_001E0710; } }
L_001E0734:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[10].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + 14208u);
    set32(c.r[17], 0u + 5u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[11]);
    st32((c.r[11].w[0] + 14236u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E075Cu);  if (depth < kMaxDepth) unit_00DD(c, 309u, depth + 1u); else { c.pc = 0x004777F0u; return; } if (c.pc != 0x001E075Cu) [[unlikely]] return; }
L_001E075C:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x001E0764u);  goto L_001E0768; }
L_001E0768:
    mmi::div(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + 1336u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0E08; } }
L_001E077C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 162u);
    st32((c.r[16].w[0] + 14236u), c.r[2].w[0]);
    set32(c.r[17], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0794u);  if (depth < kMaxDepth) unit_00DD(c, 309u, depth + 1u); else { c.pc = 0x004777F0u; return; } if (c.pc != 0x001E0794u) [[unlikely]] return; }
L_001E0794:
    c.r[23].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(200ll) ? 1ull : 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.r[11].d[0] = c.r[16].d[0] + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.budget -= 6;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x001E07A8u);  goto L_001E07AC; }
L_001E07AC:
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[11]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + 1341u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0E08; } }
L_001E07C0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 162u);
    st32((c.r[16].w[0] + 14236u), c.r[2].w[0]);
    set32(c.r[17], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E07D8u);  if (depth < kMaxDepth) unit_00DD(c, 309u, depth + 1u); else { c.pc = 0x004777F0u; return; } if (c.pc != 0x001E07D8u) [[unlikely]] return; }
L_001E07D8:
    c.r[23].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(200ll) ? 1ull : 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.r[11].d[0] = c.r[16].d[0] + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.budget -= 6;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x001E07ECu);  goto L_001E07F0; }
L_001E07F0:
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[11]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + 1351u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0E08; } }
L_001E0804:
    set32(c.r[2], c.r[19].w[0] - 96u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E0AAC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[21], c.r[3].w[0] + 12448u);
    set32(c.r[2], c.r[19].w[0] + 31u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 128u)));
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[19].d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_001E0860; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[22], c.r[21].w[0] + 128u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[23].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(200ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_001E0A14; } }
L_001E0860:
    c.r[7].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[22], c.r[21].w[0] + 128u);
    c.r[23].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(200ll) ? 1ull : 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 31u);
    set32(c.r[2], c.r[21].w[0] + 124u);
    c.budget -= 8;
L_001E0880:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0880u | kUnwind; return; } goto L_001E0880; } }
    set32(c.r[2], c.r[21].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001E08D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + 2112u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001E0000u < 16384u) { entry = entries_0038[(t - 0x001E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E08C0:
    set32(c.r[20], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E08DC; } }
L_001E08CC:
    set32(c.r[20], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E08DC; } }
L_001E08D8:
    set32(c.r[20], 0u + 1u);
    c.budget -= 1;
L_001E08DC:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u - 1u);
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
L_001E08E8:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E0900; } }
    st32((c.r[3].w[0]), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0904; } }
L_001E0900:
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_001E0904:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E08E8u | kUnwind; return; } goto L_001E08E8; } }
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 31u);
    set32(c.r[2], c.r[22].w[0] + 124u);
    c.budget -= 4;
L_001E0928:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0928u | kUnwind; return; } goto L_001E0928; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001E0A14; } }
    set32(c.r[30], 0u - 1u);
    c.budget -= 1;
L_001E0958:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_001E09D8; } }
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[11]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E096Cu);  if (depth < kMaxDepth) unit_00DD(c, 309u, depth + 1u); else { c.pc = 0x004777F0u; return; } if (c.pc != 0x001E096Cu) [[unlikely]] return; }
L_001E096C:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x001E0974u);  goto L_001E0978; }
L_001E0978:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[9], c.r[18].w[0] << 2);
    set32(c.r[8], c.r[17].w[0] + 1u);
    set32(c.r[7], c.r[18].w[0] + 1u);
    set32(c.r[6], c.r[16].w[0] - 1u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[11]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[30].d[0];  if (t) { goto L_001E09C8; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 2;
L_001E09B0:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E09B0u | kUnwind; return; } goto L_001E09B0; } }
L_001E09C8:
    set32(c.r[2], c.r[22].w[0] + c.r[9].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E09FC; } }
L_001E09D8:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[22].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[8], c.r[17].w[0] + 1u);
    set32(c.r[7], c.r[18].w[0] + 1u);
    set32(c.r[6], c.r[16].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 9;
L_001E09FC:
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0958u | kUnwind; return; } goto L_001E0958; } }
L_001E0A14:
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[21].w[0] + 128u)));
    set32(c.r[2], c.r[8].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001E0A64; } }
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 1u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 4u);
    c.budget -= 4;
L_001E0A40:
    set32(c.r[4], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0A40u | kUnwind; return; } goto L_001E0A40; } }
L_001E0A64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[10].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + 14160u);
    set32(c.r[17], 0u + 5u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[11]);
    st32((c.r[11].w[0] + 14236u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0A8Cu);  if (depth < kMaxDepth) unit_00DD(c, 309u, depth + 1u); else { c.pc = 0x004777F0u; return; } if (c.pc != 0x001E0A8Cu) [[unlikely]] return; }
L_001E0A8C:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x001E0A94u);  goto L_001E0A98; }
L_001E0A98:
    mmi::div(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + 1316u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0E08; } }
L_001E0AAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[21], c.r[3].w[0] + 12448u);
    set32(c.r[2], c.r[19].w[0] + 31u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 128u)));
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[19].d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_001E0AF4; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[22], c.r[21].w[0] + 128u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[23].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(200ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_001E0CAC; } }
L_001E0AF4:
    c.r[7].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[22], c.r[21].w[0] + 128u);
    c.r[23].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(200ll) ? 1ull : 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 31u);
    set32(c.r[2], c.r[21].w[0] + 124u);
    c.budget -= 9;
L_001E0B18:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0B18u | kUnwind; return; } goto L_001E0B18; } }
    set32(c.r[2], c.r[21].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001E0B70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + 2144u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001E0000u < 16384u) { entry = entries_0038[(t - 0x001E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E0B58:
    set32(c.r[20], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0B74; } }
L_001E0B64:
    set32(c.r[20], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0B74; } }
L_001E0B70:
    set32(c.r[20], 0u + 1u);
    c.budget -= 1;
L_001E0B74:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u - 1u);
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
L_001E0B80:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E0B98; } }
    st32((c.r[3].w[0]), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0B9C; } }
L_001E0B98:
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_001E0B9C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0B80u | kUnwind; return; } goto L_001E0B80; } }
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 31u);
    set32(c.r[2], c.r[22].w[0] + 124u);
    c.budget -= 4;
L_001E0BC0:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0BC0u | kUnwind; return; } goto L_001E0BC0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001E0CAC; } }
    set32(c.r[30], 0u - 1u);
    c.budget -= 1;
L_001E0BF0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_001E0C70; } }
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[11]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C04u);  if (depth < kMaxDepth) unit_00DD(c, 309u, depth + 1u); else { c.pc = 0x004777F0u; return; } if (c.pc != 0x001E0C04u) [[unlikely]] return; }
L_001E0C04:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x001E0C0Cu);  goto L_001E0C10; }
L_001E0C10:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[9], c.r[18].w[0] << 2);
    set32(c.r[8], c.r[17].w[0] + 1u);
    set32(c.r[7], c.r[18].w[0] + 1u);
    set32(c.r[6], c.r[16].w[0] - 1u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[11]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[30].d[0];  if (t) { goto L_001E0C60; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 2;
L_001E0C48:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0C48u | kUnwind; return; } goto L_001E0C48; } }
L_001E0C60:
    set32(c.r[2], c.r[22].w[0] + c.r[9].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0C94; } }
L_001E0C70:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[22].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[8], c.r[17].w[0] + 1u);
    set32(c.r[7], c.r[18].w[0] + 1u);
    set32(c.r[6], c.r[16].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 9;
L_001E0C94:
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0BF0u | kUnwind; return; } goto L_001E0BF0; } }
L_001E0CAC:
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[21].w[0] + 128u)));
    set32(c.r[2], c.r[8].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001E0CFC; } }
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 1u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 4u);
    c.budget -= 4;
L_001E0CD8:
    set32(c.r[4], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0CD8u | kUnwind; return; } goto L_001E0CD8; } }
L_001E0CFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[10].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + 14184u);
    set32(c.r[17], 0u + 5u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[11]);
    st32((c.r[11].w[0] + 14236u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0D24u);  if (depth < kMaxDepth) unit_00DD(c, 309u, depth + 1u); else { c.pc = 0x004777F0u; return; } if (c.pc != 0x001E0D24u) [[unlikely]] return; }
L_001E0D24:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x001E0D2Cu);  goto L_001E0D30; }
L_001E0D30:
    mmi::div(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + 1321u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0E08; } }
L_001E0D44:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 162u);
    st32((c.r[16].w[0] + 14236u), c.r[2].w[0]);
    set32(c.r[17], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0D5Cu);  if (depth < kMaxDepth) unit_00DD(c, 309u, depth + 1u); else { c.pc = 0x004777F0u; return; } if (c.pc != 0x001E0D5Cu) [[unlikely]] return; }
L_001E0D5C:
    c.r[23].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(200ll) ? 1ull : 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.r[11].d[0] = c.r[16].d[0] + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.budget -= 6;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x001E0D70u);  goto L_001E0D74; }
L_001E0D74:
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[11]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + 1331u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0E08; } }
L_001E0D88:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 162u);
    st32((c.r[16].w[0] + 14236u), c.r[2].w[0]);
    set32(c.r[17], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0DA0u);  if (depth < kMaxDepth) unit_00DD(c, 309u, depth + 1u); else { c.pc = 0x004777F0u; return; } if (c.pc != 0x001E0DA0u) [[unlikely]] return; }
L_001E0DA0:
    c.r[23].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(200ll) ? 1ull : 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.r[11].d[0] = c.r[16].d[0] + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.budget -= 6;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x001E0DB4u);  goto L_001E0DB8; }
L_001E0DB8:
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[11]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + 1346u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0E08; } }
L_001E0DCC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 162u);
    st32((c.r[16].w[0] + 14236u), c.r[2].w[0]);
    set32(c.r[17], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0DE4u);  if (depth < kMaxDepth) unit_00DD(c, 309u, depth + 1u); else { c.pc = 0x004777F0u; return; } if (c.pc != 0x001E0DE4u) [[unlikely]] return; }
L_001E0DE4:
    c.r[23].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(200ll) ? 1ull : 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.r[11].d[0] = c.r[16].d[0] + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.budget -= 6;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x001E0DF8u);  goto L_001E0DFC; }
L_001E0DFC:
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[11]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + 1326u);
    c.budget -= 3;
L_001E0E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E10u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001E0E10u) [[unlikely]] return; }
L_001E0E10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[11]);
    st32((c.r[3].w[0] + 14240u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0E40; } }
L_001E0E24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u + 162u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] + 14236u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 14240u), 0u);
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    c.r[23].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(200ll) ? 1ull : 0ull;
    c.budget -= 7;
L_001E0E40:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_001E11F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2176u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001E0000u < 16384u) { entry = entries_0038[(t - 0x001E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E0E64:
    set32(c.r[2], 0u + 685u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0E70:
    set32(c.r[2], 0u + 686u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0E7C:
    set32(c.r[2], 0u + 687u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0E88:
    set32(c.r[2], 0u + 688u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0E94:
    set32(c.r[2], 0u + 689u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0EA0:
    set32(c.r[2], 0u + 690u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0EAC:
    set32(c.r[2], 0u + 691u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0EB8:
    set32(c.r[2], 0u + 692u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0EC4:
    set32(c.r[2], 0u + 693u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0ED0:
    set32(c.r[2], 0u + 694u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0EDC:
    set32(c.r[2], 0u + 695u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0EE8:
    set32(c.r[2], 0u + 696u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0EF4:
    set32(c.r[2], 0u + 697u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0F00:
    set32(c.r[2], 0u + 698u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0F0C:
    set32(c.r[2], 0u + 699u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0F18:
    set32(c.r[2], 0u + 700u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0F24:
    set32(c.r[2], 0u + 701u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0F30:
    set32(c.r[2], 0u + 702u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0F3C:
    set32(c.r[2], 0u + 703u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0F48:
    set32(c.r[2], 0u + 704u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0F54:
    set32(c.r[2], 0u + 705u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0F60:
    set32(c.r[2], 0u + 706u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0F6C:
    set32(c.r[2], 0u + 707u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0F78:
    set32(c.r[2], 0u + 708u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0F84:
    set32(c.r[2], 0u + 674u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0F90:
    set32(c.r[2], 0u + 675u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0F9C:
    set32(c.r[2], 0u + 676u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0FA8:
    set32(c.r[2], 0u + 677u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0FB4:
    set32(c.r[2], 0u + 678u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0FC0:
    set32(c.r[2], 0u + 679u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0FCC:
    set32(c.r[2], 0u + 680u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0FD8:
    set32(c.r[2], 0u + 681u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0FE4:
    set32(c.r[2], 0u + 682u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0FF0:
    set32(c.r[2], 0u + 683u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E0FFC:
    set32(c.r[2], 0u + 709u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E1008:
    set32(c.r[2], 0u + 710u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E1014:
    set32(c.r[2], 0u + 711u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E1020:
    set32(c.r[2], 0u + 712u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E102C:
    set32(c.r[2], 0u + 713u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E1038:
    set32(c.r[2], 0u + 714u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
    goto L_001E1044;
L_001E1040:
    c.budget -= 1;
L_001E1044:
    set32(c.r[2], 0u + 715u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E1050:
    set32(c.r[2], 0u + 716u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E105C:
    set32(c.r[2], 0u + 717u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E1068:
    set32(c.r[2], 0u + 718u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E1074:
    set32(c.r[2], 0u + 719u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E1080:
    set32(c.r[2], 0u + 720u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E108C:
    set32(c.r[2], 0u + 662u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E1098:
    set32(c.r[2], 0u + 663u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E10A4:
    set32(c.r[2], 0u + 664u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E10B0:
    set32(c.r[2], 0u + 665u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E10BC:
    set32(c.r[2], 0u + 666u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E10C8:
    set32(c.r[2], 0u + 667u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E10D4:
    set32(c.r[2], 0u + 668u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E10E0:
    set32(c.r[2], 0u + 669u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E10EC:
    set32(c.r[2], 0u + 670u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E10F8:
    set32(c.r[2], 0u + 671u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E1104:
    set32(c.r[2], 0u + 672u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E1110:
    set32(c.r[2], 0u + 673u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E111C:
    set32(c.r[2], 0u + 684u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E1128:
    set32(c.r[2], 0u + 680u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E1134:
    set32(c.r[2], 0u + 680u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E1140:
    set32(c.r[2], 0u + 680u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E114C:
    set32(c.r[2], 0u + 680u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E1158:
    set32(c.r[2], 0u + 680u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E1164:
    set32(c.r[2], 0u + 680u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E1170:
    set32(c.r[2], 0u + 680u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E117C:
    set32(c.r[2], 0u + 680u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E1188:
    set32(c.r[2], 0u + 680u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E1194:
    set32(c.r[2], 0u + 654u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E11A0:
    set32(c.r[2], 0u + 655u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E11AC:
    set32(c.r[2], 0u + 656u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E11B8:
    set32(c.r[2], 0u + 657u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E11C4:
    set32(c.r[2], 0u + 658u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E11D0:
    set32(c.r[2], 0u + 659u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E11DC:
    set32(c.r[2], 0u + 660u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E11EC; } }
L_001E11E8:
    set32(c.r[2], 0u + 661u);
    c.budget -= 1;
L_001E11EC:
    st32((c.r[11].w[0] + 14236u), c.r[2].w[0]);
    c.budget -= 1;
L_001E11F0:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 304u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E1228:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 101u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E12B8; } }
    set32(c.r[2], 0u + 106u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E136C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E136C; } }
    set32(c.r[2], 0u + 107u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001E136C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1284u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E1284u) [[unlikely]] return; }
L_001E1284:
    set32(c.r[3], ld32((c.r[2].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E136C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E129Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E129Cu) [[unlikely]] return; }
L_001E129C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[4].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1370; } }
L_001E12B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 3));
    set32(c.r[4], c.r[4].w[0] + 12224u);
    c.r[3].d[0] = c.r[17].d[0] & 31ull;
    c.r[18].d[0] = c.r[2].d[0] & 28ull;
    set32(c.r[5], c.r[4].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E1314; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E12F8u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E12F8u) [[unlikely]] return; }
L_001E12F8:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 168u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E1318; } }
L_001E1314:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E1318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E136C; } }
    set32(c.r[2], 0u + 103u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001E136C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1334u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E1334u) [[unlikely]] return; }
L_001E1334:
    set32(c.r[3], ld32((c.r[2].w[0] + 164u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E136C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1350u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E1350u) [[unlikely]] return; }
L_001E1350:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[4].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1370; } }
L_001E136C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E1370:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E1390:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[18].w[0] + 24040u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[17].w[0] - 26388u), c.r[2].w[0]);
    st32((c.r[16].w[0] - 22612u), c.r[2].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E13F4u);  if (depth < kMaxDepth) unit_007D(c, 267u, depth + 1u); else { c.pc = 0x002F7AB0u; return; } if (c.pc != 0x001E13F4u) [[unlikely]] return; }
L_001E13F4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
L_001E1400:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1428; } }
L_001E1410:
    set32(c.r[4], c.r[16].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E141Cu);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001E141Cu) [[unlikely]] return; }
L_001E141C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1428u);  if (depth < kMaxDepth) unit_007D(c, 21u, depth + 1u); else { c.pc = 0x002F4200u; return; } if (c.pc != 0x001E1428u) [[unlikely]] return; }
L_001E1428:
    set32(c.r[4], c.r[18].w[0] + 24040u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1434u);  if (depth < kMaxDepth) unit_007D(c, 262u, depth + 1u); else { c.pc = 0x002F7A00u; return; } if (c.pc != 0x001E1434u) [[unlikely]] return; }
L_001E1434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1410u | kUnwind; return; } goto L_001E1410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1444u);  if (depth < kMaxDepth) unit_0036(c, 461u, depth + 1u); else { c.pc = 0x001DB708u; return; } if (c.pc != 0x001E1444u) [[unlikely]] return; }
L_001E1444:
    st32((c.r[17].w[0] - 26388u), 0u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001E1460; } }
    set32(c.r[4], c.r[16].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E145Cu);  if (depth < kMaxDepth) unit_0087(c, 11u, depth + 1u); else { c.pc = 0x0031C1A0u; return; } if (c.pc != 0x001E145Cu) [[unlikely]] return; }
L_001E145C:
    c.budget -= 1;
L_001E1460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1468u);  if (depth < kMaxDepth) unit_0053(c, 70u, depth + 1u); else { c.pc = 0x0024CDC0u; return; } if (c.pc != 0x001E1468u) [[unlikely]] return; }
L_001E1468:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1478u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001E1478u) [[unlikely]] return; }
L_001E1478:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[20].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E1490; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1460u | kUnwind; return; } goto L_001E1460; } }
L_001E1490:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[23].w[0] + 19264u);
    st32((c.r[3].w[0] - 22612u), 0u);
    set32(c.r[17], 0u + 1u);
    st32((c.r[2].w[0] + 40u), c.r[17].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[30].w[0] + 14664u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E14B4u);  if (depth < kMaxDepth) unit_0082(c, 325u, depth + 1u); else { c.pc = 0x0030BFE0u; return; } if (c.pc != 0x001E14B4u) [[unlikely]] return; }
L_001E14B4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E14C0u);  if (depth < kMaxDepth) unit_0082(c, 325u, depth + 1u); else { c.pc = 0x0030BFE0u; return; } if (c.pc != 0x001E14C0u) [[unlikely]] return; }
L_001E14C0:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E14CCu);  if (depth < kMaxDepth) unit_0082(c, 325u, depth + 1u); else { c.pc = 0x0030BFE0u; return; } if (c.pc != 0x001E14CCu) [[unlikely]] return; }
L_001E14CC:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E14D8u);  if (depth < kMaxDepth) unit_0082(c, 325u, depth + 1u); else { c.pc = 0x0030BFE0u; return; } if (c.pc != 0x001E14D8u) [[unlikely]] return; }
L_001E14D8:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], 0u + 101u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001E1500; } }
    set32(c.r[2], 0u + 106u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001E1524; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1554; } }
L_001E1500:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[16].w[0] - 20028u), c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1510u);  if (depth < kMaxDepth) unit_000E(c, 337u, depth + 1u); else { c.pc = 0x0013A7C8u; return; } if (c.pc != 0x001E1510u) [[unlikely]] return; }
L_001E1510:
    set32(c.r[6], ld32((c.r[21].w[0] + 20792u)));
    set32(c.r[4], c.r[22].w[0] - 11920u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1540; } }
L_001E1524:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[16].w[0] - 20028u), c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1534u);  if (depth < kMaxDepth) unit_000E(c, 337u, depth + 1u); else { c.pc = 0x0013A7C8u; return; } if (c.pc != 0x001E1534u) [[unlikely]] return; }
L_001E1534:
    set32(c.r[6], ld32((c.r[21].w[0] + 20792u)));
    set32(c.r[4], c.r[22].w[0] - 11920u);
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
L_001E1540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1548u);  if (depth < kMaxDepth) unit_008B(c, 254u, depth + 1u); else { c.pc = 0x0032EA08u; return; } if (c.pc != 0x001E1548u) [[unlikely]] return; }
L_001E1548:
    st32((c.r[16].w[0] - 20028u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1568; } }
L_001E1554:
    set32(c.r[6], ld32((c.r[21].w[0] + 20792u)));
    set32(c.r[4], c.r[22].w[0] - 11920u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1568u);  if (depth < kMaxDepth) unit_008B(c, 254u, depth + 1u); else { c.pc = 0x0032EA08u; return; } if (c.pc != 0x001E1568u) [[unlikely]] return; }
L_001E1568:
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
L_001E15A0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] - 31664u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E15E4u);  if (depth < kMaxDepth) unit_0037(c, 483u, depth + 1u); else { c.pc = 0x001DF920u; return; } if (c.pc != 0x001E15E4u) [[unlikely]] return; }
L_001E15E4:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1628; } }
    goto L_001E1604;
L_001E1600:
    c.budget -= 1;
L_001E1604:
    c.budget -= 1;
L_001E1608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1610u);  if (depth < kMaxDepth) unit_0053(c, 70u, depth + 1u); else { c.pc = 0x0024CDC0u; return; } if (c.pc != 0x001E1610u) [[unlikely]] return; }
L_001E1610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1620u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001E1620u) [[unlikely]] return; }
L_001E1620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1628u);  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x001E1628u) [[unlikely]] return; }
L_001E1628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1630u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x001E1630u) [[unlikely]] return; }
L_001E1630:
    set32(c.r[21], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1608u | kUnwind; return; } goto L_001E1608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1644u);  if (depth < kMaxDepth) unit_001A(c, 181u, depth + 1u); else { c.pc = 0x0016A078u; return; } if (c.pc != 0x001E1644u) [[unlikely]] return; }
L_001E1644:
    set32(c.r[16], c.r[16].w[0] - 22944u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1650u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001E1650u) [[unlikely]] return; }
L_001E1650:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E166Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E166Cu) [[unlikely]] return; }
L_001E166C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1674u);  if (depth < kMaxDepth) unit_0036(c, 370u, depth + 1u); else { c.pc = 0x001DACC0u; return; } if (c.pc != 0x001E1674u) [[unlikely]] return; }
L_001E1674:
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 26820u)));
    st32((c.r[18].w[0] + 12208u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1688u);  if (depth < kMaxDepth) unit_0083(c, 219u, depth + 1u); else { c.pc = 0x0030EE28u; return; } if (c.pc != 0x001E1688u) [[unlikely]] return; }
L_001E1688:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[3].w[0] + 12320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1698u);  if (depth < kMaxDepth) unit_006C(c, 234u, depth + 1u); else { c.pc = 0x002B2828u; return; } if (c.pc != 0x001E1698u) [[unlikely]] return; }
L_001E1698:
    set32(c.r[5], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E16A8u);  if (depth < kMaxDepth) unit_0085(c, 318u, depth + 1u); else { c.pc = 0x00317590u; return; } if (c.pc != 0x001E16A8u) [[unlikely]] return; }
L_001E16A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[5].w[0] - 20768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E16B8u);  if (depth < kMaxDepth) unit_0008(c, 84u, depth + 1u); else { c.pc = 0x00120F00u; return; } if (c.pc != 0x001E16B8u) [[unlikely]] return; }
L_001E16B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E16C4u);  if (depth < kMaxDepth) unit_0086(c, 42u, depth + 1u); else { c.pc = 0x00318570u; return; } if (c.pc != 0x001E16C4u) [[unlikely]] return; }
L_001E16C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E16CCu);  if (depth < kMaxDepth) unit_0040(c, 59u, depth + 1u); else { c.pc = 0x00200A70u; return; } if (c.pc != 0x001E16CCu) [[unlikely]] return; }
L_001E16CC:
    set32(c.r[2], 0u - 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[6].w[0] + 13624u), 0u);
    st32((c.r[8].w[0] + 13648u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[3].w[0] - 22920u);
    st32((c.r[5].w[0] + 13628u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[8].w[0] + 13636u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[6].w[0] + 13632u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] + 13656u), 0u);
    st32((c.r[3].w[0] + 13652u), 0u);
    st32((c.r[5].w[0] + 13640u), 0u);
    st32((c.r[6].w[0] + 13644u), 0u);
    st32((c.r[8].w[0] + 13660u), 0u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1730u);  if (depth < kMaxDepth) unit_0087(c, 11u, depth + 1u); else { c.pc = 0x0031C1A0u; return; } if (c.pc != 0x001E1730u) [[unlikely]] return; }
L_001E1730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1738u);  if (depth < kMaxDepth) unit_001F(c, 306u, depth + 1u); else { c.pc = 0x0017FC00u; return; } if (c.pc != 0x001E1738u) [[unlikely]] return; }
L_001E1738:
    c.r[2].d[0] = c.r[19].d[0] ^ 73ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E1774; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1750u);  if (depth < kMaxDepth) unit_0082(c, 325u, depth + 1u); else { c.pc = 0x0030BFE0u; return; } if (c.pc != 0x001E1750u) [[unlikely]] return; }
L_001E1750:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E175Cu);  if (depth < kMaxDepth) unit_0082(c, 325u, depth + 1u); else { c.pc = 0x0030BFE0u; return; } if (c.pc != 0x001E175Cu) [[unlikely]] return; }
L_001E175C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1768u);  if (depth < kMaxDepth) unit_0082(c, 325u, depth + 1u); else { c.pc = 0x0030BFE0u; return; } if (c.pc != 0x001E1768u) [[unlikely]] return; }
L_001E1768:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1774u);  if (depth < kMaxDepth) unit_0082(c, 325u, depth + 1u); else { c.pc = 0x0030BFE0u; return; } if (c.pc != 0x001E1774u) [[unlikely]] return; }
L_001E1774:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1784u);  if (depth < kMaxDepth) unit_0038(c, 181u, depth + 1u); else { c.pc = 0x001E1228u; return; } if (c.pc != 0x001E1784u) [[unlikely]] return; }
L_001E1784:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[21].d[0];  if (t) { goto L_001E1858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1798u);  if (depth < kMaxDepth) unit_0036(c, 466u, depth + 1u); else { c.pc = 0x001DB788u; return; } if (c.pc != 0x001E1798u) [[unlikely]] return; }
L_001E1798:
    set32(c.r[16], c.r[22].w[0] + 13496u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E17ACu);  if (depth < kMaxDepth) unit_0038(c, 56u, depth + 1u); else { c.pc = 0x001E0448u; return; } if (c.pc != 0x001E17ACu) [[unlikely]] return; }
L_001E17AC:
    set32(c.r[4], ld32((c.r[23].w[0] + 20668u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E17B8u);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001E17B8u) [[unlikely]] return; }
L_001E17B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], ld32((c.r[30].w[0] + 14252u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 14256u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[6].w[0] + 14236u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80630000u);
    set32(c.r[6], ld32((c.r[8].w[0] + 14240u)));
    c.r[2].d[0] = c.r[2].d[0] | 35814ull;
    st32((c.r[22].w[0] + 13496u), c.r[7].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[21].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[21].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1810u);  if (depth < kMaxDepth) unit_007E(c, 301u, depth + 1u); else { c.pc = 0x002FB1C0u; return; } if (c.pc != 0x001E1810u) [[unlikely]] return; }
L_001E1810:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    set32(c.r[3], 0u + 320u);
    set32(c.r[5], 0u + 362u);
    st32((c.r[22].w[0] + 13496u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32897ull;
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 12;
L_001E1840:
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1850u);  if (depth < kMaxDepth) unit_0038(c, 19u, depth + 1u); else { c.pc = 0x001E0188u; return; } if (c.pc != 0x001E1850u) [[unlikely]] return; }
L_001E1850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1928; } }
L_001E1858:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[22].w[0] + 13496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1868u);  if (depth < kMaxDepth) unit_0038(c, 19u, depth + 1u); else { c.pc = 0x001E0188u; return; } if (c.pc != 0x001E1868u) [[unlikely]] return; }
L_001E1868:
    set32(c.r[17], 0u + 2u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E187Cu);  if (depth < kMaxDepth) unit_0038(c, 187u, depth + 1u); else { c.pc = 0x001E1390u; return; } if (c.pc != 0x001E187Cu) [[unlikely]] return; }
L_001E187C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1884u);  if (depth < kMaxDepth) unit_0036(c, 461u, depth + 1u); else { c.pc = 0x001DB708u; return; } if (c.pc != 0x001E1884u) [[unlikely]] return; }
    goto L_001E1884;
L_001E1880:
    c.budget -= 1;
L_001E1884:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1890u);  if (depth < kMaxDepth) unit_0038(c, 56u, depth + 1u); else { c.pc = 0x001E0448u; return; } if (c.pc != 0x001E1890u) [[unlikely]] return; }
L_001E1890:
    set32(c.r[4], ld32((c.r[23].w[0] + 20668u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E189Cu);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001E189Cu) [[unlikely]] return; }
L_001E189C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], ld32((c.r[30].w[0] + 14252u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 14256u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[6].w[0] + 14236u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80630000u);
    set32(c.r[6], ld32((c.r[8].w[0] + 14240u)));
    c.r[2].d[0] = c.r[2].d[0] | 35814ull;
    st32((c.r[22].w[0] + 13496u), c.r[7].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E18F4u);  if (depth < kMaxDepth) unit_007E(c, 301u, depth + 1u); else { c.pc = 0x002FB1C0u; return; } if (c.pc != 0x001E18F4u) [[unlikely]] return; }
L_001E18F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    set32(c.r[3], 0u + 320u);
    set32(c.r[4], 0u + 362u);
    st32((c.r[22].w[0] + 13496u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32897ull;
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 13;
L_001E1928:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[13] = c.r[1].w[0];
    set32(c.r[16], 0u + 2u);
    c.f[12] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1940u);  if (depth < kMaxDepth) unit_009E(c, 85u, depth + 1u); else { c.pc = 0x00378E30u; return; } if (c.pc != 0x001E1940u) [[unlikely]] return; }
L_001E1940:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1950u);  if (depth < kMaxDepth) unit_009E(c, 91u, depth + 1u); else { c.pc = 0x00378F98u; return; } if (c.pc != 0x001E1950u) [[unlikely]] return; }
L_001E1950:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[20].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], c.r[3].w[0] + 14664u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st32((c.r[2].w[0] + 216u), c.r[19].w[0]);
    st32((c.r[4].w[0] + 10160u), c.r[19].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1970u);  if (depth < kMaxDepth) unit_0074(c, 93u, depth + 1u); else { c.pc = 0x002D11A0u; return; } if (c.pc != 0x001E1970u) [[unlikely]] return; }
L_001E1970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1978u);  if (depth < kMaxDepth) unit_0091(c, 146u, depth + 1u); else { c.pc = 0x00345880u; return; } if (c.pc != 0x001E1978u) [[unlikely]] return; }
L_001E1978:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[5].w[0] + 29328u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E198Cu);  if (depth < kMaxDepth) unit_009E(c, 375u, depth + 1u); else { c.pc = 0x0037B888u; return; } if (c.pc != 0x001E198Cu) [[unlikely]] return; }
L_001E198C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[6].w[0] + 19264u);
    st32((c.r[3].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 104u), c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E19A8u);  if (depth < kMaxDepth) unit_0037(c, 346u, depth + 1u); else { c.pc = 0x001DE820u; return; } if (c.pc != 0x001E19A8u) [[unlikely]] return; }
L_001E19A8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E19B8u);  if (depth < kMaxDepth) unit_0039(c, 210u, depth + 1u); else { c.pc = 0x001E5B18u; return; } if (c.pc != 0x001E19B8u) [[unlikely]] return; }
L_001E19B8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E19C4u);  if (depth < kMaxDepth) unit_0036(c, 293u, depth + 1u); else { c.pc = 0x001DA840u; return; } if (c.pc != 0x001E19C4u) [[unlikely]] return; }
L_001E19C4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E19D0u);  if (depth < kMaxDepth) unit_0036(c, 307u, depth + 1u); else { c.pc = 0x001DA928u; return; } if (c.pc != 0x001E19D0u) [[unlikely]] return; }
L_001E19D0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E19DCu);  if (depth < kMaxDepth) unit_0036(c, 319u, depth + 1u); else { c.pc = 0x001DA9C8u; return; } if (c.pc != 0x001E19DCu) [[unlikely]] return; }
L_001E19DC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E19E8u);  if (depth < kMaxDepth) unit_0036(c, 331u, depth + 1u); else { c.pc = 0x001DAA68u; return; } if (c.pc != 0x001E19E8u) [[unlikely]] return; }
L_001E19E8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E19F4u);  if (depth < kMaxDepth) unit_0036(c, 345u, depth + 1u); else { c.pc = 0x001DAB50u; return; } if (c.pc != 0x001E19F4u) [[unlikely]] return; }
L_001E19F4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A00u);  if (depth < kMaxDepth) unit_0034(c, 295u, depth + 1u); else { c.pc = 0x001D2E18u; return; } if (c.pc != 0x001E1A00u) [[unlikely]] return; }
L_001E1A00:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A0Cu);  if (depth < kMaxDepth) unit_0036(c, 358u, depth + 1u); else { c.pc = 0x001DAC10u; return; } if (c.pc != 0x001E1A0Cu) [[unlikely]] return; }
L_001E1A0C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A18u);  if (depth < kMaxDepth) unit_0034(c, 308u, depth + 1u); else { c.pc = 0x001D2F28u; return; } if (c.pc != 0x001E1A18u) [[unlikely]] return; }
L_001E1A18:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A24u);  if (depth < kMaxDepth) unit_0036(c, 371u, depth + 1u); else { c.pc = 0x001DACD0u; return; } if (c.pc != 0x001E1A24u) [[unlikely]] return; }
L_001E1A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A2Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001E1A2Cu) [[unlikely]] return; }
L_001E1A2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_001E1A48; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A40u);  if (depth < kMaxDepth) unit_0036(c, 385u, depth + 1u); else { c.pc = 0x001DADC0u; return; } if (c.pc != 0x001E1A40u) [[unlikely]] return; }
L_001E1A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1A54; } }
L_001E1A48:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A54u);  if (depth < kMaxDepth) unit_0036(c, 385u, depth + 1u); else { c.pc = 0x001DADC0u; return; } if (c.pc != 0x001E1A54u) [[unlikely]] return; }
L_001E1A54:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A64u);  if (depth < kMaxDepth) unit_0038(c, 305u, depth + 1u); else { c.pc = 0x001E1DD0u; return; } if (c.pc != 0x001E1A64u) [[unlikely]] return; }
L_001E1A64:
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u + 4u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[8].w[0] + 19624u), c.r[2].w[0]);
    c.budget -= 5;
L_001E1A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A80u);  if (depth < kMaxDepth) unit_0053(c, 70u, depth + 1u); else { c.pc = 0x0024CDC0u; return; } if (c.pc != 0x001E1A80u) [[unlikely]] return; }
L_001E1A80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A90u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001E1A90u) [[unlikely]] return; }
L_001E1A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A98u);  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x001E1A98u) [[unlikely]] return; }
L_001E1A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1AA0u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x001E1AA0u) [[unlikely]] return; }
L_001E1AA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1A78u | kUnwind; return; } goto L_001E1A78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[16], c.r[3].w[0] + 12224u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[6].w[0] + 14664u), c.r[17].w[0]);
    set32(c.r[18], c.r[4].w[0] + 19264u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[18].w[0] + 40u), c.r[17].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1AD8u);  if (depth < kMaxDepth) unit_0038(c, 339u, depth + 1u); else { c.pc = 0x001E2428u; return; } if (c.pc != 0x001E1AD8u) [[unlikely]] return; }
L_001E1AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1AE0u);  if (depth < kMaxDepth) unit_0093(c, 71u, depth + 1u); else { c.pc = 0x0034CF60u; return; } if (c.pc != 0x001E1AE0u) [[unlikely]] return; }
L_001E1AE0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1AECu);  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DEB18u; return; } if (c.pc != 0x001E1AECu) [[unlikely]] return; }
L_001E1AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1AF4u);  if (depth < kMaxDepth) unit_0086(c, 69u, depth + 1u); else { c.pc = 0x00318A50u; return; } if (c.pc != 0x001E1AF4u) [[unlikely]] return; }
L_001E1AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1AFCu);  if (depth < kMaxDepth) unit_0036(c, 399u, depth + 1u); else { c.pc = 0x001DAE80u; return; } if (c.pc != 0x001E1AFCu) [[unlikely]] return; }
L_001E1AFC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1B08u);  if (depth < kMaxDepth) unit_0087(c, 127u, depth + 1u); else { c.pc = 0x0031DE38u; return; } if (c.pc != 0x001E1B08u) [[unlikely]] return; }
L_001E1B08:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1B14u);  if (depth < kMaxDepth) unit_0039(c, 223u, depth + 1u); else { c.pc = 0x001E5CF0u; return; } if (c.pc != 0x001E1B14u) [[unlikely]] return; }
L_001E1B14:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[8].w[0] - 20768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1B24u);  if (depth < kMaxDepth) unit_0008(c, 66u, depth + 1u); else { c.pc = 0x00120C38u; return; } if (c.pc != 0x001E1B24u) [[unlikely]] return; }
L_001E1B24:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1B30u);  if (depth < kMaxDepth) unit_0037(c, 300u, depth + 1u); else { c.pc = 0x001DE468u; return; } if (c.pc != 0x001E1B30u) [[unlikely]] return; }
L_001E1B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1B38u);  if (depth < kMaxDepth) unit_0036(c, 538u, depth + 1u); else { c.pc = 0x001DBE70u; return; } if (c.pc != 0x001E1B38u) [[unlikely]] return; }
L_001E1B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1B40u);  if (depth < kMaxDepth) unit_0066(c, 212u, depth + 1u); else { c.pc = 0x0029A238u; return; } if (c.pc != 0x001E1B40u) [[unlikely]] return; }
L_001E1B40:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1B4Cu);  if (depth < kMaxDepth) unit_0040(c, 40u, depth + 1u); else { c.pc = 0x002007E0u; return; } if (c.pc != 0x001E1B4Cu) [[unlikely]] return; }
L_001E1B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1B54u);  if (depth < kMaxDepth) unit_0037(c, 362u, depth + 1u); else { c.pc = 0x001DEA08u; return; } if (c.pc != 0x001E1B54u) [[unlikely]] return; }
L_001E1B54:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1B64u);  if (depth < kMaxDepth) unit_0037(c, 357u, depth + 1u); else { c.pc = 0x001DE938u; return; } if (c.pc != 0x001E1B64u) [[unlikely]] return; }
L_001E1B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1B6Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E1B6Cu) [[unlikely]] return; }
L_001E1B6C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[5].w[0] + 4040u);
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1B88u);  if (depth < kMaxDepth) unit_0034(c, 256u, depth + 1u); else { c.pc = 0x001D2840u; return; } if (c.pc != 0x001E1B88u) [[unlikely]] return; }
L_001E1B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1B90u);  if (depth < kMaxDepth) unit_0020(c, 166u, depth + 1u); else { c.pc = 0x001820E8u; return; } if (c.pc != 0x001E1B90u) [[unlikely]] return; }
L_001E1B90:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[8].w[0] + 3932u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[6].w[0] - 19344u);
    st32((c.r[2].w[0] - 17588u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1BB4u);  if (depth < kMaxDepth) unit_0088(c, 278u, depth + 1u); else { c.pc = 0x003232E0u; return; } if (c.pc != 0x001E1BB4u) [[unlikely]] return; }
L_001E1BB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[3].w[0] - 29700u), 0u);
    st32((c.r[4].w[0] - 22612u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1BCCu);  if (depth < kMaxDepth) unit_0036(c, 210u, depth + 1u); else { c.pc = 0x001D9A28u; return; } if (c.pc != 0x001E1BCCu) [[unlikely]] return; }
L_001E1BCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1BD4u);  if (depth < kMaxDepth) unit_0034(c, 325u, depth + 1u); else { c.pc = 0x001D31C0u; return; } if (c.pc != 0x001E1BD4u) [[unlikely]] return; }
L_001E1BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1BDCu);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x002FAF28u; return; } if (c.pc != 0x001E1BDCu) [[unlikely]] return; }
L_001E1BDC:
    set32(c.r[5], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1BECu);  if (depth < kMaxDepth) unit_0036(c, 477u, depth + 1u); else { c.pc = 0x001DB898u; return; } if (c.pc != 0x001E1BECu) [[unlikely]] return; }
L_001E1BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1BF4u);  if (depth < kMaxDepth) unit_009E(c, 88u, depth + 1u); else { c.pc = 0x00378E98u; return; } if (c.pc != 0x001E1BF4u) [[unlikely]] return; }
L_001E1BF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] - 31664u)));
    c.budget -= 3;
L_001E1C00:
    st32((c.r[18].w[0] + 40u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1C0Cu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x001E1C0Cu) [[unlikely]] return; }
L_001E1C0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1C18u);  if (depth < kMaxDepth) unit_0066(c, 219u, depth + 1u); else { c.pc = 0x0029A350u; return; } if (c.pc != 0x001E1C18u) [[unlikely]] return; }
L_001E1C18:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], 0u + 145u);
    set32(c.r[3], ld32((c.r[6].w[0] + 10160u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E1C44; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[4].w[0] - 29864u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1C3Cu);  if (depth < kMaxDepth) unit_0060(c, 247u, depth + 1u); else { c.pc = 0x00283A90u; return; } if (c.pc != 0x001E1C3Cu) [[unlikely]] return; }
L_001E1C3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1C54; } }
L_001E1C44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[4].w[0] - 29904u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1C54u);  if (depth < kMaxDepth) unit_0060(c, 247u, depth + 1u); else { c.pc = 0x00283A90u; return; } if (c.pc != 0x001E1C54u) [[unlikely]] return; }
L_001E1C54:
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
L_001E1C88:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[17], ld32((c.r[2].w[0] + 20788u)));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], 0u + 24u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1CB8u);  if (depth < kMaxDepth) unit_0034(c, 151u, depth + 1u); else { c.pc = 0x001D19E8u; return; } if (c.pc != 0x001E1CB8u) [[unlikely]] return; }
L_001E1CB8:
    set32(c.r[7], ld32((c.r[18].w[0] - 3308u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] - 3304u);
    set32(c.r[12], 0u + 92u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[19].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[8], c.r[8].w[0] + 5864u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[3].w[0] + 16u), c.r[12].w[0]);
    st32((c.r[11].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[16].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1D0Cu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E1D0Cu) [[unlikely]] return; }
L_001E1D0C:
    set32(c.r[7], ld32((c.r[18].w[0] - 3308u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[8], c.r[8].w[0] + 5912u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    mmi::mult(c, 0, c.r[7].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 129u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1D3Cu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E1D3Cu) [[unlikely]] return; }
L_001E1D3C:
    set32(c.r[7], ld32((c.r[18].w[0] - 3308u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[8], c.r[8].w[0] + 5960u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    mmi::mult(c, 0, c.r[7].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 130u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1D6Cu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E1D6Cu) [[unlikely]] return; }
L_001E1D6C:
    set32(c.r[7], ld32((c.r[18].w[0] - 3308u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] - 5232u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 131u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1D9Cu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E1D9Cu) [[unlikely]] return; }
L_001E1D9C:
    set32(c.r[2], ld32((c.r[18].w[0] - 3308u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] - 3308u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1DB0u);  if (depth < kMaxDepth) unit_0034(c, 153u, depth + 1u); else { c.pc = 0x001D1A40u; return; } if (c.pc != 0x001E1DB0u) [[unlikely]] return; }
L_001E1DB0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E1DD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E04u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001E1E04u) [[unlikely]] return; }
L_001E1E04:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E14u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001E1E14u) [[unlikely]] return; }
L_001E1E14:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E24u);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x001E1E24u) [[unlikely]] return; }
L_001E1E24:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001E1FD0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E3Cu);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x001E1E3Cu) [[unlikely]] return; }
L_001E1E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E44u);  if (depth < kMaxDepth) unit_0034(c, 128u, depth + 1u); else { c.pc = 0x001D1638u; return; } if (c.pc != 0x001E1E44u) [[unlikely]] return; }
L_001E1E44:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E50u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001E1E50u) [[unlikely]] return; }
L_001E1E50:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001E1EB4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001E1E7C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E1EB4; } }
L_001E1E7C:
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], c.r[16].w[0] - 22920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E90u);  if (depth < kMaxDepth) unit_0037(c, 459u, depth + 1u); else { c.pc = 0x001DEFF8u; return; } if (c.pc != 0x001E1E90u) [[unlikely]] return; }
L_001E1E90:
    set32(c.r[6], ld32((c.r[17].w[0] + 144u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 148u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1EB4u);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001E1EB4u) [[unlikely]] return; }
L_001E1EB4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1EC0u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001E1EC0u) [[unlikely]] return; }
L_001E1EC0:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001E1F08; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_001E1EEC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_001E1F08; } }
L_001E1EEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[4], c.r[4].w[0] - 22920u);
    set32(c.r[5], 0u + 6u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F08u);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001E1F08u) [[unlikely]] return; }
L_001E1F08:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F14u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001E1F14u) [[unlikely]] return; }
L_001E1F14:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001E1F78; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001E1F40; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E1F78; } }
L_001E1F40:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], c.r[16].w[0] - 22920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F54u);  if (depth < kMaxDepth) unit_0037(c, 459u, depth + 1u); else { c.pc = 0x001DEFF8u; return; } if (c.pc != 0x001E1F54u) [[unlikely]] return; }
L_001E1F54:
    set32(c.r[6], ld32((c.r[17].w[0] + 168u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 172u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F78u);  if (depth < kMaxDepth) unit_0086(c, 122u, depth + 1u); else { c.pc = 0x003195F8u; return; } if (c.pc != 0x001E1F78u) [[unlikely]] return; }
L_001E1F78:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F88u);  if (depth < kMaxDepth) unit_0038(c, 332u, depth + 1u); else { c.pc = 0x001E22C0u; return; } if (c.pc != 0x001E1F88u) [[unlikely]] return; }
L_001E1F88:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F98u);  if (depth < kMaxDepth) unit_0039(c, 141u, depth + 1u); else { c.pc = 0x001E5200u; return; } if (c.pc != 0x001E1F98u) [[unlikely]] return; }
L_001E1F98:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1FA8u);  if (depth < kMaxDepth) unit_0039(c, 166u, depth + 1u); else { c.pc = 0x001E5588u; return; } if (c.pc != 0x001E1FA8u) [[unlikely]] return; }
L_001E1FA8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1FB8u);  if (depth < kMaxDepth) unit_0039(c, 187u, depth + 1u); else { c.pc = 0x001E5900u; return; } if (c.pc != 0x001E1FB8u) [[unlikely]] return; }
L_001E1FB8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1FC8u);  if (depth < kMaxDepth) unit_0039(c, 184u, depth + 1u); else { c.pc = 0x001E5898u; return; } if (c.pc != 0x001E1FC8u) [[unlikely]] return; }
L_001E1FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1FD0u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x001E1FD0u) [[unlikely]] return; }
L_001E1FD0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E1FF0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[17], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 14;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001E2034; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E228C; } }
L_001E2034:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[16], c.r[16].w[0] - 19088u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 6552ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2054u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001E2054u) [[unlikely]] return; }
L_001E2054:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] | 6528ull;
    set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_001E2060:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2752u);
    set32(c.r[16], c.r[16].w[0] + 2752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2078u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001E2078u) [[unlikely]] return; }
L_001E2078:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2060u | kUnwind; return; } goto L_001E2060; } }
    goto L_001E2084;
L_001E2080:
    c.budget -= 1;
L_001E2084:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001E2288; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[19], c.r[17].w[0] + 8u);
    set32(c.r[15], c.r[2].w[0] - 19088u);
    set32(c.r[23], 0u + 2752u);
    c.r[16].d[0] = c.r[15].d[0] + 0ull;
    set32(c.r[22], 0u + 1u);
    set32(c.r[25], c.r[17].w[0] + 592u);
    set32(c.r[24], c.r[17].w[0] + 600u);
    set32(c.r[14], 0u - 1u);
    set32(c.r[18], c.r[17].w[0] + 604u);
    set32(c.r[12], c.r[17].w[0] + 12u);
    set32(c.r[21], 0u + 604u);
    set32(c.r[20], 0u + 2752u);
    c.budget -= 13;
L_001E20C8:
    set32(c.r[2], 0u + 604u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00700000u);
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[30], c.r[30].w[0] - 16340u);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[13], c.r[9].w[0] + 1u);
    set32(c.r[2], c.r[19].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[25].w[0] + c.r[5].w[0]);
    set32(c.r[10], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[24].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[8], c.r[17].w[0] + c.r[5].w[0]);
    mmi::mult(c, 0, c.r[10].w[0], c.r[23].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[12].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[30].w[0]);
    st32((c.r[2].w[0]), c.r[22].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[15].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 19088u);
    st32((c.r[2].w[0] + 6528u), c.r[10].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(c.r[14].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st16((c.r[4].w[0] + 18u), static_cast<std::uint16_t>(c.r[14].w[0]));
    st16((c.r[4].w[0] + 20u), static_cast<std::uint16_t>(c.r[14].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0])));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[8].w[0] + 596u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 34;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001E2274; } }
    mmi::mult(c, 0, c.r[9].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[10].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] - 19064u);
    set32(c.r[8], c.r[12].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[7], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 10;
L_001E2178:
    c.r[2].d[0] = ld16((c.r[7].w[0] + 2744u));
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[7].w[0] + 2744u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 72u)));
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 76u)));
    st32((c.r[4].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 84u)));
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 88u)));
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 92u)));
    st32((c.r[4].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 40u)));
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    st32((c.r[4].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    st16((c.r[4].w[0] + 92u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 44u)));
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 56u)));
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    st32((c.r[4].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 64u)));
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 68u)));
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 96u);
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 120u);
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[2].d[0] = c.r[11].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 63;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2178u | kUnwind; return; } goto L_001E2178; } }
L_001E2274:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[9].d[0] = c.r[13].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E20C8u | kUnwind; return; } goto L_001E20C8; } }
L_001E2288:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E228C:
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
L_001E22C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 112u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E2404; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2300u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001E2300u) [[unlikely]] return; }
L_001E2300:
    set32(c.r[19], 0u + 24u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 13528u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 640u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2320u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001E2320u) [[unlikely]] return; }
L_001E2320:
    set32(c.r[7], ld32((c.r[18].w[0] - 3308u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] - 3304u);
    set32(c.r[11], 0u + 94u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[19].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[8], c.r[8].w[0] + 5864u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 16u), c.r[11].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[4].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2374u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E2374u) [[unlikely]] return; }
L_001E2374:
    set32(c.r[7], ld32((c.r[18].w[0] - 3308u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 120u)));
    set32(c.r[8], c.r[8].w[0] + 5912u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E23A4u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E23A4u) [[unlikely]] return; }
L_001E23A4:
    set32(c.r[7], ld32((c.r[18].w[0] - 3308u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 124u)));
    set32(c.r[8], c.r[8].w[0] + 5960u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E23D4u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E23D4u) [[unlikely]] return; }
L_001E23D4:
    set32(c.r[7], ld32((c.r[18].w[0] - 3308u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 112u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    mmi::mult(c, 0, c.r[7].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[8].w[0] - 5232u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2404u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E2404u) [[unlikely]] return; }
L_001E2404:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E2428:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E245Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001E245Cu) [[unlikely]] return; }
L_001E245C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] - 3748u), 0u);
    st32((c.r[3].w[0] - 3752u), c.f[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] - 3744u), c.f[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2490u);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x001E2490u) [[unlikely]] return; }
L_001E2490:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001E26F8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 14960u);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[21], c.r[18].w[0] + 40u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E24BCu);  if (depth < kMaxDepth) unit_0060(c, 257u, depth + 1u); else { c.pc = 0x00283BE8u; return; } if (c.pc != 0x001E24BCu) [[unlikely]] return; }
L_001E24BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E24CCu);  if (depth < kMaxDepth) unit_0060(c, 261u, depth + 1u); else { c.pc = 0x00283C28u; return; } if (c.pc != 0x001E24CCu) [[unlikely]] return; }
L_001E24CC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E24DCu);  if (depth < kMaxDepth) unit_0060(c, 255u, depth + 1u); else { c.pc = 0x00283BC8u; return; } if (c.pc != 0x001E24DCu) [[unlikely]] return; }
L_001E24DC:
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[4].w[0] + 19624u), c.r[2].w[0]);
    st32((c.r[3].w[0] - 3028u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E24FCu);  if (depth < kMaxDepth) unit_0038(c, 369u, depth + 1u); else { c.pc = 0x001E2720u; return; } if (c.pc != 0x001E24FCu) [[unlikely]] return; }
L_001E24FC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2508u);  if (depth < kMaxDepth) unit_007E(c, 59u, depth + 1u); else { c.pc = 0x002F8380u; return; } if (c.pc != 0x001E2508u) [[unlikely]] return; }
L_001E2508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2510u);  if (depth < kMaxDepth) unit_0034(c, 151u, depth + 1u); else { c.pc = 0x001D19E8u; return; } if (c.pc != 0x001E2510u) [[unlikely]] return; }
L_001E2510:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E251Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001E251Cu) [[unlikely]] return; }
L_001E251C:
    set32(c.r[4], ld32((c.r[18].w[0] + 180u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2530u);  if (depth < kMaxDepth) unit_0034(c, 34u, depth + 1u); else { c.pc = 0x001D0730u; return; } if (c.pc != 0x001E2530u) [[unlikely]] return; }
L_001E2530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2538u);  if (depth < kMaxDepth) unit_0034(c, 153u, depth + 1u); else { c.pc = 0x001D1A40u; return; } if (c.pc != 0x001E2538u) [[unlikely]] return; }
L_001E2538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2540u);  if (depth < kMaxDepth) unit_0034(c, 151u, depth + 1u); else { c.pc = 0x001D19E8u; return; } if (c.pc != 0x001E2540u) [[unlikely]] return; }
L_001E2540:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E254Cu);  if (depth < kMaxDepth) unit_0039(c, 193u, depth + 1u); else { c.pc = 0x001E59A8u; return; } if (c.pc != 0x001E254Cu) [[unlikely]] return; }
L_001E254C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2558u);  if (depth < kMaxDepth) unit_0039(c, 191u, depth + 1u); else { c.pc = 0x001E5970u; return; } if (c.pc != 0x001E2558u) [[unlikely]] return; }
L_001E2558:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2564u);  if (depth < kMaxDepth) unit_007E(c, 52u, depth + 1u); else { c.pc = 0x002F82E0u; return; } if (c.pc != 0x001E2564u) [[unlikely]] return; }
L_001E2564:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[4], c.r[4].w[0] + 26848u);
    set32(c.r[5], c.r[5].w[0] + 26968u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E257Cu);  if (depth < kMaxDepth) unit_0093(c, 257u, depth + 1u); else { c.pc = 0x0034E9C0u; return; } if (c.pc != 0x001E257Cu) [[unlikely]] return; }
L_001E257C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2584u);  if (depth < kMaxDepth) unit_0038(c, 422u, depth + 1u); else { c.pc = 0x001E2C58u; return; } if (c.pc != 0x001E2584u) [[unlikely]] return; }
L_001E2584:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u - 1u);
    st32((c.r[3].w[0] + 14880u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001E25E8; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[17], 0u - 1u);
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
L_001E25A8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E25B4u);  if (depth < kMaxDepth) unit_007D(c, 220u, depth + 1u); else { c.pc = 0x002F7180u; return; } if (c.pc != 0x001E25B4u) [[unlikely]] return; }
L_001E25B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E25D4; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[19].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E25CCu);  if (depth < kMaxDepth) unit_0086(c, 271u, depth + 1u); else { c.pc = 0x0031B5E0u; return; } if (c.pc != 0x001E25CCu) [[unlikely]] return; }
L_001E25CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001E25D8; } }
L_001E25D4:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001E25D8:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E25A8u | kUnwind; return; } goto L_001E25A8; } }
L_001E25E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E264C; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001E264C; } }
L_001E2600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2608u);  if (depth < kMaxDepth) unit_0040(c, 44u, depth + 1u); else { c.pc = 0x00200880u; return; } if (c.pc != 0x001E2608u) [[unlikely]] return; }
L_001E2608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2610u);  if (depth < kMaxDepth) unit_0040(c, 59u, depth + 1u); else { c.pc = 0x00200A70u; return; } if (c.pc != 0x001E2610u) [[unlikely]] return; }
L_001E2610:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u - 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[5].w[0] + 13624u), 0u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[2].w[0] + 13636u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[7].w[0] + 13628u), c.r[3].w[0]);
    st32((c.r[8].w[0] + 13632u), 0u);
    st32((c.r[6].w[0] + 13656u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E264Cu);  if (depth < kMaxDepth) unit_0082(c, 151u, depth + 1u); else { c.pc = 0x0030AB68u; return; } if (c.pc != 0x001E264Cu) [[unlikely]] return; }
L_001E264C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2658u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x001E2658u) [[unlikely]] return; }
L_001E2658:
    set32(c.r[2], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E26E8; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001E26E8; } }
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
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 18712u)));
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E26C0u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E26C0u) [[unlikely]] return; }
L_001E26C0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 18712u)));
    set32(c.r[8], c.r[8].w[0] + 20072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E26E8u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x001E26E8u) [[unlikely]] return; }
L_001E26E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E26F0u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x001E26F0u) [[unlikely]] return; }
L_001E26F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E26F8u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x001E26F8u) [[unlikely]] return; }
L_001E26F8:
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
L_001E2720:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E274Cu);  if (depth < kMaxDepth) unit_007A(c, 259u, depth + 1u); else { c.pc = 0x002EB8A8u; return; } if (c.pc != 0x001E274Cu) [[unlikely]] return; }
L_001E274C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E275Cu);  if (depth < kMaxDepth) unit_0095(c, 127u, depth + 1u); else { c.pc = 0x003550F8u; return; } if (c.pc != 0x001E275Cu) [[unlikely]] return; }
L_001E275C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] + 29712u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E276Cu);  if (depth < kMaxDepth) unit_0094(c, 379u, depth + 1u); else { c.pc = 0x00353ED8u; return; } if (c.pc != 0x001E276Cu) [[unlikely]] return; }
L_001E276C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], c.r[4].w[0] + 20032u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E277Cu);  if (depth < kMaxDepth) unit_0095(c, 379u, depth + 1u); else { c.pc = 0x00356F20u; return; } if (c.pc != 0x001E277Cu) [[unlikely]] return; }
L_001E277C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 12912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E278Cu);  if (depth < kMaxDepth) unit_0067(c, 259u, depth + 1u); else { c.pc = 0x0029E7E0u; return; } if (c.pc != 0x001E278Cu) [[unlikely]] return; }
L_001E278C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2794u);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x001E2794u) [[unlikely]] return; }
L_001E2794:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E27A4u);  if (depth < kMaxDepth) unit_0077(c, 27u, depth + 1u); else { c.pc = 0x002DC6B8u; return; } if (c.pc != 0x001E27A4u) [[unlikely]] return; }
L_001E27A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 32380u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E27B4u);  if (depth < kMaxDepth) unit_006C(c, 89u, depth + 1u); else { c.pc = 0x002B0F10u; return; } if (c.pc != 0x001E27B4u) [[unlikely]] return; }
L_001E27B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E27BCu);  if (depth < kMaxDepth) unit_002B(c, 207u, depth + 1u); else { c.pc = 0x001ADCE8u; return; } if (c.pc != 0x001E27BCu) [[unlikely]] return; }
L_001E27BC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 11856u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E27D4u);  if (depth < kMaxDepth) unit_008C(c, 101u, depth + 1u); else { c.pc = 0x00331418u; return; } if (c.pc != 0x001E27D4u) [[unlikely]] return; }
L_001E27D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E27E8u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x001E27E8u) [[unlikely]] return; }
L_001E27E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E27F4u);  if (depth < kMaxDepth) unit_008C(c, 46u, depth + 1u); else { c.pc = 0x00330D30u; return; } if (c.pc != 0x001E27F4u) [[unlikely]] return; }
L_001E27F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2800u);  if (depth < kMaxDepth) unit_008F(c, 7u, depth + 1u); else { c.pc = 0x0033C138u; return; } if (c.pc != 0x001E2800u) [[unlikely]] return; }
L_001E2800:
    set32(c.r[6], ld32((c.r[18].w[0] - 368u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 20664u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2820u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E2820u) [[unlikely]] return; }
L_001E2820:
    set32(c.r[4], ld32((c.r[17].w[0] + 20664u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E282Cu);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001E282Cu) [[unlikely]] return; }
L_001E282C:
    set32(c.r[6], ld32((c.r[18].w[0] - 368u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 20668u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
L_001E2840:
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E284Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E284Cu) [[unlikely]] return; }
L_001E284C:
    set32(c.r[4], ld32((c.r[19].w[0] + 20668u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2858u);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001E2858u) [[unlikely]] return; }
L_001E2858:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E2878:
    set32(c.r[29], c.r[29].w[0] - 1040u);
    st128((c.r[29].w[0] + 1008u) & ~15u, c.r[16]);
    c.budget -= 2;
L_001E2880:
    st128((c.r[29].w[0] + 992u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 976u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[29].w[0] + 256u);
    st128((c.r[29].w[0] + 960u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 944u) & ~15u, c.r[20]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 928u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 912u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 896u) & ~15u, c.r[23]);
    set32(c.r[5], c.r[5].w[0] + 3056u);
    st128((c.r[29].w[0] + 880u) & ~15u, c.r[30]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 864u), c.r[31].d[0]);
    c.r[23].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 1024u), c.f[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[30].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 104u)));
    st32((c.r[29].w[0] + 848u), c.r[7].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E28E0u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001E28E0u) [[unlikely]] return; }
L_001E28E0:
    set32(c.r[16], c.r[29].w[0] + 288u);
    set32(c.r[6], ld32((c.r[18].w[0] + 104u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3072u);
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2900u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001E2900u) [[unlikely]] return; }
L_001E2900:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 852u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2910u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001E2910u) [[unlikely]] return; }
L_001E2910:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2920u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001E2920u) [[unlikely]] return; }
L_001E2920:
    set32(c.r[4], ld32((c.r[19].w[0] + 9488u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2934u);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x001E2934u) [[unlikely]] return; }
L_001E2934:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001E29FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], c.r[29].w[0] + 320u);
    set32(c.r[18], c.r[2].w[0] + 14208u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2978u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001E2978u) [[unlikely]] return; }
L_001E2978:
    c.f[12] = ld32((c.r[29].w[0] + 448u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 452u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[29].w[0] + 456u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2994u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001E2994u) [[unlikely]] return; }
L_001E2994:
    set32(c.r[4], ld32((c.r[30].w[0] + 9488u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E29A4u);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x001E29A4u) [[unlikely]] return; }
L_001E29A4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001E29FC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E29D4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001E29D4u) [[unlikely]] return; }
L_001E29D4:
    c.f[12] = ld32((c.r[29].w[0] + 448u));
    c.f[15] = c.f[20];
    set32(c.r[4], ld32((c.r[29].w[0] + 848u)));
    c.f[13] = ld32((c.r[29].w[0] + 452u));
    c.f[14] = ld32((c.r[29].w[0] + 456u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E29F0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001E29F0u) [[unlikely]] return; }
L_001E29F0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2C20; } }
L_001E29FC:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_001E2A00:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 3024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2A14u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001E2A14u) [[unlikely]] return; }
L_001E2A14:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 3040u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2A2Cu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001E2A2Cu) [[unlikely]] return; }
L_001E2A2C:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2A38u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001E2A38u) [[unlikely]] return; }
L_001E2A38:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2A48u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001E2A48u) [[unlikely]] return; }
L_001E2A48:
    set32(c.r[4], ld32((c.r[30].w[0] + 9488u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2A5Cu);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x001E2A5Cu) [[unlikely]] return; }
L_001E2A5C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001E2C04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[18], c.r[29].w[0] + 320u);
    set32(c.r[19], c.r[2].w[0] + 14208u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2AA0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001E2AA0u) [[unlikely]] return; }
L_001E2AA0:
    c.f[12] = ld32((c.r[29].w[0] + 448u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 452u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[29].w[0] + 456u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2ABCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001E2ABCu) [[unlikely]] return; }
L_001E2ABC:
    set32(c.r[4], ld32((c.r[30].w[0] + 9488u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2ACCu);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x001E2ACCu) [[unlikely]] return; }
L_001E2ACC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_001E2BBC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3096u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2AF8u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001E2AF8u) [[unlikely]] return; }
L_001E2AF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 3024u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2B10u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001E2B10u) [[unlikely]] return; }
L_001E2B10:
    set32(c.r[6], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 3040u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2B28u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001E2B28u) [[unlikely]] return; }
L_001E2B28:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2B34u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001E2B34u) [[unlikely]] return; }
L_001E2B34:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2B44u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001E2B44u) [[unlikely]] return; }
L_001E2B44:
    set32(c.r[4], ld32((c.r[30].w[0] + 9488u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2B58u);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x001E2B58u) [[unlikely]] return; }
L_001E2B58:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[20].d[0];  if (t) { goto L_001E2C1C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2B84u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001E2B84u) [[unlikely]] return; }
L_001E2B84:
    c.f[12] = ld32((c.r[29].w[0] + 448u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 452u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[29].w[0] + 456u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2BA0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001E2BA0u) [[unlikely]] return; }
L_001E2BA0:
    set32(c.r[4], ld32((c.r[30].w[0] + 9488u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2BB0u);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x001E2BB0u) [[unlikely]] return; }
L_001E2BB0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[20].d[0];  if (t) { goto L_001E2C1C; } }
L_001E2BBC:
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 852u), c.r[10].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2BE0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001E2BE0u) [[unlikely]] return; }
L_001E2BE0:
    c.f[12] = ld32((c.r[29].w[0] + 448u));
    c.f[15] = c.f[20];
    set32(c.r[4], ld32((c.r[29].w[0] + 848u)));
    c.f[13] = ld32((c.r[29].w[0] + 452u));
    c.f[14] = ld32((c.r[29].w[0] + 456u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2BFCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001E2BFCu) [[unlikely]] return; }
L_001E2BFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2C1C; } }
    goto L_001E2C04;
L_001E2C00:
    c.budget -= 1;
L_001E2C04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3160u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C1Cu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001E2C1Cu) [[unlikely]] return; }
L_001E2C1C:
    set32(c.r[2], ld32((c.r[29].w[0] + 852u)));
    c.budget -= 1;
L_001E2C20:
    ld128((c.r[29].w[0] + 1008u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 992u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 976u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 960u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 944u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 928u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 912u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 896u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 880u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 864u));
    c.f[20] = ld32((c.r[29].w[0] + 1024u));
    set32(c.r[29], c.r[29].w[0] + 1040u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E2C58:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 1u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    set32(c.r[23], 0u + 96u);
    st32((c.r[29].w[0] + 224u), c.f[20]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2CA4u);  if (depth < kMaxDepth) unit_003D(c, 212u, depth + 1u); else { c.pc = 0x001F7468u; return; } if (c.pc != 0x001E2CA4u) [[unlikely]] return; }
L_001E2CA4:
    c.f[20] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2CB0u);  if (depth < kMaxDepth) unit_0039(c, 407u, depth + 1u); else { c.pc = 0x001E7C00u; return; } if (c.pc != 0x001E2CB0u) [[unlikely]] return; }
L_001E2CB0:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[3].w[0] - 26368u), 0u);
    st32((c.r[4].w[0] - 26124u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2CCCu);  if (depth < kMaxDepth) unit_001D(c, 49u, depth + 1u); else { c.pc = 0x00174B28u; return; } if (c.pc != 0x001E2CCCu) [[unlikely]] return; }
L_001E2CCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 2056u);
    set32(c.r[20], c.r[2].w[0] + 132u);
    set32(c.r[21], c.r[2].w[0] + 152u);
    c.budget -= 5;
L_001E2CE0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[30].w[0] - 14960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2CF0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001E2CF0u) [[unlikely]] return; }
L_001E2CF0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[17].w[0] + 11264u), c.r[20].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2D04u);  if (depth < kMaxDepth) unit_0037(c, 185u, depth + 1u); else { c.pc = 0x001DD550u; return; } if (c.pc != 0x001E2D04u) [[unlikely]] return; }
L_001E2D04:
    set32(c.r[6], 0u + 40u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[20].w[0]), c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2D1Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001E2D1Cu) [[unlikely]] return; }
L_001E2D1C:
    st32((c.r[17].w[0] + 10372u), c.r[21].w[0]);
    set32(c.r[4], c.r[17].w[0] + 10280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2D2Cu);  if (depth < kMaxDepth) unit_009E(c, 69u, depth + 1u); else { c.pc = 0x00378A08u; return; } if (c.pc != 0x001E2D2Cu) [[unlikely]] return; }
L_001E2D2C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2D38u);  if (depth < kMaxDepth) unit_001D(c, 60u, depth + 1u); else { c.pc = 0x00174C80u; return; } if (c.pc != 0x001E2D38u) [[unlikely]] return; }
L_001E2D38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2D48u);  if (depth < kMaxDepth) unit_0036(c, 425u, depth + 1u); else { c.pc = 0x001DB160u; return; } if (c.pc != 0x001E2D48u) [[unlikely]] return; }
L_001E2D48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] - 29784u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2D60u);  if (depth < kMaxDepth) unit_0036(c, 422u, depth + 1u); else { c.pc = 0x001DB0D0u; return; } if (c.pc != 0x001E2D60u) [[unlikely]] return; }
L_001E2D60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2D6Cu);  if (depth < kMaxDepth) unit_0070(c, 15u, depth + 1u); else { c.pc = 0x002C0378u; return; } if (c.pc != 0x001E2D6Cu) [[unlikely]] return; }
L_001E2D6C:
    st32((c.r[17].w[0] + 13048u), c.f[20]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[17].w[0] + 13044u), c.f[20]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 13040u), c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2D88u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001E2D88u) [[unlikely]] return; }
L_001E2D88:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 12840u), 0u);
    st32((c.r[17].w[0] + 13124u), 0u);
    c.f[12] = c.f[20];
    st32((c.r[17].w[0] + 13080u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 12936u), c.f[20]);
    st16((c.r[17].w[0] + 12870u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2DB0u);  if (depth < kMaxDepth) unit_0089(c, 195u, depth + 1u); else { c.pc = 0x00326150u; return; } if (c.pc != 0x001E2DB0u) [[unlikely]] return; }
L_001E2DB0:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 12828u), 0u);
    st32((c.r[17].w[0] + 10816u), c.f[20]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[17].w[0] + 10820u), c.f[20]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 10824u), c.f[20]);
    st32((c.r[17].w[0] + 10828u), c.f[20]);
    st32((c.r[17].w[0] + 12816u), c.r[3].w[0]);
    st64((c.r[17].w[0] + 560u), c.r[2].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2DE8u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x001E2DE8u) [[unlikely]] return; }
L_001E2DE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2DF8u);  if (depth < kMaxDepth) unit_0036(c, 431u, depth + 1u); else { c.pc = 0x001DB2D0u; return; } if (c.pc != 0x001E2DF8u) [[unlikely]] return; }
L_001E2DF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 12960u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2E18u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001E2E18u) [[unlikely]] return; }
L_001E2E18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xACDC0000u);
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 44252ull;
    st32((c.r[17].w[0] + 11916u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E30C0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2E40u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001E2E40u) [[unlikely]] return; }
L_001E2E40:
    st8((c.r[17].w[0] + 10090u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2E54u);  if (depth < kMaxDepth) unit_0069(c, 91u, depth + 1u); else { c.pc = 0x002A6188u; return; } if (c.pc != 0x001E2E54u) [[unlikely]] return; }
L_001E2E54:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2E64u);  if (depth < kMaxDepth) unit_0036(c, 431u, depth + 1u); else { c.pc = 0x001DB2D0u; return; } if (c.pc != 0x001E2E64u) [[unlikely]] return; }
L_001E2E64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2E74u);  if (depth < kMaxDepth) unit_0049(c, 147u, depth + 1u); else { c.pc = 0x00226000u; return; } if (c.pc != 0x001E2E74u) [[unlikely]] return; }
L_001E2E74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 3484u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E2FF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2E8Cu);  if (depth < kMaxDepth) unit_0036(c, 411u, depth + 1u); else { c.pc = 0x001DAF70u; return; } if (c.pc != 0x001E2E8Cu) [[unlikely]] return; }
L_001E2E8C:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2EA8u);  if (depth < kMaxDepth) unit_0038(c, 388u, depth + 1u); else { c.pc = 0x001E2878u; return; } if (c.pc != 0x001E2EA8u) [[unlikely]] return; }
L_001E2EA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E2F04; } }
    c.f[1] = ld32((c.r[29].w[0]));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 128u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    st32((c.r[17].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    st16((c.r[17].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 7668u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2EE4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001E2EE4u) [[unlikely]] return; }
L_001E2EE4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2EF4u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x001E2EF4u) [[unlikely]] return; }
L_001E2EF4:
    c.f[12] = ld32((c.r[29].w[0] + 48u));
    c.f[13] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3068; } }
L_001E2F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2F0Cu);  if (depth < kMaxDepth) unit_0036(c, 411u, depth + 1u); else { c.pc = 0x001DAF70u; return; } if (c.pc != 0x001E2F0Cu) [[unlikely]] return; }
L_001E2F0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2F24u);  if (depth < kMaxDepth) unit_0038(c, 388u, depth + 1u); else { c.pc = 0x001E2878u; return; } if (c.pc != 0x001E2F24u) [[unlikely]] return; }
L_001E2F24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E2F80; } }
    c.f[1] = ld32((c.r[29].w[0]));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 128u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    st32((c.r[17].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    st16((c.r[17].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 7668u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2F60u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001E2F60u) [[unlikely]] return; }
L_001E2F60:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2F70u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x001E2F70u) [[unlikely]] return; }
L_001E2F70:
    c.f[12] = ld32((c.r[29].w[0] + 48u));
    c.f[13] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3068; } }
L_001E2F80:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2F98u);  if (depth < kMaxDepth) unit_0038(c, 388u, depth + 1u); else { c.pc = 0x001E2878u; return; } if (c.pc != 0x001E2F98u) [[unlikely]] return; }
L_001E2F98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3088; } }
    c.f[1] = ld32((c.r[29].w[0]));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 128u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    st32((c.r[17].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    st16((c.r[17].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 7668u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2FD4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001E2FD4u) [[unlikely]] return; }
L_001E2FD4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2FE4u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x001E2FE4u) [[unlikely]] return; }
L_001E2FE4:
    c.f[12] = ld32((c.r[29].w[0] + 48u));
    c.f[13] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3068; } }
L_001E2FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2FFCu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E2FFCu) [[unlikely]] return; }
L_001E2FFC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3008u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E3008u) [[unlikely]] return; }
L_001E3008:
    mmi::mult(c, 0, c.r[18].w[0], c.r[23].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 19296u);
    set32(c.r[5], c.r[5].w[0] + 19312u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[17].w[0] + 128u), c.f[1]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[17].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    st16((c.r[17].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 7668u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3050u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001E3050u) [[unlikely]] return; }
L_001E3050:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3060u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x001E3060u) [[unlikely]] return; }
L_001E3060:
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    c.f[13] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 2;
L_001E3068:
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3078u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x001E3078u) [[unlikely]] return; }
L_001E3078:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.budget -= 4;
L_001E3088:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[22].w[0] - 11856u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 15u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E30A8u);  if (depth < kMaxDepth) unit_008E(c, 336u, depth + 1u); else { c.pc = 0x0033BA60u; return; } if (c.pc != 0x001E30A8u) [[unlikely]] return; }
L_001E30A8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E30B8u);  if (depth < kMaxDepth) unit_008E(c, 362u, depth + 1u); else { c.pc = 0x0033BEC0u; return; } if (c.pc != 0x001E30B8u) [[unlikely]] return; }
L_001E30B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E30F4; } }
L_001E30C0:
    st32((c.r[17].w[0] + 504u), 0u);
    set32(c.r[4], c.r[22].w[0] - 11856u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 15u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E30E4u);  if (depth < kMaxDepth) unit_008E(c, 336u, depth + 1u); else { c.pc = 0x0033BA60u; return; } if (c.pc != 0x001E30E4u) [[unlikely]] return; }
L_001E30E4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E30F4u);  if (depth < kMaxDepth) unit_008E(c, 362u, depth + 1u); else { c.pc = 0x0033BEC0u; return; } if (c.pc != 0x001E30F4u) [[unlikely]] return; }
L_001E30F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3104u);  if (depth < kMaxDepth) unit_0073(c, 185u, depth + 1u); else { c.pc = 0x002CEBD8u; return; } if (c.pc != 0x001E3104u) [[unlikely]] return; }
L_001E3104:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[21], c.r[21].w[0] + 132u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3118u);  if (depth < kMaxDepth) unit_0073(c, 183u, depth + 1u); else { c.pc = 0x002CEBA8u; return; } if (c.pc != 0x001E3118u) [[unlikely]] return; }
L_001E3118:
    set32(c.r[20], c.r[20].w[0] + 132u);
    c.r[2].d[0] = c.r[18].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2CE0u | kUnwind; return; } goto L_001E2CE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[18], 0u + 1u);
    st32((c.r[2].w[0] + 3484u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E313Cu);  if (depth < kMaxDepth) unit_003B(c, 169u, depth + 1u); else { c.pc = 0x001EE7B8u; return; } if (c.pc != 0x001E313Cu) [[unlikely]] return; }
L_001E313C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3144u);  if (depth < kMaxDepth) unit_003B(c, 183u, depth + 1u); else { c.pc = 0x001EE960u; return; } if (c.pc != 0x001E3144u) [[unlikely]] return; }
L_001E3144:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 21992u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3154u);  if (depth < kMaxDepth) unit_002A(c, 430u, depth + 1u); else { c.pc = 0x001ABBA0u; return; } if (c.pc != 0x001E3154u) [[unlikely]] return; }
L_001E3154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[2], c.r[2].w[0] + 28920u);
    st32((c.r[3].w[0] - 17856u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E316Cu);  if (depth < kMaxDepth) unit_0081(c, 157u, depth + 1u); else { c.pc = 0x00305FD0u; return; } if (c.pc != 0x001E316Cu) [[unlikely]] return; }
L_001E316C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], c.r[4].w[0] + 20032u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E317Cu);  if (depth < kMaxDepth) unit_0095(c, 381u, depth + 1u); else { c.pc = 0x00356F40u; return; } if (c.pc != 0x001E317Cu) [[unlikely]] return; }
L_001E317C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 19088u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E318Cu);  if (depth < kMaxDepth) unit_0089(c, 304u, depth + 1u); else { c.pc = 0x003278C0u; return; } if (c.pc != 0x001E318Cu) [[unlikely]] return; }
L_001E318C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E319Cu);  if (depth < kMaxDepth) unit_0062(c, 8u, depth + 1u); else { c.pc = 0x002880B0u; return; } if (c.pc != 0x001E319Cu) [[unlikely]] return; }
L_001E319C:
    set32(c.r[4], c.r[22].w[0] - 11856u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E31A8u);  if (depth < kMaxDepth) unit_008E(c, 286u, depth + 1u); else { c.pc = 0x0033B1D8u; return; } if (c.pc != 0x001E31A8u) [[unlikely]] return; }
L_001E31A8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[30].w[0] - 14960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E31B8u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001E31B8u) [[unlikely]] return; }
L_001E31B8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E31CCu);  if (depth < kMaxDepth) unit_0069(c, 91u, depth + 1u); else { c.pc = 0x002A6188u; return; } if (c.pc != 0x001E31CCu) [[unlikely]] return; }
L_001E31CC:
    c.r[2].d[0] = c.r[18].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E31A8u | kUnwind; return; } goto L_001E31A8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 13248u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E31E8u);  if (depth < kMaxDepth) unit_0010(c, 282u, depth + 1u); else { c.pc = 0x001436F0u; return; } if (c.pc != 0x001E31E8u) [[unlikely]] return; }
L_001E31E8:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3220:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001E33D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E33D8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[6].w[0] + 12224u);
    set32(c.r[3], c.r[3].w[0] + 3480u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[5], 0u + 256u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[6].w[0] + 12224u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 3984u);
    set32(c.r[5], c.r[2].w[0] + 16u);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], 0u + 31u);
    c.budget -= 14;
L_001E3288:
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] >> 1);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3288u | kUnwind; return; } goto L_001E3288; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 12400u);
    set32(c.r[2], c.r[2].w[0] + 3432u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[17], c.r[17].w[0] + 12416u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E32C8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001E32C8u) [[unlikely]] return; }
L_001E32C8:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1992u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E32E4u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001E32E4u) [[unlikely]] return; }
L_001E32E4:
    set32(c.r[18], c.r[18].w[0] + 12432u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 3384u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] + 12448u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3308u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001E3308u) [[unlikely]] return; }
L_001E3308:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2008u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3324u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001E3324u) [[unlikely]] return; }
L_001E3324:
    set32(c.r[19], c.r[19].w[0] + 12704u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 3336u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 12720u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3348u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001E3348u) [[unlikely]] return; }
L_001E3348:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2024u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3360u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001E3360u) [[unlikely]] return; }
L_001E3360:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E336Cu);  if (depth < kMaxDepth) unit_0039(c, 74u, depth + 1u); else { c.pc = 0x001E4968u; return; } if (c.pc != 0x001E336Cu) [[unlikely]] return; }
L_001E336C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3378u);  if (depth < kMaxDepth) unit_0039(c, 76u, depth + 1u); else { c.pc = 0x001E4998u; return; } if (c.pc != 0x001E3378u) [[unlikely]] return; }
L_001E3378:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 3288u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3390u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001E3390u) [[unlikely]] return; }
L_001E3390:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3216u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E33A8u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001E33A8u) [[unlikely]] return; }
L_001E33A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 3240u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E33C0u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001E33C0u) [[unlikely]] return; }
L_001E33C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3224u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E33D8u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001E33D8u) [[unlikely]] return; }
L_001E33D8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3400:
    st32((c.r[4].w[0] + 60u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3410:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3420:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19360u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3438:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19364u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3450:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19368u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3468:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19372u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3480:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19376u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3498:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19380u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E34B0:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19384u), c.f[12]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E34C8:
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[7], 0u + 96u);
    set32(c.r[3], 0u - 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[6].w[0] + 31u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    set32(c.r[7], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.r[7].d[0] = c.r[7].d[0] & 31ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].d[0] = c.r[6].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 26584u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 19436u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = ~(c.r[2].d[0] | c.r[5].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3540:
    set32(c.r[7], 0u + 96u);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] + 31u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    set32(c.r[7], c.r[7].w[0] - 26584u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.r[6].d[0] = c.r[6].d[0] & 31ull;
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19428u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].d[0] = ~(0ull | c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E35A0:
    set32(c.r[4], c.r[4].w[0] + 21548u);
    set32(c.r[2], 0u + 499u);
    c.budget -= 2;
L_001E35A8:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E35A8u | kUnwind; return; } goto L_001E35A8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E35C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 12224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E35E0u);  if (depth < kMaxDepth) unit_0038(c, 511u, depth + 1u); else { c.pc = 0x001E3660u; return; } if (c.pc != 0x001E35E0u) [[unlikely]] return; }
L_001E35E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E35F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 12228u)));
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 4;
L_001E3600:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 616u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3618u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001E3618u) [[unlikely]] return; }
L_001E3618:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3628:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 12228u)));
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 656u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3650u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001E3650u) [[unlikely]] return; }
L_001E3650:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3660:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3670u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E3670u) [[unlikely]] return; }
L_001E3670:
    set32(c.r[2], c.r[2].w[0] + 196u);
    set32(c.r[3], 0u + 7u);
    c.budget -= 2;
L_001E3678:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3678u | kUnwind; return; } goto L_001E3678; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E36A0:
    set32(c.r[4], c.r[4].w[0] + 172u);
    set32(c.r[2], 0u + 7u);
    c.budget -= 2;
L_001E36A8:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E36A8u | kUnwind; return; } goto L_001E36A8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E36C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E36E8u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E36E8u) [[unlikely]] return; }
L_001E36E8:
    c.r[3].d[0] = c.r[16].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] + 168u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[16].d[0] = c.r[16].d[0] & 28ull;
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3750u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E3750u) [[unlikely]] return; }
L_001E3750:
    c.r[3].d[0] = c.r[16].d[0] & 31ull;
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = c.r[16].d[0] & 28ull;
    set32(c.r[2], c.r[2].w[0] + 168u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 144u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = ~(0ull | c.r[4].d[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E37B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E37D8u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E37D8u) [[unlikely]] return; }
L_001E37D8:
    c.r[3].d[0] = c.r[16].d[0] & 31ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[16].d[0] = c.r[16].d[0] & 28ull;
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3818:
    c.r[3].d[0] = c.r[5].d[0] & 31ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[5].d[0] = c.r[5].d[0] & 28ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 144u)));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3848:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3868u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E3868u) [[unlikely]] return; }
L_001E3868:
    c.r[4].d[0] = c.r[16].d[0] & 31ull;
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[16].d[0] = c.r[16].d[0] & 28ull;
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 168u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E38A8; } }
    set32(c.r[3], c.r[17].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_001E38A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E38C0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 3480u);
    set32(c.r[3], c.r[3].w[0] + 3984u);
    set32(c.r[4], 0u + 256u);
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[3], 0u + 31u);
    st32((c.r[5].w[0] + 4u), 0u);
    c.budget -= 14;
L_001E38F8:
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] >> 1);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E38F8u | kUnwind; return; } goto L_001E38F8; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3920:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 136u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001E393C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E393C:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E394C; } }
L_001E3948:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001E394C:
    set32(c.r[6], c.r[8].w[0] + 6672u);
    set32(c.r[4], c.r[7].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E3988; } }
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3948u | kUnwind; return; } goto L_001E3948; } }
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3948u | kUnwind; return; } goto L_001E3948; } }
L_001E3988:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3998:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[2].w[0] + 6776u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    set32(c.r[17], c.r[20].w[0] << 2);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001E3A98; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[19], c.r[3].w[0] + 6744u);
    set32(c.r[23], 0u + 2u);
    set32(c.r[22], 0u + 1u);
    c.budget -= 5;
L_001E3A00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 7088u);
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E3A40; } }
    set32(c.r[3], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[23].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3A7C; } }
L_001E3A40:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3A4Cu);  if (depth < kMaxDepth) unit_0039(c, 13u, depth + 1u); else { c.pc = 0x001E4170u; return; } if (c.pc != 0x001E3A4Cu) [[unlikely]] return; }
L_001E3A4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3A6C; } }
    set32(c.r[3], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[22].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3A7C; } }
L_001E3A6C:
    set32(c.r[3], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_001E3A7C:
    set32(c.r[17], c.r[20].w[0] << 2);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[17].w[0] + c.r[30].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3A00u | kUnwind; return; } goto L_001E3A00; } }
L_001E3A98:
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
L_001E3AD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[8], c.r[2].w[0] + 6672u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[7], c.r[5].w[0] << 3);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E3B20; } }
    set32(c.r[3], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3B3C; } }
L_001E3B20:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001E3B48; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 136u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E3B48; } }
L_001E3B3C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3BA4; } }
L_001E3B48:
    set32(c.r[3], c.r[9].w[0] + 6672u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + 4u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E3BA0; } }
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_001E3B78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3B84u);  if (depth < kMaxDepth) unit_0039(c, 13u, depth + 1u); else { c.pc = 0x001E4170u; return; } if (c.pc != 0x001E3B84u) [[unlikely]] return; }
L_001E3B84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3B3Cu | kUnwind; return; } goto L_001E3B3C; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3B78u | kUnwind; return; } goto L_001E3B78; } }
L_001E3BA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E3BA4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3BC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 6;
L_001E3BD8:
    set32(c.r[4], c.r[17].w[0] + 12224u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3BE8u);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x001E3BE8u) [[unlikely]] return; }
L_001E3BE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3C08; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3C08; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3C18; } }
L_001E3C08:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3BD8u | kUnwind; return; } goto L_001E3BD8; } }
L_001E3C18:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3C30:
    set32(c.r[2], 0u + 20u);
    set32(c.r[29], c.r[29].w[0] - 112u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] - 29676u), c.r[7].w[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[20], c.r[6].w[0] << 5);
    c.budget -= 18;
L_001E3C78:
    set32(c.r[5], c.r[17].w[0] + c.r[20].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3C88u);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x001E3C88u) [[unlikely]] return; }
L_001E3C88:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[5].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E3CD4; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3CD4; } }
    st32((c.r[16].w[0]), c.r[18].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] - 29676u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[19].w[0] - 29676u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 20u);
    c.budget -= 11;
L_001E3CD4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3C78u | kUnwind; return; } goto L_001E3C78; } }
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
L_001E3D08:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[5].w[0] << 5);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], 0u + 1u);
    c.budget -= 10;
L_001E3D30:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3D40u);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x001E3D40u) [[unlikely]] return; }
L_001E3D40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3D60; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001E3D60; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3D74; } }
L_001E3D60:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3D30u | kUnwind; return; } goto L_001E3D30; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E3D74:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3D98:
    set32(c.r[2], 0u + 20u);
    set32(c.r[29], c.r[29].w[0] - 160u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    set32(c.r[16], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[3].w[0] - 29676u), c.r[6].w[0]);
    c.budget -= 20;
L_001E3DE8:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[18].w[0] << 5);
    set32(c.r[20], c.r[18].w[0] + 370u);
    set32(c.r[21], c.r[16].w[0] + 20u);
    set32(c.r[23], c.r[18].w[0] + 1u);
    c.budget -= 6;
L_001E3E00:
    set32(c.r[5], c.r[17].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3E14u);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x001E3E14u) [[unlikely]] return; }
L_001E3E14:
    c.r[3].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3E30; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001E3E84; } }
L_001E3E30:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3E00u | kUnwind; return; } goto L_001E3E00; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E3E3C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E3E90; } }
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3E60u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001E3E60u) [[unlikely]] return; }
L_001E3E60:
    set32(c.r[3], ld32((c.r[22].w[0] - 29676u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[22].w[0] - 29676u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3EC4; } }
L_001E3E84:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3E3Cu | kUnwind; return; } goto L_001E3E3C; } }
L_001E3E90:
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3EA8u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001E3EA8u) [[unlikely]] return; }
L_001E3EA8:
    set32(c.r[3], ld32((c.r[22].w[0] - 29676u)));
    set32(c.r[4], 0u + 3u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[22].w[0] - 29676u), c.r[3].w[0]);
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 7;
L_001E3EC4:
    c.r[18].d[0] = c.r[23].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3DE8u | kUnwind; return; } goto L_001E3DE8; } }
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
L_001E3F08:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
L_001E3F28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3F38u);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x001E3F38u) [[unlikely]] return; }
L_001E3F38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3F50; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_001E3F50:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3F28u | kUnwind; return; } goto L_001E3F28; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3F80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], c.r[2].w[0] + 12240u);
    c.budget -= 10;
L_001E3FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3FB0u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001E3FB0u) [[unlikely]] return; }
L_001E3FB0:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));
    c.r[4].d[0] = c.r[16].d[0] & 31ull;
    c.r[3].d[0] = c.r[3].d[0] & 28ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 168u)));
    set32(c.r[5], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[16].sd[0] < 256ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    if (c.r[3].d[0] != 0) c.r[17].d[0] = c.r[5].d[0];
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3FA8u | kUnwind; return; } goto L_001E3FA8; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    [[clang::musttail]] return unit_0039(c, 1u, depth);
}

}
