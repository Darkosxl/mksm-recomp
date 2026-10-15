#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000A[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 5, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0,
    9, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 35, 0,
    0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0,
    0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90,
    91, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 95, 96, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119,
    0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127,
    0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0,
    0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0,
    0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0,
    173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 185, 186,
    0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199,
    0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202,
    203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0,
    0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0,
    0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 225, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0,
    0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0,
    247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0,
    0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0,
    0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 301, 0, 302, 0, 0, 303, 0, 0, 0, 304, 0, 305, 0, 306, 0, 0,
    0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 310, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0,
    315, 316, 317, 0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0,
    0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0,
    0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0,
    335, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0,
    0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0,
    0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0,
    412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0,
};

void unit_000A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00128000;
    case 2u: goto L_00128010;
    case 3u: goto L_00128038;
    case 4u: goto L_0012803C;
    case 5u: goto L_00128040;
    case 6u: goto L_00128048;
    case 7u: goto L_00128060;
    case 8u: goto L_00128078;
    case 9u: goto L_00128080;
    case 10u: goto L_00128088;
    case 11u: goto L_001280A0;
    case 12u: goto L_001280B8;
    case 13u: goto L_001280F8;
    case 14u: goto L_00128110;
    case 15u: goto L_00128130;
    case 16u: goto L_00128140;
    case 17u: goto L_00128148;
    case 18u: goto L_00128164;
    case 19u: goto L_0012817C;
    case 20u: goto L_00128198;
    case 21u: goto L_001281B0;
    case 22u: goto L_001281CC;
    case 23u: goto L_001281E4;
    case 24u: goto L_00128200;
    case 25u: goto L_00128218;
    case 26u: goto L_00128238;
    case 27u: goto L_00128250;
    case 28u: goto L_00128270;
    case 29u: goto L_00128288;
    case 30u: goto L_001282A8;
    case 31u: goto L_001282C0;
    case 32u: goto L_001282D8;
    case 33u: goto L_001282E8;
    case 34u: goto L_001282F0;
    case 35u: goto L_001282F8;
    case 36u: goto L_00128308;
    case 37u: goto L_0012833C;
    case 38u: goto L_00128360;
    case 39u: goto L_00128374;
    case 40u: goto L_00128384;
    case 41u: goto L_00128394;
    case 42u: goto L_001283A4;
    case 43u: goto L_001283B4;
    case 44u: goto L_001283D0;
    case 45u: goto L_001283E8;
    case 46u: goto L_00128404;
    case 47u: goto L_00128420;
    case 48u: goto L_00128428;
    case 49u: goto L_00128448;
    case 50u: goto L_00128458;
    case 51u: goto L_00128468;
    case 52u: goto L_00128480;
    case 53u: goto L_0012849C;
    case 54u: goto L_001284A4;
    case 55u: goto L_001284D0;
    case 56u: goto L_001284E0;
    case 57u: goto L_00128514;
    case 58u: goto L_00128524;
    case 59u: goto L_00128540;
    case 60u: goto L_00128550;
    case 61u: goto L_00128594;
    case 62u: goto L_001285A4;
    case 63u: goto L_001285C8;
    case 64u: goto L_001285E4;
    case 65u: goto L_001285F4;
    case 66u: goto L_00128600;
    case 67u: goto L_00128630;
    case 68u: goto L_00128640;
    case 69u: goto L_0012864C;
    case 70u: goto L_00128660;
    case 71u: goto L_00128678;
    case 72u: goto L_001286AC;
    case 73u: goto L_001286C0;
    case 74u: goto L_001286DC;
    case 75u: goto L_00128718;
    case 76u: goto L_00128728;
    case 77u: goto L_00128740;
    case 78u: goto L_00128760;
    case 79u: goto L_00128790;
    case 80u: goto L_0012879C;
    case 81u: goto L_001287B4;
    case 82u: goto L_001287E0;
    case 83u: goto L_001287F8;
    case 84u: goto L_00128808;
    case 85u: goto L_0012885C;
    case 86u: goto L_00128880;
    case 87u: goto L_001288A0;
    case 88u: goto L_001288C0;
    case 89u: goto L_001288E0;
    case 90u: goto L_001288FC;
    case 91u: goto L_00128900;
    case 92u: goto L_00128910;
    case 93u: goto L_0012891C;
    case 94u: goto L_00128930;
    case 95u: goto L_00128940;
    case 96u: goto L_00128944;
    case 97u: goto L_0012894C;
    case 98u: goto L_00128958;
    case 99u: goto L_00128964;
    case 100u: goto L_00128970;
    case 101u: goto L_001289BC;
    case 102u: goto L_001289F0;
    case 103u: goto L_00128A24;
    case 104u: goto L_00128A58;
    case 105u: goto L_00128A8C;
    case 106u: goto L_00128AC8;
    case 107u: goto L_00128B20;
    case 108u: goto L_00128BB8;
    case 109u: goto L_00128BF0;
    case 110u: goto L_00128C48;
    case 111u: goto L_00128C90;
    case 112u: goto L_00128CCC;
    case 113u: goto L_00128D04;
    case 114u: goto L_00128D20;
    case 115u: goto L_00128D34;
    case 116u: goto L_00128D68;
    case 117u: goto L_00128D9C;
    case 118u: goto L_00128DCC;
    case 119u: goto L_00128DFC;
    case 120u: goto L_00128E0C;
    case 121u: goto L_00128E1C;
    case 122u: goto L_00128E2C;
    case 123u: goto L_00128E3C;
    case 124u: goto L_00128E4C;
    case 125u: goto L_00128E5C;
    case 126u: goto L_00128E6C;
    case 127u: goto L_00128E7C;
    case 128u: goto L_00128E84;
    case 129u: goto L_00128E8C;
    case 130u: goto L_00128E94;
    case 131u: goto L_00128ED8;
    case 132u: goto L_00128EF8;
    case 133u: goto L_00128F08;
    case 134u: goto L_00128F18;
    case 135u: goto L_00128F28;
    case 136u: goto L_00128F38;
    case 137u: goto L_00128F48;
    case 138u: goto L_00128F58;
    case 139u: goto L_00128F68;
    case 140u: goto L_00128F78;
    case 141u: goto L_00128F88;
    case 142u: goto L_00128F98;
    case 143u: goto L_00128FA8;
    case 144u: goto L_00128FB8;
    case 145u: goto L_00128FC8;
    case 146u: goto L_00128FDC;
    case 147u: goto L_00128FE8;
    case 148u: goto L_00128FF8;
    case 149u: goto L_00129004;
    case 150u: goto L_00129020;
    case 151u: goto L_0012902C;
    case 152u: goto L_0012903C;
    case 153u: goto L_00129040;
    case 154u: goto L_00129058;
    case 155u: goto L_00129080;
    case 156u: goto L_001290C0;
    case 157u: goto L_00129100;
    case 158u: goto L_0012910C;
    case 159u: goto L_0012913C;
    case 160u: goto L_00129140;
    case 161u: goto L_00129148;
    case 162u: goto L_00129180;
    case 163u: goto L_001291C0;
    case 164u: goto L_001291F4;
    case 165u: goto L_00129200;
    case 166u: goto L_0012925C;
    case 167u: goto L_00129278;
    case 168u: goto L_00129280;
    case 169u: goto L_001292E8;
    case 170u: goto L_00129300;
    case 171u: goto L_00129348;
    case 172u: goto L_00129374;
    case 173u: goto L_00129380;
    case 174u: goto L_00129390;
    case 175u: goto L_001293B8;
    case 176u: goto L_001293C0;
    case 177u: goto L_001293E4;
    case 178u: goto L_001293F8;
    case 179u: goto L_00129400;
    case 180u: goto L_0012942C;
    case 181u: goto L_00129438;
    case 182u: goto L_0012943C;
    case 183u: goto L_00129460;
    case 184u: goto L_00129468;
    case 185u: goto L_00129478;
    case 186u: goto L_0012947C;
    case 187u: goto L_00129484;
    case 188u: goto L_001294B8;
    case 189u: goto L_00129500;
    case 190u: goto L_0012952C;
    case 191u: goto L_00129538;
    case 192u: goto L_0012954C;
    case 193u: goto L_00129580;
    case 194u: goto L_001295C8;
    case 195u: goto L_001295D4;
    case 196u: goto L_001295F0;
    case 197u: goto L_0012963C;
    case 198u: goto L_00129664;
    case 199u: goto L_0012967C;
    case 200u: goto L_0012968C;
    case 201u: goto L_001296C8;
    case 202u: goto L_001296FC;
    case 203u: goto L_00129700;
    case 204u: goto L_0012971C;
    case 205u: goto L_00129730;
    case 206u: goto L_00129744;
    case 207u: goto L_0012974C;
    case 208u: goto L_0012975C;
    case 209u: goto L_001297C4;
    case 210u: goto L_001297E8;
    case 211u: goto L_00129804;
    case 212u: goto L_00129828;
    case 213u: goto L_0012983C;
    case 214u: goto L_00129850;
    case 215u: goto L_00129870;
    case 216u: goto L_00129878;
    case 217u: goto L_00129888;
    case 218u: goto L_001298A4;
    case 219u: goto L_001298DC;
    case 220u: goto L_001298E8;
    case 221u: goto L_00129910;
    case 222u: goto L_00129918;
    case 223u: goto L_00129934;
    case 224u: goto L_00129940;
    case 225u: goto L_00129948;
    case 226u: goto L_00129958;
    case 227u: goto L_00129964;
    case 228u: goto L_00129984;
    case 229u: goto L_00129994;
    case 230u: goto L_001299B4;
    case 231u: goto L_001299C8;
    case 232u: goto L_001299D0;
    case 233u: goto L_001299E0;
    case 234u: goto L_00129A00;
    case 235u: goto L_00129A18;
    case 236u: goto L_00129A8C;
    case 237u: goto L_00129ABC;
    case 238u: goto L_00129AEC;
    case 239u: goto L_00129B1C;
    case 240u: goto L_00129B4C;
    case 241u: goto L_00129B7C;
    case 242u: goto L_00129BAC;
    case 243u: goto L_00129BDC;
    case 244u: goto L_00129C0C;
    case 245u: goto L_00129C3C;
    case 246u: goto L_00129C6C;
    case 247u: goto L_00129C80;
    case 248u: goto L_00129D10;
    case 249u: goto L_00129D48;
    case 250u: goto L_00129D80;
    case 251u: goto L_00129E00;
    case 252u: goto L_00129E30;
    case 253u: goto L_00129E64;
    case 254u: goto L_00129E90;
    case 255u: goto L_00129EC8;
    case 256u: goto L_00129EFC;
    case 257u: goto L_00129F2C;
    case 258u: goto L_00129F70;
    case 259u: goto L_00129F80;
    case 260u: goto L_00129FA4;
    case 261u: goto L_00129FD8;
    case 262u: goto L_00129FE8;
    case 263u: goto L_0012A00C;
    case 264u: goto L_0012A024;
    case 265u: goto L_0012A03C;
    case 266u: goto L_0012A060;
    case 267u: goto L_0012A070;
    case 268u: goto L_0012A080;
    case 269u: goto L_0012A0AC;
    case 270u: goto L_0012A0C0;
    case 271u: goto L_0012A200;
    case 272u: goto L_0012A2B0;
    case 273u: goto L_0012A344;
    case 274u: goto L_0012A388;
    case 275u: goto L_0012A3B8;
    case 276u: goto L_0012A3C0;
    case 277u: goto L_0012A3D8;
    case 278u: goto L_0012A3E8;
    case 279u: goto L_0012A3F8;
    case 280u: goto L_0012A430;
    case 281u: goto L_0012A448;
    case 282u: goto L_0012A458;
    case 283u: goto L_0012A460;
    case 284u: goto L_0012A468;
    case 285u: goto L_0012A480;
    case 286u: goto L_0012A490;
    case 287u: goto L_0012A4C4;
    case 288u: goto L_0012A4E0;
    case 289u: goto L_0012A4F0;
    case 290u: goto L_0012A550;
    case 291u: goto L_0012A5A4;
    case 292u: goto L_0012A5B4;
    case 293u: goto L_0012A5C4;
    case 294u: goto L_0012A5D4;
    case 295u: goto L_0012A5E4;
    case 296u: goto L_0012A5F4;
    case 297u: goto L_0012A604;
    case 298u: goto L_0012A614;
    case 299u: goto L_0012A624;
    case 300u: goto L_0012A634;
    case 301u: goto L_0012A640;
    case 302u: goto L_0012A648;
    case 303u: goto L_0012A654;
    case 304u: goto L_0012A664;
    case 305u: goto L_0012A66C;
    case 306u: goto L_0012A674;
    case 307u: goto L_0012A68C;
    case 308u: goto L_0012A6A4;
    case 309u: goto L_0012A6B4;
    case 310u: goto L_0012A6B8;
    case 311u: goto L_0012A6C4;
    case 312u: goto L_0012A6D4;
    case 313u: goto L_0012A6DC;
    case 314u: goto L_0012A6E4;
    case 315u: goto L_0012A700;
    case 316u: goto L_0012A704;
    case 317u: goto L_0012A708;
    case 318u: goto L_0012A714;
    case 319u: goto L_0012A724;
    case 320u: goto L_0012A72C;
    case 321u: goto L_0012A734;
    case 322u: goto L_0012A770;
    case 323u: goto L_0012A784;
    case 324u: goto L_0012A7A0;
    case 325u: goto L_0012A7C0;
    case 326u: goto L_0012A7D4;
    case 327u: goto L_0012A7F0;
    case 328u: goto L_0012A804;
    case 329u: goto L_0012A818;
    case 330u: goto L_0012A838;
    case 331u: goto L_0012A83C;
    case 332u: goto L_0012A84C;
    case 333u: goto L_0012A864;
    case 334u: goto L_0012A874;
    case 335u: goto L_0012A880;
    case 336u: goto L_0012A884;
    case 337u: goto L_0012A894;
    case 338u: goto L_0012A8A4;
    case 339u: goto L_0012A8B4;
    case 340u: goto L_0012A8C8;
    case 341u: goto L_0012A8DC;
    case 342u: goto L_0012A8F0;
    case 343u: goto L_0012A904;
    case 344u: goto L_0012A90C;
    case 345u: goto L_0012A930;
    case 346u: goto L_0012A944;
    case 347u: goto L_0012A954;
    case 348u: goto L_0012A978;
    case 349u: goto L_0012A98C;
    case 350u: goto L_0012A99C;
    case 351u: goto L_0012A9C0;
    case 352u: goto L_0012A9D4;
    case 353u: goto L_0012A9E4;
    case 354u: goto L_0012A9EC;
    case 355u: goto L_0012AA20;
    case 356u: goto L_0012AA40;
    case 357u: goto L_0012AA84;
    case 358u: goto L_0012AA98;
    case 359u: goto L_0012AADC;
    case 360u: goto L_0012AAF0;
    case 361u: goto L_0012AB34;
    case 362u: goto L_0012AB48;
    case 363u: goto L_0012AB8C;
    case 364u: goto L_0012ABA0;
    case 365u: goto L_0012ABE4;
    case 366u: goto L_0012ABF8;
    case 367u: goto L_0012AC3C;
    case 368u: goto L_0012AC50;
    case 369u: goto L_0012AC94;
    case 370u: goto L_0012ACA8;
    case 371u: goto L_0012ACEC;
    case 372u: goto L_0012AD00;
    case 373u: goto L_0012AD44;
    case 374u: goto L_0012AD60;
    case 375u: goto L_0012ADA4;
    case 376u: goto L_0012ADC0;
    case 377u: goto L_0012AE04;
    case 378u: goto L_0012AE20;
    case 379u: goto L_0012AE4C;
    case 380u: goto L_0012AE68;
    case 381u: goto L_0012AE70;
    case 382u: goto L_0012AE88;
    case 383u: goto L_0012AE98;
    case 384u: goto L_0012AEB0;
    case 385u: goto L_0012AEC0;
    case 386u: goto L_0012AEF4;
    case 387u: goto L_0012AF28;
    case 388u: goto L_0012AF9C;
    case 389u: goto L_0012B010;
    case 390u: goto L_0012B040;
    case 391u: goto L_0012B090;
    case 392u: goto L_0012B134;
    case 393u: goto L_0012B168;
    case 394u: goto L_0012B19C;
    case 395u: goto L_0012B1C8;
    case 396u: goto L_0012B1F4;
    case 397u: goto L_0012B21C;
    case 398u: goto L_0012B244;
    case 399u: goto L_0012B270;
    case 400u: goto L_0012B298;
    case 401u: goto L_0012B2C8;
    case 402u: goto L_0012B2F8;
    case 403u: goto L_0012B324;
    case 404u: goto L_0012B348;
    case 405u: goto L_0012B370;
    case 406u: goto L_0012B398;
    case 407u: goto L_0012B3BC;
    case 408u: goto L_0012B3E4;
    case 409u: goto L_0012B40C;
    case 410u: goto L_0012B434;
    case 411u: goto L_0012B45C;
    case 412u: goto L_0012B480;
    case 413u: goto L_0012B4A8;
    case 414u: goto L_0012B4D8;
    case 415u: goto L_0012B500;
    case 416u: goto L_0012B52C;
    case 417u: goto L_0012B554;
    case 418u: goto L_0012B57C;
    case 419u: goto L_0012B5AC;
    case 420u: goto L_0012B5D8;
    case 421u: goto L_0012B604;
    case 422u: goto L_0012B630;
    case 423u: goto L_0012B65C;
    case 424u: goto L_0012B690;
    case 425u: goto L_0012B6BC;
    case 426u: goto L_0012B6E8;
    case 427u: goto L_0012B714;
    case 428u: goto L_0012B740;
    case 429u: goto L_0012B76C;
    case 430u: goto L_0012B798;
    case 431u: goto L_0012B7C4;
    case 432u: goto L_0012B7F0;
    case 433u: goto L_0012B81C;
    case 434u: goto L_0012B848;
    case 435u: goto L_0012B874;
    case 436u: goto L_0012B8A0;
    case 437u: goto L_0012B8C8;
    case 438u: goto L_0012B8F4;
    case 439u: goto L_0012B91C;
    case 440u: goto L_0012B948;
    case 441u: goto L_0012B974;
    case 442u: goto L_0012B9A0;
    case 443u: goto L_0012B9CC;
    case 444u: goto L_0012B9F8;
    case 445u: goto L_0012BA24;
    case 446u: goto L_0012BA4C;
    case 447u: goto L_0012BA78;
    case 448u: goto L_0012BAA8;
    case 449u: goto L_0012BAD0;
    case 450u: goto L_0012BB00;
    case 451u: goto L_0012BB28;
    case 452u: goto L_0012BB54;
    case 453u: goto L_0012BB80;
    case 454u: goto L_0012BBAC;
    case 455u: goto L_0012BBD8;
    case 456u: goto L_0012BC04;
    case 457u: goto L_0012BC30;
    case 458u: goto L_0012BC5C;
    case 459u: goto L_0012BC88;
    case 460u: goto L_0012BCB4;
    case 461u: goto L_0012BCE0;
    case 462u: goto L_0012BD0C;
    case 463u: goto L_0012BD38;
    case 464u: goto L_0012BD64;
    case 465u: goto L_0012BD90;
    case 466u: goto L_0012BDB8;
    case 467u: goto L_0012BDE4;
    case 468u: goto L_0012BE10;
    case 469u: goto L_0012BE3C;
    case 470u: goto L_0012BE68;
    case 471u: goto L_0012BE94;
    case 472u: goto L_0012BEC0;
    case 473u: goto L_0012BEEC;
    case 474u: goto L_0012BF18;
    case 475u: goto L_0012BF44;
    case 476u: goto L_0012BF70;
    case 477u: goto L_0012BF9C;
    case 478u: goto L_0012BFC8;
    case 479u: goto L_0012BFF4;
    default: bad_entry(c, 0x00128000u); return;
    }
L_00128000:
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128010u);  if (depth < kMaxDepth) unit_0009(c, 39u, depth + 1u); else { c.pc = 0x00125388u; return; } if (c.pc != 0x00128010u) [[unlikely]] return; }
L_00128010:
    set32(c.r[3], ld32((c.r[16].w[0])));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00128038:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0012806C; } }
    goto L_00128040;
L_0012803C:
    c.budget -= 1;
L_00128040:
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_00128048:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_00128060; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00128060:
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00128048u | kUnwind; return; } goto L_00128048; } }
L_0012806C:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00128078:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_001280AC; } }
L_00128080:
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_00128088:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_001280A0; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001280A0:
    set32(c.r[4], c.r[4].w[0] + 60u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00128088u | kUnwind; return; } goto L_00128088; } }
L_001280AC:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001280B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001282C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001282C0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 7368u);
    set32(c.r[2], c.r[2].w[0] + 12624u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001280F8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001280F8u) [[unlikely]] return; }
L_001280F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12176u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128110u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x00128110u) [[unlikely]] return; }
L_00128110:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 7352u);
    set32(c.r[2], c.r[2].w[0] + 12576u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128130u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00128130u) [[unlikely]] return; }
L_00128130:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12200u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_00128140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128148u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x00128148u) [[unlikely]] return; }
L_00128148:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 7336u);
    set32(c.r[2], c.r[2].w[0] + 12552u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128164u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00128164u) [[unlikely]] return; }
L_00128164:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12224u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012817Cu);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x0012817Cu) [[unlikely]] return; }
L_0012817C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 7320u);
    set32(c.r[2], c.r[2].w[0] + 12528u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128198u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00128198u) [[unlikely]] return; }
L_00128198:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12240u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001281B0u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x001281B0u) [[unlikely]] return; }
L_001281B0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 7304u);
    set32(c.r[2], c.r[2].w[0] + 12504u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001281CCu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001281CCu) [[unlikely]] return; }
L_001281CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12256u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001281E4u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x001281E4u) [[unlikely]] return; }
L_001281E4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 7288u);
    set32(c.r[2], c.r[2].w[0] + 12480u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128200u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00128200u) [[unlikely]] return; }
L_00128200:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12272u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128218u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x00128218u) [[unlikely]] return; }
L_00128218:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 7272u);
    set32(c.r[2], c.r[2].w[0] + 12432u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128238u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00128238u) [[unlikely]] return; }
L_00128238:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12288u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128250u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x00128250u) [[unlikely]] return; }
L_00128250:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 7256u);
    set32(c.r[2], c.r[2].w[0] + 12384u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128270u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00128270u) [[unlikely]] return; }
L_00128270:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12304u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128288u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x00128288u) [[unlikely]] return; }
L_00128288:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 7240u);
    set32(c.r[2], c.r[2].w[0] + 12336u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001282A8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001282A8u) [[unlikely]] return; }
L_001282A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12320u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001282C0u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001282C0u) [[unlikely]] return; }
L_001282C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001282D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001282E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001282F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001282F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00128308:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 104u), c.f[21]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012833Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0012833Cu) [[unlikely]] return; }
L_0012833C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00128430; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128360u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00128360u) [[unlikely]] return; }
L_00128360:
    set32(c.r[5], 0u + 2u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128374u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00128374u) [[unlikely]] return; }
L_00128374:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128384u);  if (depth < kMaxDepth) unit_0036(c, 237u, depth + 1u); else { c.pc = 0x001D9E08u; return; } if (c.pc != 0x00128384u) [[unlikely]] return; }
L_00128384:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128394u);  if (depth < kMaxDepth) unit_0036(c, 237u, depth + 1u); else { c.pc = 0x001D9E08u; return; } if (c.pc != 0x00128394u) [[unlikely]] return; }
L_00128394:
    c.f[21] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001283A4u);  if (depth < kMaxDepth) unit_0036(c, 241u, depth + 1u); else { c.pc = 0x001D9EA0u; return; } if (c.pc != 0x001283A4u) [[unlikely]] return; }
L_001283A4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001283B4u);  if (depth < kMaxDepth) unit_0036(c, 241u, depth + 1u); else { c.pc = 0x001D9EA0u; return; } if (c.pc != 0x001283B4u) [[unlikely]] return; }
L_001283B4:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001283D0u);  if (depth < kMaxDepth) unit_0036(c, 243u, depth + 1u); else { c.pc = 0x001D9EE8u; return; } if (c.pc != 0x001283D0u) [[unlikely]] return; }
L_001283D0:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001283E8u);  if (depth < kMaxDepth) unit_0036(c, 243u, depth + 1u); else { c.pc = 0x001D9EE8u; return; } if (c.pc != 0x001283E8u) [[unlikely]] return; }
L_001283E8:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[12] = fp::add(c.f[20], c.f[12]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128404u);  if (depth < kMaxDepth) unit_0036(c, 239u, depth + 1u); else { c.pc = 0x001D9E50u; return; } if (c.pc != 0x00128404u) [[unlikely]] return; }
L_00128404:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[12] = fp::add(c.f[21], c.f[12]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128420u);  if (depth < kMaxDepth) unit_0036(c, 239u, depth + 1u); else { c.pc = 0x001D9E50u; return; } if (c.pc != 0x00128420u) [[unlikely]] return; }
L_00128420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128428u);  if (depth < kMaxDepth) unit_0023(c, 61u, depth + 1u); else { c.pc = 0x0018CFF8u; return; } if (c.pc != 0x00128428u) [[unlikely]] return; }
L_00128428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001284A4; } }
L_00128430:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128448u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00128448u) [[unlikely]] return; }
L_00128448:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128458u);  if (depth < kMaxDepth) unit_0036(c, 237u, depth + 1u); else { c.pc = 0x001D9E08u; return; } if (c.pc != 0x00128458u) [[unlikely]] return; }
L_00128458:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128468u);  if (depth < kMaxDepth) unit_0036(c, 241u, depth + 1u); else { c.pc = 0x001D9EA0u; return; } if (c.pc != 0x00128468u) [[unlikely]] return; }
L_00128468:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128480u);  if (depth < kMaxDepth) unit_0036(c, 243u, depth + 1u); else { c.pc = 0x001D9EE8u; return; } if (c.pc != 0x00128480u) [[unlikely]] return; }
L_00128480:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[12] = fp::add(c.f[20], c.f[12]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012849Cu);  if (depth < kMaxDepth) unit_0036(c, 239u, depth + 1u); else { c.pc = 0x001D9E50u; return; } if (c.pc != 0x0012849Cu) [[unlikely]] return; }
L_0012849C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001284A4u);  if (depth < kMaxDepth) unit_0023(c, 61u, depth + 1u); else { c.pc = 0x0018CFF8u; return; } if (c.pc != 0x001284A4u) [[unlikely]] return; }
L_001284A4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001284D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001284E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.f[21]);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128514u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00128514u) [[unlikely]] return; }
L_00128514:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128524u);  if (depth < kMaxDepth) unit_0036(c, 237u, depth + 1u); else { c.pc = 0x001D9E08u; return; } if (c.pc != 0x00128524u) [[unlikely]] return; }
L_00128524:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[21] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128540u);  if (depth < kMaxDepth) unit_001E(c, 185u, depth + 1u); else { c.pc = 0x0017B778u; return; } if (c.pc != 0x00128540u) [[unlikely]] return; }
L_00128540:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128550u);  if (depth < kMaxDepth) unit_0036(c, 241u, depth + 1u); else { c.pc = 0x001D9EA0u; return; } if (c.pc != 0x00128550u) [[unlikely]] return; }
L_00128550:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00128574; } }
    c.f[21] = c.f[20];
    c.budget -= 1;
L_00128574:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00128594; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128594u);  if (depth < kMaxDepth) unit_0023(c, 61u, depth + 1u); else { c.pc = 0x0018CFF8u; return; } if (c.pc != 0x00128594u) [[unlikely]] return; }
L_00128594:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001285A4u);  if (depth < kMaxDepth) unit_0036(c, 239u, depth + 1u); else { c.pc = 0x001D9E50u; return; } if (c.pc != 0x001285A4u) [[unlikely]] return; }
L_001285A4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 56u));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001285C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001285E4u);  if (depth < kMaxDepth) unit_0009(c, 39u, depth + 1u); else { c.pc = 0x00125388u; return; } if (c.pc != 0x001285E4u) [[unlikely]] return; }
L_001285E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001285F4u);  if (depth < kMaxDepth) unit_0009(c, 132u, depth + 1u); else { c.pc = 0x001261B8u; return; } if (c.pc != 0x001285F4u) [[unlikely]] return; }
L_001285F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00128614; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00128600:
    set32(c.r[2], ld32((c.r[16].w[0] + 424u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00128618; } }
L_00128614:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00128618:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00128630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128640u);  if (depth < kMaxDepth) unit_0009(c, 39u, depth + 1u); else { c.pc = 0x00125388u; return; } if (c.pc != 0x00128640u) [[unlikely]] return; }
L_00128640:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012864Cu);  if (depth < kMaxDepth) unit_0009(c, 130u, depth + 1u); else { c.pc = 0x00126170u; return; } if (c.pc != 0x0012864Cu) [[unlikely]] return; }
L_0012864C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00128660:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 8208u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00128678:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001286ACu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001286ACu) [[unlikely]] return; }
L_001286AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001286C0u);  if (depth < kMaxDepth) unit_001E(c, 185u, depth + 1u); else { c.pc = 0x0017B778u; return; } if (c.pc != 0x001286C0u) [[unlikely]] return; }
L_001286C0:
    c.f[1] = c.r[16].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001286DCu);  if (depth < kMaxDepth) unit_0036(c, 237u, depth + 1u); else { c.pc = 0x001D9E08u; return; } if (c.pc != 0x001286DCu) [[unlikely]] return; }
L_001286DC:
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001286F4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001286F4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00128718:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00128728:
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] - 10868u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00128740:
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[4].w[0] - 10864u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00128760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[3].w[0] + 27456u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[2].d[0] | 54400ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 12;
L_00128790:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012879Cu);  if (depth < kMaxDepth) unit_0089(c, 168u, depth + 1u); else { c.pc = 0x00325DD8u; return; } if (c.pc != 0x0012879Cu) [[unlikely]] return; }
L_0012879C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001287B4; } }
    set32(c.r[4], c.r[17].w[0] - 19792u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001287B4u);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x001266A8u; return; } if (c.pc != 0x001287B4u) [[unlikely]] return; }
L_001287B4:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00128790u | kUnwind; return; } goto L_00128790; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001287E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001287F8u);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001280B8u; return; } if (c.pc != 0x001287F8u) [[unlikely]] return; }
L_001287F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00128808:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[29], c.r[29].w[0] - 384u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21176u)));
    set32(c.r[4], 0u - 1u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 368u), c.f[22]);
    st32((c.r[29].w[0] + 360u), c.f[21]);
    st32((c.r[29].w[0] + 352u), c.f[20]);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001288E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012885Cu);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x0012885Cu) [[unlikely]] return; }
L_0012885C:
    set32(c.r[16], 0u + 59u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00128878; } }
    set32(c.r[16], 0u + 60u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001288CC; } }
L_00128878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128880u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x00128880u) [[unlikely]] return; }
L_00128880:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00128898; } }
    set32(c.r[16], 0u + 61u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001288CC; } }
L_00128898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001288A0u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x001288A0u) [[unlikely]] return; }
L_001288A0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001288B8; } }
    set32(c.r[16], 0u + 62u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001288CC; } }
L_001288B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001288C0u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x001288C0u) [[unlikely]] return; }
L_001288C0:
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    set32(c.r[3], 0u + 63u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_001288CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001288E0u);  if (depth < kMaxDepth) unit_007E(c, 301u, depth + 1u); else { c.pc = 0x002FB1C0u; return; } if (c.pc != 0x001288E0u) [[unlikely]] return; }
L_001288E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00128944; } }
L_001288E8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] + 13496u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001288FCu);  if (depth < kMaxDepth) unit_0039(c, 68u, depth + 1u); else { c.pc = 0x001E4858u; return; } if (c.pc != 0x001288FCu) [[unlikely]] return; }
L_001288FC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00128900:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 58u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128910u);  if (depth < kMaxDepth) unit_007E(c, 301u, depth + 1u); else { c.pc = 0x002FB1C0u; return; } if (c.pc != 0x00128910u) [[unlikely]] return; }
L_00128910:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012891Cu);  if (depth < kMaxDepth) unit_0039(c, 62u, depth + 1u); else { c.pc = 0x001E47C0u; return; } if (c.pc != 0x0012891Cu) [[unlikely]] return; }
L_0012891C:
    c.f[12] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42040000u);
    c.f[13] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128930u);  if (depth < kMaxDepth) unit_009E(c, 85u, depth + 1u); else { c.pc = 0x00378E30u; return; } if (c.pc != 0x00128930u) [[unlikely]] return; }
L_00128930:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43C30000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128944u);  if (depth < kMaxDepth) unit_009E(c, 91u, depth + 1u); else { c.pc = 0x00378F98u; return; } if (c.pc != 0x00128944u) [[unlikely]] return; }
    goto L_00128944;
L_00128940:
    c.budget -= 1;
L_00128944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012894Cu);  if (depth < kMaxDepth) unit_000E(c, 360u, depth + 1u); else { c.pc = 0x0013ABD0u; return; } if (c.pc != 0x0012894Cu) [[unlikely]] return; }
L_0012894C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128958u);  if (depth < kMaxDepth) unit_000E(c, 364u, depth + 1u); else { c.pc = 0x0013ACA0u; return; } if (c.pc != 0x00128958u) [[unlikely]] return; }
L_00128958:
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128964u);  if (depth < kMaxDepth) unit_000E(c, 368u, depth + 1u); else { c.pc = 0x0013AD78u; return; } if (c.pc != 0x00128964u) [[unlikely]] return; }
L_00128964:
    set32(c.r[18], c.r[16].w[0] - 5184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128970u);  if (depth < kMaxDepth) unit_000E(c, 371u, depth + 1u); else { c.pc = 0x0013AE38u; return; } if (c.pc != 0x00128970u) [[unlikely]] return; }
L_00128970:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[5], ld32((c.r[16].w[0] - 5184u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.r[9].d[0] = c.r[29].d[0] | 4ull;
    st32((c.r[29].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] - 7224u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[6], c.r[6].w[0] + 12704u);
    set32(c.r[7], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001289BCu);  if (depth < kMaxDepth) unit_009C(c, 258u, depth + 1u); else { c.pc = 0x00372EE8u; return; } if (c.pc != 0x001289BCu) [[unlikely]] return; }
L_001289BC:
    set32(c.r[5], ld32((c.r[18].w[0] + 84u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[8].d[0] = c.r[29].d[0] | 8ull;
    c.r[9].d[0] = c.r[29].d[0] | 12ull;
    st32((c.r[29].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[4], c.r[4].w[0] - 5544u);
    set32(c.r[6], c.r[6].w[0] + 12712u);
    c.f[12] = c.f[21];
    set32(c.r[7], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001289F0u);  if (depth < kMaxDepth) unit_009C(c, 258u, depth + 1u); else { c.pc = 0x00372EE8u; return; } if (c.pc != 0x001289F0u) [[unlikely]] return; }
L_001289F0:
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[8], c.r[29].w[0] + 16u);
    set32(c.r[9], c.r[29].w[0] + 20u);
    st32((c.r[29].w[0] + 20u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 16u), 0u);
    set32(c.r[4], c.r[4].w[0] + 7896u);
    set32(c.r[6], c.r[6].w[0] + 12720u);
    c.f[12] = c.f[20];
    set32(c.r[7], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128A24u);  if (depth < kMaxDepth) unit_009C(c, 258u, depth + 1u); else { c.pc = 0x00372EE8u; return; } if (c.pc != 0x00128A24u) [[unlikely]] return; }
L_00128A24:
    set32(c.r[5], ld32((c.r[18].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[8], c.r[29].w[0] + 24u);
    set32(c.r[9], c.r[29].w[0] + 28u);
    st32((c.r[29].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[4], c.r[4].w[0] + 9576u);
    set32(c.r[6], c.r[6].w[0] + 12728u);
    c.f[12] = c.f[20];
    set32(c.r[7], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128A58u);  if (depth < kMaxDepth) unit_009C(c, 258u, depth + 1u); else { c.pc = 0x00372EE8u; return; } if (c.pc != 0x00128A58u) [[unlikely]] return; }
L_00128A58:
    set32(c.r[5], ld32((c.r[18].w[0] + 88u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[8], c.r[29].w[0] + 32u);
    set32(c.r[9], c.r[29].w[0] + 36u);
    st32((c.r[29].w[0] + 36u), c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] - 3864u);
    set32(c.r[6], c.r[6].w[0] + 12736u);
    st32((c.r[29].w[0] + 32u), 0u);
    c.f[12] = c.f[20];
    set32(c.r[7], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128A8Cu);  if (depth < kMaxDepth) unit_009C(c, 258u, depth + 1u); else { c.pc = 0x00372EE8u; return; } if (c.pc != 0x00128A8Cu) [[unlikely]] return; }
L_00128A8C:
    set32(c.r[5], ld32((c.r[18].w[0] + 92u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[1].d[0] = c.r[1].d[0] | 13107ull;
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[8], c.r[29].w[0] + 40u);
    set32(c.r[9], c.r[29].w[0] + 44u);
    set32(c.r[4], c.r[4].w[0] + 8736u);
    set32(c.r[6], c.r[6].w[0] + 12752u);
    set32(c.r[7], 0u + 1u);
    st32((c.r[29].w[0] + 44u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 40u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128AC8u);  if (depth < kMaxDepth) unit_009C(c, 258u, depth + 1u); else { c.pc = 0x00372EE8u; return; } if (c.pc != 0x00128AC8u) [[unlikely]] return; }
L_00128AC8:
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[8], 0u + 48u);
    set32(c.r[9], 0u + 160u);
    set32(c.r[10], 0u + 28u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[3].w[0] - 6464u), c.r[9].w[0]);
    st32((c.r[2].w[0] - 6468u), c.r[8].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[7].w[0] - 6472u), c.r[10].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[29].w[0] + 52u), c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] - 3024u);
    set32(c.r[6], c.r[6].w[0] + 12760u);
    c.f[12] = c.f[21];
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], c.r[29].w[0] + 48u);
    set32(c.r[9], c.r[29].w[0] + 52u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128B20u);  if (depth < kMaxDepth) unit_009C(c, 258u, depth + 1u); else { c.pc = 0x00372EE8u; return; } if (c.pc != 0x00128B20u) [[unlikely]] return; }
L_00128B20:
    set32(c.r[18], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 76u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[20], c.r[29].w[0] + 56u);
    set32(c.r[2], c.r[29].w[0] + 80u);
    set32(c.r[19], c.r[29].w[0] + 60u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[22], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[29].w[0] + 84u);
    set32(c.r[23], c.r[29].w[0] + 68u);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[30], c.r[29].w[0] + 72u);
    set32(c.r[2], c.r[29].w[0] + 88u);
    set32(c.r[17], c.r[3].w[0] + 1176u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 92u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 104u);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 108u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 120u);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 124u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[2].w[0] - 29624u);
    set32(c.r[21], c.r[16].w[0] + 5184u);
    c.budget -= 38;
L_00128BB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), 0u);
    set32(c.r[6], c.r[2].w[0] + 12776u);
    st32((c.r[29].w[0] + 60u), c.r[18].w[0]);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 648u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128BF0u);  if (depth < kMaxDepth) unit_009C(c, 258u, depth + 1u); else { c.pc = 0x00372EE8u; return; } if (c.pc != 0x00128BF0u) [[unlikely]] return; }
L_00128BF0:
    set32(c.r[17], c.r[17].w[0] + 840u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00128BB8u | kUnwind; return; } goto L_00128BB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[17], c.r[2].w[0] - 5184u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[4], c.r[4].w[0] - 2184u);
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[6], c.r[6].w[0] + 12784u);
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[19], 0u + 1u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128C48u);  if (depth < kMaxDepth) unit_009C(c, 258u, depth + 1u); else { c.pc = 0x00372EE8u; return; } if (c.pc != 0x00128C48u) [[unlikely]] return; }
L_00128C48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[9], ld32((c.r[29].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 1344u);
    st32((c.r[29].w[0] + 76u), c.r[19].w[0]);
    set32(c.r[6], c.r[6].w[0] + 12792u);
    st32((c.r[29].w[0] + 72u), 0u);
    c.r[8].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[21] = c.r[1].w[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128C90u);  if (depth < kMaxDepth) unit_009C(c, 258u, depth + 1u); else { c.pc = 0x00372EE8u; return; } if (c.pc != 0x00128C90u) [[unlikely]] return; }
L_00128C90:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[8], ld32((c.r[29].w[0] + 132u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[9], ld32((c.r[29].w[0] + 136u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[6], c.r[6].w[0] + 12808u);
    st32((c.r[29].w[0] + 84u), c.r[19].w[0]);
    c.f[12] = c.f[20];
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[4], c.r[4].w[0] - 504u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 10416u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128CCCu);  if (depth < kMaxDepth) unit_009C(c, 258u, depth + 1u); else { c.pc = 0x00372EE8u; return; } if (c.pc != 0x00128CCCu) [[unlikely]] return; }
L_00128CCC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[22] = c.r[1].w[0];
    set32(c.r[8], ld32((c.r[29].w[0] + 140u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[9], ld32((c.r[29].w[0] + 144u)));
    c.f[12] = c.f[21];
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[7], 0u + 1u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 92u), 0u);
    set32(c.r[6], c.r[6].w[0] + 12824u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128D04u);  if (depth < kMaxDepth) unit_009C(c, 258u, depth + 1u); else { c.pc = 0x00372EE8u; return; } if (c.pc != 0x00128D04u) [[unlikely]] return; }
L_00128D04:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 840u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 840u);
    set32(c.r[18], c.r[18].w[0] + 13776u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128D20u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00128D20u) [[unlikely]] return; }
L_00128D20:
    set32(c.r[4], c.r[16].w[0] + 1680u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128D34u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00128D34u) [[unlikely]] return; }
L_00128D34:
    set32(c.r[8], ld32((c.r[29].w[0] + 148u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[9], ld32((c.r[29].w[0] + 152u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + 336u);
    st32((c.r[29].w[0] + 100u), c.r[19].w[0]);
    set32(c.r[6], c.r[6].w[0] + 12832u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.f[12] = c.f[20];
    set32(c.r[7], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128D68u);  if (depth < kMaxDepth) unit_009C(c, 258u, depth + 1u); else { c.pc = 0x00372EE8u; return; } if (c.pc != 0x00128D68u) [[unlikely]] return; }
L_00128D68:
    set32(c.r[8], ld32((c.r[29].w[0] + 156u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[9], ld32((c.r[29].w[0] + 160u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[6], c.r[6].w[0] + 12848u);
    st32((c.r[29].w[0] + 108u), c.r[19].w[0]);
    c.f[12] = c.f[21];
    st32((c.r[29].w[0] + 104u), 0u);
    set32(c.r[4], c.r[4].w[0] + 12936u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128D9Cu);  if (depth < kMaxDepth) unit_009C(c, 258u, depth + 1u); else { c.pc = 0x00372EE8u; return; } if (c.pc != 0x00128D9Cu) [[unlikely]] return; }
L_00128D9C:
    set32(c.r[8], ld32((c.r[29].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[9], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[6], c.r[6].w[0] + 12856u);
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), 0u);
    c.f[12] = c.f[22];
    st32((c.r[29].w[0] + 116u), 0u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128DCCu);  if (depth < kMaxDepth) unit_009C(c, 258u, depth + 1u); else { c.pc = 0x00372EE8u; return; } if (c.pc != 0x00128DCCu) [[unlikely]] return; }
L_00128DCC:
    set32(c.r[5], ld32((c.r[17].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[8], ld32((c.r[29].w[0] + 172u)));
    c.f[12] = c.f[22];
    set32(c.r[9], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[6], c.r[6].w[0] + 12864u);
    st32((c.r[29].w[0] + 120u), 0u);
    set32(c.r[7], 0u + 1u);
    st32((c.r[29].w[0] + 124u), 0u);
    set32(c.r[4], c.r[18].w[0] + 840u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128DFCu);  if (depth < kMaxDepth) unit_009C(c, 258u, depth + 1u); else { c.pc = 0x00372EE8u; return; } if (c.pc != 0x00128DFCu) [[unlikely]] return; }
L_00128DFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 24304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E0Cu);  if (depth < kMaxDepth) unit_000E(c, 297u, depth + 1u); else { c.pc = 0x0013A3D0u; return; } if (c.pc != 0x00128E0Cu) [[unlikely]] return; }
L_00128E0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 23944u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E1Cu);  if (depth < kMaxDepth) unit_000E(c, 299u, depth + 1u); else { c.pc = 0x0013A400u; return; } if (c.pc != 0x00128E1Cu) [[unlikely]] return; }
L_00128E1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 24376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E2Cu);  if (depth < kMaxDepth) unit_000C(c, 142u, depth + 1u); else { c.pc = 0x00131130u; return; } if (c.pc != 0x00128E2Cu) [[unlikely]] return; }
L_00128E2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 14864u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E3Cu);  if (depth < kMaxDepth) unit_000F(c, 217u, depth + 1u); else { c.pc = 0x0013EE88u; return; } if (c.pc != 0x00128E3Cu) [[unlikely]] return; }
L_00128E3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 14688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E4Cu);  if (depth < kMaxDepth) unit_000F(c, 226u, depth + 1u); else { c.pc = 0x0013F008u; return; } if (c.pc != 0x00128E4Cu) [[unlikely]] return; }
L_00128E4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 23880u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E5Cu);  if (depth < kMaxDepth) unit_000E(c, 305u, depth + 1u); else { c.pc = 0x0013A4B8u; return; } if (c.pc != 0x00128E5Cu) [[unlikely]] return; }
L_00128E5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 23800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E6Cu);  if (depth < kMaxDepth) unit_000D(c, 352u, depth + 1u); else { c.pc = 0x001376E0u; return; } if (c.pc != 0x00128E6Cu) [[unlikely]] return; }
L_00128E6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 24440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E7Cu);  if (depth < kMaxDepth) unit_000B(c, 356u, depth + 1u); else { c.pc = 0x0012FCB8u; return; } if (c.pc != 0x00128E7Cu) [[unlikely]] return; }
L_00128E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E84u);  if (depth < kMaxDepth) unit_000A(c, 154u, depth + 1u); else { c.pc = 0x00129058u; return; } if (c.pc != 0x00128E84u) [[unlikely]] return; }
L_00128E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E8Cu);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x002FAF28u; return; } if (c.pc != 0x00128E8Cu) [[unlikely]] return; }
L_00128E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E94u);  if (depth < kMaxDepth) unit_009E(c, 88u, depth + 1u); else { c.pc = 0x00378E98u; return; } if (c.pc != 0x00128E94u) [[unlikely]] return; }
L_00128E94:
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
    c.f[22] = ld32((c.r[29].w[0] + 368u));
    c.f[21] = ld32((c.r[29].w[0] + 360u));
    c.f[20] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[29], c.r[29].w[0] + 384u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00128ED8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 6384u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128EF8u);  if (depth < kMaxDepth) unit_009D(c, 17u, depth + 1u); else { c.pc = 0x00374150u; return; } if (c.pc != 0x00128EF8u) [[unlikely]] return; }
L_00128EF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 4704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128F08u);  if (depth < kMaxDepth) unit_009D(c, 17u, depth + 1u); else { c.pc = 0x00374150u; return; } if (c.pc != 0x00128F08u) [[unlikely]] return; }
L_00128F08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 7224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128F18u);  if (depth < kMaxDepth) unit_009D(c, 17u, depth + 1u); else { c.pc = 0x00374150u; return; } if (c.pc != 0x00128F18u) [[unlikely]] return; }
L_00128F18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 5544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128F28u);  if (depth < kMaxDepth) unit_009D(c, 17u, depth + 1u); else { c.pc = 0x00374150u; return; } if (c.pc != 0x00128F28u) [[unlikely]] return; }
L_00128F28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 7896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128F38u);  if (depth < kMaxDepth) unit_009D(c, 17u, depth + 1u); else { c.pc = 0x00374150u; return; } if (c.pc != 0x00128F38u) [[unlikely]] return; }
L_00128F38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 3864u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128F48u);  if (depth < kMaxDepth) unit_009D(c, 17u, depth + 1u); else { c.pc = 0x00374150u; return; } if (c.pc != 0x00128F48u) [[unlikely]] return; }
L_00128F48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 9576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128F58u);  if (depth < kMaxDepth) unit_009D(c, 17u, depth + 1u); else { c.pc = 0x00374150u; return; } if (c.pc != 0x00128F58u) [[unlikely]] return; }
L_00128F58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 8736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128F68u);  if (depth < kMaxDepth) unit_009D(c, 17u, depth + 1u); else { c.pc = 0x00374150u; return; } if (c.pc != 0x00128F68u) [[unlikely]] return; }
L_00128F68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 3024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128F78u);  if (depth < kMaxDepth) unit_009D(c, 17u, depth + 1u); else { c.pc = 0x00374150u; return; } if (c.pc != 0x00128F78u) [[unlikely]] return; }
L_00128F78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 2184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128F88u);  if (depth < kMaxDepth) unit_009D(c, 17u, depth + 1u); else { c.pc = 0x00374150u; return; } if (c.pc != 0x00128F88u) [[unlikely]] return; }
L_00128F88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 1344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128F98u);  if (depth < kMaxDepth) unit_009D(c, 17u, depth + 1u); else { c.pc = 0x00374150u; return; } if (c.pc != 0x00128F98u) [[unlikely]] return; }
L_00128F98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 504u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128FA8u);  if (depth < kMaxDepth) unit_009D(c, 17u, depth + 1u); else { c.pc = 0x00374150u; return; } if (c.pc != 0x00128FA8u) [[unlikely]] return; }
L_00128FA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128FB8u);  if (depth < kMaxDepth) unit_009D(c, 17u, depth + 1u); else { c.pc = 0x00374150u; return; } if (c.pc != 0x00128FB8u) [[unlikely]] return; }
L_00128FB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 12936u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128FC8u);  if (depth < kMaxDepth) unit_009D(c, 17u, depth + 1u); else { c.pc = 0x00374150u; return; } if (c.pc != 0x00128FC8u) [[unlikely]] return; }
L_00128FC8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], c.r[16].w[0] + 13776u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128FDCu);  if (depth < kMaxDepth) unit_009D(c, 17u, depth + 1u); else { c.pc = 0x00374150u; return; } if (c.pc != 0x00128FDCu) [[unlikely]] return; }
L_00128FDC:
    set32(c.r[4], c.r[16].w[0] + 840u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128FE8u);  if (depth < kMaxDepth) unit_009D(c, 17u, depth + 1u); else { c.pc = 0x00374150u; return; } if (c.pc != 0x00128FE8u) [[unlikely]] return; }
L_00128FE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], c.r[2].w[0] + 1176u);
    set32(c.r[17], c.r[16].w[0] + 6720u);
    c.budget -= 4;
L_00128FF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129004u);  if (depth < kMaxDepth) unit_009D(c, 17u, depth + 1u); else { c.pc = 0x00374150u; return; } if (c.pc != 0x00129004u) [[unlikely]] return; }
L_00129004:
    set32(c.r[16], c.r[16].w[0] + 840u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00128FF8u | kUnwind; return; } goto L_00128FF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], c.r[2].w[0] + 10416u);
    set32(c.r[17], c.r[16].w[0] + 2520u);
    c.budget -= 3;
L_00129020:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012902Cu);  if (depth < kMaxDepth) unit_009D(c, 17u, depth + 1u); else { c.pc = 0x00374150u; return; } if (c.pc != 0x0012902Cu) [[unlikely]] return; }
L_0012902C:
    set32(c.r[16], c.r[16].w[0] + 840u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00129020u | kUnwind; return; } goto L_00129020; } }
L_0012903C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 1;
L_00129040:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00129058:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 6384u)));
    set32(c.r[21], c.r[2].w[0] - 6384u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.budget -= 10;
L_00129080:
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[19].d[0];  if (t) { goto L_001290A4; } }
    set32(c.r[2], ld32((c.r[20].w[0] - 4704u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_00129154; } }
L_001290A4:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 18708u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001290C0u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x001290C0u) [[unlikely]] return; }
L_001290C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 22928u)));
    set32(c.r[16], c.r[16].w[0] - 5184u);
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[3].w[0] - 6440u), c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.r[9].d[0] = c.r[29].d[0] | 4ull;
    set32(c.r[6], c.r[6].w[0] + 12872u);
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 4u), c.r[19].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[7], 0u + 1u);
    c.budget -= 16;
L_00129100:
    st32((c.r[17].w[0] - 6444u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012910Cu);  if (depth < kMaxDepth) unit_009C(c, 258u, depth + 1u); else { c.pc = 0x00372EE8u; return; } if (c.pc != 0x0012910Cu) [[unlikely]] return; }
L_0012910C:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[29].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], c.r[20].w[0] - 4704u);
    set32(c.r[6], c.r[6].w[0] + 12880u);
    c.f[12] = c.f[20];
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = c.r[29].d[0] | 8ull;
    c.r[9].d[0] = c.r[29].d[0] | 12ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012913Cu);  if (depth < kMaxDepth) unit_009C(c, 258u, depth + 1u); else { c.pc = 0x00372EE8u; return; } if (c.pc != 0x0012913Cu) [[unlikely]] return; }
L_0012913C:
    set32(c.r[4], ld32((c.r[18].w[0] + 18708u)));
    c.budget -= 1;
L_00129140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129148u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x00129148u) [[unlikely]] return; }
L_00129148:
    set32(c.r[3], ld32((c.r[17].w[0] - 6444u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0] - 6444u), c.r[3].w[0]);
    c.budget -= 3;
L_00129154:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00129180:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], c.r[3].w[0] - 21600u);
    set32(c.r[5], c.r[5].w[0] - 21864u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 21688u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 16;
L_001291C0:
    st32((c.r[6].w[0] - 21972u), c.r[3].w[0]);
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[7].w[0] - 21976u), c.r[2].w[0]);
    st32((c.r[8].w[0] - 21968u), c.r[5].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001291F4u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001291F4u) [[unlikely]] return; }
L_001291F4:
    set32(c.r[4], c.r[16].w[0] + 17200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129200u);  if (depth < kMaxDepth) unit_0071(c, 235u, depth + 1u); else { c.pc = 0x002C6878u; return; } if (c.pc != 0x00129200u) [[unlikely]] return; }
L_00129200:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + 22936u);
    set32(c.r[2], ld32((c.r[2].w[0] + 22936u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00129230; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00129234; } }
L_00129230:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00129234:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 23944u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012929C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], c.r[2].w[0] - 23040u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012925Cu);  if (depth < kMaxDepth) unit_0085(c, 283u, depth + 1u); else { c.pc = 0x003170F0u; return; } if (c.pc != 0x0012925Cu) [[unlikely]] return; }
L_0012925C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0012929C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129278u);  if (depth < kMaxDepth) unit_0085(c, 258u, depth + 1u); else { c.pc = 0x00316B20u; return; } if (c.pc != 0x00129278u) [[unlikely]] return; }
L_00129278:
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 2;
L_00129280:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[2].w[0] + 15456u), 0u);
    st32((c.r[3].w[0] + 15460u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00129414; } }
L_0012929C:
    set32(c.r[2], ld32((c.r[19].w[0] + 22936u)));
    set32(c.r[3], c.r[19].w[0] + 22936u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001292C4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001292C8; } }
L_001292C4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001292C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 14864u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001292F4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001292E8u);  if (depth < kMaxDepth) unit_000F(c, 212u, depth + 1u); else { c.pc = 0x0013EDF8u; return; } if (c.pc != 0x001292E8u) [[unlikely]] return; }
L_001292E8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00129354; } }
L_001292F4:
    set32(c.r[2], ld32((c.r[19].w[0] + 22936u)));
    set32(c.r[3], c.r[19].w[0] + 22936u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0012931C; } }
    goto L_00129304;
L_00129300:
    c.budget -= 1;
L_00129304:
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00129320; } }
L_0012931C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00129320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 24376u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001293A4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001293A4; } }
    set32(c.r[4], c.r[17].w[0] - 14864u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129348u);  if (depth < kMaxDepth) unit_000F(c, 212u, depth + 1u); else { c.pc = 0x0013EDF8u; return; } if (c.pc != 0x00129348u) [[unlikely]] return; }
L_00129348:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001293A4; } }
L_00129354:
    set32(c.r[18], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[17], c.r[21].w[0] + 17200u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129374u);  if (depth < kMaxDepth) unit_0071(c, 311u, depth + 1u); else { c.pc = 0x002C7468u; return; } if (c.pc != 0x00129374u) [[unlikely]] return; }
L_00129374:
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 15456u), c.r[2].w[0]);
    c.budget -= 3;
L_00129380:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129390u);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x00129390u) [[unlikely]] return; }
L_00129390:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] + 15460u), c.r[2].w[0]);
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00129414; } }
L_001293A4:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 5;
L_001293B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001293C4; } }
L_001293C0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001293C4:
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00129414; } }
    set32(c.r[16], c.r[21].w[0] + 17200u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001293E4u);  if (depth < kMaxDepth) unit_0071(c, 311u, depth + 1u); else { c.pc = 0x002C7468u; return; } if (c.pc != 0x001293E4u) [[unlikely]] return; }
L_001293E4:
    st32((c.r[20].w[0] + 15456u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001293F8u);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x001293F8u) [[unlikely]] return; }
L_001293F8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 15456u)));
    c.budget -= 2;
L_00129400:
    st32((c.r[18].w[0] + 15460u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00129414; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001293C0u | kUnwind; return; } goto L_001293C0; } }
L_00129414:
    set32(c.r[16], c.r[19].w[0] + 22936u);
    set32(c.r[5], c.r[20].w[0] + 15456u);
    set32(c.r[6], c.r[18].w[0] + 15460u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012942Cu);  if (depth < kMaxDepth) unit_009D(c, 205u, depth + 1u); else { c.pc = 0x00377270u; return; } if (c.pc != 0x0012942Cu) [[unlikely]] return; }
L_0012942C:
    set32(c.r[2], ld32((c.r[19].w[0] + 22936u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00129450; } }
L_00129438:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0012943C:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00129454; } }
L_00129450:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00129454:
    set32(c.r[4], c.r[2].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129460u);  if (depth < kMaxDepth) unit_009E(c, 56u, depth + 1u); else { c.pc = 0x00378818u; return; } if (c.pc != 0x00129460u) [[unlikely]] return; }
L_00129460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129468u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x00129468u) [[unlikely]] return; }
L_00129468:
    set32(c.r[2], ld32((c.r[23].w[0] - 6456u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012947C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012947Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012947Cu) [[unlikely]] return; }
    goto L_0012947C;
L_00129478:
    c.budget -= 1;
L_0012947C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129484u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x00129484u) [[unlikely]] return; }
L_00129484:
    set32(c.r[2], ld32((c.r[19].w[0] + 22936u)));
    set32(c.r[3], c.r[19].w[0] + 22936u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001294AC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001294B0; } }
L_001294AC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001294B0:
    set32(c.r[2], c.r[22].w[0] - 23944u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0012953C; } }
    goto L_001294BC;
L_001294B8:
    c.budget -= 1;
L_001294BC:
    set32(c.r[2], ld32((c.r[19].w[0] + 22936u)));
    set32(c.r[3], c.r[19].w[0] + 22936u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001294E4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001294E8; } }
L_001294E4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001294E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 24304u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012968C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 22936u)));
    set32(c.r[3], c.r[19].w[0] + 22936u);
    c.budget -= 2;
L_00129500:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00129520; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00129524; } }
L_00129520:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00129524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012952Cu);  if (depth < kMaxDepth) unit_009D(c, 281u, depth + 1u); else { c.pc = 0x00377D48u; return; } if (c.pc != 0x0012952Cu) [[unlikely]] return; }
L_0012952C:
    set32(c.r[3], ld32((c.r[2].w[0] + 740u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012968C; } }
    goto L_0012953C;
L_00129538:
    c.budget -= 1;
L_0012953C:
    set32(c.r[4], c.r[21].w[0] + 17200u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012954Cu);  if (depth < kMaxDepth) unit_0071(c, 307u, depth + 1u); else { c.pc = 0x002C7360u; return; } if (c.pc != 0x0012954Cu) [[unlikely]] return; }
L_0012954C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012968C; } }
    set32(c.r[2], ld32((c.r[30].w[0] - 6476u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00129694; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[30].w[0] - 6476u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00129694; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 22936u)));
    set32(c.r[3], c.r[19].w[0] + 22936u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00129598; } }
L_00129580:
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012959C; } }
L_00129598:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012959C:
    set32(c.r[2], c.r[22].w[0] - 23944u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001295CC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], ld32((c.r[16].w[0] - 6448u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001295CC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001295C8u);  if (depth < kMaxDepth) unit_009E(c, 363u, depth + 1u); else { c.pc = 0x0037B790u; return; } if (c.pc != 0x001295C8u) [[unlikely]] return; }
L_001295C8:
    st32((c.r[16].w[0] - 6448u), 0u);
    c.budget -= 1;
L_001295CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001295D4u);  if (depth < kMaxDepth) unit_000E(c, 337u, depth + 1u); else { c.pc = 0x0013A7C8u; return; } if (c.pc != 0x001295D4u) [[unlikely]] return; }
L_001295D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 18712u)));
    set32(c.r[4], c.r[4].w[0] - 11920u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001295F0u);  if (depth < kMaxDepth) unit_008B(c, 254u, depth + 1u); else { c.pc = 0x0032EA08u; return; } if (c.pc != 0x001295F0u) [[unlikely]] return; }
L_001295F0:
    set32(c.r[2], ld32((c.r[19].w[0] + 22936u)));
    set32(c.r[3], c.r[19].w[0] + 22936u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00129618; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012961C; } }
L_00129618:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012961C:
    set32(c.r[2], c.r[22].w[0] - 23944u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012966C; } }
    c.f[13] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x4B3E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
L_0012963C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[2].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 45515ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129664u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00129664u) [[unlikely]] return; }
L_00129664:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[3].w[0] - 6448u), c.r[2].w[0]);
    c.budget -= 2;
L_0012966C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012967Cu);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x0012967Cu) [[unlikely]] return; }
L_0012967C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC2540000u);
    c.r[4].d[0] = c.r[4].d[0] | 6756ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012968Cu);  if (depth < kMaxDepth) unit_0040(c, 48u, depth + 1u); else { c.pc = 0x00200910u; return; } if (c.pc != 0x0012968Cu) [[unlikely]] return; }
L_0012968C:
    set32(c.r[2], 0u + 2700u);
    st32((c.r[30].w[0] - 6476u), c.r[2].w[0]);
    c.budget -= 2;
L_00129694:
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
L_001296C8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[4], 0u + 96u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001296FCu);  if (depth < kMaxDepth) unit_002E(c, 506u, depth + 1u); else { c.pc = 0x001BB8A8u; return; } if (c.pc != 0x001296FCu) [[unlikely]] return; }
L_001296FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_00129700:
    set32(c.r[2], ld32((c.r[3].w[0] - 21180u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012971C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 21180u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012971Cu);  if (depth < kMaxDepth) unit_000A(c, 385u, depth + 1u); else { c.pc = 0x0012AEC0u; return; } if (c.pc != 0x0012971Cu) [[unlikely]] return; }
L_0012971C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[21], 0u + 1u);
    st32((c.r[2].w[0] + 19304u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129730u);  if (depth < kMaxDepth) unit_000A(c, 84u, depth + 1u); else { c.pc = 0x00128808u; return; } if (c.pc != 0x00129730u) [[unlikely]] return; }
L_00129730:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20712u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129744u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x00129744u) [[unlikely]] return; }
L_00129744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012974Cu);  if (depth < kMaxDepth) unit_007D(c, 179u, depth + 1u); else { c.pc = 0x002F6B08u; return; } if (c.pc != 0x0012974Cu) [[unlikely]] return; }
L_0012974C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 23080u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012975Cu);  if (depth < kMaxDepth) unit_009E(c, 4u, depth + 1u); else { c.pc = 0x00378050u; return; } if (c.pc != 0x0012975Cu) [[unlikely]] return; }
L_0012975C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[19], ld32((c.r[2].w[0] - 21176u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[21].d[0];  if (t) { goto L_001298CC; } }
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012978C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001297A4; } }
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001299D0; } }
L_0012978C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00129920; } }
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001299D0; } }
L_001297A4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[16], c.r[16].w[0] - 24304u);
    set32(c.r[4], c.r[4].w[0] + 22936u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001297C4u);  if (depth < kMaxDepth) unit_009D(c, 292u, depth + 1u); else { c.pc = 0x00377E68u; return; } if (c.pc != 0x001297C4u) [[unlikely]] return; }
L_001297C4:
    set32(c.r[18], c.r[17].w[0] + 15488u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 16680u);
    set32(c.r[5], c.r[5].w[0] - 32128u);
    set32(c.r[6], 0u + 64u);
    c.r[22].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001297E8u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001297E8u) [[unlikely]] return; }
L_001297E8:
    set32(c.r[20], c.r[18].w[0] + 4u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 16744u);
    set32(c.r[6], 0u + 1632u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129804u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00129804u) [[unlikely]] return; }
L_00129804:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], 0u + 3204u);
    set32(c.r[4], c.r[4].w[0] + 18376u);
    set32(c.r[5], c.r[5].w[0] - 29424u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129828u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x00129828u) [[unlikely]] return; }
L_00129828:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[21].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012983Cu);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00377CA8u; return; } if (c.pc != 0x0012983Cu) [[unlikely]] return; }
L_0012983C:
    c.f[0] = ld32((c.r[17].w[0] + 15488u));
    c.f[12] = c.f[0];
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129850u);  if (depth < kMaxDepth) unit_0049(c, 218u, depth + 1u); else { c.pc = 0x00226B70u; return; } if (c.pc != 0x00129850u) [[unlikely]] return; }
L_00129850:
    c.f[0] = ld32((c.r[17].w[0] + 15488u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 16u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st32((c.r[2].w[0] - 23216u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129870u);  if (depth < kMaxDepth) unit_009E(c, 340u, depth + 1u); else { c.pc = 0x0037B5B8u; return; } if (c.pc != 0x00129870u) [[unlikely]] return; }
L_00129870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], c.r[2].w[0] - 22920u);
    c.budget -= 2;
L_00129878:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129888u);  if (depth < kMaxDepth) unit_0087(c, 10u, depth + 1u); else { c.pc = 0x0031C180u; return; } if (c.pc != 0x00129888u) [[unlikely]] return; }
L_00129888:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.f[12] = ld32((c.r[20].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001298A4u);  if (depth < kMaxDepth) unit_0087(c, 6u, depth + 1u); else { c.pc = 0x0031C0B8u; return; } if (c.pc != 0x001298A4u) [[unlikely]] return; }
L_001298A4:
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00129878u | kUnwind; return; } goto L_00129878; } }
    set32(c.r[2], c.r[22].w[0] + 15488u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 19u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st32((c.r[2].w[0] + 8580u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001299D0; } }
L_001298CC:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001298DCu);  if (depth < kMaxDepth) unit_0071(c, 261u, depth + 1u); else { c.pc = 0x002C6DB0u; return; } if (c.pc != 0x001298DCu) [[unlikely]] return; }
L_001298DC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001298E8u);  if (depth < kMaxDepth) unit_0071(c, 261u, depth + 1u); else { c.pc = 0x002C6DB0u; return; } if (c.pc != 0x001298E8u) [[unlikely]] return; }
L_001298E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 22936u);
    set32(c.r[5], c.r[5].w[0] - 23944u);
    st32((c.r[2].w[0] + 29812u), 0u);
    st32((c.r[3].w[0] + 29816u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129910u);  if (depth < kMaxDepth) unit_009D(c, 292u, depth + 1u); else { c.pc = 0x00377E68u; return; } if (c.pc != 0x00129910u) [[unlikely]] return; }
L_00129910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129918u);  if (depth < kMaxDepth) unit_000B(c, 176u, depth + 1u); else { c.pc = 0x0012E1E8u; return; } if (c.pc != 0x00129918u) [[unlikely]] return; }
L_00129918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001299D0; } }
L_00129920:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 14864u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129934u);  if (depth < kMaxDepth) unit_0071(c, 252u, depth + 1u); else { c.pc = 0x002C6C60u; return; } if (c.pc != 0x00129934u) [[unlikely]] return; }
L_00129934:
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 3;
L_00129940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129948u);  if (depth < kMaxDepth) unit_0071(c, 252u, depth + 1u); else { c.pc = 0x002C6C60u; return; } if (c.pc != 0x00129948u) [[unlikely]] return; }
L_00129948:
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129958u);  if (depth < kMaxDepth) unit_0071(c, 261u, depth + 1u); else { c.pc = 0x002C6DB0u; return; } if (c.pc != 0x00129958u) [[unlikely]] return; }
L_00129958:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129964u);  if (depth < kMaxDepth) unit_0071(c, 261u, depth + 1u); else { c.pc = 0x002C6DB0u; return; } if (c.pc != 0x00129964u) [[unlikely]] return; }
L_00129964:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] + 22936u);
    set32(c.r[18], c.r[18].w[0] - 23944u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129984u);  if (depth < kMaxDepth) unit_009D(c, 292u, depth + 1u); else { c.pc = 0x00377E68u; return; } if (c.pc != 0x00129984u) [[unlikely]] return; }
L_00129984:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129994u);  if (depth < kMaxDepth) unit_009D(c, 292u, depth + 1u); else { c.pc = 0x00377E68u; return; } if (c.pc != 0x00129994u) [[unlikely]] return; }
L_00129994:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    st32((c.r[18].w[0] + 52u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001299B4u);  if (depth < kMaxDepth) unit_000E(c, 421u, depth + 1u); else { c.pc = 0x0013B578u; return; } if (c.pc != 0x001299B4u) [[unlikely]] return; }
L_001299B4:
    st32((c.r[29].w[0] + 4u), c.r[21].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001299C8u);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00377CA8u; return; } if (c.pc != 0x001299C8u) [[unlikely]] return; }
L_001299C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001299D0u);  if (depth < kMaxDepth) unit_000B(c, 191u, depth + 1u); else { c.pc = 0x0012E2E8u; return; } if (c.pc != 0x001299D0u) [[unlikely]] return; }
L_001299D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC2540000u);
    c.r[4].d[0] = c.r[4].d[0] | 6756ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001299E0u);  if (depth < kMaxDepth) unit_0040(c, 48u, depth + 1u); else { c.pc = 0x00200910u; return; } if (c.pc != 0x001299E0u) [[unlikely]] return; }
L_001299E0:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st32((c.r[23].w[0] + 15804u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.budget -= 8;
L_00129A00:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00129A18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[29], c.r[29].w[0] - 368u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21172u)));
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 352u), c.f[20]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012A350; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14948u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0012A350; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20712u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[20] = c.r[1].w[0];
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129A8Cu);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x00129A8Cu) [[unlikely]] return; }
L_00129A8C:
    set32(c.r[5], ld32((c.r[16].w[0] - 6452u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] | 4ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], c.r[4].w[0] - 7224u);
    st8((c.r[29].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129ABCu);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x00129ABCu) [[unlikely]] return; }
L_00129ABC:
    set32(c.r[5], ld32((c.r[16].w[0] - 6452u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[29].d[0] | 8ull;
    c.r[7].d[0] = c.r[29].d[0] | 12ull;
    st32((c.r[29].w[0] + 8u), c.f[20]);
    set32(c.r[4], c.r[4].w[0] - 6384u);
    st8((c.r[29].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129AECu);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x00129AECu) [[unlikely]] return; }
L_00129AEC:
    set32(c.r[5], ld32((c.r[16].w[0] - 6452u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[7], c.r[29].w[0] + 20u);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    set32(c.r[4], c.r[4].w[0] - 5544u);
    st8((c.r[29].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129B1Cu);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x00129B1Cu) [[unlikely]] return; }
L_00129B1C:
    set32(c.r[5], ld32((c.r[16].w[0] - 6452u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[29].w[0] + 24u);
    set32(c.r[7], c.r[29].w[0] + 28u);
    st32((c.r[29].w[0] + 24u), c.f[20]);
    set32(c.r[4], c.r[4].w[0] - 4704u);
    st8((c.r[29].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129B4Cu);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x00129B4Cu) [[unlikely]] return; }
L_00129B4C:
    set32(c.r[5], ld32((c.r[16].w[0] - 6452u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[7], c.r[29].w[0] + 36u);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    set32(c.r[4], c.r[4].w[0] - 3864u);
    st8((c.r[29].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129B7Cu);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x00129B7Cu) [[unlikely]] return; }
L_00129B7C:
    set32(c.r[5], ld32((c.r[16].w[0] - 6452u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[29].w[0] + 40u);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 40u), c.f[20]);
    set32(c.r[4], c.r[4].w[0] + 7896u);
    st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129BACu);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x00129BACu) [[unlikely]] return; }
L_00129BAC:
    set32(c.r[5], ld32((c.r[16].w[0] - 6452u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[7], c.r[29].w[0] + 52u);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    set32(c.r[4], c.r[4].w[0] + 9576u);
    st8((c.r[29].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129BDCu);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x00129BDCu) [[unlikely]] return; }
L_00129BDC:
    set32(c.r[5], ld32((c.r[16].w[0] - 6452u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[29].w[0] + 56u);
    set32(c.r[7], c.r[29].w[0] + 60u);
    set32(c.r[4], c.r[4].w[0] - 3024u);
    st32((c.r[29].w[0] + 56u), c.f[20]);
    st8((c.r[29].w[0] + 60u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129C0Cu);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x00129C0Cu) [[unlikely]] return; }
L_00129C0C:
    set32(c.r[5], ld32((c.r[16].w[0] - 6452u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 504u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[7], c.r[29].w[0] + 68u);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    st8((c.r[29].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129C3Cu);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x00129C3Cu) [[unlikely]] return; }
L_00129C3C:
    set32(c.r[5], ld32((c.r[16].w[0] - 6452u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 336u);
    st32((c.r[29].w[0] + 72u), c.f[20]);
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[29].w[0] + 72u);
    set32(c.r[7], c.r[29].w[0] + 76u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129C6Cu);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x00129C6Cu) [[unlikely]] return; }
L_00129C6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], c.r[2].w[0] - 2184u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129C80u);  if (depth < kMaxDepth) unit_009D(c, 59u, depth + 1u); else { c.pc = 0x00374AC8u; return; } if (c.pc != 0x00129C80u) [[unlikely]] return; }
L_00129C80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00129D48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], ld32((c.r[2].w[0] - 14636u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], c.r[7].w[0] - 32128u);
    set32(c.r[2], c.r[3].w[0] + 360u);
    set32(c.r[6], c.r[6].w[0] - 26584u);
    c.r[5].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 391u);
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00129D18; } }
    set32(c.r[2], 0u + 127u);
    set32(c.r[5], ld32((c.r[21].w[0] - 6452u)));
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[29].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[7], c.r[29].w[0] + 84u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129D10u);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x00129D10u) [[unlikely]] return; }
L_00129D10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00129D48; } }
L_00129D18:
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], ld32((c.r[21].w[0] - 6452u)));
    st32((c.r[29].w[0] + 88u), c.f[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 88u);
    set32(c.r[7], c.r[29].w[0] + 92u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129D48u);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x00129D48u) [[unlikely]] return; }
L_00129D48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[21].w[0] - 6452u)));
    set32(c.r[4], c.r[4].w[0] - 1344u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st8((c.r[29].w[0] + 100u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[29].w[0] + 100u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129D80u);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x00129D80u) [[unlikely]] return; }
L_00129D80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - 23944u);
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00129DA8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00129DB0; } }
L_00129DA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], 0u + 3u);
    c.budget -= 2;
L_00129DB0:
    st32((c.r[3].w[0] - 6460u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] - 6460u)));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_00129E6C; } }
    set32(c.r[4], 0u + 840u);
    set32(c.r[3], 0u - 840u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + 1176u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[4].w[0] + 3360u);
    set32(c.r[3], c.r[3].w[0] + 2520u);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 13;
L_00129E00:
    set32(c.r[5], ld32((c.r[19].w[0] - 6452u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 104u);
    set32(c.r[7], c.r[29].w[0] + 108u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    st32((c.r[29].w[0] + 104u), c.f[20]);
    st8((c.r[29].w[0] + 108u), static_cast<std::uint8_t>(0u));
    set32(c.r[18], c.r[18].w[0] + 840u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129E30u);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x00129E30u) [[unlikely]] return; }
L_00129E30:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] - 6452u)));
    st32((c.r[29].w[0] + 112u), c.f[20]);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st8((c.r[29].w[0] + 116u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[29].w[0] + 116u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[17], c.r[17].w[0] - 840u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129E64u);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x00129E64u) [[unlikely]] return; }
L_00129E64:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00129E00u | kUnwind; return; } goto L_00129E00; } }
L_00129E6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[16], c.r[2].w[0] + 10416u);
    set32(c.r[20], 0u + 159u);
    set32(c.r[19], 0u + 148u);
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], 0u + 2u);
    c.budget -= 9;
L_00129E90:
    set32(c.r[2], ld32((c.r[22].w[0] + 23004u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00129ED0; } }
    set32(c.r[5], ld32((c.r[21].w[0] - 6452u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 120u), c.f[20]);
    set32(c.r[6], c.r[29].w[0] + 120u);
    st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[29].w[0] + 124u);
    set32(c.r[8], 0u + 295u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129EC8u);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x00129EC8u) [[unlikely]] return; }
L_00129EC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00129EFC; } }
L_00129ED0:
    set32(c.r[5], ld32((c.r[21].w[0] - 6452u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.f[20]);
    set32(c.r[6], c.r[29].w[0] + 128u);
    st8((c.r[29].w[0] + 132u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[29].w[0] + 132u);
    set32(c.r[8], 0u + 295u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129EFCu);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x00129EFCu) [[unlikely]] return; }
L_00129EFC:
    set32(c.r[20], c.r[20].w[0] + 30u);
    set32(c.r[16], c.r[16].w[0] + 840u);
    set32(c.r[19], c.r[19].w[0] + 30u);
    set32(c.r[18], c.r[18].w[0] + 840u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00129E90u | kUnwind; return; } goto L_00129E90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[20], c.r[2].w[0] + 12936u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129F2Cu);  if (depth < kMaxDepth) unit_009D(c, 59u, depth + 1u); else { c.pc = 0x00374AC8u; return; } if (c.pc != 0x00129F2Cu) [[unlikely]] return; }
L_00129F2C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0012A00C; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 23004u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00129FAC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] - 23740u);
    set32(c.r[19], c.r[29].w[0] + 136u);
    set32(c.r[18], c.r[29].w[0] + 140u);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    st8((c.r[29].w[0] + 140u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129F70u);  if (depth < kMaxDepth) unit_000C(c, 529u, depth + 1u); else { c.pc = 0x00133F60u; return; } if (c.pc != 0x00129F70u) [[unlikely]] return; }
L_00129F70:
    set32(c.r[17], c.r[2].w[0] - 63u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129F80u);  if (depth < kMaxDepth) unit_000C(c, 530u, depth + 1u); else { c.pc = 0x00133F98u; return; } if (c.pc != 0x00129F80u) [[unlikely]] return; }
L_00129F80:
    set32(c.r[5], ld32((c.r[21].w[0] - 6452u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] - 59u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129FA4u);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x00129FA4u) [[unlikely]] return; }
L_00129FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012A00C; } }
L_00129FAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] - 23740u);
    set32(c.r[19], c.r[29].w[0] + 144u);
    set32(c.r[18], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st8((c.r[29].w[0] + 148u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129FD8u);  if (depth < kMaxDepth) unit_000C(c, 529u, depth + 1u); else { c.pc = 0x00133F60u; return; } if (c.pc != 0x00129FD8u) [[unlikely]] return; }
L_00129FD8:
    set32(c.r[17], c.r[2].w[0] - 63u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129FE8u);  if (depth < kMaxDepth) unit_000C(c, 530u, depth + 1u); else { c.pc = 0x00133F98u; return; } if (c.pc != 0x00129FE8u) [[unlikely]] return; }
L_00129FE8:
    set32(c.r[5], ld32((c.r[21].w[0] - 6452u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] - 65u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A00Cu);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x0012A00Cu) [[unlikely]] return; }
L_0012A00C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] + 13776u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A024u);  if (depth < kMaxDepth) unit_009D(c, 59u, depth + 1u); else { c.pc = 0x00374AC8u; return; } if (c.pc != 0x0012A024u) [[unlikely]] return; }
L_0012A024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0012A060; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[21].w[0] - 6452u)));
    c.budget -= 4;
L_0012A03C:
    set32(c.r[6], c.r[29].w[0] + 152u);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 156u);
    st8((c.r[29].w[0] + 156u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A060u);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x0012A060u) [[unlikely]] return; }
L_0012A060:
    set32(c.r[16], c.r[16].w[0] + 840u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A070u);  if (depth < kMaxDepth) unit_009D(c, 59u, depth + 1u); else { c.pc = 0x00374AC8u; return; } if (c.pc != 0x0012A070u) [[unlikely]] return; }
L_0012A070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0012A0AC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_0012A080:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[21].w[0] - 6452u)));
    set32(c.r[6], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 164u);
    st8((c.r[29].w[0] + 164u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A0ACu);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x0012A0ACu) [[unlikely]] return; }
L_0012A0AC:
    set32(c.r[16], c.r[23].w[0] + 22936u);
    set32(c.r[5], ld32((c.r[21].w[0] - 6452u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A0C0u);  if (depth < kMaxDepth) unit_009D(c, 293u, depth + 1u); else { c.pc = 0x00377E98u; return; } if (c.pc != 0x0012A0C0u) [[unlikely]] return; }
L_0012A0C0:
    set32(c.r[2], ld32((c.r[23].w[0] + 22936u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0012A0E4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012A0E8; } }
L_0012A0E4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012A0E8:
    set32(c.r[2], ld32((c.r[23].w[0] + 22936u)));
    set32(c.r[4], c.r[23].w[0] + 22936u);
    set32(c.r[16], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0012A114; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012A118; } }
L_0012A114:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012A118:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[4].w[0] - 23944u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012A1BC; } }
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    st8((c.r[29].w[0] + 172u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0012A148u);  goto L_0012A14C; }
L_0012A14C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], ld32((c.r[22].w[0] + 23004u)));
    set32(c.r[9], ld32((c.r[2].w[0] - 6464u)));
    set32(c.r[8], c.r[4].w[0] - 6468u);
    set32(c.r[12], c.r[3].w[0] + 8736u);
    c.r[2].d[0] = c.r[5].d[0] ^ 1ull;
    set32(c.r[4], c.r[9].w[0] + 10u);
    set32(c.r[11], c.r[21].w[0] - 6452u);
    set32(c.r[6], c.r[29].w[0] + 168u);
    set32(c.r[7], c.r[29].w[0] + 172u);
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[9].d[0] = c.r[4].d[0];
    c.r[10].d[0] = c.hi.d[0];
    c.budget -= 16;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0012A1A0; } }
    set32(c.r[2], ld32((c.r[30].w[0] - 6472u)));
    c.lo.d[0] = c.r[9].d[0];
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012A1A8; } }
L_0012A1A0:
    set32(c.r[2], ld32((c.r[30].w[0] - 6472u)));
    c.lo.d[0] = c.r[9].d[0];
    c.budget -= 2;
L_0012A1A8:
    mmi::madd(c, 0, c.r[2].w[0], c.r[10].w[0]);
    set32(c.r[5], ld32((c.r[11].w[0])));
    c.r[4].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012A29C; } }
L_0012A1BC:
    set32(c.r[2], ld32((c.r[23].w[0] + 22936u)));
    set32(c.r[3], c.r[23].w[0] + 22936u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0012A1E4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012A1E8; } }
L_0012A1E4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012A1E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 23800u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012A2B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A200u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x0012A200u) [[unlikely]] return; }
L_0012A200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A218; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 23004u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012A224; } }
L_0012A218:
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[2], c.r[16].w[0] - 1u);
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    c.budget -= 3;
L_0012A224:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[9], ld32((c.r[4].w[0] - 6464u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], ld32((c.r[22].w[0] + 23004u)));
    set32(c.r[10], c.r[2].w[0] + 8736u);
    set32(c.r[8], c.r[3].w[0] - 6468u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[3], c.r[9].w[0] + 10u);
    if (c.r[2].d[0] == 0) c.r[9].d[0] = c.r[3].d[0];
    set32(c.r[5], c.r[21].w[0] - 6452u);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 176u);
    st8((c.r[29].w[0] + 180u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[29].w[0] + 180u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0012A288; } }
    set32(c.r[2], ld32((c.r[30].w[0] - 6472u)));
    c.lo.d[0] = c.r[9].d[0];
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012A290; } }
L_0012A288:
    set32(c.r[2], ld32((c.r[30].w[0] - 6472u)));
    c.lo.d[0] = c.r[9].d[0];
    c.budget -= 2;
L_0012A290:
    mmi::madd(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 3;
L_0012A29C:
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[10], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A2B0u);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x0012A2B0u) [[unlikely]] return; }
L_0012A2B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012A344; } }
L_0012A2B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[9], ld32((c.r[4].w[0] - 6464u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], ld32((c.r[22].w[0] + 23004u)));
    set32(c.r[10], c.r[2].w[0] + 8736u);
    set32(c.r[8], c.r[3].w[0] - 6468u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[3], c.r[9].w[0] + 10u);
    if (c.r[2].d[0] == 0) c.r[9].d[0] = c.r[3].d[0];
    set32(c.r[5], c.r[21].w[0] - 6452u);
    st32((c.r[29].w[0] + 184u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 184u);
    st8((c.r[29].w[0] + 188u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[29].w[0] + 188u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0012A31C; } }
    set32(c.r[2], ld32((c.r[30].w[0] - 6472u)));
    c.lo.d[0] = c.r[9].d[0];
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012A324; } }
L_0012A31C:
    set32(c.r[2], ld32((c.r[30].w[0] - 6472u)));
    c.lo.d[0] = c.r[9].d[0];
    c.budget -= 2;
L_0012A324:
    mmi::madd(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[10], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A344u);  if (depth < kMaxDepth) unit_009C(c, 322u, depth + 1u); else { c.pc = 0x00373AF8u; return; } if (c.pc != 0x0012A344u) [[unlikely]] return; }
L_0012A344:
    set32(c.r[2], ld32((c.r[21].w[0] - 6452u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] - 6452u), c.r[2].w[0]);
    c.budget -= 3;
L_0012A350:
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
    c.f[20] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[29], c.r[29].w[0] + 368u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012A388:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A3B8u);  if (depth < kMaxDepth) unit_0040(c, 59u, depth + 1u); else { c.pc = 0x00200A70u; return; } if (c.pc != 0x0012A3B8u) [[unlikely]] return; }
L_0012A3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A3C0u);  if (depth < kMaxDepth) unit_000A(c, 131u, depth + 1u); else { c.pc = 0x00128ED8u; return; } if (c.pc != 0x0012A3C0u) [[unlikely]] return; }
L_0012A3C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 20528u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A3D8u);  if (depth < kMaxDepth) unit_009D(c, 96u, depth + 1u); else { c.pc = 0x00375540u; return; } if (c.pc != 0x0012A3D8u) [[unlikely]] return; }
L_0012A3D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 23080u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A3E8u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00377F90u; return; } if (c.pc != 0x0012A3E8u) [[unlikely]] return; }
L_0012A3E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 22936u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A3F8u);  if (depth < kMaxDepth) unit_009D(c, 288u, depth + 1u); else { c.pc = 0x00377DF8u; return; } if (c.pc != 0x0012A3F8u) [[unlikely]] return; }
L_0012A3F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], ld32((c.r[2].w[0] + 20712u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0012A430; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], ld32((c.r[3].w[0] - 368u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A430u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012A430u) [[unlikely]] return; }
L_0012A430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] - 6452u), 0u);
    set32(c.r[22], c.r[19].w[0] + 19264u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A448u);  if (depth < kMaxDepth) unit_007D(c, 179u, depth + 1u); else { c.pc = 0x002F6B08u; return; } if (c.pc != 0x0012A448u) [[unlikely]] return; }
L_0012A448:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], 0u + 6u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 4;
L_0012A458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A460u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x0012A460u) [[unlikely]] return; }
L_0012A460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A468u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x0012A468u) [[unlikely]] return; }
L_0012A468:
    set32(c.r[2], ld32((c.r[22].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A480; } }
    set32(c.r[4], c.r[20].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A480u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x0012A480u) [[unlikely]] return; }
L_0012A480:
    set32(c.r[16], c.r[21].w[0] + 29328u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A490u);  if (depth < kMaxDepth) unit_009E(c, 377u, depth + 1u); else { c.pc = 0x0037B8B0u; return; } if (c.pc != 0x0012A490u) [[unlikely]] return; }
L_0012A490:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012A4AC; } }
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[2], c.r[17].w[0] - 1u);
    if (c.r[3].d[0] == 0) c.r[17].d[0] = c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012A4C8; } }
L_0012A4AC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0012A4C4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A4C4u);  if (depth < kMaxDepth) unit_009E(c, 365u, depth + 1u); else { c.pc = 0x0037B7B8u; return; } if (c.pc != 0x0012A4C4u) [[unlikely]] return; }
L_0012A4C4:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0012A4C8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A458u | kUnwind; return; } goto L_0012A458; } }
    set32(c.r[4], ld32((c.r[23].w[0] + 20712u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A4E0u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x0012A4E0u) [[unlikely]] return; }
L_0012A4E0:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A4F0u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x0012A4F0u) [[unlikely]] return; }
L_0012A4F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 24064u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012A510; } }
    set32(c.r[2], c.r[19].w[0] + 19264u);
    st32((c.r[2].w[0] + 108u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012A51C; } }
L_0012A510:
    set32(c.r[3], c.r[19].w[0] + 19264u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 3;
L_0012A51C:
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
L_0012A550:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0012A9EC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012A734; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[19], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] - 7224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A5A4u);  if (depth < kMaxDepth) unit_009D(c, 2u, depth + 1u); else { c.pc = 0x00374030u; return; } if (c.pc != 0x0012A5A4u) [[unlikely]] return; }
L_0012A5A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 6384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A5B4u);  if (depth < kMaxDepth) unit_009D(c, 2u, depth + 1u); else { c.pc = 0x00374030u; return; } if (c.pc != 0x0012A5B4u) [[unlikely]] return; }
L_0012A5B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 5544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A5C4u);  if (depth < kMaxDepth) unit_009D(c, 2u, depth + 1u); else { c.pc = 0x00374030u; return; } if (c.pc != 0x0012A5C4u) [[unlikely]] return; }
L_0012A5C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 4704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A5D4u);  if (depth < kMaxDepth) unit_009D(c, 2u, depth + 1u); else { c.pc = 0x00374030u; return; } if (c.pc != 0x0012A5D4u) [[unlikely]] return; }
L_0012A5D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 3864u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A5E4u);  if (depth < kMaxDepth) unit_009D(c, 2u, depth + 1u); else { c.pc = 0x00374030u; return; } if (c.pc != 0x0012A5E4u) [[unlikely]] return; }
L_0012A5E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 3024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A5F4u);  if (depth < kMaxDepth) unit_009D(c, 2u, depth + 1u); else { c.pc = 0x00374030u; return; } if (c.pc != 0x0012A5F4u) [[unlikely]] return; }
L_0012A5F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 2184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A604u);  if (depth < kMaxDepth) unit_009D(c, 2u, depth + 1u); else { c.pc = 0x00374030u; return; } if (c.pc != 0x0012A604u) [[unlikely]] return; }
L_0012A604:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 1344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A614u);  if (depth < kMaxDepth) unit_009D(c, 2u, depth + 1u); else { c.pc = 0x00374030u; return; } if (c.pc != 0x0012A614u) [[unlikely]] return; }
L_0012A614:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 504u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A624u);  if (depth < kMaxDepth) unit_009D(c, 2u, depth + 1u); else { c.pc = 0x00374030u; return; } if (c.pc != 0x0012A624u) [[unlikely]] return; }
L_0012A624:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A634u);  if (depth < kMaxDepth) unit_009D(c, 2u, depth + 1u); else { c.pc = 0x00374030u; return; } if (c.pc != 0x0012A634u) [[unlikely]] return; }
L_0012A634:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], c.r[3].w[0] + 1176u);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_0012A640:
    set32(c.r[18], 0u - 1u);
    c.budget -= 2;
L_0012A648:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A654u);  if (depth < kMaxDepth) unit_009D(c, 2u, depth + 1u); else { c.pc = 0x00374030u; return; } if (c.pc != 0x0012A654u) [[unlikely]] return; }
L_0012A654:
    set32(c.r[16], c.r[16].w[0] + 840u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A648u | kUnwind; return; } goto L_0012A648; } }
L_0012A664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012A674; } }
L_0012A66C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A674u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0012A674u) [[unlikely]] return; }
L_0012A674:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[18], c.r[3].w[0] + 10416u);
    set32(c.r[4], c.r[2].w[0] + 7896u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A68Cu);  if (depth < kMaxDepth) unit_009D(c, 2u, depth + 1u); else { c.pc = 0x00374030u; return; } if (c.pc != 0x0012A68Cu) [[unlikely]] return; }
L_0012A68C:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] + 8736u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A6A4u);  if (depth < kMaxDepth) unit_009D(c, 2u, depth + 1u); else { c.pc = 0x00374030u; return; } if (c.pc != 0x0012A6A4u) [[unlikely]] return; }
L_0012A6A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[3].w[0] + 9576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A6B4u);  if (depth < kMaxDepth) unit_009D(c, 2u, depth + 1u); else { c.pc = 0x00374030u; return; } if (c.pc != 0x0012A6B4u) [[unlikely]] return; }
L_0012A6B4:
    set32(c.r[19], 0u - 1u);
    c.budget -= 1;
L_0012A6B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A6C4u);  if (depth < kMaxDepth) unit_009D(c, 2u, depth + 1u); else { c.pc = 0x00374030u; return; } if (c.pc != 0x0012A6C4u) [[unlikely]] return; }
L_0012A6C4:
    set32(c.r[17], c.r[17].w[0] + 840u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A6B8u | kUnwind; return; } goto L_0012A6B8; } }
L_0012A6D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012A6E4; } }
L_0012A6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A6E4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0012A6E4u) [[unlikely]] return; }
L_0012A6E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] + 12936u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[18], c.r[2].w[0] + 13776u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A700u);  if (depth < kMaxDepth) unit_009D(c, 2u, depth + 1u); else { c.pc = 0x00374030u; return; } if (c.pc != 0x0012A700u) [[unlikely]] return; }
L_0012A700:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0012A704:
    set32(c.r[19], 0u - 1u);
    c.budget -= 1;
L_0012A708:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A714u);  if (depth < kMaxDepth) unit_009D(c, 2u, depth + 1u); else { c.pc = 0x00374030u; return; } if (c.pc != 0x0012A714u) [[unlikely]] return; }
L_0012A714:
    set32(c.r[17], c.r[17].w[0] + 840u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A708u | kUnwind; return; } goto L_0012A708; } }
L_0012A724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012A9EC; } }
L_0012A72C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A734u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0012A734u) [[unlikely]] return; }
L_0012A734:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 13776u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012A78C; } }
    set32(c.r[16], c.r[2].w[0] + 1680u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0012A78C; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0012A770:
    set32(c.r[16], c.r[16].w[0] - 840u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A784u);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A784u) [[unlikely]] return; }
L_0012A784:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A770u | kUnwind; return; } goto L_0012A770; } }
L_0012A78C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[3].w[0] + 12936u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A7A0u);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A7A0u) [[unlikely]] return; }
L_0012A7A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[4].w[0] + 10416u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012A7DC; } }
    set32(c.r[16], c.r[2].w[0] + 2520u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0012A7DC; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0012A7C0:
    set32(c.r[16], c.r[16].w[0] - 840u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A7D4u);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A7D4u) [[unlikely]] return; }
L_0012A7D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A7C0u | kUnwind; return; } goto L_0012A7C0; } }
L_0012A7DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] + 9576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A7F0u);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A7F0u) [[unlikely]] return; }
L_0012A7F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[3].w[0] + 8736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A804u);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A804u) [[unlikely]] return; }
L_0012A804:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] + 7896u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A818u);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A818u) [[unlikely]] return; }
L_0012A818:
    set32(c.r[2], c.r[18].w[0] + 1176u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012A854; } }
    set32(c.r[16], c.r[2].w[0] + 6720u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0012A854; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0012A838:
    set32(c.r[16], c.r[16].w[0] - 840u);
    c.budget -= 1;
L_0012A83C:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A84Cu);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A84Cu) [[unlikely]] return; }
L_0012A84C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A838u | kUnwind; return; } goto L_0012A838; } }
L_0012A854:
    set32(c.r[4], c.r[19].w[0] + 336u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A864u);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A864u) [[unlikely]] return; }
L_0012A864:
    set32(c.r[4], c.r[20].w[0] - 504u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A874u);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A874u) [[unlikely]] return; }
L_0012A874:
    set32(c.r[4], c.r[21].w[0] - 1344u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A884u);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A884u) [[unlikely]] return; }
    goto L_0012A884;
L_0012A880:
    c.budget -= 1;
L_0012A884:
    set32(c.r[4], c.r[22].w[0] - 2184u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A894u);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A894u) [[unlikely]] return; }
L_0012A894:
    set32(c.r[4], c.r[23].w[0] - 3024u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A8A4u);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A8A4u) [[unlikely]] return; }
L_0012A8A4:
    set32(c.r[4], c.r[30].w[0] - 3864u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A8B4u);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A8B4u) [[unlikely]] return; }
L_0012A8B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[3].w[0] - 4704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A8C8u);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A8C8u) [[unlikely]] return; }
L_0012A8C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] - 5544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A8DCu);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A8DCu) [[unlikely]] return; }
L_0012A8DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[3].w[0] - 6384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A8F0u);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A8F0u) [[unlikely]] return; }
L_0012A8F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] - 7224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A904u);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A904u) [[unlikely]] return; }
L_0012A904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012A9EC; } }
L_0012A90C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A66Cu | kUnwind; return; } goto L_0012A66C; } }
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], 0u + 840u);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A66Cu | kUnwind; return; } goto L_0012A66C; } }
L_0012A930:
    set32(c.r[16], c.r[16].w[0] - 840u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A944u);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A944u) [[unlikely]] return; }
L_0012A944:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A930u | kUnwind; return; } goto L_0012A930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A66Cu | kUnwind; return; } goto L_0012A66C; } }
L_0012A954:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A6DCu | kUnwind; return; } goto L_0012A6DC; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], 0u + 840u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[4].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A6DCu | kUnwind; return; } goto L_0012A6DC; } }
L_0012A978:
    set32(c.r[16], c.r[16].w[0] - 840u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A98Cu);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A98Cu) [[unlikely]] return; }
L_0012A98C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A978u | kUnwind; return; } goto L_0012A978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A6DCu | kUnwind; return; } goto L_0012A6DC; } }
L_0012A99C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A72Cu | kUnwind; return; } goto L_0012A72C; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 840u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[4].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A72Cu | kUnwind; return; } goto L_0012A72C; } }
L_0012A9C0:
    set32(c.r[16], c.r[16].w[0] - 840u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A9D4u);  if (depth < kMaxDepth) unit_009D(c, 13u, depth + 1u); else { c.pc = 0x003740F0u; return; } if (c.pc != 0x0012A9D4u) [[unlikely]] return; }
L_0012A9D4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A9C0u | kUnwind; return; } goto L_0012A9C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A72Cu | kUnwind; return; } goto L_0012A72C; } }
L_0012A9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A9ECu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0012A9ECu) [[unlikely]] return; }
L_0012A9EC:
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
L_0012AA20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] - 6468u), c.r[4].w[0]);
    st32((c.r[3].w[0] - 6464u), c.r[5].w[0]);
    st32((c.r[7].w[0] - 6472u), c.r[6].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012AA40:
    c.f[13] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x52880000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[5].d[0] | 24443ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AA84u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0012AA84u) [[unlikely]] return; }
L_0012AA84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012AA98:
    c.f[13] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFA860000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[5].d[0] | 45113ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AADCu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0012AADCu) [[unlikely]] return; }
L_0012AADC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012AAF0:
    c.f[13] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x90150000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[5].d[0] | 13853ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AB34u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0012AB34u) [[unlikely]] return; }
L_0012AB34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012AB48:
    c.f[13] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xCC850000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[5].d[0] | 64330ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AB8Cu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0012AB8Cu) [[unlikely]] return; }
L_0012AB8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012ABA0:
    c.f[13] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x87F30000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[5].d[0] | 14642ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ABE4u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0012ABE4u) [[unlikely]] return; }
L_0012ABE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012ABF8:
    c.f[13] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x07030000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[5].d[0] | 27224ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AC3Cu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0012AC3Cu) [[unlikely]] return; }
L_0012AC3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012AC50:
    c.f[13] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x31BB0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[5].d[0] | 60707ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AC94u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0012AC94u) [[unlikely]] return; }
L_0012AC94:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012ACA8:
    c.f[13] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x06CA0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[5].d[0] | 52620ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ACECu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0012ACECu) [[unlikely]] return; }
L_0012ACEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012AD00:
    c.f[13] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x4B3E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 45515ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AD44u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0012AD44u) [[unlikely]] return; }
L_0012AD44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] - 6448u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012AD60:
    c.f[13] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x800B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 1851ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ADA4u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0012ADA4u) [[unlikely]] return; }
L_0012ADA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] - 6448u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012ADC0:
    c.f[13] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x08990000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 40418ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AE04u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0012AE04u) [[unlikely]] return; }
L_0012AE04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] - 6448u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012AE20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[16].w[0] - 6448u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0012AE50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AE4Cu);  if (depth < kMaxDepth) unit_009E(c, 363u, depth + 1u); else { c.pc = 0x0037B790u; return; } if (c.pc != 0x0012AE4Cu) [[unlikely]] return; }
L_0012AE4C:
    st32((c.r[16].w[0] - 6448u), 0u);
    c.budget -= 1;
L_0012AE50:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012AE68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012AE70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AE88u);  if (depth < kMaxDepth) unit_000A(c, 290u, depth + 1u); else { c.pc = 0x0012A550u; return; } if (c.pc != 0x0012AE88u) [[unlikely]] return; }
L_0012AE88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012AE98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AEB0u);  if (depth < kMaxDepth) unit_000A(c, 290u, depth + 1u); else { c.pc = 0x0012A550u; return; } if (c.pc != 0x0012AEB0u) [[unlikely]] return; }
L_0012AEB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012AEC0:
    set32(c.r[29], c.r[29].w[0] - 2480u);
    st128((c.r[29].w[0] + 2464u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 2448u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 2432u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 2416u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 2400u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 2384u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 2368u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 2352u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 2336u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 2320u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AEF4u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x0012AEF4u) [[unlikely]] return; }
L_0012AEF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012AF20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012AF20; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], 0u + 121u);
    set32(c.r[3], c.r[5].w[0] + 29432u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_0012AF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AF28u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x0012AF28u) [[unlikely]] return; }
L_0012AF28:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0012AF94; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[13], c.r[14].w[0] + 26192u);
    set32(c.r[7], 0u + 89u);
    st32((c.r[13].w[0] + 4u), c.r[7].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[8], c.r[15].w[0] + 26840u);
    set32(c.r[2], 0u + 95u);
    st32((c.r[8].w[0] + 4u), c.r[2].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[9], c.r[16].w[0] + 27488u);
    set32(c.r[3], 0u + 100u);
    st32((c.r[9].w[0] + 4u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[10], c.r[17].w[0] + 28136u);
    set32(c.r[4], 0u + 115u);
    set32(c.r[12], c.r[6].w[0] + 29432u);
    st32((c.r[10].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[11], c.r[18].w[0] + 28784u);
    set32(c.r[5], 0u + 105u);
    set32(c.r[6], 0u + 110u);
    c.budget -= 24;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012B074; } }
L_0012AF94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AF9Cu);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x0012AF9Cu) [[unlikely]] return; }
L_0012AF9C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0012B008; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[13], c.r[14].w[0] + 26192u);
    set32(c.r[7], 0u + 90u);
    st32((c.r[13].w[0] + 4u), c.r[7].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[8], c.r[15].w[0] + 26840u);
    set32(c.r[2], 0u + 96u);
    st32((c.r[8].w[0] + 4u), c.r[2].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[9], c.r[16].w[0] + 27488u);
    set32(c.r[3], 0u + 101u);
    st32((c.r[9].w[0] + 4u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[10], c.r[17].w[0] + 28136u);
    set32(c.r[4], 0u + 116u);
    set32(c.r[12], c.r[6].w[0] + 29432u);
    st32((c.r[10].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[11], c.r[18].w[0] + 28784u);
    set32(c.r[5], 0u + 106u);
    set32(c.r[6], 0u + 111u);
    c.budget -= 24;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012B074; } }
L_0012B008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B010u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x0012B010u) [[unlikely]] return; }
L_0012B010:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0012B088; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[13], c.r[14].w[0] + 26192u);
    set32(c.r[7], 0u + 91u);
    st32((c.r[13].w[0] + 4u), c.r[7].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[8], c.r[15].w[0] + 26840u);
    set32(c.r[2], 0u + 97u);
    st32((c.r[8].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 9;
L_0012B040:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[9], c.r[16].w[0] + 27488u);
    set32(c.r[3], 0u + 102u);
    st32((c.r[9].w[0] + 4u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[10], c.r[17].w[0] + 28136u);
    set32(c.r[4], 0u + 117u);
    set32(c.r[12], c.r[6].w[0] + 29432u);
    st32((c.r[10].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[11], c.r[18].w[0] + 28784u);
    set32(c.r[5], 0u + 107u);
    set32(c.r[6], 0u + 112u);
    c.budget -= 13;
L_0012B074:
    st32((c.r[11].w[0] + 4u), c.r[5].w[0]);
    c.r[30].d[0] = c.r[14].d[0] + 0ull;
    st32((c.r[12].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012B0FC; } }
L_0012B088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B090u);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x0012B090u) [[unlikely]] return; }
L_0012B090:
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0012B0FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[11], c.r[2].w[0] + 27488u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[12], c.r[3].w[0] + 28136u);
    set32(c.r[8], c.r[30].w[0] + 26192u);
    set32(c.r[2], 0u + 92u);
    set32(c.r[10], c.r[7].w[0] + 26840u);
    st32((c.r[8].w[0] + 4u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], 0u + 98u);
    set32(c.r[13], c.r[5].w[0] + 28784u);
    st32((c.r[10].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], 0u + 103u);
    st32((c.r[11].w[0] + 4u), c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 118u);
    set32(c.r[9], c.r[7].w[0] + 29432u);
    st32((c.r[12].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[6], 0u + 108u);
    set32(c.r[7], 0u + 113u);
    st32((c.r[13].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[9].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 23;
L_0012B0FC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 17120u);
    set32(c.r[21], 0u + 10u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    c.r[7].d[0] = c.r[29].d[0] | 8ull;
    st32((c.r[29].w[0] + 4u), c.r[21].w[0]);
    st32((c.r[29].w[0]), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[19], 0u + 60u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B134u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B134u) [[unlikely]] return; }
L_0012B134:
    set32(c.r[20], 0u + 2u);
    set32(c.r[2], 0u + 20u);
    c.r[5].d[0] = c.r[29].d[0] | 12ull;
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[2], 0u + 30u);
    set32(c.r[7], c.r[29].w[0] + 20u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), 0u);
    set32(c.r[23], 0u + 5u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B168u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B168u) [[unlikely]] return; }
L_0012B168:
    set32(c.r[22], 0u + 19u);
    set32(c.r[2], 0u + 322u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 24u);
    set32(c.r[6], c.r[29].w[0] + 28u);
    set32(c.r[7], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 24u), c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + 17768u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[17], c.r[30].w[0] + 26192u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B19Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B19Cu) [[unlikely]] return; }
L_0012B19C:
    set32(c.r[2], 0u + 643u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 36u);
    set32(c.r[6], c.r[29].w[0] + 40u);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 36u), c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + 18416u);
    st32((c.r[29].w[0] + 44u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B1C8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B1C8u) [[unlikely]] return; }
L_0012B1C8:
    set32(c.r[2], 0u + 385u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 52u);
    set32(c.r[7], c.r[29].w[0] + 56u);
    st32((c.r[29].w[0] + 48u), c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19712u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B1F4u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B1F4u) [[unlikely]] return; }
L_0012B1F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 60u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[7], c.r[29].w[0] + 68u);
    st32((c.r[29].w[0] + 64u), c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] + 22952u);
    st32((c.r[29].w[0] + 60u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B21Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B21Cu) [[unlikely]] return; }
L_0012B21C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[6], c.r[29].w[0] + 76u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 72u), c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + 23600u);
    st32((c.r[29].w[0] + 76u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 80u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B244u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B244u) [[unlikely]] return; }
L_0012B244:
    set32(c.r[3], 0u + 121u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 84u);
    set32(c.r[6], c.r[29].w[0] + 88u);
    set32(c.r[7], c.r[29].w[0] + 92u);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + 24248u);
    st32((c.r[29].w[0] + 92u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B270u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B270u) [[unlikely]] return; }
L_0012B270:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 100u), c.r[19].w[0]);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 100u);
    set32(c.r[7], c.r[29].w[0] + 104u);
    st32((c.r[29].w[0] + 96u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 104u), 0u);
    set32(c.r[4], c.r[4].w[0] + 24896u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B298u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B298u) [[unlikely]] return; }
L_0012B298:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], 0u + 101u);
    set32(c.r[16], c.r[16].w[0] + 25544u);
    set32(c.r[5], c.r[29].w[0] + 108u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[7], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 108u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 116u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B2C8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B2C8u) [[unlikely]] return; }
L_0012B2C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], 0u + 110u);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 120u);
    set32(c.r[6], c.r[29].w[0] + 124u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[19], c.r[3].w[0] + 26840u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B2F8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B2F8u) [[unlikely]] return; }
L_0012B2F8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[29].w[0] + 132u);
    set32(c.r[16], c.r[16].w[0] - 32216u);
    set32(c.r[6], c.r[29].w[0] + 136u);
    set32(c.r[7], c.r[29].w[0] + 140u);
    st32((c.r[29].w[0] + 132u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 136u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 140u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B324u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B324u) [[unlikely]] return; }
L_0012B324:
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 148u);
    set32(c.r[7], c.r[29].w[0] + 152u);
    st32((c.r[29].w[0] + 144u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 148u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 152u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B348u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B348u) [[unlikely]] return; }
L_0012B348:
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], c.r[29].w[0] + 156u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 164u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B370u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B370u) [[unlikely]] return; }
L_0012B370:
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 172u);
    set32(c.r[7], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 176u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B398u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B398u) [[unlikely]] return; }
L_0012B398:
    set32(c.r[5], c.r[29].w[0] + 180u);
    set32(c.r[6], c.r[29].w[0] + 184u);
    set32(c.r[7], c.r[29].w[0] + 188u);
    st32((c.r[29].w[0] + 180u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[23].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 188u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B3BCu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B3BCu) [[unlikely]] return; }
L_0012B3BC:
    set32(c.r[2], 0u + 6u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 196u);
    set32(c.r[7], c.r[29].w[0] + 200u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 200u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B3E4u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B3E4u) [[unlikely]] return; }
L_0012B3E4:
    set32(c.r[2], 0u + 7u);
    set32(c.r[5], c.r[29].w[0] + 204u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 208u);
    set32(c.r[7], c.r[29].w[0] + 212u);
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 212u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B40Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B40Cu) [[unlikely]] return; }
L_0012B40C:
    set32(c.r[2], 0u + 8u);
    set32(c.r[5], c.r[29].w[0] + 216u);
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 220u);
    set32(c.r[7], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 224u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B434u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B434u) [[unlikely]] return; }
L_0012B434:
    set32(c.r[2], 0u + 9u);
    set32(c.r[5], c.r[29].w[0] + 228u);
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 232u);
    set32(c.r[7], c.r[29].w[0] + 236u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 236u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B45Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B45Cu) [[unlikely]] return; }
L_0012B45C:
    st32((c.r[29].w[0] + 244u), c.r[21].w[0]);
    set32(c.r[5], c.r[29].w[0] + 240u);
    set32(c.r[6], c.r[29].w[0] + 244u);
    set32(c.r[7], c.r[29].w[0] + 248u);
    st32((c.r[29].w[0] + 240u), c.r[21].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 248u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B480u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B480u) [[unlikely]] return; }
L_0012B480:
    set32(c.r[2], 0u + 11u);
    set32(c.r[5], c.r[29].w[0] + 252u);
    set32(c.r[6], c.r[29].w[0] + 256u);
    set32(c.r[7], c.r[29].w[0] + 260u);
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 260u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B4A8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B4A8u) [[unlikely]] return; }
L_0012B4A8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], 0u + 17u);
    set32(c.r[16], c.r[16].w[0] + 30080u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 264u);
    set32(c.r[6], c.r[29].w[0] + 268u);
    set32(c.r[7], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 264u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 268u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B4D8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B4D8u) [[unlikely]] return; }
L_0012B4D8:
    set32(c.r[3], 0u + 18u);
    set32(c.r[5], c.r[29].w[0] + 276u);
    set32(c.r[6], c.r[29].w[0] + 280u);
    set32(c.r[7], c.r[29].w[0] + 284u);
    st32((c.r[29].w[0] + 284u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 276u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 280u), c.r[23].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B500u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B500u) [[unlikely]] return; }
L_0012B500:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[6], c.r[29].w[0] + 292u);
    set32(c.r[7], c.r[29].w[0] + 296u);
    st32((c.r[29].w[0] + 296u), c.r[22].w[0]);
    set32(c.r[21], c.r[2].w[0] + 28136u);
    st32((c.r[29].w[0] + 288u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 292u), c.r[18].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B52Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B52Cu) [[unlikely]] return; }
L_0012B52C:
    set32(c.r[2], 0u + 14u);
    set32(c.r[5], c.r[29].w[0] + 300u);
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 304u);
    set32(c.r[7], c.r[29].w[0] + 308u);
    st32((c.r[29].w[0] + 300u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 308u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B554u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B554u) [[unlikely]] return; }
L_0012B554:
    set32(c.r[2], 0u + 25u);
    st32((c.r[29].w[0] + 312u), c.r[22].w[0]);
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 312u);
    set32(c.r[6], c.r[29].w[0] + 316u);
    set32(c.r[7], c.r[29].w[0] + 320u);
    st32((c.r[29].w[0] + 320u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B57Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B57Cu) [[unlikely]] return; }
L_0012B57C:
    set32(c.r[22], 0u + 3u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[2], 0u + 36u);
    st32((c.r[29].w[0] + 324u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 324u);
    st32((c.r[29].w[0] + 328u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 328u);
    set32(c.r[7], c.r[29].w[0] + 332u);
    st32((c.r[29].w[0] + 332u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B5ACu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B5ACu) [[unlikely]] return; }
L_0012B5AC:
    set32(c.r[2], 0u + 47u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 340u);
    set32(c.r[2], 0u + 41u);
    set32(c.r[7], c.r[29].w[0] + 344u);
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 344u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B5D8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B5D8u) [[unlikely]] return; }
L_0012B5D8:
    set32(c.r[2], 0u + 52u);
    set32(c.r[3], 0u + 58u);
    set32(c.r[5], c.r[29].w[0] + 348u);
    st32((c.r[29].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 352u);
    set32(c.r[7], c.r[29].w[0] + 356u);
    st32((c.r[29].w[0] + 352u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 356u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B604u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B604u) [[unlikely]] return; }
L_0012B604:
    set32(c.r[3], 0u + 69u);
    set32(c.r[2], 0u + 63u);
    st32((c.r[29].w[0] + 360u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 360u);
    st32((c.r[29].w[0] + 364u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 364u);
    set32(c.r[7], c.r[29].w[0] + 368u);
    st32((c.r[29].w[0] + 368u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B630u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B630u) [[unlikely]] return; }
L_0012B630:
    set32(c.r[2], 0u + 74u);
    set32(c.r[5], c.r[29].w[0] + 372u);
    st32((c.r[29].w[0] + 372u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 376u);
    set32(c.r[2], 0u + 80u);
    set32(c.r[7], c.r[29].w[0] + 380u);
    st32((c.r[29].w[0] + 376u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 380u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B65Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B65Cu) [[unlikely]] return; }
L_0012B65C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], 0u + 96u);
    set32(c.r[30], c.r[3].w[0] + 28784u);
    set32(c.r[5], c.r[29].w[0] + 384u);
    set32(c.r[3], 0u + 111u);
    set32(c.r[6], c.r[29].w[0] + 388u);
    set32(c.r[7], c.r[29].w[0] + 392u);
    st32((c.r[29].w[0] + 384u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 388u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 392u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B690u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B690u) [[unlikely]] return; }
L_0012B690:
    set32(c.r[5], 0u + 96u);
    set32(c.r[2], 0u + 111u);
    st32((c.r[29].w[0] + 400u), c.r[5].w[0]);
    set32(c.r[6], c.r[29].w[0] + 400u);
    set32(c.r[5], c.r[29].w[0] + 396u);
    set32(c.r[7], c.r[29].w[0] + 404u);
    st32((c.r[29].w[0] + 396u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 404u), c.r[20].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B6BCu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B6BCu) [[unlikely]] return; }
L_0012B6BC:
    set32(c.r[2], 0u + 174u);
    set32(c.r[3], 0u + 159u);
    set32(c.r[6], c.r[29].w[0] + 412u);
    set32(c.r[5], c.r[29].w[0] + 408u);
    set32(c.r[7], c.r[29].w[0] + 416u);
    st32((c.r[29].w[0] + 408u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 412u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 416u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B6E8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B6E8u) [[unlikely]] return; }
L_0012B6E8:
    set32(c.r[6], 0u + 159u);
    set32(c.r[3], 0u + 174u);
    st32((c.r[29].w[0] + 424u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 420u);
    st32((c.r[29].w[0] + 420u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 424u);
    set32(c.r[7], c.r[29].w[0] + 428u);
    st32((c.r[29].w[0] + 428u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B714u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B714u) [[unlikely]] return; }
L_0012B714:
    set32(c.r[2], 0u + 182u);
    set32(c.r[3], 0u + 197u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    set32(c.r[6], c.r[29].w[0] + 436u);
    set32(c.r[7], c.r[29].w[0] + 440u);
    st32((c.r[29].w[0] + 432u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 436u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 440u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B740u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B740u) [[unlikely]] return; }
L_0012B740:
    set32(c.r[5], 0u + 197u);
    set32(c.r[6], 0u + 182u);
    st32((c.r[29].w[0] + 444u), c.r[5].w[0]);
    set32(c.r[7], c.r[29].w[0] + 452u);
    st32((c.r[29].w[0] + 448u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 444u);
    set32(c.r[6], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 452u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B76Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B76Cu) [[unlikely]] return; }
L_0012B76C:
    set32(c.r[2], 0u + 202u);
    set32(c.r[3], 0u + 217u);
    set32(c.r[5], c.r[29].w[0] + 456u);
    set32(c.r[6], c.r[29].w[0] + 460u);
    set32(c.r[7], c.r[29].w[0] + 464u);
    st32((c.r[29].w[0] + 456u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 460u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 464u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B798u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B798u) [[unlikely]] return; }
L_0012B798:
    set32(c.r[5], 0u + 217u);
    set32(c.r[6], 0u + 202u);
    st32((c.r[29].w[0] + 468u), c.r[5].w[0]);
    set32(c.r[7], c.r[29].w[0] + 476u);
    st32((c.r[29].w[0] + 472u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 468u);
    set32(c.r[6], c.r[29].w[0] + 472u);
    st32((c.r[29].w[0] + 476u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B7C4u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B7C4u) [[unlikely]] return; }
L_0012B7C4:
    set32(c.r[2], 0u + 226u);
    set32(c.r[3], 0u + 241u);
    set32(c.r[5], c.r[29].w[0] + 480u);
    set32(c.r[6], c.r[29].w[0] + 484u);
    set32(c.r[7], c.r[29].w[0] + 488u);
    st32((c.r[29].w[0] + 480u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 484u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 488u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B7F0u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B7F0u) [[unlikely]] return; }
L_0012B7F0:
    set32(c.r[5], 0u + 241u);
    set32(c.r[6], 0u + 226u);
    st32((c.r[29].w[0] + 492u), c.r[5].w[0]);
    set32(c.r[7], c.r[29].w[0] + 500u);
    st32((c.r[29].w[0] + 496u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 492u);
    set32(c.r[6], c.r[29].w[0] + 496u);
    st32((c.r[29].w[0] + 500u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B81Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B81Cu) [[unlikely]] return; }
L_0012B81C:
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], 0u + 270u);
    set32(c.r[5], c.r[29].w[0] + 504u);
    set32(c.r[6], c.r[29].w[0] + 508u);
    set32(c.r[7], c.r[29].w[0] + 512u);
    st32((c.r[29].w[0] + 504u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 508u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 512u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B848u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B848u) [[unlikely]] return; }
L_0012B848:
    set32(c.r[5], 0u + 270u);
    set32(c.r[6], 0u + 255u);
    st32((c.r[29].w[0] + 516u), c.r[5].w[0]);
    set32(c.r[7], c.r[29].w[0] + 524u);
    st32((c.r[29].w[0] + 520u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 516u);
    set32(c.r[6], c.r[29].w[0] + 520u);
    st32((c.r[29].w[0] + 524u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B874u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B874u) [[unlikely]] return; }
L_0012B874:
    set32(c.r[3], 0u + 275u);
    set32(c.r[2], 0u + 272u);
    st32((c.r[29].w[0] + 528u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 528u);
    st32((c.r[29].w[0] + 532u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 532u);
    set32(c.r[7], c.r[29].w[0] + 536u);
    st32((c.r[29].w[0] + 536u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B8A0u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B8A0u) [[unlikely]] return; }
L_0012B8A0:
    set32(c.r[2], 0u + 18u);
    set32(c.r[5], c.r[29].w[0] + 540u);
    set32(c.r[6], c.r[29].w[0] + 544u);
    set32(c.r[7], c.r[29].w[0] + 548u);
    st32((c.r[29].w[0] + 544u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 540u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 548u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B8C8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B8C8u) [[unlikely]] return; }
L_0012B8C8:
    set32(c.r[2], 0u + 40u);
    set32(c.r[3], 0u + 23u);
    set32(c.r[5], c.r[29].w[0] + 552u);
    set32(c.r[6], c.r[29].w[0] + 556u);
    set32(c.r[7], c.r[29].w[0] + 560u);
    st32((c.r[29].w[0] + 552u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 556u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 560u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B8F4u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B8F4u) [[unlikely]] return; }
L_0012B8F4:
    set32(c.r[3], 0u + 18u);
    set32(c.r[5], c.r[29].w[0] + 564u);
    st32((c.r[29].w[0] + 564u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 568u);
    set32(c.r[7], c.r[29].w[0] + 572u);
    st32((c.r[29].w[0] + 568u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 572u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B91Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B91Cu) [[unlikely]] return; }
L_0012B91C:
    set32(c.r[5], 0u + 40u);
    set32(c.r[2], 0u + 23u);
    st32((c.r[29].w[0] + 576u), c.r[5].w[0]);
    set32(c.r[6], c.r[29].w[0] + 580u);
    set32(c.r[5], c.r[29].w[0] + 576u);
    set32(c.r[7], c.r[29].w[0] + 584u);
    st32((c.r[29].w[0] + 580u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 584u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B948u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B948u) [[unlikely]] return; }
L_0012B948:
    set32(c.r[2], 0u + 58u);
    set32(c.r[3], 0u + 45u);
    set32(c.r[6], c.r[29].w[0] + 592u);
    set32(c.r[5], c.r[29].w[0] + 588u);
    set32(c.r[7], c.r[29].w[0] + 596u);
    st32((c.r[29].w[0] + 588u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 592u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 596u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B974u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B974u) [[unlikely]] return; }
L_0012B974:
    set32(c.r[6], 0u + 45u);
    set32(c.r[3], 0u + 58u);
    st32((c.r[29].w[0] + 604u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 600u);
    st32((c.r[29].w[0] + 600u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 604u);
    set32(c.r[7], c.r[29].w[0] + 608u);
    st32((c.r[29].w[0] + 608u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B9A0u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B9A0u) [[unlikely]] return; }
L_0012B9A0:
    set32(c.r[3], 0u + 77u);
    set32(c.r[2], 0u + 65u);
    set32(c.r[7], c.r[29].w[0] + 620u);
    st32((c.r[29].w[0] + 612u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 612u);
    st32((c.r[29].w[0] + 616u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 616u);
    st32((c.r[29].w[0] + 620u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B9CCu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B9CCu) [[unlikely]] return; }
L_0012B9CC:
    set32(c.r[7], 0u + 80u);
    set32(c.r[2], 0u + 92u);
    st32((c.r[29].w[0] + 624u), c.r[7].w[0]);
    set32(c.r[5], c.r[29].w[0] + 624u);
    st32((c.r[29].w[0] + 628u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 628u);
    set32(c.r[7], c.r[29].w[0] + 632u);
    st32((c.r[29].w[0] + 632u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B9F8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012B9F8u) [[unlikely]] return; }
L_0012B9F8:
    set32(c.r[3], 0u + 107u);
    set32(c.r[2], 0u + 95u);
    st32((c.r[29].w[0] + 636u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 636u);
    st32((c.r[29].w[0] + 640u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 640u);
    set32(c.r[7], c.r[29].w[0] + 644u);
    st32((c.r[29].w[0] + 644u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BA24u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BA24u) [[unlikely]] return; }
L_0012BA24:
    set32(c.r[5], c.r[29].w[0] + 648u);
    set32(c.r[6], c.r[29].w[0] + 652u);
    set32(c.r[7], c.r[29].w[0] + 656u);
    st32((c.r[29].w[0] + 648u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 652u), c.r[18].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 27488u);
    st32((c.r[29].w[0] + 656u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BA4Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BA4Cu) [[unlikely]] return; }
L_0012BA4C:
    set32(c.r[2], 0u + 11u);
    set32(c.r[5], c.r[29].w[0] + 660u);
    set32(c.r[6], c.r[29].w[0] + 664u);
    set32(c.r[7], c.r[29].w[0] + 668u);
    st32((c.r[29].w[0] + 664u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 27488u);
    st32((c.r[29].w[0] + 660u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 668u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BA78u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BA78u) [[unlikely]] return; }
L_0012BA78:
    set32(c.r[2], 0u + 11u);
    set32(c.r[3], 0u + 23u);
    st32((c.r[29].w[0] + 676u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 672u);
    set32(c.r[6], c.r[29].w[0] + 676u);
    set32(c.r[7], c.r[29].w[0] + 680u);
    st32((c.r[29].w[0] + 672u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 27488u);
    st32((c.r[29].w[0] + 680u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BAA8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BAA8u) [[unlikely]] return; }
L_0012BAA8:
    set32(c.r[5], c.r[29].w[0] + 684u);
    set32(c.r[6], c.r[29].w[0] + 688u);
    set32(c.r[7], c.r[29].w[0] + 692u);
    st32((c.r[29].w[0] + 688u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 684u), c.r[23].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 27488u);
    st32((c.r[29].w[0] + 692u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BAD0u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BAD0u) [[unlikely]] return; }
L_0012BAD0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 696u);
    set32(c.r[16], c.r[16].w[0] + 19064u);
    set32(c.r[6], c.r[29].w[0] + 700u);
    set32(c.r[7], c.r[29].w[0] + 704u);
    st32((c.r[29].w[0] + 696u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 700u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 704u), 0u);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BB00u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BB00u) [[unlikely]] return; }
L_0012BB00:
    set32(c.r[3], 0u + 11u);
    set32(c.r[5], c.r[29].w[0] + 708u);
    set32(c.r[6], c.r[29].w[0] + 712u);
    set32(c.r[7], c.r[29].w[0] + 716u);
    st32((c.r[29].w[0] + 712u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 708u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 716u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BB28u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BB28u) [[unlikely]] return; }
L_0012BB28:
    set32(c.r[2], 0u + 11u);
    set32(c.r[3], 0u + 21u);
    set32(c.r[5], c.r[29].w[0] + 720u);
    set32(c.r[6], c.r[29].w[0] + 724u);
    set32(c.r[7], c.r[29].w[0] + 728u);
    st32((c.r[29].w[0] + 720u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 724u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 728u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BB54u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BB54u) [[unlikely]] return; }
L_0012BB54:
    set32(c.r[3], 0u + 31u);
    set32(c.r[2], 0u + 21u);
    set32(c.r[5], c.r[29].w[0] + 732u);
    set32(c.r[6], c.r[29].w[0] + 736u);
    set32(c.r[7], c.r[29].w[0] + 740u);
    st32((c.r[29].w[0] + 732u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 736u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 740u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BB80u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BB80u) [[unlikely]] return; }
L_0012BB80:
    set32(c.r[5], 0u + 31u);
    set32(c.r[2], 0u + 41u);
    st32((c.r[29].w[0] + 744u), c.r[5].w[0]);
    set32(c.r[6], c.r[29].w[0] + 748u);
    set32(c.r[5], c.r[29].w[0] + 744u);
    set32(c.r[7], c.r[29].w[0] + 752u);
    st32((c.r[29].w[0] + 748u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 752u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BBACu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BBACu) [[unlikely]] return; }
L_0012BBAC:
    set32(c.r[3], 0u + 41u);
    set32(c.r[2], 0u + 51u);
    st32((c.r[29].w[0] + 756u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 756u);
    set32(c.r[6], c.r[29].w[0] + 760u);
    set32(c.r[7], c.r[29].w[0] + 764u);
    st32((c.r[29].w[0] + 760u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 764u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BBD8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BBD8u) [[unlikely]] return; }
L_0012BBD8:
    set32(c.r[3], 0u + 51u);
    set32(c.r[2], 0u + 61u);
    st32((c.r[29].w[0] + 768u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 768u);
    set32(c.r[6], c.r[29].w[0] + 772u);
    set32(c.r[7], c.r[29].w[0] + 776u);
    st32((c.r[29].w[0] + 772u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 776u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BC04u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BC04u) [[unlikely]] return; }
L_0012BC04:
    set32(c.r[3], 0u + 61u);
    set32(c.r[2], 0u + 71u);
    st32((c.r[29].w[0] + 780u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 780u);
    set32(c.r[6], c.r[29].w[0] + 784u);
    set32(c.r[7], c.r[29].w[0] + 788u);
    st32((c.r[29].w[0] + 784u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 788u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BC30u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BC30u) [[unlikely]] return; }
L_0012BC30:
    set32(c.r[3], 0u + 71u);
    set32(c.r[2], 0u + 81u);
    st32((c.r[29].w[0] + 792u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 792u);
    set32(c.r[6], c.r[29].w[0] + 796u);
    set32(c.r[7], c.r[29].w[0] + 800u);
    st32((c.r[29].w[0] + 796u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 800u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BC5Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BC5Cu) [[unlikely]] return; }
L_0012BC5C:
    set32(c.r[3], 0u + 81u);
    set32(c.r[2], 0u + 91u);
    set32(c.r[5], c.r[29].w[0] + 804u);
    set32(c.r[6], c.r[29].w[0] + 808u);
    set32(c.r[7], c.r[29].w[0] + 812u);
    st32((c.r[29].w[0] + 804u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 808u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 812u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BC88u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BC88u) [[unlikely]] return; }
L_0012BC88:
    set32(c.r[3], 0u + 91u);
    set32(c.r[2], 0u + 101u);
    set32(c.r[5], c.r[29].w[0] + 816u);
    set32(c.r[6], c.r[29].w[0] + 820u);
    set32(c.r[7], c.r[29].w[0] + 824u);
    st32((c.r[29].w[0] + 816u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 820u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 824u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BCB4u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BCB4u) [[unlikely]] return; }
L_0012BCB4:
    set32(c.r[3], 0u + 101u);
    set32(c.r[2], 0u + 111u);
    st32((c.r[29].w[0] + 828u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 828u);
    set32(c.r[6], c.r[29].w[0] + 832u);
    set32(c.r[7], c.r[29].w[0] + 836u);
    st32((c.r[29].w[0] + 832u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 836u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BCE0u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BCE0u) [[unlikely]] return; }
L_0012BCE0:
    set32(c.r[3], 0u + 111u);
    set32(c.r[2], 0u + 121u);
    st32((c.r[29].w[0] + 840u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 840u);
    set32(c.r[6], c.r[29].w[0] + 844u);
    set32(c.r[7], c.r[29].w[0] + 848u);
    st32((c.r[29].w[0] + 844u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 848u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BD0Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BD0Cu) [[unlikely]] return; }
L_0012BD0C:
    set32(c.r[3], 0u + 121u);
    set32(c.r[2], 0u + 131u);
    st32((c.r[29].w[0] + 852u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 852u);
    set32(c.r[6], c.r[29].w[0] + 856u);
    set32(c.r[7], c.r[29].w[0] + 860u);
    st32((c.r[29].w[0] + 856u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 860u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BD38u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BD38u) [[unlikely]] return; }
L_0012BD38:
    set32(c.r[3], 0u + 131u);
    set32(c.r[2], 0u + 141u);
    set32(c.r[5], c.r[29].w[0] + 864u);
    set32(c.r[6], c.r[29].w[0] + 868u);
    set32(c.r[7], c.r[29].w[0] + 872u);
    st32((c.r[29].w[0] + 864u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 868u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 872u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BD64u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BD64u) [[unlikely]] return; }
L_0012BD64:
    set32(c.r[2], 0u + 151u);
    set32(c.r[3], 0u + 141u);
    set32(c.r[5], c.r[29].w[0] + 876u);
    set32(c.r[6], c.r[29].w[0] + 880u);
    set32(c.r[7], c.r[29].w[0] + 884u);
    st32((c.r[29].w[0] + 876u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 880u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 884u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BD90u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BD90u) [[unlikely]] return; }
L_0012BD90:
    set32(c.r[3], 0u + 11u);
    set32(c.r[5], c.r[29].w[0] + 888u);
    set32(c.r[6], c.r[29].w[0] + 892u);
    set32(c.r[7], c.r[29].w[0] + 896u);
    st32((c.r[29].w[0] + 888u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 892u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 896u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BDB8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BDB8u) [[unlikely]] return; }
L_0012BDB8:
    set32(c.r[5], 0u + 21u);
    set32(c.r[6], 0u + 11u);
    st32((c.r[29].w[0] + 900u), c.r[5].w[0]);
    set32(c.r[7], c.r[29].w[0] + 908u);
    st32((c.r[29].w[0] + 904u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 900u);
    set32(c.r[6], c.r[29].w[0] + 904u);
    st32((c.r[29].w[0] + 908u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BDE4u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BDE4u) [[unlikely]] return; }
L_0012BDE4:
    set32(c.r[7], 0u + 21u);
    set32(c.r[2], 0u + 31u);
    st32((c.r[29].w[0] + 916u), c.r[7].w[0]);
    set32(c.r[5], c.r[29].w[0] + 912u);
    set32(c.r[6], c.r[29].w[0] + 916u);
    set32(c.r[7], c.r[29].w[0] + 920u);
    st32((c.r[29].w[0] + 912u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 920u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BE10u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BE10u) [[unlikely]] return; }
L_0012BE10:
    set32(c.r[3], 0u + 31u);
    set32(c.r[2], 0u + 41u);
    st32((c.r[29].w[0] + 928u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 924u);
    set32(c.r[6], c.r[29].w[0] + 928u);
    set32(c.r[7], c.r[29].w[0] + 932u);
    st32((c.r[29].w[0] + 924u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 932u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BE3Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BE3Cu) [[unlikely]] return; }
L_0012BE3C:
    set32(c.r[3], 0u + 51u);
    set32(c.r[2], 0u + 41u);
    set32(c.r[5], c.r[29].w[0] + 936u);
    set32(c.r[6], c.r[29].w[0] + 940u);
    set32(c.r[7], c.r[29].w[0] + 944u);
    st32((c.r[29].w[0] + 936u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 940u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 944u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BE68u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BE68u) [[unlikely]] return; }
L_0012BE68:
    set32(c.r[3], 0u + 51u);
    set32(c.r[2], 0u + 61u);
    st32((c.r[29].w[0] + 952u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 948u);
    set32(c.r[6], c.r[29].w[0] + 952u);
    set32(c.r[7], c.r[29].w[0] + 956u);
    st32((c.r[29].w[0] + 948u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 956u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BE94u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BE94u) [[unlikely]] return; }
L_0012BE94:
    set32(c.r[3], 0u + 61u);
    set32(c.r[2], 0u + 71u);
    st32((c.r[29].w[0] + 964u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 960u);
    set32(c.r[6], c.r[29].w[0] + 964u);
    set32(c.r[7], c.r[29].w[0] + 968u);
    st32((c.r[29].w[0] + 960u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 968u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BEC0u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BEC0u) [[unlikely]] return; }
L_0012BEC0:
    set32(c.r[3], 0u + 71u);
    set32(c.r[2], 0u + 81u);
    st32((c.r[29].w[0] + 976u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 972u);
    set32(c.r[6], c.r[29].w[0] + 976u);
    set32(c.r[7], c.r[29].w[0] + 980u);
    st32((c.r[29].w[0] + 972u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 980u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BEECu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BEECu) [[unlikely]] return; }
L_0012BEEC:
    set32(c.r[3], 0u + 91u);
    set32(c.r[2], 0u + 81u);
    set32(c.r[5], c.r[29].w[0] + 984u);
    set32(c.r[6], c.r[29].w[0] + 988u);
    set32(c.r[7], c.r[29].w[0] + 992u);
    st32((c.r[29].w[0] + 984u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 988u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 992u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BF18u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BF18u) [[unlikely]] return; }
L_0012BF18:
    set32(c.r[3], 0u + 101u);
    set32(c.r[2], 0u + 91u);
    set32(c.r[5], c.r[29].w[0] + 996u);
    set32(c.r[6], c.r[29].w[0] + 1000u);
    set32(c.r[7], c.r[29].w[0] + 1004u);
    st32((c.r[29].w[0] + 996u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 1000u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 1004u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BF44u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BF44u) [[unlikely]] return; }
L_0012BF44:
    set32(c.r[3], 0u + 101u);
    set32(c.r[2], 0u + 111u);
    st32((c.r[29].w[0] + 1012u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1008u);
    set32(c.r[6], c.r[29].w[0] + 1012u);
    set32(c.r[7], c.r[29].w[0] + 1016u);
    st32((c.r[29].w[0] + 1008u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 1016u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BF70u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BF70u) [[unlikely]] return; }
L_0012BF70:
    set32(c.r[3], 0u + 111u);
    set32(c.r[2], 0u + 121u);
    st32((c.r[29].w[0] + 1024u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1020u);
    set32(c.r[6], c.r[29].w[0] + 1024u);
    set32(c.r[7], c.r[29].w[0] + 1028u);
    st32((c.r[29].w[0] + 1020u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 1028u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BF9Cu);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BF9Cu) [[unlikely]] return; }
L_0012BF9C:
    set32(c.r[3], 0u + 121u);
    set32(c.r[2], 0u + 131u);
    st32((c.r[29].w[0] + 1036u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1032u);
    set32(c.r[6], c.r[29].w[0] + 1036u);
    set32(c.r[7], c.r[29].w[0] + 1040u);
    st32((c.r[29].w[0] + 1032u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 1040u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BFC8u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BFC8u) [[unlikely]] return; }
L_0012BFC8:
    set32(c.r[3], 0u + 131u);
    set32(c.r[2], 0u + 141u);
    st32((c.r[29].w[0] + 1048u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1044u);
    set32(c.r[6], c.r[29].w[0] + 1048u);
    set32(c.r[7], c.r[29].w[0] + 1052u);
    st32((c.r[29].w[0] + 1044u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 1052u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BFF4u);  if (depth < kMaxDepth) unit_009C(c, 339u, depth + 1u); else { c.pc = 0x00373FC8u; return; } if (c.pc != 0x0012BFF4u) [[unlikely]] return; }
L_0012BFF4:
    set32(c.r[2], 0u + 141u);
    set32(c.r[3], 0u + 151u);
    st32((c.r[29].w[0] + 1056u), c.r[3].w[0]);
    c.budget -= 3;
    [[clang::musttail]] return unit_000B(c, 1u, depth);
}

}
