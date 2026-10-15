#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0012[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0,
    0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 91,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 103, 104, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 0, 0, 109, 0, 110, 0, 111, 112, 0, 113, 0, 114,
    115, 0, 116, 0, 0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 125, 0, 0, 0, 0, 126, 127, 0, 128, 0, 129, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 132, 0, 0, 0, 0, 133, 134, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 137, 138, 0, 0, 0,
    0, 139, 140, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 143, 144, 0, 0, 0, 0, 145, 146, 0, 147, 0, 148, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 152, 0, 153, 0, 0, 154, 0, 155, 0, 0, 156, 0, 157, 0, 0,
    158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 165, 0,
    166, 0, 0, 167, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183,
    0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0,
    0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 219, 220, 0, 0, 0, 221, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 0,
    228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0,
    0, 241, 0, 0, 0, 0, 0, 242, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0,
    0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264,
    265, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 270, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0,
    274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 277, 0, 278, 0, 0, 0, 279, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0,
    0, 0, 284, 0, 0, 0, 285, 0, 286, 0, 287, 0, 0, 0, 288, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 292, 0, 293, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 297, 0, 298, 0, 299, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306,
    307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0,
    333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0,
    0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0,
    354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0,
    0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 377, 0,
    0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 383,
    0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390,
    0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400,
    0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0,
    0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0,
    412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 418,
    0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0,
    0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0,
    0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0,
    0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 449, 0, 450, 0, 0, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0,
    0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0,
    469, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0,
    0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 479, 0,
    0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0,
    0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0,
    501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0,
};

void unit_0012(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00148000;
    case 2u: goto L_00148018;
    case 3u: goto L_00148030;
    case 4u: goto L_00148048;
    case 5u: goto L_00148080;
    case 6u: goto L_00148090;
    case 7u: goto L_001480B0;
    case 8u: goto L_001480C0;
    case 9u: goto L_001480C8;
    case 10u: goto L_00148100;
    case 11u: goto L_00148144;
    case 12u: goto L_00148188;
    case 13u: goto L_001481D8;
    case 14u: goto L_00148208;
    case 15u: goto L_00148224;
    case 16u: goto L_00148238;
    case 17u: goto L_001482A4;
    case 18u: goto L_001482C8;
    case 19u: goto L_001482E0;
    case 20u: goto L_00148328;
    case 21u: goto L_00148348;
    case 22u: goto L_00148360;
    case 23u: goto L_001483E8;
    case 24u: goto L_00148424;
    case 25u: goto L_0014843C;
    case 26u: goto L_001484B0;
    case 27u: goto L_001484D4;
    case 28u: goto L_001484F8;
    case 29u: goto L_00148510;
    case 30u: goto L_00148548;
    case 31u: goto L_00148570;
    case 32u: goto L_001485C8;
    case 33u: goto L_001485E8;
    case 34u: goto L_00148600;
    case 35u: goto L_00148660;
    case 36u: goto L_00148670;
    case 37u: goto L_001486D8;
    case 38u: goto L_00148728;
    case 39u: goto L_00148738;
    case 40u: goto L_00148748;
    case 41u: goto L_00148770;
    case 42u: goto L_00148788;
    case 43u: goto L_00148798;
    case 44u: goto L_001487B0;
    case 45u: goto L_00148810;
    case 46u: goto L_00148840;
    case 47u: goto L_00148860;
    case 48u: goto L_00148878;
    case 49u: goto L_00148880;
    case 50u: goto L_001488C0;
    case 51u: goto L_001488C8;
    case 52u: goto L_001488D8;
    case 53u: goto L_001488F4;
    case 54u: goto L_00148900;
    case 55u: goto L_0014892C;
    case 56u: goto L_00148950;
    case 57u: goto L_00148964;
    case 58u: goto L_00148974;
    case 59u: goto L_00148988;
    case 60u: goto L_0014899C;
    case 61u: goto L_001489AC;
    case 62u: goto L_001489C0;
    case 63u: goto L_001489D0;
    case 64u: goto L_001489E8;
    case 65u: goto L_00148A00;
    case 66u: goto L_00148A18;
    case 67u: goto L_00148A38;
    case 68u: goto L_00148A58;
    case 69u: goto L_00148A78;
    case 70u: goto L_00148A94;
    case 71u: goto L_00148AB0;
    case 72u: goto L_00148AEC;
    case 73u: goto L_00148B08;
    case 74u: goto L_00148B20;
    case 75u: goto L_00148B90;
    case 76u: goto L_00148BD0;
    case 77u: goto L_00148C00;
    case 78u: goto L_00148C1C;
    case 79u: goto L_00148C30;
    case 80u: goto L_00148CB0;
    case 81u: goto L_00148CC0;
    case 82u: goto L_00148CD8;
    case 83u: goto L_00148D00;
    case 84u: goto L_00148D18;
    case 85u: goto L_00148D30;
    case 86u: goto L_00148D60;
    case 87u: goto L_00148D78;
    case 88u: goto L_00148DC0;
    case 89u: goto L_00148DD8;
    case 90u: goto L_00148DF0;
    case 91u: goto L_00148DFC;
    case 92u: goto L_00148E0C;
    case 93u: goto L_00148E68;
    case 94u: goto L_00148E88;
    case 95u: goto L_00148EA0;
    case 96u: goto L_00148EC0;
    case 97u: goto L_00148ED8;
    case 98u: goto L_00148EEC;
    case 99u: goto L_00148F10;
    case 100u: goto L_00148F28;
    case 101u: goto L_00148F38;
    case 102u: goto L_00148F48;
    case 103u: goto L_00148F90;
    case 104u: goto L_00148F94;
    case 105u: goto L_00148FA0;
    case 106u: goto L_00148FB8;
    case 107u: goto L_00148FC0;
    case 108u: goto L_00148FC8;
    case 109u: goto L_00148FD8;
    case 110u: goto L_00148FE0;
    case 111u: goto L_00148FE8;
    case 112u: goto L_00148FEC;
    case 113u: goto L_00148FF4;
    case 114u: goto L_00148FFC;
    case 115u: goto L_00149000;
    case 116u: goto L_00149008;
    case 117u: goto L_00149014;
    case 118u: goto L_0014901C;
    case 119u: goto L_00149024;
    case 120u: goto L_00149040;
    case 121u: goto L_00149068;
    case 122u: goto L_00149080;
    case 123u: goto L_001490A0;
    case 124u: goto L_001490C4;
    case 125u: goto L_001490C8;
    case 126u: goto L_001490DC;
    case 127u: goto L_001490E0;
    case 128u: goto L_001490E8;
    case 129u: goto L_001490F0;
    case 130u: goto L_00149100;
    case 131u: goto L_00149124;
    case 132u: goto L_00149128;
    case 133u: goto L_0014913C;
    case 134u: goto L_00149140;
    case 135u: goto L_00149148;
    case 136u: goto L_00149150;
    case 137u: goto L_0014916C;
    case 138u: goto L_00149170;
    case 139u: goto L_00149184;
    case 140u: goto L_00149188;
    case 141u: goto L_00149190;
    case 142u: goto L_00149198;
    case 143u: goto L_001491B4;
    case 144u: goto L_001491B8;
    case 145u: goto L_001491CC;
    case 146u: goto L_001491D0;
    case 147u: goto L_001491D8;
    case 148u: goto L_001491E0;
    case 149u: goto L_001491F8;
    case 150u: goto L_00149230;
    case 151u: goto L_00149238;
    case 152u: goto L_00149244;
    case 153u: goto L_0014924C;
    case 154u: goto L_00149258;
    case 155u: goto L_00149260;
    case 156u: goto L_0014926C;
    case 157u: goto L_00149274;
    case 158u: goto L_00149280;
    case 159u: goto L_00149288;
    case 160u: goto L_00149290;
    case 161u: goto L_001492B0;
    case 162u: goto L_001492C0;
    case 163u: goto L_001492D8;
    case 164u: goto L_001492F0;
    case 165u: goto L_001492F8;
    case 166u: goto L_00149300;
    case 167u: goto L_0014930C;
    case 168u: goto L_0014931C;
    case 169u: goto L_00149324;
    case 170u: goto L_0014932C;
    case 171u: goto L_00149340;
    case 172u: goto L_00149370;
    case 173u: goto L_00149390;
    case 174u: goto L_001493A8;
    case 175u: goto L_001493C0;
    case 176u: goto L_001493D0;
    case 177u: goto L_00149408;
    case 178u: goto L_00149424;
    case 179u: goto L_00149440;
    case 180u: goto L_00149458;
    case 181u: goto L_00149484;
    case 182u: goto L_001494A8;
    case 183u: goto L_001494FC;
    case 184u: goto L_00149508;
    case 185u: goto L_00149534;
    case 186u: goto L_00149540;
    case 187u: goto L_00149558;
    case 188u: goto L_00149584;
    case 189u: goto L_0014959C;
    case 190u: goto L_001495A8;
    case 191u: goto L_001495E0;
    case 192u: goto L_001495F8;
    case 193u: goto L_00149604;
    case 194u: goto L_0014961C;
    case 195u: goto L_00149634;
    case 196u: goto L_00149640;
    case 197u: goto L_00149650;
    case 198u: goto L_00149660;
    case 199u: goto L_00149688;
    case 200u: goto L_001496A0;
    case 201u: goto L_001496A8;
    case 202u: goto L_001496B4;
    case 203u: goto L_001496C4;
    case 204u: goto L_001496CC;
    case 205u: goto L_001496D4;
    case 206u: goto L_001497BC;
    case 207u: goto L_001497C4;
    case 208u: goto L_001497D0;
    case 209u: goto L_001497F8;
    case 210u: goto L_0014980C;
    case 211u: goto L_00149820;
    case 212u: goto L_00149830;
    case 213u: goto L_00149838;
    case 214u: goto L_00149840;
    case 215u: goto L_00149868;
    case 216u: goto L_001498A8;
    case 217u: goto L_001498BC;
    case 218u: goto L_001498C4;
    case 219u: goto L_001498DC;
    case 220u: goto L_001498E0;
    case 221u: goto L_001498F0;
    case 222u: goto L_00149918;
    case 223u: goto L_00149930;
    case 224u: goto L_001499A8;
    case 225u: goto L_001499D8;
    case 226u: goto L_001499E4;
    case 227u: goto L_001499F0;
    case 228u: goto L_00149A00;
    case 229u: goto L_00149A0C;
    case 230u: goto L_00149A2C;
    case 231u: goto L_00149A4C;
    case 232u: goto L_00149A60;
    case 233u: goto L_00149A78;
    case 234u: goto L_00149A9C;
    case 235u: goto L_00149B70;
    case 236u: goto L_00149BB0;
    case 237u: goto L_00149BC0;
    case 238u: goto L_00149BD4;
    case 239u: goto L_00149BE8;
    case 240u: goto L_00149BF8;
    case 241u: goto L_00149C04;
    case 242u: goto L_00149C1C;
    case 243u: goto L_00149C20;
    case 244u: goto L_00149C38;
    case 245u: goto L_00149E24;
    case 246u: goto L_00149E58;
    case 247u: goto L_00149EC8;
    case 248u: goto L_00149EE4;
    case 249u: goto L_00149F0C;
    case 250u: goto L_00149F78;
    case 251u: goto L_00149F94;
    case 252u: goto L_00149FAC;
    case 253u: goto L_00149FBC;
    case 254u: goto L_00149FCC;
    case 255u: goto L_00149FDC;
    case 256u: goto L_00149FEC;
    case 257u: goto L_0014A00C;
    case 258u: goto L_0014A01C;
    case 259u: goto L_0014A02C;
    case 260u: goto L_0014A03C;
    case 261u: goto L_0014A04C;
    case 262u: goto L_0014A05C;
    case 263u: goto L_0014A06C;
    case 264u: goto L_0014A07C;
    case 265u: goto L_0014A080;
    case 266u: goto L_0014A08C;
    case 267u: goto L_0014A09C;
    case 268u: goto L_0014A0AC;
    case 269u: goto L_0014A0BC;
    case 270u: goto L_0014A0C0;
    case 271u: goto L_0014A0CC;
    case 272u: goto L_0014A0DC;
    case 273u: goto L_0014A0F0;
    case 274u: goto L_0014A100;
    case 275u: goto L_0014A110;
    case 276u: goto L_0014A128;
    case 277u: goto L_0014A130;
    case 278u: goto L_0014A138;
    case 279u: goto L_0014A148;
    case 280u: goto L_0014A150;
    case 281u: goto L_0014A160;
    case 282u: goto L_0014A1D8;
    case 283u: goto L_0014A1E8;
    case 284u: goto L_0014A208;
    case 285u: goto L_0014A218;
    case 286u: goto L_0014A220;
    case 287u: goto L_0014A228;
    case 288u: goto L_0014A238;
    case 289u: goto L_0014A240;
    case 290u: goto L_0014A250;
    case 291u: goto L_0014A260;
    case 292u: goto L_0014A268;
    case 293u: goto L_0014A270;
    case 294u: goto L_0014A280;
    case 295u: goto L_0014A2CC;
    case 296u: goto L_0014A2D4;
    case 297u: goto L_0014A2E4;
    case 298u: goto L_0014A2EC;
    case 299u: goto L_0014A2F4;
    case 300u: goto L_0014A320;
    case 301u: goto L_0014A364;
    case 302u: goto L_0014A370;
    case 303u: goto L_0014A380;
    case 304u: goto L_0014A3A0;
    case 305u: goto L_0014A3C4;
    case 306u: goto L_0014A3FC;
    case 307u: goto L_0014A400;
    case 308u: goto L_0014A414;
    case 309u: goto L_0014A428;
    case 310u: goto L_0014A430;
    case 311u: goto L_0014A444;
    case 312u: goto L_0014A458;
    case 313u: goto L_0014A464;
    case 314u: goto L_0014A48C;
    case 315u: goto L_0014A49C;
    case 316u: goto L_0014A4F0;
    case 317u: goto L_0014A558;
    case 318u: goto L_0014A57C;
    case 319u: goto L_0014A5C8;
    case 320u: goto L_0014A5DC;
    case 321u: goto L_0014A604;
    case 322u: goto L_0014A618;
    case 323u: goto L_0014A644;
    case 324u: goto L_0014A6A8;
    case 325u: goto L_0014A708;
    case 326u: goto L_0014A71C;
    case 327u: goto L_0014A72C;
    case 328u: goto L_0014A77C;
    case 329u: goto L_0014A7A8;
    case 330u: goto L_0014A7BC;
    case 331u: goto L_0014A7E0;
    case 332u: goto L_0014A7F8;
    case 333u: goto L_0014A800;
    case 334u: goto L_0014A818;
    case 335u: goto L_0014A82C;
    case 336u: goto L_0014A840;
    case 337u: goto L_0014A850;
    case 338u: goto L_0014A880;
    case 339u: goto L_0014A888;
    case 340u: goto L_0014A894;
    case 341u: goto L_0014A8AC;
    case 342u: goto L_0014A8D0;
    case 343u: goto L_0014A8E8;
    case 344u: goto L_0014A8F8;
    case 345u: goto L_0014A90C;
    case 346u: goto L_0014A930;
    case 347u: goto L_0014A944;
    case 348u: goto L_0014A960;
    case 349u: goto L_0014A980;
    case 350u: goto L_0014A99C;
    case 351u: goto L_0014A9D0;
    case 352u: goto L_0014AA58;
    case 353u: goto L_0014AA6C;
    case 354u: goto L_0014AA80;
    case 355u: goto L_0014AA8C;
    case 356u: goto L_0014AAA8;
    case 357u: goto L_0014AB68;
    case 358u: goto L_0014ABB0;
    case 359u: goto L_0014ABDC;
    case 360u: goto L_0014ABEC;
    case 361u: goto L_0014ABFC;
    case 362u: goto L_0014AC44;
    case 363u: goto L_0014AC6C;
    case 364u: goto L_0014AC84;
    case 365u: goto L_0014AC98;
    case 366u: goto L_0014ACBC;
    case 367u: goto L_0014ACD0;
    case 368u: goto L_0014ACEC;
    case 369u: goto L_0014AD28;
    case 370u: goto L_0014AD60;
    case 371u: goto L_0014ADD4;
    case 372u: goto L_0014ADE4;
    case 373u: goto L_0014AE18;
    case 374u: goto L_0014AE38;
    case 375u: goto L_0014AE58;
    case 376u: goto L_0014AE70;
    case 377u: goto L_0014AE78;
    case 378u: goto L_0014AE88;
    case 379u: goto L_0014AEA0;
    case 380u: goto L_0014AEC8;
    case 381u: goto L_0014AEE0;
    case 382u: goto L_0014AEE8;
    case 383u: goto L_0014AEFC;
    case 384u: goto L_0014AF10;
    case 385u: goto L_0014AF1C;
    case 386u: goto L_0014AF44;
    case 387u: goto L_0014AF60;
    case 388u: goto L_0014AFA4;
    case 389u: goto L_0014AFE8;
    case 390u: goto L_0014AFFC;
    case 391u: goto L_0014B00C;
    case 392u: goto L_0014B080;
    case 393u: goto L_0014B0A0;
    case 394u: goto L_0014B0BC;
    case 395u: goto L_0014B0C0;
    case 396u: goto L_0014B104;
    case 397u: goto L_0014B120;
    case 398u: goto L_0014B140;
    case 399u: goto L_0014B18C;
    case 400u: goto L_0014B1FC;
    case 401u: goto L_0014B20C;
    case 402u: goto L_0014B228;
    case 403u: goto L_0014B238;
    case 404u: goto L_0014B248;
    case 405u: goto L_0014B260;
    case 406u: goto L_0014B278;
    case 407u: goto L_0014B28C;
    case 408u: goto L_0014B298;
    case 409u: goto L_0014B2AC;
    case 410u: goto L_0014B2BC;
    case 411u: goto L_0014B2EC;
    case 412u: goto L_0014B300;
    case 413u: goto L_0014B348;
    case 414u: goto L_0014B3C0;
    case 415u: goto L_0014B3D4;
    case 416u: goto L_0014B428;
    case 417u: goto L_0014B474;
    case 418u: goto L_0014B47C;
    case 419u: goto L_0014B494;
    case 420u: goto L_0014B4C0;
    case 421u: goto L_0014B508;
    case 422u: goto L_0014B514;
    case 423u: goto L_0014B52C;
    case 424u: goto L_0014B564;
    case 425u: goto L_0014B570;
    case 426u: goto L_0014B584;
    case 427u: goto L_0014B5B0;
    case 428u: goto L_0014B5F0;
    case 429u: goto L_0014B614;
    case 430u: goto L_0014B61C;
    case 431u: goto L_0014B62C;
    case 432u: goto L_0014B644;
    case 433u: goto L_0014B660;
    case 434u: goto L_0014B698;
    case 435u: goto L_0014B6E0;
    case 436u: goto L_0014B6EC;
    case 437u: goto L_0014B704;
    case 438u: goto L_0014B738;
    case 439u: goto L_0014B77C;
    case 440u: goto L_0014B7CC;
    case 441u: goto L_0014B7F8;
    case 442u: goto L_0014B844;
    case 443u: goto L_0014B878;
    case 444u: goto L_0014B8C0;
    case 445u: goto L_0014B8CC;
    case 446u: goto L_0014B8E0;
    case 447u: goto L_0014B8F4;
    case 448u: goto L_0014B93C;
    case 449u: goto L_0014B940;
    case 450u: goto L_0014B948;
    case 451u: goto L_0014B960;
    case 452u: goto L_0014B968;
    case 453u: goto L_0014B9AC;
    case 454u: goto L_0014B9C8;
    case 455u: goto L_0014B9E4;
    case 456u: goto L_0014B9F4;
    case 457u: goto L_0014BA1C;
    case 458u: goto L_0014BA44;
    case 459u: goto L_0014BA90;
    case 460u: goto L_0014BA9C;
    case 461u: goto L_0014BAB4;
    case 462u: goto L_0014BAC4;
    case 463u: goto L_0014BB10;
    case 464u: goto L_0014BB78;
    case 465u: goto L_0014BB94;
    case 466u: goto L_0014BBC4;
    case 467u: goto L_0014BBDC;
    case 468u: goto L_0014BBEC;
    case 469u: goto L_0014BC00;
    case 470u: goto L_0014BC10;
    case 471u: goto L_0014BC20;
    case 472u: goto L_0014BC40;
    case 473u: goto L_0014BC5C;
    case 474u: goto L_0014BC78;
    case 475u: goto L_0014BC94;
    case 476u: goto L_0014BCB4;
    case 477u: goto L_0014BCD8;
    case 478u: goto L_0014BCE8;
    case 479u: goto L_0014BCF8;
    case 480u: goto L_0014BD08;
    case 481u: goto L_0014BD28;
    case 482u: goto L_0014BD48;
    case 483u: goto L_0014BD58;
    case 484u: goto L_0014BD84;
    case 485u: goto L_0014BDA0;
    case 486u: goto L_0014BE14;
    case 487u: goto L_0014BE40;
    case 488u: goto L_0014BE50;
    case 489u: goto L_0014BE60;
    case 490u: goto L_0014BE74;
    case 491u: goto L_0014BE88;
    case 492u: goto L_0014BE98;
    case 493u: goto L_0014BEAC;
    case 494u: goto L_0014BEB8;
    case 495u: goto L_0014BED0;
    case 496u: goto L_0014BEE0;
    case 497u: goto L_0014BEF4;
    case 498u: goto L_0014BF1C;
    case 499u: goto L_0014BF34;
    case 500u: goto L_0014BF70;
    case 501u: goto L_0014BF80;
    case 502u: goto L_0014BFB0;
    case 503u: goto L_0014BFC0;
    case 504u: goto L_0014BFD0;
    case 505u: goto L_0014BFDC;
    case 506u: goto L_0014BFF8;
    default: bad_entry(c, 0x00148000u); return;
    }
L_00148000:
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148018u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x00148018u) [[unlikely]] return; }
L_00148018:
    set32(c.r[3], 0u + 32u);
    if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0014807C; } }
    set32(c.r[16], c.r[18].w[0] + 28u);
    c.budget -= 2;
L_00148030:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00148068; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148048u);  if (depth < kMaxDepth) unit_0013(c, 172u, depth + 1u); else { c.pc = 0x0014D7F8u; return; } if (c.pc != 0x00148048u) [[unlikely]] return; }
L_00148048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00148068; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 652u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00148068; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 284u)));
    set32(c.r[20], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00148068:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148030u | kUnwind; return; } goto L_00148030; } }
L_0014807C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_00148088; } }
    goto L_00148084;
L_00148080:
    c.budget -= 1;
L_00148084:
    set32(c.r[20], ld32((c.r[18].w[0] + 2224u)));
    c.budget -= 1;
L_00148088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148090u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x00148090u) [[unlikely]] return; }
L_00148090:
    set32(c.r[21], 0u + 64u);
    set32(c.r[3], 0u + 32u);
    c.r[17].d[0] = 0ull + 0ull;
    if (c.r[2].d[0] == 0) c.r[21].d[0] = c.r[3].d[0];
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001480FC; } }
    set32(c.r[16], c.r[18].w[0] + 28u);
    c.budget -= 1;
L_001480B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001480E8; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_001480C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001480C8u);  if (depth < kMaxDepth) unit_0013(c, 172u, depth + 1u); else { c.pc = 0x0014D7F8u; return; } if (c.pc != 0x001480C8u) [[unlikely]] return; }
L_001480C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001480E8; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 652u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001480E8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 284u)));
    set32(c.r[19], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_001480E8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001480B0u | kUnwind; return; } goto L_001480B0; } }
L_001480FC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00148108; } }
    goto L_00148104;
L_00148100:
    c.budget -= 1;
L_00148104:
    set32(c.r[19], ld32((c.r[18].w[0] + 2224u)));
    c.budget -= 1;
L_00148108:
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[20].d[0];
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0014815C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[16].d[0];  if (t) { goto L_0014815C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 300u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00148144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00148144u) [[unlikely]] return; }
L_00148144:
    set32(c.r[3], ld32((c.r[18].w[0] + 2224u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 24u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 2228u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00148160; } }
L_0014815C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00148160:
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
L_00148188:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    set32(c.r[22], c.r[21].w[0] + 28u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    set32(c.r[20], c.r[29].w[0] + 4u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[22].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0]), 0u);
    c.budget -= 20;
L_001481D8:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[18], c.r[3].w[0] + 1u);
    set32(c.r[16], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00148254; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00148208u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00148208u) [[unlikely]] return; }
L_00148208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00148254; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148224u);  if (depth < kMaxDepth) unit_0013(c, 172u, depth + 1u); else { c.pc = 0x0014D7F8u; return; } if (c.pc != 0x00148224u) [[unlikely]] return; }
L_00148224:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148238u);  if (depth < kMaxDepth) unit_0013(c, 172u, depth + 1u); else { c.pc = 0x0014D7F8u; return; } if (c.pc != 0x00148238u) [[unlikely]] return; }
L_00148238:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00148254; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00148254; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[18].w[0]);
    c.budget -= 3;
L_00148254:
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001481D8u | kUnwind; return; } goto L_001481D8; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00148284; } }
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    if (c.r[4].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 3;
L_00148284:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001483B8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001483A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001482A4u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001482A4u) [[unlikely]] return; }
L_001482A4:
    set32(c.r[18], 0u + 64u);
    set32(c.r[3], 0u + 32u);
    c.r[17].d[0] = 0ull + 0ull;
    if (c.r[2].d[0] == 0) c.r[18].d[0] = c.r[3].d[0];
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00148314; } }
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 2;
L_001482C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00148300; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001482E0u);  if (depth < kMaxDepth) unit_0013(c, 172u, depth + 1u); else { c.pc = 0x0014D7F8u; return; } if (c.pc != 0x001482E0u) [[unlikely]] return; }
L_001482E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00148300; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 652u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00148300; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 284u)));
    set32(c.r[20], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00148300:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001482C8u | kUnwind; return; } goto L_001482C8; } }
L_00148314:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_00148320; } }
    set32(c.r[20], ld32((c.r[21].w[0] + 2224u)));
    c.budget -= 1;
L_00148320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148328u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x00148328u) [[unlikely]] return; }
L_00148328:
    set32(c.r[19], 0u + 64u);
    set32(c.r[3], 0u + 32u);
    c.r[17].d[0] = 0ull + 0ull;
    if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[3].d[0];
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00148394; } }
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_00148348:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00148380; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148360u);  if (depth < kMaxDepth) unit_0013(c, 172u, depth + 1u); else { c.pc = 0x0014D7F8u; return; } if (c.pc != 0x00148360u) [[unlikely]] return; }
L_00148360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00148380; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 652u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00148380; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 284u)));
    set32(c.r[18], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00148380:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148348u | kUnwind; return; } goto L_00148348; } }
L_00148394:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001483A0; } }
    set32(c.r[18], ld32((c.r[21].w[0] + 2224u)));
    c.budget -= 1;
L_001483A0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[18].d[0];  if (t) { goto L_001483B4; } }
L_001483A8:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001483B8; } }
L_001483B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_001483B8:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001483E8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 12228u)));
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 160u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001484E8; } }
    set32(c.r[5], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148424u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x00148424u) [[unlikely]] return; }
L_00148424:
    set32(c.r[5], ld32((c.r[16].w[0] + 288u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014843Cu);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x0014843Cu) [[unlikely]] return; }
L_0014843C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00148454; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 652u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00148468; } }
L_00148454:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00148550; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 652u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00148550; } }
L_00148468:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[18], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[18].d[0];  if (t) { goto L_0014854C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 288u)));
    set32(c.r[6], c.r[2].w[0] - 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_0014854C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 652u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001484BC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[6], 0u + 64u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001484B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001484B0u) [[unlikely]] return; }
L_001484B0:
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014854C; } }
L_001484BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001484D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001484D4u) [[unlikely]] return; }
L_001484D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 288u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014854C; } }
L_001484E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001484F8u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x001484F8u) [[unlikely]] return; }
L_001484F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00148550; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148510u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x00148510u) [[unlikely]] return; }
L_00148510:
    set32(c.r[3], ld32((c.r[2].w[0] + 652u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00148550; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[17], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[17].d[0];  if (t) { goto L_0014854C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[6], 0u + 64u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00148548u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00148548u) [[unlikely]] return; }
L_00148548:
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    c.budget -= 1;
L_0014854C:
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_00148550:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148570:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 62u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[18].w[0] + 28u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 284u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001486F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001485C8u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001485C8u) [[unlikely]] return; }
L_001485C8:
    set32(c.r[20], 0u + 64u);
    set32(c.r[3], 0u + 32u);
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[20].d[0] = c.r[3].d[0];
    c.r[19].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00148634; } }
L_001485E8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00148620; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148600u);  if (depth < kMaxDepth) unit_0013(c, 172u, depth + 1u); else { c.pc = 0x0014D7F8u; return; } if (c.pc != 0x00148600u) [[unlikely]] return; }
L_00148600:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00148620; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 652u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00148620; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 284u)));
    set32(c.r[19], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00148620:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001485E8u | kUnwind; return; } goto L_001485E8; } }
L_00148634:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00148640; } }
    set32(c.r[19], ld32((c.r[18].w[0] + 2224u)));
    c.budget -= 1;
L_00148640:
    set32(c.r[2], ld32((c.r[18].w[0] + 284u)));
    set32(c.r[2], c.r[19].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148660u);  if (depth < kMaxDepth) unit_0012(c, 215u, depth + 1u); else { c.pc = 0x00149868u; return; } if (c.pc != 0x00148660u) [[unlikely]] return; }
L_00148660:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148670u);  if (depth < kMaxDepth) unit_0013(c, 167u, depth + 1u); else { c.pc = 0x0014D730u; return; } if (c.pc != 0x00148670u) [[unlikely]] return; }
L_00148670:
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001486F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10960u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001486F8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 284u)));
    set32(c.r[16], 0u + 62u);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001486F8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[16].d[0];  if (t) { goto L_001486F4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 300u)));
    set32(c.r[6], 0u + 62u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001486D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001486D8u) [[unlikely]] return; }
L_001486D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 284u)));
    st32((c.r[18].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[3].w[0] + 2624u), 0u);
    c.budget -= 7;
L_001486F4:
    set32(c.r[22], 0u + 1u);
    c.budget -= 1;
L_001486F8:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
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
L_00148728:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] + 8576u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148738:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148748:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 2334u));
    set32(c.r[3], c.r[2].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 15));
    st16((c.r[4].w[0] + 2334u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0] + 2234u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148770:
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 15));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2234u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148788:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2334u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148798:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001487B0u);  if (depth < kMaxDepth) unit_009B(c, 396u, depth + 1u); else { c.pc = 0x0036F2C8u; return; } if (c.pc != 0x001487B0u) [[unlikely]] return; }
L_001487B0:
    set32(c.r[2], 0u + 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 16576u);
    st32((c.r[16].w[0] + 284u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 300u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 2224u), 0u);
    set32(c.r[6], 0u + 2u);
    st32((c.r[16].w[0] + 2228u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st16((c.r[16].w[0] + 2232u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[16].w[0] + 24u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[5].w[0] + 10960u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 10964u), c.f[0]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 16576u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 300u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148840u);  if (depth < kMaxDepth) unit_009B(c, 397u, depth + 1u); else { c.pc = 0x0036F300u; return; } if (c.pc != 0x00148840u) [[unlikely]] return; }
L_00148840:
    c.r[16].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00148860; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148860u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00148860u) [[unlikely]] return; }
L_00148860:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148878:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 2;
L_00148880:
    st32((c.r[3].w[0] - 13228u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 64u);
    st32((c.r[2].w[0] + 284u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 288u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 2224u), 0u);
    st32((c.r[2].w[0] + 2228u), c.r[5].w[0]);
    st16((c.r[2].w[0] + 2232u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 2334u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 292u), 0u);
    st32((c.r[2].w[0] + 296u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001488C0u);  if (depth < kMaxDepth) unit_009B(c, 403u, depth + 1u); else { c.pc = 0x0036F3E0u; return; } if (c.pc != 0x001488C0u) [[unlikely]] return; }
L_001488C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001488C8u);  if (depth < kMaxDepth) unit_008B(c, 251u, depth + 1u); else { c.pc = 0x0032E9C8u; return; } if (c.pc != 0x001488C8u) [[unlikely]] return; }
L_001488C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001488D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001488F4u);  if (depth < kMaxDepth) unit_009B(c, 372u, depth + 1u); else { c.pc = 0x0036EFE8u; return; } if (c.pc != 0x001488F4u) [[unlikely]] return; }
L_001488F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148900u);  if (depth < kMaxDepth) unit_009B(c, 432u, depth + 1u); else { c.pc = 0x0036F778u; return; } if (c.pc != 0x00148900u) [[unlikely]] return; }
L_00148900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00148958; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 284u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 28u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014892Cu);  if (depth < kMaxDepth) unit_0013(c, 279u, depth + 1u); else { c.pc = 0x0014E9F8u; return; } if (c.pc != 0x0014892Cu) [[unlikely]] return; }
L_0014892C:
    set32(c.r[2], ld32((c.r[16].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001489D0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 764u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001489D0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148950u);  if (depth < kMaxDepth) unit_0013(c, 349u, depth + 1u); else { c.pc = 0x0014F380u; return; } if (c.pc != 0x00148950u) [[unlikely]] return; }
L_00148950:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001489D0; } }
L_00148958:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148964u);  if (depth < kMaxDepth) unit_0012(c, 23u, depth + 1u); else { c.pc = 0x001483E8u; return; } if (c.pc != 0x00148964u) [[unlikely]] return; }
L_00148964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001489D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148974u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x00148974u) [[unlikely]] return; }
L_00148974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001489B4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148988u);  if (depth < kMaxDepth) unit_0012(c, 31u, depth + 1u); else { c.pc = 0x00148570u; return; } if (c.pc != 0x00148988u) [[unlikely]] return; }
L_00148988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001489D0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014899Cu);  if (depth < kMaxDepth) unit_0011(c, 283u, depth + 1u); else { c.pc = 0x00145E28u; return; } if (c.pc != 0x0014899Cu) [[unlikely]] return; }
L_0014899C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001489D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001489ACu);  if (depth < kMaxDepth) unit_007C(c, 60u, depth + 1u); else { c.pc = 0x002F0D38u; return; } if (c.pc != 0x001489ACu) [[unlikely]] return; }
L_001489AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001489D0; } }
L_001489B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001489C0u);  if (depth < kMaxDepth) unit_0011(c, 291u, depth + 1u); else { c.pc = 0x00145FC0u; return; } if (c.pc != 0x001489C0u) [[unlikely]] return; }
L_001489C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001489D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001489D0u);  if (depth < kMaxDepth) unit_007C(c, 60u, depth + 1u); else { c.pc = 0x002F0D38u; return; } if (c.pc != 0x001489D0u) [[unlikely]] return; }
L_001489D0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001489E8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
L_00148A00:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148A18u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x00148A18u) [[unlikely]] return; }
L_00148A18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00148A40; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148A38u);  if (depth < kMaxDepth) unit_0011(c, 328u, depth + 1u); else { c.pc = 0x00146BC0u; return; } if (c.pc != 0x00148A38u) [[unlikely]] return; }
L_00148A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00148A58; } }
L_00148A40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148A58u);  if (depth < kMaxDepth) unit_0011(c, 299u, depth + 1u); else { c.pc = 0x001461C0u; return; } if (c.pc != 0x00148A58u) [[unlikely]] return; }
L_00148A58:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148A78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148A94u);  if (depth < kMaxDepth) unit_0013(c, 331u, depth + 1u); else { c.pc = 0x0014EF58u; return; } if (c.pc != 0x00148A94u) [[unlikely]] return; }
L_00148A94:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148AB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    set32(c.r[20], 0u + 64u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148AECu);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x00148AECu) [[unlikely]] return; }
L_00148AEC:
    set32(c.r[3], 0u + 32u);
    if (c.r[2].d[0] == 0) c.r[20].d[0] = c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00148B54; } }
    set32(c.r[21], c.r[16].w[0] << 16);
    set32(c.r[16], c.r[19].w[0] + 28u);
    c.budget -= 3;
L_00148B08:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00148B40; } }
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[21].w[0]) >> 16));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B20u);  if (depth < kMaxDepth) unit_0013(c, 172u, depth + 1u); else { c.pc = 0x0014D7F8u; return; } if (c.pc != 0x00148B20u) [[unlikely]] return; }
L_00148B20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00148B40; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 652u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00148B40; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 284u)));
    set32(c.r[18], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00148B40:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148B08u | kUnwind; return; } goto L_00148B08; } }
L_00148B54:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00148B60; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 2224u)));
    c.budget -= 1;
L_00148B60:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
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
L_00148B90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[21], c.r[4].w[0] + 28u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[19].w[0]), 0u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 16;
L_00148BD0:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[18], c.r[3].w[0] + 1u);
    set32(c.r[16], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00148C4C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C00u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00148C00u) [[unlikely]] return; }
L_00148C00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00148C4C; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C1Cu);  if (depth < kMaxDepth) unit_0013(c, 172u, depth + 1u); else { c.pc = 0x0014D7F8u; return; } if (c.pc != 0x00148C1Cu) [[unlikely]] return; }
L_00148C1C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C30u);  if (depth < kMaxDepth) unit_0013(c, 172u, depth + 1u); else { c.pc = 0x0014D7F8u; return; } if (c.pc != 0x00148C30u) [[unlikely]] return; }
L_00148C30:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00148C4C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00148C4C; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[18].w[0]);
    c.budget -= 3;
L_00148C4C:
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148BD0u | kUnwind; return; } goto L_00148BD0; } }
    set32(c.r[6], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_00148C80; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    if (c.r[6].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00148C84; } }
L_00148C80:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00148C84:
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
L_00148CB0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2232u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148CC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148CD8u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x00148CD8u) [[unlikely]] return; }
L_00148CD8:
    set32(c.r[5], ld32((c.r[2].w[0] + 2420u)));
    set32(c.r[6], 0u + 112u);
    set32(c.r[3], ld32((c.r[2].w[0] + 2416u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 736u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D00u);  if (depth < kMaxDepth) unit_009B(c, 367u, depth + 1u); else { c.pc = 0x0036EF18u; return; } if (c.pc != 0x00148D00u) [[unlikely]] return; }
L_00148D00:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148D18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D30u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x00148D30u) [[unlikely]] return; }
L_00148D30:
    set32(c.r[5], ld32((c.r[2].w[0] + 2420u)));
    set32(c.r[7], 0u + 112u);
    set32(c.r[3], ld32((c.r[2].w[0] + 2416u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.f[12] = ld32((c.r[6].w[0] + 744u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 736u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D60u);  if (depth < kMaxDepth) unit_009B(c, 334u, depth + 1u); else { c.pc = 0x0036E498u; return; } if (c.pc != 0x00148D60u) [[unlikely]] return; }
L_00148D60:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148D78:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    set32(c.r[21], 0u - 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[30], c.r[4].w[0] + 304u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 18;
L_00148DC0:
    set32(c.r[2], 0u + 30u);
    c.r[17].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[19], c.r[3].w[0] + 1u);
    set32(c.r[16], c.r[2].w[0] + c.r[30].w[0]);
    c.budget -= 6;
L_00148DD8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[23].w[0] + 16552u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[17].w[0] + c.r[20].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148DF0u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00148DF0u) [[unlikely]] return; }
L_00148DF0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148DFCu);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x00148DFCu) [[unlikely]] return; }
L_00148DFC:
    set32(c.r[4], ld32((c.r[22].w[0] + 9488u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148E0Cu);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x00148E0Cu) [[unlikely]] return; }
L_00148E0C:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.r[2].d[0] = c.r[17].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148DD8u | kUnwind; return; } goto L_00148DD8; } }
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148DC0u | kUnwind; return; } goto L_00148DC0; } }
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
L_00148E68:
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[2], 0u + 30u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[6].w[0] + 112u)));
    set32(c.r[4], c.r[4].w[0] + 304u);
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 8;
L_00148E88:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_00148EA0; } }
    set32(c.r[2], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148EA0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[2].d[0] = c.r[3].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148E88u | kUnwind; return; } goto L_00148E88; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148EC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148ED8u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x00148ED8u) [[unlikely]] return; }
L_00148ED8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00148F10; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148EECu);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x00148EECu) [[unlikely]] return; }
L_00148EEC:
    set32(c.r[4], ld32((c.r[2].w[0] + 2420u)));
    set32(c.r[5], 0u + 112u);
    set32(c.r[3], ld32((c.r[2].w[0] + 2416u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 736u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148F10u);  if (depth < kMaxDepth) unit_009B(c, 342u, depth + 1u); else { c.pc = 0x0036E9D8u; return; } if (c.pc != 0x00148F10u) [[unlikely]] return; }
L_00148F10:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148F28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 8584u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148F38:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148F48:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[2].w[0] + 10488u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10488u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00148FFC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 2456u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148F90u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x00148F90u) [[unlikely]] return; }
L_00148F90:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00148F94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148FA0u);  if (depth < kMaxDepth) unit_009C(c, 11u, depth + 1u); else { c.pc = 0x003700D8u; return; } if (c.pc != 0x00148FA0u) [[unlikely]] return; }
L_00148FA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 16816u);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148FB8u);  if (depth < kMaxDepth) unit_009C(c, 18u, depth + 1u); else { c.pc = 0x003701B8u; return; } if (c.pc != 0x00148FB8u) [[unlikely]] return; }
L_00148FB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00148FE8; } }
L_00148FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148FC8u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00148FC8u) [[unlikely]] return; }
L_00148FC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148FD8u);  if (depth < kMaxDepth) unit_009C(c, 12u, depth + 1u); else { c.pc = 0x003700F0u; return; } if (c.pc != 0x00148FD8u) [[unlikely]] return; }
L_00148FD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148FC0u | kUnwind; return; } goto L_00148FC0; } }
L_00148FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148FE8u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x00148FE8u) [[unlikely]] return; }
L_00148FE8:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_00148FEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00148FFC; } }
L_00148FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148FFCu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00148FFCu) [[unlikely]] return; }
L_00148FFC:
    set32(c.r[2], ld32((c.r[18].w[0] + 10488u)));
    c.budget -= 1;
L_00149000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149024; } }
L_00149008:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149014u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00149014u) [[unlikely]] return; }
L_00149014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148FF4u | kUnwind; return; } goto L_00148FF4; } }
L_0014901C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149024u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x00149024u) [[unlikely]] return; }
L_00149024:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00149040:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149068u);  if (depth < kMaxDepth) unit_0012(c, 182u, depth + 1u); else { c.pc = 0x001494A8u; return; } if (c.pc != 0x00149068u) [[unlikely]] return; }
L_00149068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00149290; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 528u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149290; } }
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 1;
L_00149080:
    set32(c.r[2], c.r[18].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00149198; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001490A0u);  if (depth < kMaxDepth) unit_0012(c, 184u, depth + 1u); else { c.pc = 0x00149508u; return; } if (c.pc != 0x001490A0u) [[unlikely]] return; }
L_001490A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001490F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 2408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001490C4u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x001490C4u) [[unlikely]] return; }
L_001490C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001490C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001490DCu);  if (depth < kMaxDepth) unit_0018(c, 118u, depth + 1u); else { c.pc = 0x00161160u; return; } if (c.pc != 0x001490DCu) [[unlikely]] return; }
L_001490DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001490E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001491E0; } }
L_001490E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001490F0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001490F0u) [[unlikely]] return; }
L_001490F0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149100u);  if (depth < kMaxDepth) unit_0012(c, 190u, depth + 1u); else { c.pc = 0x001495A8u; return; } if (c.pc != 0x00149100u) [[unlikely]] return; }
L_00149100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149150; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 2408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149124u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x00149124u) [[unlikely]] return; }
L_00149124:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00149128:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014913Cu);  if (depth < kMaxDepth) unit_0018(c, 118u, depth + 1u); else { c.pc = 0x00161160u; return; } if (c.pc != 0x0014913Cu) [[unlikely]] return; }
L_0014913C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00149140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001491E0; } }
L_00149148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149150u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00149150u) [[unlikely]] return; }
L_00149150:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 2408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014916Cu);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x0014916Cu) [[unlikely]] return; }
L_0014916C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00149170:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149184u);  if (depth < kMaxDepth) unit_0018(c, 118u, depth + 1u); else { c.pc = 0x00161160u; return; } if (c.pc != 0x00149184u) [[unlikely]] return; }
L_00149184:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00149188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001491E0; } }
L_00149190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149198u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00149198u) [[unlikely]] return; }
L_00149198:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 2408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001491B4u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x001491B4u) [[unlikely]] return; }
L_001491B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001491B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001491CCu);  if (depth < kMaxDepth) unit_0018(c, 118u, depth + 1u); else { c.pc = 0x00161160u; return; } if (c.pc != 0x001491CCu) [[unlikely]] return; }
L_001491CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001491D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001491E0; } }
L_001491D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001491E0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001491E0u) [[unlikely]] return; }
L_001491E0:
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0014920C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001491F8u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001491F8u) [[unlikely]] return; }
L_001491F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014920C; } }
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149214; } }
L_0014920C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_00149214:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149230u);  if (depth < kMaxDepth) unit_009C(c, 27u, depth + 1u); else { c.pc = 0x003702C8u; return; } if (c.pc != 0x00149230u) [[unlikely]] return; }
L_00149230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149290; } }
L_00149238:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149244u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00149244u) [[unlikely]] return; }
L_00149244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001490E8u | kUnwind; return; } goto L_001490E8; } }
L_0014924C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149258u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00149258u) [[unlikely]] return; }
L_00149258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149148u | kUnwind; return; } goto L_00149148; } }
L_00149260:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014926Cu);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0014926Cu) [[unlikely]] return; }
L_0014926C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149190u | kUnwind; return; } goto L_00149190; } }
L_00149274:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149280u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00149280u) [[unlikely]] return; }
L_00149280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001491D8u | kUnwind; return; } goto L_001491D8; } }
L_00149288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149290u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x00149290u) [[unlikely]] return; }
L_00149290:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001492B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] + 10488u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001492C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001492D8u);  if (depth < kMaxDepth) unit_009C(c, 11u, depth + 1u); else { c.pc = 0x003700D8u; return; } if (c.pc != 0x001492D8u) [[unlikely]] return; }
L_001492D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 16816u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 148u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001492F0u);  if (depth < kMaxDepth) unit_009C(c, 18u, depth + 1u); else { c.pc = 0x003701B8u; return; } if (c.pc != 0x001492F0u) [[unlikely]] return; }
L_001492F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149300; } }
L_001492F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149300u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00149300u) [[unlikely]] return; }
L_00149300:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014932C; } }
L_0014930C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014931Cu);  if (depth < kMaxDepth) unit_009C(c, 12u, depth + 1u); else { c.pc = 0x003700F0u; return; } if (c.pc != 0x0014931Cu) [[unlikely]] return; }
L_0014931C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001492F8u | kUnwind; return; } goto L_001492F8; } }
L_00149324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014932Cu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0014932Cu) [[unlikely]] return; }
L_0014932C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00149340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 16816u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 148u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149370u);  if (depth < kMaxDepth) unit_009C(c, 12u, depth + 1u); else { c.pc = 0x003700F0u; return; } if (c.pc != 0x00149370u) [[unlikely]] return; }
L_00149370:
    c.r[16].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00149390; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149390u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00149390u) [[unlikely]] return; }
L_00149390:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001493A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001493C0u);  if (depth < kMaxDepth) unit_009C(c, 18u, depth + 1u); else { c.pc = 0x003701B8u; return; } if (c.pc != 0x001493C0u) [[unlikely]] return; }
L_001493C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001493D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 27456u);
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00149408u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00149408u) [[unlikely]] return; }
L_00149408:
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[5], c.r[16].w[0] + 13248u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00149424u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00149424u) [[unlikely]] return; }
L_00149424:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00149440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 28u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], 0u + 29u);
    c.budget -= 6;
L_00149458:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00149484; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 160u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00149484u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00149484u) [[unlikely]] return; }
L_00149484:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149458u | kUnwind; return; } goto L_00149458; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001494A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7694u)));
    set32(c.r[2], 0u + 77u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001494F0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 78ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001494E4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 46ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001494FC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001494FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001494F0; } }
L_001494E4:
    set32(c.r[2], 0u + 80u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001494FC; } }
L_001494F0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001494FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00149508:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7694u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(76ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014959C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 16880u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00148000u < 16384u) { entry = entries_0012[(t - 0x00148000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00149534:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00149540:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12228u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 71ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00149558:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 44u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 12228u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00149578; } }
    set32(c.r[2], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149534u | kUnwind; return; } goto L_00149534; } }
L_00149578:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00149584:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12228u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 73ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014959C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001495A8:
    c.r[2].d[0] = ld16((c.r[5].w[0] + 7694u));
    set32(c.r[2], c.r[2].w[0] - 30u);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(57ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00149634; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 17184u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00148000u < 16384u) { entry = entries_0012[(t - 0x00148000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001495E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12228u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 12ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001495F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00149604:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12228u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 101ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014961C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12228u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 73ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00149634:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00149640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 10496u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00149650:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00149660:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149688u);  if (depth < kMaxDepth) unit_009A(c, 308u, depth + 1u); else { c.pc = 0x0036BE78u; return; } if (c.pc != 0x00149688u) [[unlikely]] return; }
L_00149688:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 17800u);
    set32(c.r[19], c.r[17].w[0] + 736u);
    st32((c.r[17].w[0] + 724u), c.r[3].w[0]);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[18], 0u + 14u);
    c.budget -= 6;
L_001496A0:
    set32(c.r[20], 0u - 1u);
    c.budget -= 2;
L_001496A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001496B4u);  if (depth < kMaxDepth) unit_0013(c, 258u, depth + 1u); else { c.pc = 0x0014E6A0u; return; } if (c.pc != 0x001496B4u) [[unlikely]] return; }
L_001496B4:
    set32(c.r[16], c.r[16].w[0] + 112u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[20].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001496A8u | kUnwind; return; } goto L_001496A8; } }
L_001496C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001496D4; } }
L_001496CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001496D4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001496D4u) [[unlikely]] return; }
L_001496D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x455A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 49152ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x459C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[3] = c.r[1].w[0];
    set32(c.r[3], 0u + 15u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[2] = c.r[1].w[0];
    st32((c.r[17].w[0] + 2556u), c.f[0]);
    st32((c.r[17].w[0] + 2424u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 2572u), c.f[1]);
    st32((c.r[17].w[0] + 2576u), c.f[2]);
    st32((c.r[17].w[0] + 2592u), c.f[3]);
    st32((c.r[17].w[0] + 564u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 2416u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 2420u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 2496u), 0u);
    st32((c.r[17].w[0] + 2500u), 0u);
    st32((c.r[17].w[0] + 2504u), 0u);
    st32((c.r[17].w[0] + 2508u), 0u);
    st32((c.r[17].w[0] + 2512u), 0u);
    st16((c.r[17].w[0] + 2516u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 2520u), 0u);
    st32((c.r[17].w[0] + 2524u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 2528u), 0u);
    st32((c.r[17].w[0] + 2532u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 2536u), 0u);
    st32((c.r[17].w[0] + 2540u), 0u);
    st16((c.r[17].w[0] + 2544u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 2548u), c.f[5]);
    st32((c.r[17].w[0] + 2552u), c.f[3]);
    st16((c.r[17].w[0] + 2560u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 2564u), 0u);
    st32((c.r[17].w[0] + 2568u), 0u);
    st32((c.r[17].w[0] + 2580u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 2584u), c.f[4]);
    st32((c.r[17].w[0] + 2588u), c.f[3]);
    st32((c.r[17].w[0] + 2596u), 0u);
    st32((c.r[17].w[0] + 2600u), 0u);
    st32((c.r[17].w[0] + 2604u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 2608u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x458C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 40960ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[17].w[0] + 584u), c.f[4]);
    st32((c.r[17].w[0] + 588u), c.f[0]);
    st32((c.r[17].w[0] + 624u), c.f[5]);
    c.budget -= 58;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001497C4; } }
L_001497BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001497C4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001497C4u) [[unlikely]] return; }
L_001497C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149840; } }
L_001497D0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001496CCu | kUnwind; return; } goto L_001496CC; } }
    set32(c.r[2], 0u + 14u);
    set32(c.r[3], 0u + 112u);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[4].w[0] + c.r[19].w[0]);
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001496CCu | kUnwind; return; } goto L_001496CC; } }
    c.budget -= 1;
L_001497F8:
    set32(c.r[16], c.r[16].w[0] - 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014980Cu);  if (depth < kMaxDepth) unit_0013(c, 261u, depth + 1u); else { c.pc = 0x0014E748u; return; } if (c.pc != 0x0014980Cu) [[unlikely]] return; }
L_0014980C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001497F8u | kUnwind; return; } goto L_001497F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001496CCu | kUnwind; return; } goto L_001496CC; } }
    c.budget -= 1;
L_00149820:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149830u);  if (depth < kMaxDepth) unit_009B(c, 233u, depth + 1u); else { c.pc = 0x0036D470u; return; } if (c.pc != 0x00149830u) [[unlikely]] return; }
L_00149830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001497BCu | kUnwind; return; } goto L_001497BC; } }
L_00149838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149840u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x00149840u) [[unlikely]] return; }
L_00149840:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00149868:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[18].w[0] + 736u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001498A8u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x001498A8u) [[unlikely]] return; }
L_001498A8:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001498BCu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x001498BCu) [[unlikely]] return; }
L_001498BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001498C4u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x001498C4u) [[unlikely]] return; }
L_001498C4:
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001498DCu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x001498DCu) [[unlikely]] return; }
L_001498DC:
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2420u)));
    c.budget -= 1;
L_001498E0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0014995C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001498F0u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001498F0u) [[unlikely]] return; }
L_001498F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00149908; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149928; } }
L_00149908:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149918u);  if (depth < kMaxDepth) unit_009B(c, 367u, depth + 1u); else { c.pc = 0x0036EF18u; return; } if (c.pc != 0x00149918u) [[unlikely]] return; }
L_00149918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00149938; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_00149928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149930u);  if (depth < kMaxDepth) unit_009B(c, 367u, depth + 1u); else { c.pc = 0x0036EF18u; return; } if (c.pc != 0x00149930u) [[unlikely]] return; }
L_00149930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014995C; } }
L_00149938:
    set32(c.r[2], ld32((c.r[18].w[0] + 2420u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014995C; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 2420u));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 4;
L_0014995C:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 112u);
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[20], c.r[20].w[0] + c.r[22].w[0]);
    c.r[2].d[0] = c.r[19].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001498E0u | kUnwind; return; } goto L_001498E0; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001499A8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001499D8u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x001499D8u) [[unlikely]] return; }
L_001499D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001499E4u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x001499E4u) [[unlikely]] return; }
L_001499E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001499F0u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001499F0u) [[unlikely]] return; }
L_001499F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00149E24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149A00u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x00149A00u) [[unlikely]] return; }
L_00149A00:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149A0Cu);  if (depth < kMaxDepth) unit_009B(c, 432u, depth + 1u); else { c.pc = 0x0036F778u; return; } if (c.pc != 0x00149A0Cu) [[unlikely]] return; }
L_00149A0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00149E24; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00149A2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00149A2Cu) [[unlikely]] return; }
L_00149A2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149A54; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 228u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00149A4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00149A4Cu) [[unlikely]] return; }
L_00149A4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00149E24; } }
L_00149A54:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149A60u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x00149A60u) [[unlikely]] return; }
L_00149A60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 17200u);
    set32(c.r[5], 0u + 1024u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149A78u);  if (depth < kMaxDepth) unit_0071(c, 322u, depth + 1u); else { c.pc = 0x002C76D8u; return; } if (c.pc != 0x00149A78u) [[unlikely]] return; }
L_00149A78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149E24; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00149A9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00149A9Cu) [[unlikely]] return; }
L_00149A9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149B20; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 2420u)));
    set32(c.r[4], 0u + 112u);
    set32(c.r[2], ld32((c.r[16].w[0] + 2416u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 10960u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 736u);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00149AE0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00149AF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149B20; } }
L_00149AE0:
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149B20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149B18; } }
L_00149AF4:
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149B20; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00149B18; } }
    st32((c.r[21].w[0] + 10960u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149B20; } }
L_00149B18:
    set32(c.r[2], 0u + 2u);
    st32((c.r[21].w[0] + 10960u), c.r[2].w[0]);
    c.budget -= 2;
L_00149B20:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 10960u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 10960u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00149B48; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[21].w[0] + 10960u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149B58; } }
L_00149B48:
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00149B58; } }
    st32((c.r[21].w[0] + 10960u), 0u);
    c.budget -= 1;
L_00149B58:
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00149B70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00149B70u) [[unlikely]] return; }
L_00149B70:
    set32(c.r[22], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149D20; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2420u)));
    set32(c.r[4], 0u + 112u);
    set32(c.r[3], ld32((c.r[16].w[0] + 2416u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 724u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[5].w[0] + 220u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 216u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 736u);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00149BB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00149BB0u) [[unlikely]] return; }
L_00149BB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149CC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149BC0u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x00149BC0u) [[unlikely]] return; }
L_00149BC0:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149BD4u);  if (depth < kMaxDepth) unit_0012(c, 71u, depth + 1u); else { c.pc = 0x00148AB0u; return; } if (c.pc != 0x00149BD4u) [[unlikely]] return; }
L_00149BD4:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149BE8u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x00149BE8u) [[unlikely]] return; }
L_00149BE8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149BF8u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x00149BF8u) [[unlikely]] return; }
L_00149BF8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149C04u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00149C04u) [[unlikely]] return; }
L_00149C04:
    set32(c.r[17], c.r[16].w[0] + 736u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149C1Cu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x00149C1Cu) [[unlikely]] return; }
L_00149C1C:
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2420u)));
    c.budget -= 1;
L_00149C20:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00149C64; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149C38u);  if (depth < kMaxDepth) unit_009B(c, 367u, depth + 1u); else { c.pc = 0x0036EF18u; return; } if (c.pc != 0x00149C38u) [[unlikely]] return; }
L_00149C38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149C64; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2420u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149C64; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2420u));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 4;
L_00149C64:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 112u);
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[20], c.r[20].w[0] + c.r[23].w[0]);
    c.r[2].d[0] = c.r[19].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149C20u | kUnwind; return; } goto L_00149C20; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 2420u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00149CA0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2424u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149CAC; } }
L_00149CA0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149CC0; } }
L_00149CAC:
    set32(c.r[2], c.r[18].w[0] - c.r[3].w[0]);
    set32(c.r[3], 0u + 112u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 736u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_00149CC0:
    set32(c.r[3], ld32((c.r[21].w[0] + 10960u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00149CE0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00149CF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149D20; } }
L_00149CE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149D18; } }
L_00149CF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149D20; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00149D18; } }
    st32((c.r[21].w[0] + 10960u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149D20; } }
L_00149D18:
    set32(c.r[2], 0u + 2u);
    st32((c.r[21].w[0] + 10960u), c.r[2].w[0]);
    c.budget -= 2;
L_00149D20:
    set32(c.r[3], ld32((c.r[21].w[0] + 10960u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00149D7C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149D50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00149D64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149DA8; } }
L_00149D50:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00149D94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149DA8; } }
L_00149D64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], 0u + 1610u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149DA4; } }
L_00149D7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], 0u + 1611u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149DA4; } }
L_00149D94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], 0u + 1612u);
    c.budget -= 4;
L_00149DA4:
    st32((c.r[2].w[0] + 10964u), c.f[0]);
    c.budget -= 1;
L_00149DA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    c.r[9].d[0] = c.r[22].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[5], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[6], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[7], 0u + 120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[14] = c.r[1].w[0];
    c.f[15] = c.f[2];
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[0]);
    c.f[13] = c.f[12];
    st32((c.r[29].w[0]), c.f[1]);
    c.r[10].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 12u), c.f[2]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149E24u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x00184A78u; return; } if (c.pc != 0x00149E24u) [[unlikely]] return; }
L_00149E24:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00149E58:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 724u)));
    c.f[2] = ld32((c.r[17].w[0] + 584u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    c.f[3] = ld32((c.r[17].w[0] + 588u));
    c.f[1] = ld32((c.r[17].w[0] + 592u));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 624u));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    st32((c.r[7].w[0] - 31936u), c.f[2]);
    st32((c.r[8].w[0] - 31932u), c.f[3]);
    st32((c.r[6].w[0] - 31928u), c.f[1]);
    st32((c.r[5].w[0] - 31924u), c.f[0]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00149EC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00149EC8u) [[unlikely]] return; }
L_00149EC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149F14; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 776u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00149EEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149EE4u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x00149EE4u) [[unlikely]] return; }
L_00149EE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149EFC; } }
L_00149EEC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 500u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149F00; } }
L_00149EFC:
    st32((c.r[17].w[0] + 500u), 0u);
    c.budget -= 1;
L_00149F00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149F0Cu);  if (depth < kMaxDepth) unit_009B(c, 306u, depth + 1u); else { c.pc = 0x0036DE78u; return; } if (c.pc != 0x00149F0Cu) [[unlikely]] return; }
L_00149F0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149F5C; } }
L_00149F14:
    set32(c.r[3], ld32((c.r[18].w[0] + 2420u)));
    set32(c.r[4], 0u + 112u);
    set32(c.r[2], ld32((c.r[18].w[0] + 2416u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 740u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00149F58; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00149F58; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149F5C; } }
    st32((c.r[18].w[0] + 500u), 0u);
    c.budget -= 1;
L_00149F58:
    st32((c.r[17].w[0] + 500u), c.r[5].w[0]);
    c.budget -= 1;
L_00149F5C:
    set32(c.r[2], ld32((c.r[17].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014A280; } }
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149F78u);  if (depth < kMaxDepth) unit_008B(c, 182u, depth + 1u); else { c.pc = 0x0032DBF0u; return; } if (c.pc != 0x00149F78u) [[unlikely]] return; }
L_00149F78:
    set32(c.r[3], ld32((c.r[18].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00149F94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00149F94u) [[unlikely]] return; }
L_00149F94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149FFC; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 2432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149FACu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00149FACu) [[unlikely]] return; }
L_00149FAC:
    set32(c.r[4], c.r[17].w[0] + 240u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149FBCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00149FBCu) [[unlikely]] return; }
L_00149FBC:
    set32(c.r[4], c.r[17].w[0] + 2432u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149FCCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00149FCCu) [[unlikely]] return; }
L_00149FCC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 2448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149FDCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00149FDCu) [[unlikely]] return; }
L_00149FDC:
    set32(c.r[4], c.r[17].w[0] + 304u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149FECu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00149FECu) [[unlikely]] return; }
L_00149FEC:
    set32(c.r[4], c.r[17].w[0] + 2448u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A064; } }
L_00149FFC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A00Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A00Cu) [[unlikely]] return; }
L_0014A00C:
    set32(c.r[4], c.r[17].w[0] + 240u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A01Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A01Cu) [[unlikely]] return; }
L_0014A01C:
    set32(c.r[4], c.r[17].w[0] + 2432u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A02Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A02Cu) [[unlikely]] return; }
L_0014A02C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A03Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A03Cu) [[unlikely]] return; }
L_0014A03C:
    set32(c.r[4], c.r[17].w[0] + 304u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A04Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A04Cu) [[unlikely]] return; }
L_0014A04C:
    set32(c.r[4], c.r[17].w[0] + 2448u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A05Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A05Cu) [[unlikely]] return; }
L_0014A05C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 368u);
    c.budget -= 2;
L_0014A064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A06Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A06Cu) [[unlikely]] return; }
L_0014A06C:
    set32(c.r[4], c.r[17].w[0] + 368u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A07Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A07Cu) [[unlikely]] return; }
L_0014A07C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_0014A080:
    set32(c.r[5], c.r[18].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A08Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A08Cu) [[unlikely]] return; }
L_0014A08C:
    set32(c.r[4], c.r[17].w[0] + 256u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A09Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A09Cu) [[unlikely]] return; }
L_0014A09C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A0ACu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A0ACu) [[unlikely]] return; }
L_0014A0AC:
    set32(c.r[4], c.r[17].w[0] + 320u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A0BCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A0BCu) [[unlikely]] return; }
L_0014A0BC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_0014A0C0:
    set32(c.r[5], c.r[18].w[0] + 384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A0CCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A0CCu) [[unlikely]] return; }
L_0014A0CC:
    set32(c.r[4], c.r[17].w[0] + 384u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A0DCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A0DCu) [[unlikely]] return; }
L_0014A0DC:
    set32(c.r[19], c.r[18].w[0] + 288u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A0F0u);  if (depth < kMaxDepth) unit_008B(c, 218u, depth + 1u); else { c.pc = 0x0032E150u; return; } if (c.pc != 0x0014A0F0u) [[unlikely]] return; }
L_0014A0F0:
    ldl(c.r[4], (c.r[29].w[0] + 23u));
    ldr(c.r[4], (c.r[29].w[0] + 16u));
    ldl(c.r[5], (c.r[29].w[0] + 31u));
    ldr(c.r[5], (c.r[29].w[0] + 24u));
    c.budget -= 4;
L_0014A100:
    sdl(c.r[4], (c.r[29].w[0] + 39u));
    sdr(c.r[4], (c.r[29].w[0] + 32u));
    sdl(c.r[5], (c.r[29].w[0] + 47u));
    sdr(c.r[5], (c.r[29].w[0] + 40u));
    c.budget -= 4;
L_0014A110:
    set32(c.r[20], c.r[29].w[0] + 32u);
    set32(c.r[16], c.r[17].w[0] + 288u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A128u);  if (depth < kMaxDepth) unit_008B(c, 218u, depth + 1u); else { c.pc = 0x0032E150u; return; } if (c.pc != 0x0014A128u) [[unlikely]] return; }
L_0014A128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A138; } }
L_0014A130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A138u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0014A138u) [[unlikely]] return; }
L_0014A138:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A148u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0014A148u) [[unlikely]] return; }
L_0014A148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A168; } }
L_0014A150:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A160u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0014A160u) [[unlikely]] return; }
L_0014A160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A130u | kUnwind; return; } goto L_0014A130; } }
L_0014A168:
    c.f[3] = ld32((c.r[18].w[0] + 352u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[2] = ld32((c.r[18].w[0] + 356u));
    set32(c.r[5], 0u + 2u);
    c.f[0] = ld32((c.r[18].w[0] + 360u));
    c.f[1] = ld32((c.r[18].w[0] + 364u));
    st32((c.r[29].w[0] + 16u), c.f[3]);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    st32((c.r[29].w[0] + 28u), c.f[1]);
    ldl(c.r[2], (c.r[29].w[0] + 23u));
    ldr(c.r[2], (c.r[29].w[0] + 16u));
    ldl(c.r[3], (c.r[29].w[0] + 31u));
    ldr(c.r[3], (c.r[29].w[0] + 24u));
    sdl(c.r[2], (c.r[29].w[0] + 39u));
    sdr(c.r[2], (c.r[29].w[0] + 32u));
    sdl(c.r[3], (c.r[29].w[0] + 47u));
    sdr(c.r[3], (c.r[29].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    c.f[3] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[17].w[0] + 352u), c.f[0]);
    st32((c.r[17].w[0] + 356u), c.f[1]);
    st32((c.r[17].w[0] + 360u), c.f[2]);
    st32((c.r[17].w[0] + 364u), c.f[3]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A1D8u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0014A1D8u) [[unlikely]] return; }
L_0014A1D8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A1E8u);  if (depth < kMaxDepth) unit_008B(c, 218u, depth + 1u); else { c.pc = 0x0032E150u; return; } if (c.pc != 0x0014A1E8u) [[unlikely]] return; }
L_0014A1E8:
    ldl(c.r[2], (c.r[29].w[0] + 23u));
    ldr(c.r[2], (c.r[29].w[0] + 16u));
    ldl(c.r[3], (c.r[29].w[0] + 31u));
    ldr(c.r[3], (c.r[29].w[0] + 24u));
    sdl(c.r[2], (c.r[29].w[0] + 39u));
    sdr(c.r[2], (c.r[29].w[0] + 32u));
    sdl(c.r[3], (c.r[29].w[0] + 47u));
    sdr(c.r[3], (c.r[29].w[0] + 40u));
    c.budget -= 8;
L_0014A208:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A218u);  if (depth < kMaxDepth) unit_008B(c, 218u, depth + 1u); else { c.pc = 0x0032E150u; return; } if (c.pc != 0x0014A218u) [[unlikely]] return; }
L_0014A218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A228; } }
L_0014A220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A228u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0014A228u) [[unlikely]] return; }
L_0014A228:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A238u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0014A238u) [[unlikely]] return; }
L_0014A238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A258; } }
L_0014A240:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A250u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0014A250u) [[unlikely]] return; }
L_0014A250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A220u | kUnwind; return; } goto L_0014A220; } }
L_0014A258:
    c.f[0] = ld32((c.r[18].w[0] + 572u));
    st32((c.r[17].w[0] + 572u), c.f[0]);
    c.budget -= 2;
L_0014A260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A270; } }
L_0014A268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A270u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0014A270u) [[unlikely]] return; }
L_0014A270:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A280u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0014A280u) [[unlikely]] return; }
L_0014A280:
    set32(c.r[2], ld32((c.r[18].w[0] + 656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A2B8; } }
    st32((c.r[17].w[0] + 656u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 660u));
    st32((c.r[17].w[0] + 660u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 664u)));
    st32((c.r[17].w[0] + 664u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 668u)));
    st32((c.r[17].w[0] + 668u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 672u)));
    st32((c.r[17].w[0] + 672u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 676u)));
    st32((c.r[17].w[0] + 676u), c.r[3].w[0]);
    c.budget -= 11;
L_0014A2B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[12] = ld32((c.r[17].w[0] + 2576u));
    set32(c.r[4], c.r[4].w[0] - 13248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A2CCu);  if (depth < kMaxDepth) unit_0010(c, 294u, depth + 1u); else { c.pc = 0x00143860u; return; } if (c.pc != 0x0014A2CCu) [[unlikely]] return; }
L_0014A2CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A2F4; } }
L_0014A2D4:
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A2E4u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0014A2E4u) [[unlikely]] return; }
L_0014A2E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A268u | kUnwind; return; } goto L_0014A268; } }
L_0014A2EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A2F4u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0014A2F4u) [[unlikely]] return; }
L_0014A2F4:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014A320:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A364u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0014A364u) [[unlikely]] return; }
L_0014A364:
    set32(c.r[21], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A370u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014A370u) [[unlikely]] return; }
L_0014A370:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A380u);  if (depth < kMaxDepth) unit_009C(c, 42u, depth + 1u); else { c.pc = 0x003704F8u; return; } if (c.pc != 0x0014A380u) [[unlikely]] return; }
L_0014A380:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0014A4A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[30], c.r[2].w[0] + 14208u);
    set32(c.r[19], c.r[29].w[0] + 16u);
    set32(c.r[22], 0u + 1u);
    c.budget -= 5;
L_0014A3A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], c.r[2].w[0] + 9872u);
    set32(c.r[2], 0u + 13248u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + c.r[30].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A3C4u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0014A3C4u) [[unlikely]] return; }
L_0014A3C4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A484; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014A484; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 128u)));
    set32(c.r[4], c.r[23].w[0] - 22480u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A3FCu);  if (depth < kMaxDepth) unit_0087(c, 220u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x0014A3FCu) [[unlikely]] return; }
L_0014A3FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A484; } }
    goto L_0014A404;
L_0014A400:
    c.budget -= 1;
L_0014A404:
    mmi::por(c.r[2], c.r[0], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A414u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014A414u) [[unlikely]] return; }
L_0014A414:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A428u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0014A428u) [[unlikely]] return; }
L_0014A428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A430u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014A430u) [[unlikely]] return; }
L_0014A430:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A444u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0014A444u) [[unlikely]] return; }
L_0014A444:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A458u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014A458u) [[unlikely]] return; }
L_0014A458:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A464u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014A464u) [[unlikely]] return; }
L_0014A464:
    c.f[1] = ld32((c.r[20].w[0] + 588u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014A484; } }
    st32((c.r[20].w[0] + 2536u), c.r[22].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A4B8; } }
L_0014A484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A48Cu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014A48Cu) [[unlikely]] return; }
L_0014A48C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A49Cu);  if (depth < kMaxDepth) unit_009C(c, 42u, depth + 1u); else { c.pc = 0x003704F8u; return; } if (c.pc != 0x0014A49Cu) [[unlikely]] return; }
L_0014A49C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A3A0u | kUnwind; return; } goto L_0014A3A0; } }
L_0014A4A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 2536u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A4B8; } }
    st32((c.r[20].w[0] + 2536u), 0u);
    c.budget -= 1;
L_0014A4B8:
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
L_0014A4F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 2536u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A678; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 12u);
    set32(c.r[18], c.r[2].w[0] + 14208u);
    set32(c.r[4], ld32((c.r[18].w[0] + 20948u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0014A560; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014A560; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 20958u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0014A560; } }
    set32(c.r[17], c.r[18].w[0] + 13248u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A558u);  if (depth < kMaxDepth) unit_0019(c, 354u, depth + 1u); else { c.pc = 0x00167CA0u; return; } if (c.pc != 0x0014A558u) [[unlikely]] return; }
L_0014A558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A598; } }
L_0014A560:
    set32(c.r[2], ld32((c.r[16].w[0] + 2540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014A584; } }
    set32(c.r[4], c.r[16].w[0] + 304u);
    set32(c.r[5], c.r[16].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A57Cu);  if (depth < kMaxDepth) unit_008A(c, 264u, depth + 1u); else { c.pc = 0x0032B7B0u; return; } if (c.pc != 0x0014A57Cu) [[unlikely]] return; }
L_0014A57C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] + 10968u), c.f[0]);
    c.budget -= 2;
L_0014A584:
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 2544u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 2540u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A650; } }
L_0014A598:
    c.f[2] = ld32((c.r[17].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[2]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A5C8u);  if (depth < kMaxDepth) unit_0089(c, 43u, depth + 1u); else { c.pc = 0x00324A40u; return; } if (c.pc != 0x0014A5C8u) [[unlikely]] return; }
L_0014A5C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A5DCu);  if (depth < kMaxDepth) unit_0088(c, 5u, depth + 1u); else { c.pc = 0x00320070u; return; } if (c.pc != 0x0014A5DCu) [[unlikely]] return; }
L_0014A5DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A5F4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20948u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014A620; } }
L_0014A5F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A604u);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x0014A604u) [[unlikely]] return; }
L_0014A604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014A620; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A618u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x0014A618u) [[unlikely]] return; }
L_0014A618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A650; } }
L_0014A620:
    set32(c.r[2], ld32((c.r[16].w[0] + 2540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014A64C; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 304u);
    st32((c.r[16].w[0] + 2540u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 320u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A644u);  if (depth < kMaxDepth) unit_008A(c, 264u, depth + 1u); else { c.pc = 0x0032B7B0u; return; } if (c.pc != 0x0014A644u) [[unlikely]] return; }
L_0014A644:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] + 10968u), c.f[0]);
    c.budget -= 2;
L_0014A64C:
    st16((c.r[16].w[0] + 2544u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0014A650:
    set32(c.r[2], ld32((c.r[16].w[0] + 2540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A668; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2544u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 2544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0014A668:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2544u)));
    c.r[2].d[0] = c.r[2].sd[0] < 181ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014A688; } }
L_0014A678:
    set32(c.r[2], ld32((c.r[16].w[0] + 2540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A688; } }
    st32((c.r[16].w[0] + 2540u), 0u);
    c.budget -= 1;
L_0014A688:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014A6A8:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 12228u)));
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 15u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014A9A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[18], c.r[2].w[0] + 27456u);
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A708u);  if (depth < kMaxDepth) unit_0087(c, 276u, depth + 1u); else { c.pc = 0x0031FD80u; return; } if (c.pc != 0x0014A708u) [[unlikely]] return; }
L_0014A708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A90C; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A71Cu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014A71Cu) [[unlikely]] return; }
L_0014A71C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A72Cu);  if (depth < kMaxDepth) unit_009C(c, 36u, depth + 1u); else { c.pc = 0x00370458u; return; } if (c.pc != 0x0014A72Cu) [[unlikely]] return; }
L_0014A72C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 704u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014A90C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014A90C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A90C; } }
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], c.r[18].w[0] - 13248u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A77Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0014A77Cu) [[unlikely]] return; }
L_0014A77C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0014A90C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014A90C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0014A90C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A7A8u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x0014A7A8u) [[unlikely]] return; }
L_0014A7A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A90C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A7BCu);  if (depth < kMaxDepth) unit_0019(c, 354u, depth + 1u); else { c.pc = 0x00167CA0u; return; } if (c.pc != 0x0014A7BCu) [[unlikely]] return; }
L_0014A7BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A90C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 2520u)));
    set32(c.r[22], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014A7D8; } }
    st32((c.r[19].w[0] + 2520u), c.r[22].w[0]);
    c.budget -= 1;
L_0014A7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A7E0u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014A7E0u) [[unlikely]] return; }
L_0014A7E0:
    set32(c.r[20], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A7F8u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0014A7F8u) [[unlikely]] return; }
L_0014A7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A800u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014A800u) [[unlikely]] return; }
L_0014A800:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A818u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0014A818u) [[unlikely]] return; }
L_0014A818:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A82Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0014A82Cu) [[unlikely]] return; }
L_0014A82C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A840u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0014A840u) [[unlikely]] return; }
L_0014A840:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A850u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A850u) [[unlikely]] return; }
L_0014A850:
    c.f[1] = ld32((c.r[19].w[0] + 436u));
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014A86C; } }
    st32((c.r[21].w[0] + 4u), c.f[1]);
    c.budget -= 1;
L_0014A86C:
    set32(c.r[16], c.r[29].w[0] + 48u);
    set32(c.r[17], c.r[19].w[0] + 320u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_0014A880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A888u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014A888u) [[unlikely]] return; }
L_0014A888:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A894u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0014A894u) [[unlikely]] return; }
L_0014A894:
    set32(c.r[18], c.r[29].w[0] + 80u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A8ACu);  if (depth < kMaxDepth) unit_008A(c, 295u, depth + 1u); else { c.pc = 0x0032BBB8u; return; } if (c.pc != 0x0014A8ACu) [[unlikely]] return; }
L_0014A8AC:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A8D0u);  if (depth < kMaxDepth) unit_008A(c, 297u, depth + 1u); else { c.pc = 0x0032BC28u; return; } if (c.pc != 0x0014A8D0u) [[unlikely]] return; }
L_0014A8D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A8E8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A8E8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A8E8u) [[unlikely]] return; }
L_0014A8E8:
    set32(c.r[4], c.r[19].w[0] + 432u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A8F8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A8F8u) [[unlikely]] return; }
L_0014A8F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 13216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A90Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A90Cu) [[unlikely]] return; }
L_0014A90C:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_0014A9A0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 2520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A9A0; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 2448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A930u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A930u) [[unlikely]] return; }
L_0014A930:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A944u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014A944u) [[unlikely]] return; }
L_0014A944:
    set32(c.r[2], ld32((c.r[19].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014A97C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A960u);  if (depth < kMaxDepth) unit_008A(c, 166u, depth + 1u); else { c.pc = 0x0032A5B0u; return; } if (c.pc != 0x0014A960u) [[unlikely]] return; }
L_0014A960:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014A9A0; } }
L_0014A97C:
    c.f[12] = 0u;
    c.budget -= 1;
L_0014A980:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 13216u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A99Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014A99Cu) [[unlikely]] return; }
L_0014A99C:
    st32((c.r[19].w[0] + 2520u), 0u);
    c.budget -= 1;
L_0014A9A0:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014A9D0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 232u), c.f[21]);
    st32((c.r[29].w[0] + 224u), c.f[20]);
    set32(c.r[2], ld32((c.r[19].w[0] + 2524u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014AA30; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 2520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014AA30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10960u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014AC98; } }
L_0014AA30:
    set32(c.r[2], ld32((c.r[19].w[0] + 704u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014AC98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 464u);
    set32(c.r[3], ld32((c.r[2].w[0] + 27492u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0014AC98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AA58u);  if (depth < kMaxDepth) unit_0049(c, 178u, depth + 1u); else { c.pc = 0x00226558u; return; } if (c.pc != 0x0014AA58u) [[unlikely]] return; }
L_0014AA58:
    set32(c.r[16], c.r[19].w[0] + 320u);
    c.f[21] = c.f[0];
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AA6Cu);  if (depth < kMaxDepth) unit_0049(c, 177u, depth + 1u); else { c.pc = 0x00226540u; return; } if (c.pc != 0x0014AA6Cu) [[unlikely]] return; }
L_0014AA6C:
    c.f[20] = c.f[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AA80u);  if (depth < kMaxDepth) unit_0013(c, 231u, depth + 1u); else { c.pc = 0x0014E2C0u; return; } if (c.pc != 0x0014AA80u) [[unlikely]] return; }
L_0014AA80:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AA8Cu);  if (depth < kMaxDepth) unit_009B(c, 10u, depth + 1u); else { c.pc = 0x0036C070u; return; } if (c.pc != 0x0014AA8Cu) [[unlikely]] return; }
L_0014AA8C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 112u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    set32(c.r[8], c.r[29].w[0] + 68u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AAA8u);  if (depth < kMaxDepth) unit_0049(c, 166u, depth + 1u); else { c.pc = 0x00226378u; return; } if (c.pc != 0x0014AAA8u) [[unlikely]] return; }
L_0014AAA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    c.f[4] = ld32((c.r[29].w[0] + 64u));
    c.f[3] = fp::mul(c.f[21], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E330000u);
    c.r[1].d[0] = c.r[1].d[0] | 13107ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.f[5] = fp::mul(c.f[20], c.f[1]);
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014AB24; } }
    c.f[0] = fp::sub(c.f[21], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014AB24; } }
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014AB24; } }
    c.f[0] = fp::sub(c.f[20], c.f[5]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014AC98; } }
L_0014AB24:
    set32(c.r[2], ld32((c.r[19].w[0] + 2528u)));
    set32(c.r[22], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014AB38; } }
    st32((c.r[19].w[0] + 2528u), c.r[22].w[0]);
    c.budget -= 1;
L_0014AB38:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014AB60; } }
    c.f[0] = fp::sub(c.f[21], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014ABF4; } }
L_0014AB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AB68u);  if (depth < kMaxDepth) unit_0049(c, 179u, depth + 1u); else { c.pc = 0x00226568u; return; } if (c.pc != 0x0014AB68u) [[unlikely]] return; }
L_0014AB68:
    set32(c.r[17], c.r[19].w[0] + 304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = c.r[1].w[0];
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C8E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 64053ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[12] = fp::mul(c.f[0], c.f[12]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ABB0u);  if (depth < kMaxDepth) unit_008A(c, 270u, depth + 1u); else { c.pc = 0x0032B828u; return; } if (c.pc != 0x0014ABB0u) [[unlikely]] return; }
L_0014ABB0:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[29].w[0] + 48u);
    set32(c.r[10], c.r[29].w[0] + 72u);
    set32(c.r[11], c.r[29].w[0] + 76u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ABDCu);  if (depth < kMaxDepth) unit_008A(c, 291u, depth + 1u); else { c.pc = 0x0032B9C8u; return; } if (c.pc != 0x0014ABDCu) [[unlikely]] return; }
L_0014ABDC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ABECu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014ABECu) [[unlikely]] return; }
L_0014ABEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014AC74; } }
L_0014ABF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ABFCu);  if (depth < kMaxDepth) unit_0049(c, 180u, depth + 1u); else { c.pc = 0x00226578u; return; } if (c.pc != 0x0014ABFCu) [[unlikely]] return; }
L_0014ABFC:
    set32(c.r[16], c.r[19].w[0] + 304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = c.r[1].w[0];
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C8E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 64053ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[12] = fp::mul(c.f[0], c.f[12]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AC44u);  if (depth < kMaxDepth) unit_008A(c, 270u, depth + 1u); else { c.pc = 0x0032B828u; return; } if (c.pc != 0x0014AC44u) [[unlikely]] return; }
L_0014AC44:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 32u);
    set32(c.r[9], c.r[29].w[0] + 48u);
    set32(c.r[10], c.r[29].w[0] + 80u);
    set32(c.r[11], c.r[29].w[0] + 84u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AC6Cu);  if (depth < kMaxDepth) unit_008A(c, 291u, depth + 1u); else { c.pc = 0x0032B9C8u; return; } if (c.pc != 0x0014AC6Cu) [[unlikely]] return; }
L_0014AC6C:
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[21].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_0014AC74:
    set32(c.r[4], c.r[19].w[0] + 432u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AC84u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014AC84u) [[unlikely]] return; }
L_0014AC84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 13200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AC98u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014AC98u) [[unlikely]] return; }
L_0014AC98:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_0014AD2C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 2528u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014AD2C; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 2448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ACBCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014ACBCu) [[unlikely]] return; }
L_0014ACBC:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ACD0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014ACD0u) [[unlikely]] return; }
L_0014ACD0:
    set32(c.r[2], ld32((c.r[19].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014AD08; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ACECu);  if (depth < kMaxDepth) unit_008A(c, 166u, depth + 1u); else { c.pc = 0x0032A5B0u; return; } if (c.pc != 0x0014ACECu) [[unlikely]] return; }
L_0014ACEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014AD2C; } }
L_0014AD08:
    c.f[12] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 13200u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AD28u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014AD28u) [[unlikely]] return; }
L_0014AD28:
    st32((c.r[19].w[0] + 2528u), 0u);
    c.budget -= 1;
L_0014AD2C:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 232u));
    c.f[20] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014AD60:
    set32(c.r[29], c.r[29].w[0] - 416u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[30]);
    st32((c.r[29].w[0] + 408u), c.f[27]);
    st32((c.r[29].w[0] + 400u), c.f[26]);
    st32((c.r[29].w[0] + 392u), c.f[25]);
    st32((c.r[29].w[0] + 384u), c.f[24]);
    c.f[25] = c.f[12];
    st32((c.r[29].w[0] + 376u), c.f[23]);
    st32((c.r[29].w[0] + 368u), c.f[22]);
    st32((c.r[29].w[0] + 360u), c.f[21]);
    st32((c.r[29].w[0] + 352u), c.f[20]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st32((c.r[20].w[0] + 2512u), 0u);
    st16((c.r[20].w[0] + 2516u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ADD4u);  if (depth < kMaxDepth) unit_0049(c, 177u, depth + 1u); else { c.pc = 0x00226540u; return; } if (c.pc != 0x0014ADD4u) [[unlikely]] return; }
L_0014ADD4:
    c.f[20] = 0u;
    c.f[26] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ADE4u);  if (depth < kMaxDepth) unit_0049(c, 178u, depth + 1u); else { c.pc = 0x00226558u; return; } if (c.pc != 0x0014ADE4u) [[unlikely]] return; }
L_0014ADE4:
    c.f[27] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = c.f[20];
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    c.f[13] = c.f[20];
    c.f[24] = fp::mul(c.f[26], c.f[0]);
    c.f[14] = c.f[20];
    c.f[22] = fp::mul(c.f[27], c.f[0]);
    c.f[15] = c.f[20];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AE18u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014AE18u) [[unlikely]] return; }
L_0014AE18:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.f[23] = c.f[24];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AE38u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014AE38u) [[unlikely]] return; }
L_0014AE38:
    c.f[21] = c.f[22];
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AE58u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014AE58u) [[unlikely]] return; }
L_0014AE58:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[20].w[0] + 304u);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AE70u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014AE70u) [[unlikely]] return; }
L_0014AE70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AE78u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014AE78u) [[unlikely]] return; }
L_0014AE78:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AE88u);  if (depth < kMaxDepth) unit_009C(c, 42u, depth + 1u); else { c.pc = 0x003704F8u; return; } if (c.pc != 0x0014AE88u) [[unlikely]] return; }
L_0014AE88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0014B018; } }
    set32(c.r[19], c.r[29].w[0] + 64u);
    set32(c.r[21], c.r[29].w[0] + 112u);
    c.budget -= 3;
L_0014AEA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014AFF4; } }
    mmi::por(c.r[2], c.r[0], c.r[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
    set32(c.r[18], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AEC8u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014AEC8u) [[unlikely]] return; }
L_0014AEC8:
    set32(c.r[17], c.r[29].w[0] + 96u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AEE0u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0014AEE0u) [[unlikely]] return; }
L_0014AEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AEE8u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014AEE8u) [[unlikely]] return; }
L_0014AEE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AEFCu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0014AEFCu) [[unlikely]] return; }
L_0014AEFC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AF10u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014AF10u) [[unlikely]] return; }
L_0014AF10:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AF1Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014AF1Cu) [[unlikely]] return; }
L_0014AF1C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[25]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014AFF4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 304u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AF44u);  if (depth < kMaxDepth) unit_009B(c, 264u, depth + 1u); else { c.pc = 0x0036D810u; return; } if (c.pc != 0x0014AF44u) [[unlikely]] return; }
L_0014AF44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 176u);
    set32(c.r[8], c.r[29].w[0] + 180u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AF60u);  if (depth < kMaxDepth) unit_0049(c, 166u, depth + 1u); else { c.pc = 0x00226378u; return; } if (c.pc != 0x0014AF60u) [[unlikely]] return; }
L_0014AF60:
    c.f[3] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = fp::sub(c.f[21], c.f[22]);
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[2] = fp::sub(c.f[3], c.f[22]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[1] = fp::sub(c.f[26], c.f[1]);
    c.f[2] = c.f[2] & fp::kAbs;
    st32((c.r[29].w[0] + 180u), c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014AFB0; } }
    c.f[21] = c.f[3];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AFA4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014AFA4u) [[unlikely]] return; }
L_0014AFA4:
    set32(c.r[2], c.r[18].w[0] << 16);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 3;
L_0014AFB0:
    c.f[2] = ld32((c.r[29].w[0] + 180u));
    c.f[1] = fp::sub(c.f[23], c.f[24]);
    c.f[0] = fp::sub(c.f[2], c.f[24]);
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014AFF4; } }
    c.f[23] = c.f[2];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AFE8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014AFE8u) [[unlikely]] return; }
L_0014AFE8:
    set32(c.r[2], c.r[18].w[0] << 16);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 3;
L_0014AFF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AFFCu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014AFFCu) [[unlikely]] return; }
L_0014AFFC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B00Cu);  if (depth < kMaxDepth) unit_009C(c, 42u, depth + 1u); else { c.pc = 0x003704F8u; return; } if (c.pc != 0x0014B00Cu) [[unlikely]] return; }
L_0014B00C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014AEA0u | kUnwind; return; } goto L_0014AEA0; } }
L_0014B018:
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014B050; } }
    fpu_compare(c, fp::key(c.f[23]) == fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014B050; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2560u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014B3D4; } }
    st16((c.r[20].w[0] + 2560u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014B3D4; } }
L_0014B050:
    c.f[1] = fp::sub(c.f[21], c.f[22]);
    c.f[0] = fp::sub(c.f[23], c.f[24]);
    c.f[25] = c.f[1];
    c.f[20] = c.f[0];
    fpu_div(c, 1u, c.f[1], c.f[27]);
    fpu_div(c, 0u, c.f[0], c.f[26]);
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[0] = c.f[0] & fp::kAbs;
    c.budget -= 12;
L_0014B080:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014B0AC; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B0A0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014B0A0u) [[unlikely]] return; }
L_0014B0A0:
    set32(c.r[21], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014B0C0; } }
L_0014B0AC:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B0BCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014B0BCu) [[unlikely]] return; }
L_0014B0BC:
    set32(c.r[21], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 1;
L_0014B0C0:
    fpu_div(c, 1u, c.f[25], c.f[27]);
    fpu_div(c, 0u, c.f[20], c.f[26]);
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014B10C; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B104u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014B104u) [[unlikely]] return; }
L_0014B104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014B120; } }
L_0014B10C:
    set32(c.r[19], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B120u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014B120u) [[unlikely]] return; }
L_0014B120:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0014B198; } }
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[22]));
    st32((c.r[20].w[0] + 2568u), c.f[24]);
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014B158; } }
    c.f[0] = ld32((c.r[20].w[0] + 2564u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 2;
L_0014B140:
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014B17C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014B170; } }
L_0014B158:
    c.f[0] = ld32((c.r[20].w[0] + 2564u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014B17C; } }
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 1;
L_0014B170:
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014B200; } }
L_0014B17C:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B18Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014B18Cu) [[unlikely]] return; }
L_0014B18C:
    st32((c.r[20].w[0] + 2564u), c.f[21]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014B200; } }
L_0014B198:
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[24]));
    st32((c.r[20].w[0] + 2564u), c.f[22]);
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014B1C8; } }
    c.f[0] = ld32((c.r[20].w[0] + 2568u));
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014B1EC; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[23]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014B1E0; } }
L_0014B1C8:
    c.f[0] = ld32((c.r[20].w[0] + 2568u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[23]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014B1EC; } }
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 1;
L_0014B1E0:
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014B200; } }
L_0014B1EC:
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B1FCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014B1FCu) [[unlikely]] return; }
L_0014B1FC:
    st32((c.r[20].w[0] + 2568u), c.f[23]);
    c.budget -= 1;
L_0014B200:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B20Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014B20Cu) [[unlikely]] return; }
L_0014B20C:
    set32(c.r[18], c.r[29].w[0] + 80u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.f[22] = c.f[0];
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B228u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014B228u) [[unlikely]] return; }
L_0014B228:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B238u);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x0014B238u) [[unlikely]] return; }
L_0014B238:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B248u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014B248u) [[unlikely]] return; }
L_0014B248:
    fpu_div(c, 21u, c.f[20], c.f[0]);
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B260u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0014B260u) [[unlikely]] return; }
L_0014B260:
    set32(c.r[17], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B278u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0014B278u) [[unlikely]] return; }
L_0014B278:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B28Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014B28Cu) [[unlikely]] return; }
L_0014B28C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B298u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014B298u) [[unlikely]] return; }
L_0014B298:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0014B2B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B2ACu);  if (depth < kMaxDepth) unit_0049(c, 179u, depth + 1u); else { c.pc = 0x00226568u; return; } if (c.pc != 0x0014B2ACu) [[unlikely]] return; }
L_0014B2AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014B2BC; } }
L_0014B2B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B2BCu);  if (depth < kMaxDepth) unit_0049(c, 180u, depth + 1u); else { c.pc = 0x00226578u; return; } if (c.pc != 0x0014B2BCu) [[unlikely]] return; }
L_0014B2BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[12] = fp::mul(c.f[0], c.f[12]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B2ECu);  if (depth < kMaxDepth) unit_0041(c, 374u, depth + 1u); else { c.pc = 0x00207700u; return; } if (c.pc != 0x0014B2ECu) [[unlikely]] return; }
L_0014B2EC:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B300u);  if (depth < kMaxDepth) unit_0044(c, 282u, depth + 1u); else { c.pc = 0x00213E08u; return; } if (c.pc != 0x0014B300u) [[unlikely]] return; }
L_0014B300:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014B328; } }
    c.f[0] = fp::add(c.f[22], c.f[20]);
    c.f[20] = fp::sub(c.f[0], c.f[21]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014B334; } }
L_0014B328:
    c.f[0] = c.f[21] & fp::kAbs;
    c.f[0] = fp::add(c.f[22], c.f[0]);
    c.f[20] = fp::add(c.f[0], c.f[20]);
    c.budget -= 3;
L_0014B334:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[2].w[0] + 10968u), c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B348u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0014B348u) [[unlikely]] return; }
L_0014B348:
    c.f[0] = ld32((c.r[20].w[0] + 584u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014B368; } }
    c.f[20] = c.f[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014B3A4; } }
L_0014B368:
    c.f[0] = ld32((c.r[20].w[0] + 588u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014B3A4; } }
    c.f[20] = c.f[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0014B3A4; } }
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014B3A4; } }
    st32((c.r[20].w[0] + 2512u), c.r[19].w[0]);
    st16((c.r[20].w[0] + 2516u), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.budget -= 2;
L_0014B3A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[12] = c.f[20] ^ fp::kSign;
    c.f[0] = ld32((c.r[2].w[0] + 10964u));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B3C0u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0014B3C0u) [[unlikely]] return; }
L_0014B3C0:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 304u);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B3D4u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0014B3D4u) [[unlikely]] return; }
L_0014B3D4:
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.f[27] = ld32((c.r[29].w[0] + 408u));
    c.f[26] = ld32((c.r[29].w[0] + 400u));
    c.f[25] = ld32((c.r[29].w[0] + 392u));
    c.f[24] = ld32((c.r[29].w[0] + 384u));
    c.f[23] = ld32((c.r[29].w[0] + 376u));
    c.f[22] = ld32((c.r[29].w[0] + 368u));
    c.f[21] = ld32((c.r[29].w[0] + 360u));
    c.f[20] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[29], c.r[29].w[0] + 416u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014B428:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[2], ld32((c.r[3].w[0] + 10960u)));
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014B584; } }
    set32(c.r[17], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B474u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014B474u) [[unlikely]] return; }
L_0014B474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B47Cu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014B47Cu) [[unlikely]] return; }
L_0014B47C:
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B494u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0014B494u) [[unlikely]] return; }
L_0014B494:
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00150000u);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    set32(c.r[9], c.r[9].w[0] - 11280u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B4C0u);  if (depth < kMaxDepth) unit_008E(c, 69u, depth + 1u); else { c.pc = 0x00338EA0u; return; } if (c.pc != 0x0014B4C0u) [[unlikely]] return; }
L_0014B4C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014B584; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], 0u + 14u);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014B584; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014B584; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014B584; } }
    set32(c.r[18], ld32((c.r[4].w[0] + 84u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014B50C; } }
L_0014B508:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0014B50C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B514u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0014B514u) [[unlikely]] return; }
L_0014B514:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2334u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014B548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B52Cu);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0014B52Cu) [[unlikely]] return; }
L_0014B52C:
    set32(c.r[3], c.r[16].w[0] << 16);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 15));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2234u)));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B508u | kUnwind; return; } goto L_0014B508; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0014B548:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0014B584; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B564u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014B564u) [[unlikely]] return; }
L_0014B564:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B570u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0014B570u) [[unlikely]] return; }
L_0014B570:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B584u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0014B584u) [[unlikely]] return; }
L_0014B584:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014B5B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 500u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014B7CC; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B5F0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014B5F0u) [[unlikely]] return; }
L_0014B5F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 10960u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014B614; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B614u);  if (depth < kMaxDepth) unit_0012(c, 441u, depth + 1u); else { c.pc = 0x0014B7F8u; return; } if (c.pc != 0x0014B614u) [[unlikely]] return; }
L_0014B614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B61Cu);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x0014B61Cu) [[unlikely]] return; }
L_0014B61C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014B64C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B62Cu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014B62Cu) [[unlikely]] return; }
L_0014B62C:
    set32(c.r[16], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B644u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0014B644u) [[unlikely]] return; }
L_0014B644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014B660; } }
L_0014B64C:
    set32(c.r[16], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 304u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B660u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014B660u) [[unlikely]] return; }
L_0014B660:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0] + 10960u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0014B748; } }
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00150000u);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11856u);
    set32(c.r[6], c.r[17].w[0] + 448u);
    set32(c.r[9], c.r[9].w[0] - 11280u);
    set32(c.r[8], c.r[29].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B698u);  if (depth < kMaxDepth) unit_008E(c, 69u, depth + 1u); else { c.pc = 0x00338EA0u; return; } if (c.pc != 0x0014B698u) [[unlikely]] return; }
L_0014B698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014B7BC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], 0u + 14u);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014B7BC; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014B7BC; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014B7BC; } }
    set32(c.r[18], ld32((c.r[4].w[0] + 84u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014B6E4; } }
L_0014B6E0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0014B6E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B6ECu);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0014B6ECu) [[unlikely]] return; }
L_0014B6EC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2334u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014B720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B704u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0014B704u) [[unlikely]] return; }
L_0014B704:
    set32(c.r[3], c.r[16].w[0] << 16);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 15));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2234u)));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B6E0u | kUnwind; return; } goto L_0014B6E0; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0014B720:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0014B7BC; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B738u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014B738u) [[unlikely]] return; }
L_0014B738:
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 10960u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014B7BC; } }
L_0014B748:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0014B7BC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00150000u);
    set32(c.r[6], c.r[17].w[0] + 2480u);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    set32(c.r[9], c.r[9].w[0] - 11280u);
    set32(c.r[7], c.r[29].w[0] + 32u);
    set32(c.r[8], c.r[29].w[0] + 48u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B77Cu);  if (depth < kMaxDepth) unit_008E(c, 69u, depth + 1u); else { c.pc = 0x00338EA0u; return; } if (c.pc != 0x0014B77Cu) [[unlikely]] return; }
L_0014B77C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014B7B0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], 0u + 14u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0014B7B0; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014B7B0; } }
    c.r[2].d[0] = c.r[4].d[0] ^ 19ull;
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[17].d[0] = 0ull;
    c.budget -= 3;
L_0014B7B0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0014B7BC; } }
    st32((c.r[19].w[0] + 10960u), 0u);
    c.budget -= 1;
L_0014B7BC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B7CCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014B7CCu) [[unlikely]] return; }
L_0014B7CC:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014B7F8:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[19]);
    set32(c.r[16], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[22]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[19].w[0] + 304u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 320u), c.f[20]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B844u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014B844u) [[unlikely]] return; }
L_0014B844:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00150000u);
    set32(c.r[18], c.r[29].w[0] + 32u);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 48u);
    set32(c.r[9], c.r[9].w[0] - 11280u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B878u);  if (depth < kMaxDepth) unit_008E(c, 69u, depth + 1u); else { c.pc = 0x00338EA0u; return; } if (c.pc != 0x0014B878u) [[unlikely]] return; }
L_0014B878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014B8F4; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], 0u + 14u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0014B8F4; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014B8F4; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014B8F4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B8C0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014B8C0u) [[unlikely]] return; }
L_0014B8C0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B8CCu);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0014B8CCu) [[unlikely]] return; }
L_0014B8CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B8E0u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0014B8E0u) [[unlikely]] return; }
L_0014B8E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B8F4u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0014B8F4u) [[unlikely]] return; }
L_0014B8F4:
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    set32(c.r[18], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[29].w[0] + 24u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[5], c.r[19].w[0] + 304u);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 120u), c.f[2]);
    set32(c.r[23], c.r[21].w[0] - 11856u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    set32(c.r[30], c.r[20].w[0] - 11280u);
    st32((c.r[29].w[0] + 124u), 0u);
    c.r[21].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B93Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014B93Cu) [[unlikely]] return; }
L_0014B93C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_0014B940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B948u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0014B948u) [[unlikely]] return; }
L_0014B948:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B960u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0014B960u) [[unlikely]] return; }
L_0014B960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B968u);  if (depth < kMaxDepth) unit_0049(c, 179u, depth + 1u); else { c.pc = 0x00226568u; return; } if (c.pc != 0x0014B968u) [[unlikely]] return; }
L_0014B968:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C8E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 64053ull;
    c.f[2] = c.r[1].w[0];
    set32(c.r[17], c.r[29].w[0] + 112u);
    c.f[20] = fp::mul(c.f[0], c.f[1]);
    mmi::por(c.r[2], c.r[0], c.r[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = fp::mul(c.f[20], c.f[2]);
    c.f[12] = c.f[20];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B9ACu);  if (depth < kMaxDepth) unit_008A(c, 121u, depth + 1u); else { c.pc = 0x00329D98u; return; } if (c.pc != 0x0014B9ACu) [[unlikely]] return; }
L_0014B9AC:
    c.f[12] = c.f[20] ^ fp::kSign;
    set32(c.r[19], c.r[29].w[0] + 80u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B9C8u);  if (depth < kMaxDepth) unit_008A(c, 121u, depth + 1u); else { c.pc = 0x00329D98u; return; } if (c.pc != 0x0014B9C8u) [[unlikely]] return; }
L_0014B9C8:
    c.f[0] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 76u), c.f[0]);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B9E4u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x0014B9E4u) [[unlikely]] return; }
L_0014B9E4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B9F4u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x0014B9F4u) [[unlikely]] return; }
L_0014B9F4:
    set32(c.r[17], c.r[29].w[0] + 144u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BA1Cu);  if (depth < kMaxDepth) unit_008E(c, 69u, depth + 1u); else { c.pc = 0x00338EA0u; return; } if (c.pc != 0x0014BA1Cu) [[unlikely]] return; }
L_0014BA1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014BA4C; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BA44u);  if (depth < kMaxDepth) unit_008E(c, 69u, depth + 1u); else { c.pc = 0x00338EA0u; return; } if (c.pc != 0x0014BA44u) [[unlikely]] return; }
L_0014BA44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014BA74; } }
L_0014BA4C:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], 0u + 14u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0014BA74; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014BA74; } }
    c.r[2].d[0] = c.r[4].d[0] ^ 19ull;
    c.r[21].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0014BA74:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0014BAD4; } }
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BA90u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014BA90u) [[unlikely]] return; }
L_0014BA90:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BA9Cu);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0014BA9Cu) [[unlikely]] return; }
L_0014BA9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BAB4u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0014BAB4u) [[unlikely]] return; }
L_0014BAB4:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BAC4u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x0014BAC4u) [[unlikely]] return; }
L_0014BAC4:
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[22].w[0]), c.f[0]);
    st32((c.r[22].w[0] + 8u), c.f[1]);
    c.budget -= 4;
L_0014BAD4:
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[20] = ld32((c.r[29].w[0] + 320u));
    set32(c.r[29], c.r[29].w[0] + 336u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014BB10:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 624u), c.f[24]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[17].w[0] + 304u);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[21]);
    set32(c.r[19], c.r[17].w[0] + 320u);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[22]);
    st32((c.r[29].w[0] + 640u), c.f[26]);
    st32((c.r[29].w[0] + 632u), c.f[25]);
    st32((c.r[29].w[0] + 616u), c.f[23]);
    st32((c.r[29].w[0] + 608u), c.f[22]);
    st32((c.r[29].w[0] + 600u), c.f[21]);
    st32((c.r[29].w[0] + 592u), c.f[20]);
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 432u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[24] = c.r[1].w[0];
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BB78u);  if (depth < kMaxDepth) unit_0049(c, 178u, depth + 1u); else { c.pc = 0x00226558u; return; } if (c.pc != 0x0014BB78u) [[unlikely]] return; }
L_0014BB78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[22] = c.r[1].w[0];
    c.f[21] = fp::sub(c.f[0], c.f[24]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[26] = c.r[1].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BB94u);  if (depth < kMaxDepth) unit_0049(c, 177u, depth + 1u); else { c.pc = 0x00226540u; return; } if (c.pc != 0x0014BB94u) [[unlikely]] return; }
L_0014BB94:
    c.f[25] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[1] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[23] = ld32((c.r[2].w[0] + 19788u));
    c.f[12] = fp::mul(c.f[21], c.f[22]);
    c.f[20] = fp::mul(c.f[0], c.f[1]);
    c.f[13] = c.f[23];
    c.f[20] = fp::sub(c.f[20], c.f[24]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BBC4u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0014BBC4u) [[unlikely]] return; }
L_0014BBC4:
    c.f[21] = fp::add(c.f[0], c.f[0]);
    c.f[13] = c.f[23];
    c.f[12] = fp::mul(c.f[20], c.f[22]);
    c.f[21] = fp::mul(c.f[21], c.f[22]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BBDCu);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0014BBDCu) [[unlikely]] return; }
L_0014BBDC:
    c.f[20] = fp::add(c.f[0], c.f[0]);
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BBECu);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0014BBECu) [[unlikely]] return; }
L_0014BBEC:
    c.f[20] = fp::mul(c.f[20], c.f[22]);
    c.f[23] = c.f[0];
    c.f[12] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BC00u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0014BC00u) [[unlikely]] return; }
L_0014BC00:
    c.f[21] = c.f[0];
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BC10u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0014BC10u) [[unlikely]] return; }
L_0014BC10:
    c.f[22] = c.f[0];
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BC20u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0014BC20u) [[unlikely]] return; }
L_0014BC20:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[23];
    c.f[13] = c.f[25];
    c.f[14] = c.f[21];
    c.f[15] = c.f[25];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BC40u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014BC40u) [[unlikely]] return; }
L_0014BC40:
    c.f[12] = c.f[23] ^ fp::kSign;
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[14] = c.f[21];
    c.f[13] = c.f[25];
    c.f[15] = c.f[25];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BC5Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014BC5Cu) [[unlikely]] return; }
L_0014BC5C:
    c.f[13] = c.f[22] ^ fp::kSign;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[12] = c.f[25];
    c.f[14] = c.f[20];
    c.f[15] = c.f[25];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BC78u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014BC78u) [[unlikely]] return; }
L_0014BC78:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[13] = c.f[22];
    c.f[14] = c.f[20];
    c.f[12] = c.f[25];
    c.f[15] = c.f[25];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BC94u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014BC94u) [[unlikely]] return; }
L_0014BC94:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.f[25];
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    c.f[13] = c.f[25];
    c.f[14] = c.f[26];
    c.f[15] = c.f[25];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BCB4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014BCB4u) [[unlikely]] return; }
L_0014BCB4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[14] = c.r[1].w[0];
    c.f[12] = c.f[25];
    c.f[13] = c.f[25];
    c.f[15] = c.f[25];
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BCD8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014BCD8u) [[unlikely]] return; }
L_0014BCD8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BCE8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014BCE8u) [[unlikely]] return; }
L_0014BCE8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BCF8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014BCF8u) [[unlikely]] return; }
L_0014BCF8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BD08u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014BD08u) [[unlikely]] return; }
L_0014BD08:
    set32(c.r[2], ld32((c.r[17].w[0] + 724u)));
    set32(c.r[16], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 108u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BD28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014BD28u) [[unlikely]] return; }
L_0014BD28:
    set32(c.r[2], ld32((c.r[17].w[0] + 2580u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014BD48; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BD48u);  if (depth < kMaxDepth) unit_0013(c, 10u, depth + 1u); else { c.pc = 0x0014C140u; return; } if (c.pc != 0x0014BD48u) [[unlikely]] return; }
L_0014BD48:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BD58u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014BD58u) [[unlikely]] return; }
L_0014BD58:
    c.r[23].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.f[13] = ld32((c.r[29].w[0] + 132u));
    c.f[15] = c.f[25];
    c.f[14] = ld32((c.r[29].w[0] + 136u));
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 416u), c.r[18].w[0]);
    set32(c.r[20], 0u + 5u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BD84u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014BD84u) [[unlikely]] return; }
L_0014BD84:
    set32(c.r[3], ld32((c.r[17].w[0] + 724u)));
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BDA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014BDA0u) [[unlikely]] return; }
L_0014BDA0:
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    set32(c.r[19], c.r[29].w[0] + 368u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44220000u);
    c.r[1].d[0] = c.r[1].d[0] | 63875ull;
    c.f[3] = c.r[1].w[0];
    c.f[15] = c.f[25];
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[14] = ld32((c.r[29].w[0] + 152u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[13] = fp::mul(c.f[1], c.f[12]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.f[14] = fp::mul(c.f[14], c.f[12]);
    st32((c.r[29].w[0] + 144u), c.f[2]);
    c.f[12] = fp::mul(c.f[2], c.f[12]);
    c.f[13] = fp::mul(c.f[13], c.f[0]);
    c.f[14] = fp::mul(c.f[14], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.f[13] = c.f[13] ^ fp::kSign;
    c.f[14] = c.f[14] ^ fp::kSign;
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BE14u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014BE14u) [[unlikely]] return; }
L_0014BE14:
    c.f[14] = ld32((c.r[17].w[0] + 328u));
    set32(c.r[18], c.r[29].w[0] + 384u);
    c.f[12] = ld32((c.r[17].w[0] + 320u));
    c.f[15] = c.f[26];
    c.f[13] = ld32((c.r[17].w[0] + 324u));
    c.f[14] = c.f[14] ^ fp::kSign;
    c.f[12] = c.f[12] ^ fp::kSign;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BE40u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014BE40u) [[unlikely]] return; }
L_0014BE40:
    set32(c.r[17], c.r[29].w[0] + 240u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BE50u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0014BE50u) [[unlikely]] return; }
L_0014BE50:
    set32(c.r[16], c.r[29].w[0] + 176u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BE60u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0014BE60u) [[unlikely]] return; }
L_0014BE60:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BE74u);  if (depth < kMaxDepth) unit_0045(c, 56u, depth + 1u); else { c.pc = 0x00214EB0u; return; } if (c.pc != 0x0014BE74u) [[unlikely]] return; }
L_0014BE74:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BE88u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0014BE88u) [[unlikely]] return; }
L_0014BE88:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BE98u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x0014BE98u) [[unlikely]] return; }
L_0014BE98:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BEACu);  if (depth < kMaxDepth) unit_0045(c, 3u, depth + 1u); else { c.pc = 0x00214058u; return; } if (c.pc != 0x0014BEACu) [[unlikely]] return; }
L_0014BEAC:
    set32(c.r[17], c.r[29].w[0] + 400u);
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
L_0014BEB8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BED0u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0014BED0u) [[unlikely]] return; }
L_0014BED0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BEE0u);  if (depth < kMaxDepth) unit_008B(c, 106u, depth + 1u); else { c.pc = 0x0032CD08u; return; } if (c.pc != 0x0014BEE0u) [[unlikely]] return; }
L_0014BEE0:
    c.f[20] = c.f[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BEF4u);  if (depth < kMaxDepth) unit_008B(c, 140u, depth + 1u); else { c.pc = 0x0032D100u; return; } if (c.pc != 0x0014BEF4u) [[unlikely]] return; }
L_0014BEF4:
    c.f[20] = c.f[20] ^ fp::kSign;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 400u));
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.f[13] = ld32((c.r[29].w[0] + 404u));
    c.f[14] = ld32((c.r[29].w[0] + 408u));
    c.f[15] = c.f[20];
    st32((c.r[29].w[0] + 412u), c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BF1Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014BF1Cu) [[unlikely]] return; }
L_0014BF1C:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014BEB8u | kUnwind; return; } goto L_0014BEB8; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BF34u);  if (depth < kMaxDepth) unit_008B(c, 140u, depth + 1u); else { c.pc = 0x0032D100u; return; } if (c.pc != 0x0014BF34u) [[unlikely]] return; }
L_0014BF34:
    c.f[20] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[29].w[0] + 412u));
    c.f[1] = ld32((c.r[3].w[0] + 16820u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[12] = ld32((c.r[29].w[0] + 400u));
    set32(c.r[16], c.r[2].w[0] - 13248u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[13] = ld32((c.r[29].w[0] + 404u));
    c.f[14] = ld32((c.r[29].w[0] + 408u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 412u), c.f[0]);
    c.f[15] = c.f[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BF70u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014BF70u) [[unlikely]] return; }
L_0014BF70:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BF80u);  if (depth < kMaxDepth) unit_008B(c, 140u, depth + 1u); else { c.pc = 0x0032D100u; return; } if (c.pc != 0x0014BF80u) [[unlikely]] return; }
L_0014BF80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[29].w[0] + 412u));
    c.f[1] = ld32((c.r[2].w[0] + 16824u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 400u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[13] = ld32((c.r[29].w[0] + 404u));
    c.f[14] = ld32((c.r[29].w[0] + 408u));
    c.f[15] = c.f[0];
    st32((c.r[29].w[0] + 412u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BFB0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014BFB0u) [[unlikely]] return; }
L_0014BFB0:
    set32(c.r[4], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BFC0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014BFC0u) [[unlikely]] return; }
L_0014BFC0:
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BFD0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014BFD0u) [[unlikely]] return; }
L_0014BFD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BFDCu);  if (depth < kMaxDepth) unit_0010(c, 293u, depth + 1u); else { c.pc = 0x00143850u; return; } if (c.pc != 0x0014BFDCu) [[unlikely]] return; }
L_0014BFDC:
    c.f[21] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BFF8u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0014BFF8u) [[unlikely]] return; }
L_0014BFF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0013(c, 9u, depth); } }
    [[clang::musttail]] return unit_0013(c, 1u, depth);
}

}
