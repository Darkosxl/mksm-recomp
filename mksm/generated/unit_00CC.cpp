#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00CC[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 8,
    0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0,
    16, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 25, 0,
    26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 107, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0,
    0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0,
    0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 168, 0, 0, 0, 169, 170, 0, 171, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 186, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206,
    0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0,
    0, 0, 232, 0, 0, 0, 233, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 243, 0, 244, 0, 245, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    251, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256,
    0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 263, 0, 264, 0, 265, 0,
    266, 0, 0, 0, 267, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 280, 0, 0, 0,
    0, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 289,
    0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0,
    0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0,
    0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0,
    0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0,
    0, 340, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 346,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    0, 358, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0,
    365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0,
    0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    370, 0, 0, 0, 371, 0, 372, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0,
    0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0,
    401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0,
    408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0,
    0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0,
    432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0,
    0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0,
    0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0,
    0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0,
    0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0,
    0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0,
    0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0,
    0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0,
    0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00CC(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00430000;
    case 2u: goto L_00430018;
    case 3u: goto L_00430020;
    case 4u: goto L_00430034;
    case 5u: goto L_00430058;
    case 6u: goto L_0043006C;
    case 7u: goto L_00430074;
    case 8u: goto L_0043007C;
    case 9u: goto L_00430084;
    case 10u: goto L_0043008C;
    case 11u: goto L_004300A0;
    case 12u: goto L_004300B8;
    case 13u: goto L_004300D0;
    case 14u: goto L_004300EC;
    case 15u: goto L_004300F4;
    case 16u: goto L_00430100;
    case 17u: goto L_00430108;
    case 18u: goto L_00430120;
    case 19u: goto L_00430178;
    case 20u: goto L_00430194;
    case 21u: goto L_004301C0;
    case 22u: goto L_004301DC;
    case 23u: goto L_004301E4;
    case 24u: goto L_004301F0;
    case 25u: goto L_004301F8;
    case 26u: goto L_00430200;
    case 27u: goto L_00430218;
    case 28u: goto L_00430250;
    case 29u: goto L_00430270;
    case 30u: goto L_00430294;
    case 31u: goto L_0043029C;
    case 32u: goto L_004302AC;
    case 33u: goto L_004302B4;
    case 34u: goto L_004302D0;
    case 35u: goto L_00430340;
    case 36u: goto L_00430368;
    case 37u: goto L_004303F0;
    case 38u: goto L_00430420;
    case 39u: goto L_00430428;
    case 40u: goto L_00430438;
    case 41u: goto L_00430480;
    case 42u: goto L_004304B0;
    case 43u: goto L_004304C4;
    case 44u: goto L_004304F8;
    case 45u: goto L_00430530;
    case 46u: goto L_0043053C;
    case 47u: goto L_00430568;
    case 48u: goto L_004305A8;
    case 49u: goto L_004305B8;
    case 50u: goto L_004305F0;
    case 51u: goto L_00430624;
    case 52u: goto L_00430640;
    case 53u: goto L_00430654;
    case 54u: goto L_00430680;
    case 55u: goto L_004306AC;
    case 56u: goto L_004306C0;
    case 57u: goto L_004306D0;
    case 58u: goto L_004306F0;
    case 59u: goto L_00430738;
    case 60u: goto L_00430748;
    case 61u: goto L_00430760;
    case 62u: goto L_004307A8;
    case 63u: goto L_004307CC;
    case 64u: goto L_004307F0;
    case 65u: goto L_0043080C;
    case 66u: goto L_00430850;
    case 67u: goto L_00430860;
    case 68u: goto L_00430874;
    case 69u: goto L_0043089C;
    case 70u: goto L_004308B8;
    case 71u: goto L_004308C8;
    case 72u: goto L_004308F8;
    case 73u: goto L_00430908;
    case 74u: goto L_0043092C;
    case 75u: goto L_0043093C;
    case 76u: goto L_00430944;
    case 77u: goto L_00430960;
    case 78u: goto L_00430978;
    case 79u: goto L_004309D0;
    case 80u: goto L_00430A10;
    case 81u: goto L_00430A24;
    case 82u: goto L_00430A40;
    case 83u: goto L_00430A48;
    case 84u: goto L_00430A5C;
    case 85u: goto L_00430A80;
    case 86u: goto L_00430A88;
    case 87u: goto L_00430A90;
    case 88u: goto L_00430A98;
    case 89u: goto L_00430AA0;
    case 90u: goto L_00430AA8;
    case 91u: goto L_00430AB8;
    case 92u: goto L_00430AC8;
    case 93u: goto L_00430AD0;
    case 94u: goto L_00430B08;
    case 95u: goto L_00430B10;
    case 96u: goto L_00430B18;
    case 97u: goto L_00430B50;
    case 98u: goto L_00430BA4;
    case 99u: goto L_00430BF4;
    case 100u: goto L_00430CA0;
    case 101u: goto L_00430DB0;
    case 102u: goto L_00430E50;
    case 103u: goto L_00430ED0;
    case 104u: goto L_00430EEC;
    case 105u: goto L_00430F20;
    case 106u: goto L_00431000;
    case 107u: goto L_00431004;
    case 108u: goto L_00431018;
    case 109u: goto L_00431024;
    case 110u: goto L_00431040;
    case 111u: goto L_00431050;
    case 112u: goto L_00431078;
    case 113u: goto L_004310A8;
    case 114u: goto L_004310C0;
    case 115u: goto L_004310EC;
    case 116u: goto L_00431104;
    case 117u: goto L_0043111C;
    case 118u: goto L_00431150;
    case 119u: goto L_004311A8;
    case 120u: goto L_004311C8;
    case 121u: goto L_004311D8;
    case 122u: goto L_004311F0;
    case 123u: goto L_00431200;
    case 124u: goto L_00431240;
    case 125u: goto L_00431258;
    case 126u: goto L_00431274;
    case 127u: goto L_00431288;
    case 128u: goto L_004312C4;
    case 129u: goto L_004312C8;
    case 130u: goto L_004312DC;
    case 131u: goto L_00431300;
    case 132u: goto L_00431330;
    case 133u: goto L_00431348;
    case 134u: goto L_0043135C;
    case 135u: goto L_00431374;
    case 136u: goto L_00431390;
    case 137u: goto L_004313A8;
    case 138u: goto L_004313BC;
    case 139u: goto L_004313DC;
    case 140u: goto L_004313F0;
    case 141u: goto L_00431408;
    case 142u: goto L_00431444;
    case 143u: goto L_004314A0;
    case 144u: goto L_004314E4;
    case 145u: goto L_00431504;
    case 146u: goto L_00431514;
    case 147u: goto L_0043152C;
    case 148u: goto L_00431544;
    case 149u: goto L_0043155C;
    case 150u: goto L_00431574;
    case 151u: goto L_004315A0;
    case 152u: goto L_004315B4;
    case 153u: goto L_004315BC;
    case 154u: goto L_004315D0;
    case 155u: goto L_00431648;
    case 156u: goto L_00431688;
    case 157u: goto L_004316A8;
    case 158u: goto L_004316B0;
    case 159u: goto L_004316D0;
    case 160u: goto L_004316D8;
    case 161u: goto L_00431708;
    case 162u: goto L_00431728;
    case 163u: goto L_00431738;
    case 164u: goto L_00431770;
    case 165u: goto L_00431778;
    case 166u: goto L_004317A0;
    case 167u: goto L_004317C8;
    case 168u: goto L_00431804;
    case 169u: goto L_00431814;
    case 170u: goto L_00431818;
    case 171u: goto L_00431820;
    case 172u: goto L_00431824;
    case 173u: goto L_00431840;
    case 174u: goto L_0043186C;
    case 175u: goto L_00431870;
    case 176u: goto L_004318BC;
    case 177u: goto L_004318E0;
    case 178u: goto L_00431920;
    case 179u: goto L_00431938;
    case 180u: goto L_00431950;
    case 181u: goto L_00431968;
    case 182u: goto L_00431988;
    case 183u: goto L_004319A0;
    case 184u: goto L_004319DC;
    case 185u: goto L_004319F4;
    case 186u: goto L_004319F8;
    case 187u: goto L_00431A30;
    case 188u: goto L_00431A48;
    case 189u: goto L_00431A70;
    case 190u: goto L_00431AA4;
    case 191u: goto L_00431AC4;
    case 192u: goto L_00431ADC;
    case 193u: goto L_00431B30;
    case 194u: goto L_00431B38;
    case 195u: goto L_00431B60;
    case 196u: goto L_00431B80;
    case 197u: goto L_00431BA8;
    case 198u: goto L_00431BBC;
    case 199u: goto L_00431BF8;
    case 200u: goto L_00431C1C;
    case 201u: goto L_00431C38;
    case 202u: goto L_00431C7C;
    case 203u: goto L_00431C98;
    case 204u: goto L_00431CC4;
    case 205u: goto L_00431CE8;
    case 206u: goto L_00431CFC;
    case 207u: goto L_00431D10;
    case 208u: goto L_00431D20;
    case 209u: goto L_00431D50;
    case 210u: goto L_00431D58;
    case 211u: goto L_00431D7C;
    case 212u: goto L_00431D9C;
    case 213u: goto L_00431DD0;
    case 214u: goto L_00431DF0;
    case 215u: goto L_00431DF8;
    case 216u: goto L_00431E20;
    case 217u: goto L_00431E44;
    case 218u: goto L_00431E50;
    case 219u: goto L_00431E68;
    case 220u: goto L_00431EA0;
    case 221u: goto L_00431EA8;
    case 222u: goto L_00431F08;
    case 223u: goto L_00431F2C;
    case 224u: goto L_00431F34;
    case 225u: goto L_00431F60;
    case 226u: goto L_00431F70;
    case 227u: goto L_00431F98;
    case 228u: goto L_00431FA8;
    case 229u: goto L_00431FAC;
    case 230u: goto L_00431FD0;
    case 231u: goto L_00431FF4;
    case 232u: goto L_00432008;
    case 233u: goto L_00432018;
    case 234u: goto L_0043201C;
    case 235u: goto L_00432024;
    case 236u: goto L_00432048;
    case 237u: goto L_00432060;
    case 238u: goto L_00432084;
    case 239u: goto L_004320A4;
    case 240u: goto L_004320AC;
    case 241u: goto L_004320B8;
    case 242u: goto L_004320C4;
    case 243u: goto L_004320D8;
    case 244u: goto L_004320E0;
    case 245u: goto L_004320E8;
    case 246u: goto L_00432100;
    case 247u: goto L_00432110;
    case 248u: goto L_00432128;
    case 249u: goto L_00432158;
    case 250u: goto L_00432178;
    case 251u: goto L_00432180;
    case 252u: goto L_0043218C;
    case 253u: goto L_00432198;
    case 254u: goto L_004321B0;
    case 255u: goto L_004321D8;
    case 256u: goto L_004321FC;
    case 257u: goto L_00432218;
    case 258u: goto L_00432228;
    case 259u: goto L_00432230;
    case 260u: goto L_00432238;
    case 261u: goto L_00432248;
    case 262u: goto L_00432254;
    case 263u: goto L_00432268;
    case 264u: goto L_00432270;
    case 265u: goto L_00432278;
    case 266u: goto L_00432280;
    case 267u: goto L_00432290;
    case 268u: goto L_00432298;
    case 269u: goto L_004322A4;
    case 270u: goto L_004322C0;
    case 271u: goto L_004322E0;
    case 272u: goto L_004322F0;
    case 273u: goto L_00432318;
    case 274u: goto L_00432338;
    case 275u: goto L_00432388;
    case 276u: goto L_004323A8;
    case 277u: goto L_004323B8;
    case 278u: goto L_004323D8;
    case 279u: goto L_004323E8;
    case 280u: goto L_004323F0;
    case 281u: goto L_00432408;
    case 282u: goto L_00432418;
    case 283u: goto L_00432424;
    case 284u: goto L_00432440;
    case 285u: goto L_00432448;
    case 286u: goto L_004324B0;
    case 287u: goto L_004324E0;
    case 288u: goto L_004324F4;
    case 289u: goto L_004324FC;
    case 290u: goto L_00432508;
    case 291u: goto L_0043251C;
    case 292u: goto L_00432550;
    case 293u: goto L_0043256C;
    case 294u: goto L_004325E8;
    case 295u: goto L_00432604;
    case 296u: goto L_00432620;
    case 297u: goto L_00432684;
    case 298u: goto L_00432698;
    case 299u: goto L_004326D0;
    case 300u: goto L_00432714;
    case 301u: goto L_0043272C;
    case 302u: goto L_0043274C;
    case 303u: goto L_00432754;
    case 304u: goto L_0043276C;
    case 305u: goto L_004327B0;
    case 306u: goto L_00432818;
    case 307u: goto L_00432824;
    case 308u: goto L_00432838;
    case 309u: goto L_00432840;
    case 310u: goto L_00432848;
    case 311u: goto L_00432850;
    case 312u: goto L_00432858;
    case 313u: goto L_0043287C;
    case 314u: goto L_004328A8;
    case 315u: goto L_004328C4;
    case 316u: goto L_004328E0;
    case 317u: goto L_004328E8;
    case 318u: goto L_00432904;
    case 319u: goto L_00432938;
    case 320u: goto L_00432950;
    case 321u: goto L_00432970;
    case 322u: goto L_004329A0;
    case 323u: goto L_004329B0;
    case 324u: goto L_004329C0;
    case 325u: goto L_004329D0;
    case 326u: goto L_004329F0;
    case 327u: goto L_00432A68;
    case 328u: goto L_00432A78;
    case 329u: goto L_00432A88;
    case 330u: goto L_00432A98;
    case 331u: goto L_00432AB8;
    case 332u: goto L_00432AD0;
    case 333u: goto L_00432AE8;
    case 334u: goto L_00432B04;
    case 335u: goto L_00432B10;
    case 336u: goto L_00432B28;
    case 337u: goto L_00432B40;
    case 338u: goto L_00432B64;
    case 339u: goto L_00432B70;
    case 340u: goto L_00432B84;
    case 341u: goto L_00432B8C;
    case 342u: goto L_00432BA0;
    case 343u: goto L_00432BBC;
    case 344u: goto L_00432BE0;
    case 345u: goto L_00432BF4;
    case 346u: goto L_00432BFC;
    case 347u: goto L_00432C10;
    case 348u: goto L_00432C28;
    case 349u: goto L_00432C44;
    case 350u: goto L_00432C50;
    case 351u: goto L_00432C58;
    case 352u: goto L_00432C70;
    case 353u: goto L_00432CA8;
    case 354u: goto L_00432D00;
    case 355u: goto L_00432D2C;
    case 356u: goto L_00432D50;
    case 357u: goto L_00432D70;
    case 358u: goto L_00432D84;
    case 359u: goto L_00432D8C;
    case 360u: goto L_00432DA0;
    case 361u: goto L_00432DC0;
    case 362u: goto L_00432DD4;
    case 363u: goto L_00432DDC;
    case 364u: goto L_00432DF0;
    case 365u: goto L_00432E00;
    case 366u: goto L_00432E30;
    case 367u: goto L_00432E60;
    case 368u: goto L_00432E74;
    case 369u: goto L_00432E90;
    case 370u: goto L_00433000;
    case 371u: goto L_00433010;
    case 372u: goto L_00433018;
    case 373u: goto L_00433024;
    case 374u: goto L_00433034;
    case 375u: goto L_00433044;
    case 376u: goto L_00433060;
    case 377u: goto L_00433110;
    case 378u: goto L_0043312C;
    case 379u: goto L_00433138;
    case 380u: goto L_00433150;
    case 381u: goto L_004331D8;
    case 382u: goto L_004331F0;
    case 383u: goto L_00433208;
    case 384u: goto L_00433248;
    case 385u: goto L_00433258;
    case 386u: goto L_00433270;
    case 387u: goto L_00433298;
    case 388u: goto L_004332A0;
    case 389u: goto L_004332A8;
    case 390u: goto L_004332C0;
    case 391u: goto L_004332D8;
    case 392u: goto L_00433324;
    case 393u: goto L_004333A0;
    case 394u: goto L_004333B8;
    case 395u: goto L_004333F8;
    case 396u: goto L_00433438;
    case 397u: goto L_00433488;
    case 398u: goto L_004334C8;
    case 399u: goto L_004334E0;
    case 400u: goto L_004334F0;
    case 401u: goto L_00433500;
    case 402u: goto L_00433550;
    case 403u: goto L_00433570;
    case 404u: goto L_004335A4;
    case 405u: goto L_004335B4;
    case 406u: goto L_004335F8;
    case 407u: goto L_00433660;
    case 408u: goto L_00433680;
    case 409u: goto L_004336B8;
    case 410u: goto L_00433700;
    case 411u: goto L_0043376C;
    case 412u: goto L_00433790;
    case 413u: goto L_004337A4;
    case 414u: goto L_00433808;
    case 415u: goto L_00433818;
    case 416u: goto L_00433828;
    case 417u: goto L_00433838;
    case 418u: goto L_00433858;
    case 419u: goto L_00433868;
    case 420u: goto L_004338A8;
    case 421u: goto L_004338B8;
    case 422u: goto L_004338D0;
    case 423u: goto L_004338F8;
    case 424u: goto L_00433928;
    case 425u: goto L_0043393C;
    case 426u: goto L_00433958;
    case 427u: goto L_00433980;
    case 428u: goto L_004339A4;
    case 429u: goto L_004339B8;
    case 430u: goto L_004339D0;
    case 431u: goto L_004339E8;
    case 432u: goto L_00433A00;
    case 433u: goto L_00433A18;
    case 434u: goto L_00433A30;
    case 435u: goto L_00433A48;
    case 436u: goto L_00433A60;
    case 437u: goto L_00433A70;
    case 438u: goto L_00433A98;
    case 439u: goto L_00433AA0;
    case 440u: goto L_00433AA8;
    case 441u: goto L_00433AB0;
    case 442u: goto L_00433AB8;
    case 443u: goto L_00433AD0;
    case 444u: goto L_00433AF8;
    case 445u: goto L_00433B10;
    case 446u: goto L_00433B40;
    case 447u: goto L_00433B70;
    case 448u: goto L_00433B88;
    case 449u: goto L_00433B90;
    case 450u: goto L_00433BA8;
    case 451u: goto L_00433BE8;
    case 452u: goto L_00433BF8;
    case 453u: goto L_00433C10;
    case 454u: goto L_00433C38;
    case 455u: goto L_00433C70;
    case 456u: goto L_00433C84;
    case 457u: goto L_00433CA0;
    case 458u: goto L_00433CD0;
    case 459u: goto L_00433CF4;
    case 460u: goto L_00433D08;
    case 461u: goto L_00433D28;
    case 462u: goto L_00433D40;
    case 463u: goto L_00433D58;
    case 464u: goto L_00433D78;
    case 465u: goto L_00433D90;
    case 466u: goto L_00433DA8;
    case 467u: goto L_00433DC0;
    case 468u: goto L_00433DD8;
    case 469u: goto L_00433DF0;
    case 470u: goto L_00433E08;
    case 471u: goto L_00433E30;
    case 472u: goto L_00433E48;
    case 473u: goto L_00433E60;
    case 474u: goto L_00433E68;
    case 475u: goto L_00433E88;
    case 476u: goto L_00433FB8;
    default: bad_entry(c, 0x00430000u); return;
    }
L_00430000:
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 2336u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.budget -= 6;
L_00430018:
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_00430020:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00430038; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430034u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 412u, depth + 1u); else { c.pc = 0x0042FB18u; return; } if (c.pc != 0x00430034u) [[unlikely]] return; }
L_00430034:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00430038:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 624u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00430020u | kUnwind; return; } goto L_00430020; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00430058:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043006Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 236u, depth + 1u); else { c.pc = 0x00437B18u; return; } if (c.pc != 0x0043006Cu) [[unlikely]] return; }
L_0043006C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430074u);  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x00430074u) [[unlikely]] return; }
L_00430074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043007Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 11u, depth + 1u); else { c.pc = 0x004300A0u; return; } if (c.pc != 0x0043007Cu) [[unlikely]] return; }
L_0043007C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430084u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 235u, depth + 1u); else { c.pc = 0x00437B00u; return; } if (c.pc != 0x00430084u) [[unlikely]] return; }
L_00430084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043008Cu);  if (depth < kMaxDepth) unit_00CD(c, 237u, depth + 1u); else { c.pc = 0x00437B20u; return; } if (c.pc != 0x0043008Cu) [[unlikely]] return; }
L_0043008C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004300A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004300C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004300B8u); set32(c.r[4], c.r[4].w[0] - 25264u);  if (depth < kMaxDepth) unit_00CD(c, 238u, depth + 1u); else { c.pc = 0x00437B28u; return; } if (c.pc != 0x004300B8u) [[unlikely]] return; }
L_004300B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004300C4; } }
L_004300C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 484u)));
    c.budget -= 1;
L_004300C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004300D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004300ECu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 236u, depth + 1u); else { c.pc = 0x00437B18u; return; } if (c.pc != 0x004300ECu) [[unlikely]] return; }
L_004300EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004300F4u);  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x004300F4u) [[unlikely]] return; }
L_004300F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430100u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 18u, depth + 1u); else { c.pc = 0x00430120u; return; } if (c.pc != 0x00430100u) [[unlikely]] return; }
L_00430100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430108u);  if (depth < kMaxDepth) unit_00CD(c, 235u, depth + 1u); else { c.pc = 0x00437B00u; return; } if (c.pc != 0x00430108u) [[unlikely]] return; }
L_00430108:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CD(c, 237u, depth); }
L_00430120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_00430160; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 25216u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CD(c, 238u, depth); }
L_00430160:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 484u), c.r[5].w[0]);  if (t) { goto L_004301A4; } }
    set32(c.r[17], c.r[16].w[0] + 488u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_00430178:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[6], ld32((c.r[16].w[0] + 484u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430194u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CC(c, 35u, depth + 1u); else { c.pc = 0x00430340u; return; } if (c.pc != 0x00430194u) [[unlikely]] return; }
L_00430194:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00430178u | kUnwind; return; } goto L_00430178; }
L_004301A4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004301C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004301DCu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 236u, depth + 1u); else { c.pc = 0x00437B18u; return; } if (c.pc != 0x004301DCu) [[unlikely]] return; }
L_004301DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004301E4u);  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x004301E4u) [[unlikely]] return; }
L_004301E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004301F0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 27u, depth + 1u); else { c.pc = 0x00430218u; return; } if (c.pc != 0x004301F0u) [[unlikely]] return; }
L_004301F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004301F8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 235u, depth + 1u); else { c.pc = 0x00437B00u; return; } if (c.pc != 0x004301F8u) [[unlikely]] return; }
L_004301F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430200u);  if (depth < kMaxDepth) unit_00CD(c, 237u, depth + 1u); else { c.pc = 0x00437B20u; return; } if (c.pc != 0x00430200u) [[unlikely]] return; }
L_00430200:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00430218:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00430238; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 25168u);  if (t) { goto L_00430248; } }
    c.budget -= 1;
L_00430238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_00430258; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 25120u);
    c.budget -= 2;
L_00430248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430250u);  if (depth < kMaxDepth) unit_00CD(c, 238u, depth + 1u); else { c.pc = 0x00437B28u; return; } if (c.pc != 0x00430250u) [[unlikely]] return; }
L_00430250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00430260; } }
L_00430258:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 488u)));
    c.budget -= 2;
L_00430260:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00430270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430294u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 236u, depth + 1u); else { c.pc = 0x00437B18u; return; } if (c.pc != 0x00430294u) [[unlikely]] return; }
L_00430294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043029Cu);  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x0043029Cu) [[unlikely]] return; }
L_0043029C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004302ACu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 34u, depth + 1u); else { c.pc = 0x004302D0u; return; } if (c.pc != 0x004302ACu) [[unlikely]] return; }
L_004302AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004302B4u);  if (depth < kMaxDepth) unit_00CD(c, 235u, depth + 1u); else { c.pc = 0x00437B00u; return; } if (c.pc != 0x004302B4u) [[unlikely]] return; }
L_004302B4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CD(c, 237u, depth); }
L_004302D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00430300; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 25064u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CD(c, 238u, depth); }
L_00430300:
    c.r[2].d[0] = c.r[6].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 2);  goto L_00430320; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 25016u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CD(c, 238u, depth); }
L_00430320:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 488u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 484u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00430340; }
L_00430340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00419D60u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 264u, depth); }
L_00430368:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], c.r[5].w[0] + 63u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[4], 0u - 64u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], c.r[20].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 616u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_004303B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull | 34240ull;  if (t) { goto L_004303D8; } }
L_004303B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[2], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + 127u);
    c.r[18].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 8;
L_004303D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00430454; } }
    set32(c.r[22], 0u + 1u);
    set32(c.r[16], c.r[17].w[0] + 12u);
    c.budget -= 3;
L_004303F0:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] - c.r[18].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[20], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { const bool t = c.r[19].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_00430458; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 616u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[22].d[0]) { c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));  goto L_00430430; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430420u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 117u, depth + 1u); else { c.pc = 0x00418C18u; return; } if (c.pc != 0x00430420u) [[unlikely]] return; }
L_00430420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00430440; } }
L_00430428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00430458; } }
L_00430430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430438u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 94u, depth + 1u); else { c.pc = 0x004188A8u; return; } if (c.pc != 0x00430438u) [[unlikely]] return; }
L_00430438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00430428u | kUnwind; return; } goto L_00430428; } }
L_00430440:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004303F0u | kUnwind; return; } goto L_004303F0; } }
L_00430454:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00430458:
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
L_00430480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0; c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));  if (t) { goto L_004304E0; } }
    set32(c.r[16], c.r[17].w[0] + 12u);
    c.budget -= 2;
L_004304B0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004304C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004304C4u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_00C6(c, 130u, depth + 1u); else { c.pc = 0x00418D30u; return; } if (c.pc != 0x004304C4u) [[unlikely]] return; }
L_004304C4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    c.budget -= 1;
L_004304C8:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004304B0u | kUnwind; return; } goto L_004304B0; } }
L_004304E0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004304F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 620u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00430550; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00430550; } }
    set32(c.r[16], c.r[17].w[0] + 12u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_00430530:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043053Cu); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00C6(c, 188u, depth + 1u); else { c.pc = 0x00419308u; return; } if (c.pc != 0x0043053Cu) [[unlikely]] return; }
L_0043053C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00430530u | kUnwind; return; } goto L_00430530; }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00430550:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00430568:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 620u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004305D4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));  if (t) { goto L_004305D4; } }
    set32(c.r[16], c.r[17].w[0] + 12u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_004305A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_004305BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004305B8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 327u, depth + 1u); else { c.pc = 0x0041A3B8u; return; } if (c.pc != 0x004305B8u) [[unlikely]] return; }
L_004305B8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    c.budget -= 1;
L_004305BC:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004305A8u | kUnwind; return; } goto L_004305A8; }
L_004305D4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004305F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 620u)));
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00430664; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430624u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 89u, depth + 1u); else { c.pc = 0x00430AA0u; return; } if (c.pc != 0x00430624u) [[unlikely]] return; }
L_00430624:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00430664; }
    set32(c.r[17], c.r[16].w[0] + 12u);
    set32(c.r[16], c.r[16].w[0] + 148u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
L_00430640:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430654u); set32(c.r[19], c.r[19].w[0] + 1u);  if (depth < kMaxDepth) unit_00C6(c, 172u, depth + 1u); else { c.pc = 0x00419198u; return; } if (c.pc != 0x00430654u) [[unlikely]] return; }
L_00430654:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00430640u | kUnwind; return; } goto L_00430640; }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00430664:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00430680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 620u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004306D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004306ACu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00CC(c, 89u, depth + 1u); else { c.pc = 0x00430AA0u; return; } if (c.pc != 0x004306ACu) [[unlikely]] return; }
L_004306AC:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_004306DC; }
    set32(c.r[17], c.r[16].w[0] + 12u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
L_004306C0:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004306D0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 362u, depth + 1u); else { c.pc = 0x0041A780u; return; } if (c.pc != 0x004306D0u) [[unlikely]] return; }
L_004306D0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004306C0u | kUnwind; return; } goto L_004306C0; }
L_004306D8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004306DC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004306F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 620u)));
    c.budget -= 13;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0043077C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[22], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430738u); set32(c.r[21], 0u + 4u);  if (depth < kMaxDepth) unit_00CC(c, 89u, depth + 1u); else { c.pc = 0x00430AA0u; return; } if (c.pc != 0x00430738u) [[unlikely]] return; }
L_00430738:
    set32(c.r[20], 0u + 3u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] + 12u);
    c.budget -= 4;
L_00430748:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00430770; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430760u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00C6(c, 197u, depth + 1u); else { c.pc = 0x004193F8u; return; } if (c.pc != 0x00430760u) [[unlikely]] return; }
L_00430760:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[22].d[0]) { st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[21].w[0]));  goto L_00430768; }
L_00430768:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[20].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00430748u | kUnwind; return; } goto L_00430748; }
L_00430770:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[19].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0043077C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043077C:
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
L_004307A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004307CCu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00CC(c, 82u, depth + 1u); else { c.pc = 0x00430A40u; return; } if (c.pc != 0x004307CCu) [[unlikely]] return; }
L_004307CC:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00430834; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00430834; } }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[19], 0u + 5u);
    set32(c.r[17], c.r[16].w[0] + 12u);
    c.budget -= 3;
L_004307F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));  if (t) { goto L_00430820; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043080Cu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_00C6(c, 197u, depth + 1u); else { c.pc = 0x004193F8u; return; } if (c.pc != 0x0043080Cu) [[unlikely]] return; }
L_0043080C:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004307F0u | kUnwind; return; } goto L_004307F0; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004307F0u | kUnwind; return; } goto L_004307F0; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 1;
L_00430820:
    set32(c.r[3], c.r[3].w[0] << 24);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00430834; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00430834:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00430850:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
L_00430860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430874u);  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x00430874u) [[unlikely]] return; }
L_00430874:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[16], c.r[2].w[0] + 4832u);
    set32(c.r[4], c.r[4].w[0] + 4840u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 25968u);  if (t) { goto L_004308A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043089Cu);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0043089Cu) [[unlikely]] return; }
L_0043089C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_004308A0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CD(c, 235u, depth); }
L_004308B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004308C8u);  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x004308C8u) [[unlikely]] return; }
L_004308C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 4832u);
    set32(c.r[4], c.r[4].w[0] + 4840u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 25968u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_004308F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004308F8u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x004308F8u) [[unlikely]] return; }
L_004308F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CD(c, 235u, depth); }
L_00430908:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043092Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x0043092Cu) [[unlikely]] return; }
L_0043092C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043093Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 77u, depth + 1u); else { c.pc = 0x00430960u; return; } if (c.pc != 0x0043093Cu) [[unlikely]] return; }
L_0043093C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430944u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 235u, depth + 1u); else { c.pc = 0x00437B00u; return; } if (c.pc != 0x00430944u) [[unlikely]] return; }
L_00430944:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00430960:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[8].w[0] + 4840u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0043099C; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00430978:
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 6492u);  if (t) { goto L_0043099C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00430978u | kUnwind; return; } goto L_00430978; }
L_0043099C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00430A04; } }
    set32(c.r[2], 0u + 6492u);
    set32(c.r[3], c.r[8].w[0] + 4840u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[7].w[0] + 28u), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] <= 0; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004309EC; } }
    set32(c.r[5], c.r[7].w[0] + 32u);
    c.budget -= 2;
L_004309D0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004309D0u | kUnwind; return; } goto L_004309D0; } }
L_004309EC:
    set32(c.r[2], 0u + 1u);
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 6;
L_00430A04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00430A10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430A24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x00430A24u) [[unlikely]] return; }
L_00430A24:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { st32((c.r[16].w[0]), 0u);  goto L_00430A2C; }
L_00430A2C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CD(c, 235u, depth); }
L_00430A40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));  c.pc = t; return; }
L_00430A48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430A5Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x00430A5Cu) [[unlikely]] return; }
L_00430A5C:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 16u), 0u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CD(c, 235u, depth); }
L_00430A80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00430A88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[5].w[0]);  c.pc = t; return; }
L_00430A90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00430A98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00430AA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 172u)));  c.pc = t; return; }
L_00430AA8:
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[5].w[0] + 180u)));  c.pc = t; return; }
L_00430AB8:
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 176u)));  c.pc = t; return; }
L_00430AC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 688u)));  c.pc = t; return; }
L_00430AD0:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00430AE8; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 692u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00430AE8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00430AF8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 696u)));
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00430AF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00430B08:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_00430B10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 6488u)));  c.pc = t; return; }
L_00430B18:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    set32(c.r[20], c.r[2].w[0] - 24960u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430B50u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x00430B50u) [[unlikely]] return; }
L_00430B50:
    c.r[16].d[0] = c.r[16].sd[0] < 6144ll ? 1ull : 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00430EAC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41490000u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[5].d[0] = c.r[5].d[0] | 22598ull;
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 14;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[17], c.r[17].w[0] + 4u);  goto L_00430BB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430BA4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 103u, depth + 1u); else { c.pc = 0x00430ED0u; return; } if (c.pc != 0x00430BA4u) [[unlikely]] return; }
L_00430BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00430EAC; } }
    c.budget -= 1;
L_00430BB0:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[16].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[16].w[0] - c.r[8].w[0]);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430BF4u); set32(c.r[4], c.r[4].w[0] + 8u);  if (depth < kMaxDepth) unit_00DD(c, 36u, depth + 1u); else { c.pc = 0x004745D8u; return; } if (c.pc != 0x00430BF4u) [[unlikely]] return; }
L_00430BF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00430EAC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[11].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[17], c.r[17].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[6], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[17], c.r[6].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[17], c.r[6].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 35;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 528u), c.r[2].w[0]);  if (t) { goto L_00430D84; } }
    set32(c.r[15], c.r[18].w[0] + 4u);
    set32(c.r[14], c.r[18].w[0] + 8u);
    set32(c.r[13], c.r[18].w[0] + 12u);
    set32(c.r[12], c.r[18].w[0] + 16u);
    set32(c.r[10], 0u + 528u);
    c.budget -= 6;
L_00430CA0:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[6], c.r[15].w[0] + c.r[10].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[7], c.r[14].w[0] + c.r[10].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[8], c.r[13].w[0] + c.r[10].w[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[9], c.r[12].w[0] + c.r[10].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] + 16u);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    st32((c.r[9].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 528u)));
    c.r[2].d[0] = c.r[11].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 57;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00430CA0u | kUnwind; return; } goto L_00430CA0; } }
L_00430D84:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[18].w[0] + 6292u), c.r[2].w[0]);  if (t) { goto L_00430E2C; } }
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[13], c.r[18].w[0] + 8u);
    set32(c.r[12], c.r[18].w[0] + 10u);
    set32(c.r[10], c.r[18].w[0] + 12u);
    set32(c.r[9], c.r[18].w[0] + 14u);
    set32(c.r[8], 0u + 6288u);
    c.budget -= 7;
L_00430DB0:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[4], c.r[13].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[17], c.r[17].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[5], c.r[12].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[6], c.r[10].w[0] + c.r[8].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[11], c.r[11].w[0] - 1u);
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[17], c.r[17].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[17], c.r[17].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[17], c.r[17].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 31;
    { const bool t = c.r[11].d[0] != 0ull; st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00430DB0u | kUnwind; return; } goto L_00430DB0; } }
L_00430E2C:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 24);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00430EA8; } }
    set32(c.r[9], c.r[18].w[0] + 4u);
    set32(c.r[8], 0u + 16u);
    c.budget -= 3;
L_00430E50:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[6], c.r[9].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[7], c.r[18].w[0] + c.r[8].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[11], c.r[11].w[0] + 1u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[11].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00430E50u | kUnwind; return; } goto L_00430E50; } }
L_00430EA8:
    set32(c.r[2], c.r[16].w[0] + 8u);
    c.budget -= 1;
L_00430EAC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00430ED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6328u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00430EECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00430EECu) [[unlikely]] return; }
L_00430EEC:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 6298u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 528u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 6292u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 6296u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 6300u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 6302u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00430F20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[8].w[0] + 4u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00430FF4; } }
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[2], 0u + 16u);
    c.r[4].d[0] = ld8((c.r[8].w[0] + 2u));
    c.r[5].d[0] = ld8((c.r[8].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[6].d[0] = ld8((c.r[8].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[9].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[7].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 2u));
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 3u));
    set32(c.r[7], c.r[8].w[0] + 10u);
    set32(c.r[3], c.r[3].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[9].w[0] + 4u), c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[8].w[0] + 8u));
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 9u));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[7], c.r[8].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[9].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[7].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 2u));
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[9].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 45;
L_00430FF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00431000:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.budget -= 1;
L_00431004:
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
L_00431018:
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[6], 0u + 6144u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.budget -= 3;
L_00431024:
    set32(c.r[16], c.r[18].w[0] + 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431040u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431040u) [[unlikely]] return; }
L_00431040:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431050u); set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00CC(c, 96u, depth + 1u); else { c.pc = 0x00430B18u; return; } if (c.pc != 0x00431050u) [[unlikely]] return; }
L_00431050:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00431080; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431078u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431078u) [[unlikely]] return; }
L_00431078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00431134; } }
L_00431080:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_00431098; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 6488u), c.r[2].w[0]);  if (t) { goto L_004310D4; } }
    c.budget -= 1;
L_00431098:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_004310D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004310A8u); set32(c.r[4], c.r[4].w[0] - 24856u);  if (depth < kMaxDepth) unit_00CD(c, 238u, depth + 1u); else { c.pc = 0x00437B28u; return; } if (c.pc != 0x004310A8u) [[unlikely]] return; }
L_004310A8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004310C0u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004310C0u) [[unlikely]] return; }
L_004310C0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00431130; } }
    c.budget -= 1;
L_004310D0:
    st32((c.r[18].w[0] + 6488u), 0u);
    c.budget -= 1;
L_004310D4:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004310ECu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x004310ECu) [[unlikely]] return; }
L_004310EC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431104u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431104u) [[unlikely]] return; }
L_00431104:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043111Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043111Cu) [[unlikely]] return; }
L_0043111C:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
L_00431130:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00431134:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00431150:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u - 3u);
    st64((c.r[29].w[0] + 120u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    set32(c.r[30], c.r[21].w[0] + 32u);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 172u)));
    st32((c.r[29].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[17], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 20;
    { const bool t = c.r[5].sd[0] <= 0; st32((c.r[29].w[0] + 68u), 0u);  if (t) { goto L_00431468; } }
    set32(c.r[20], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_004311A8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004311C8u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004311C8u) [[unlikely]] return; }
L_004311C8:
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_004311F8; } }
L_004311D8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004311F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004311F0u) [[unlikely]] return; }
L_004311F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_0043146C; } }
L_004311F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431200u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 105u, depth + 1u); else { c.pc = 0x00430F20u; return; } if (c.pc != 0x00431200u) [[unlikely]] return; }
L_00431200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004311D8u | kUnwind; return; } goto L_004311D8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[5], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41490000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004311D8u | kUnwind; return; } goto L_004311D8; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 22597ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = ld8((c.r[29].w[0] + 8u));  if (t) { goto L_004312A8; } }
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431240u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x00431240u) [[unlikely]] return; }
L_00431240:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431258u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431258u) [[unlikely]] return; }
L_00431258:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431274u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431274u) [[unlikely]] return; }
L_00431274:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431288u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431288u) [[unlikely]] return; }
L_00431288:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { st8((c.r[21].w[0] + 4u), static_cast<std::uint8_t>(0u));  goto L_00431290; }
L_00431290:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_0043146C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00431468; } }
L_004312A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 2u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[16].w[0] << 2);  if (t) { goto L_004312E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004312C4u); set32(c.r[4], c.r[4].w[0] - 24816u);  if (depth < kMaxDepth) unit_00CD(c, 238u, depth + 1u); else { c.pc = 0x00437B28u; return; } if (c.pc != 0x004312C4u) [[unlikely]] return; }
L_004312C4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_004312C8:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004312DCu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004312DCu) [[unlikely]] return; }
L_004312DC:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00431468; } }
L_004312E8:
    set32(c.r[2], c.r[23].w[0] + c.r[30].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431300u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431300u) [[unlikely]] return; }
L_00431300:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 10u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[29].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004311D8u | kUnwind; return; } goto L_004311D8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431330u); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x00431330u) [[unlikely]] return; }
L_00431330:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431348u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431348u) [[unlikely]] return; }
L_00431348:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043135Cu); c.r[7].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x0043135Cu) [[unlikely]] return; }
L_0043135C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431374u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431374u) [[unlikely]] return; }
L_00431374:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 10u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 36u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_004313B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431390u); set32(c.r[4], c.r[4].w[0] - 24776u);  if (depth < kMaxDepth) unit_00CD(c, 238u, depth + 1u); else { c.pc = 0x00437B28u; return; } if (c.pc != 0x00431390u) [[unlikely]] return; }
L_00431390:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004313A8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004313A8u) [[unlikely]] return; }
L_004313A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004312C8u | kUnwind; return; } goto L_004312C8; } }
L_004313B0:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00431420; } }
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_004313BC:
    set32(c.r[16], c.r[23].w[0] + c.r[30].w[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004313DCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004313DCu) [[unlikely]] return; }
L_004313DC:
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004313F0u); set32(c.r[5], c.r[5].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x004313F0u) [[unlikely]] return; }
L_004313F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431408u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431408u) [[unlikely]] return; }
L_00431408:
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 10u)));
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 36u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004313BCu | kUnwind; return; } goto L_004313BC; } }
L_00431420:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431444u); st32((c.r[29].w[0] + 68u), c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431444u) [[unlikely]] return; }
L_00431444:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.r[4].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[21].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004311A8u | kUnwind; return; } goto L_004311A8; } }
L_00431468:
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0043146C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 136u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 152u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004314A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    set32(c.r[19], c.r[18].w[0] + 32u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[16], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004314E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004314E4u) [[unlikely]] return; }
L_004314E4:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[29].w[0] + 32u);
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431504u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431504u) [[unlikely]] return; }
L_00431504:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431514u); set32(c.r[6], ld32((c.r[29].w[0] + 36u)));  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x00431514u) [[unlikely]] return; }
L_00431514:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043152Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043152Cu) [[unlikely]] return; }
L_0043152C:
    set32(c.r[17], c.r[29].w[0] + 16u);
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431544u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x00431544u) [[unlikely]] return; }
L_00431544:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043155Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043155Cu) [[unlikely]] return; }
L_0043155C:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431574u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431574u) [[unlikely]] return; }
L_00431574:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004315A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004315B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x004315B4u) [[unlikely]] return; }
L_004315B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004315BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 154u, depth + 1u); else { c.pc = 0x004315D0u; return; } if (c.pc != 0x004315BCu) [[unlikely]] return; }
L_004315BC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CD(c, 235u, depth); }
L_004315D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 8;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00431678; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00431610; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00431000u | kUnwind; return; } goto L_00431000; }
L_00431610:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00431678; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00431678; }
    set32(c.r[2], ld32((c.r[16].w[0] + 6488u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00431640; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00431668; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));  if (t) { goto L_0043167C; } }
L_00431640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431648u);  if (depth < kMaxDepth) unit_00CC(c, 118u, depth + 1u); else { c.pc = 0x00431150u; return; } if (c.pc != 0x00431648u) [[unlikely]] return; }
L_00431648:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00431678; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00431150u | kUnwind; return; } goto L_00431150; }
L_00431668:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004314A0u | kUnwind; return; } goto L_004314A0; }
L_00431678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 1;
L_0043167C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00431688:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 4840u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 25968u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
L_004316A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004316B0u); set32(c.r[16], c.r[16].w[0] + 6492u);  if (depth < kMaxDepth) unit_00CC(c, 151u, depth + 1u); else { c.pc = 0x004315A0u; return; } if (c.pc != 0x004316B0u) [[unlikely]] return; }
L_004316B0:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004316A8u | kUnwind; return; } goto L_004316A8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004316D0:
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 2;
L_004316D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_00431710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00431754; } }
L_00431708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00431754; } }
L_00431710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], ld32((c.r[19].w[0] - 5248u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[16], ld32((c.r[2].w[0] - 5252u)));  if (t) { goto L_00431750; } }
    c.budget -= 1;
L_00431728:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431738u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_00DD(c, 84u, depth + 1u); else { c.pc = 0x004751D8u; return; } if (c.pc != 0x00431738u) [[unlikely]] return; }
L_00431738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00431708u | kUnwind; return; } goto L_00431708; } }
    set32(c.r[2], ld32((c.r[19].w[0] - 5248u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00431728u | kUnwind; return; } goto L_00431728; } }
L_00431750:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00431754:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00431770:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_00431778:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 5252u)));
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_004317B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004317A0u);  if (depth < kMaxDepth) unit_00CC(c, 160u, depth + 1u); else { c.pc = 0x004316D8u; return; } if (c.pc != 0x004317A0u) [[unlikely]] return; }
L_004317A0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_004317B8; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_004317B8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004317C8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00431B14; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; c.r[3].d[0] = ld8((c.r[18].w[0] + 2u));  if (t) { goto L_00431894; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00431804:
    set32(c.r[16], c.r[18].w[0] + 12u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 4;
L_00431814:
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 1;
L_00431818:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431820u); set32(c.r[17], c.r[18].w[0] + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431820u) [[unlikely]] return; }
L_00431820:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00431824:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431840u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431840u) [[unlikely]] return; }
L_00431840:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[18].w[0] + 24u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00431890; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043186Cu); set32(c.r[4], c.r[4].w[0] - 24608u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x0043186Cu) [[unlikely]] return; }
L_0043186C:
    c.budget -= 1;
L_00431870:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00431870u | kUnwind; return; } goto L_00431870; } }
    c.budget -= 1;
L_00431890:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 2u));
    c.budget -= 1;
L_00431894:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00431B14; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004318BCu); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004318BCu) [[unlikely]] return; }
L_004318BC:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004318E0u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004318E0u) [[unlikely]] return; }
L_004318E0:
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[16], c.r[29].w[0] + 16u);
    set32(c.r[8], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[8].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x00431904u);  goto L_00431908; }
L_00431908:
    if (c.r[3].d[0] != 0) c.r[17].d[0] = c.r[8].d[0];
    mmi::div(c, 0, c.r[17].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431920u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x00431920u) [[unlikely]] return; }
L_00431920:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431938u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431938u) [[unlikely]] return; }
L_00431938:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431950u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x00431950u) [[unlikely]] return; }
L_00431950:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431968u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431968u) [[unlikely]] return; }
L_00431968:
    c.budget -= 2;
    if (c.r[17].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00431B14; }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_004319C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431988u); set32(c.r[4], c.r[4].w[0] - 24576u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x00431988u) [[unlikely]] return; }
L_00431988:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[4].w[0] - 24536u);
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004319A0u); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x004319A0u) [[unlikely]] return; }
L_004319A0:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004319A0u | kUnwind; return; } goto L_004319A0; } }
    c.budget -= 1;
L_004319C0:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & 63ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 32u)));  goto L_00431A18; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004319DCu); set32(c.r[4], c.r[4].w[0] - 24488u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x004319DCu) [[unlikely]] return; }
L_004319DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[4].w[0] - 24536u);
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004319F4u); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x004319F4u) [[unlikely]] return; }
L_004319F4:
    c.budget -= 1;
L_004319F8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004319F8u | kUnwind; return; } goto L_004319F8; } }
    c.budget -= 1;
L_00431A18:
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_00431A68; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431A30u); set32(c.r[4], c.r[4].w[0] - 24448u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x00431A30u) [[unlikely]] return; }
L_00431A30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[4].w[0] - 24536u);
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431A48u); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x00431A48u) [[unlikely]] return; }
L_00431A48:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00431A48u | kUnwind; return; } goto L_00431A48; } }
    c.budget -= 1;
L_00431A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431A70u); set32(c.r[5], c.r[5].w[0] - 1u);  if (depth < kMaxDepth) unit_00E0(c, 121u, depth + 1u); else { c.pc = 0x004806A0u; return; } if (c.pc != 0x00431A70u) [[unlikely]] return; }
L_00431A70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[18].w[0] + 28u);
    set32(c.r[7], ld32((c.r[29].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 32u), c.r[7].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[6].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431AA4u); st32((c.r[18].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_00E0(c, 69u, depth + 1u); else { c.pc = 0x00480220u; return; } if (c.pc != 0x00431AA4u) [[unlikely]] return; }
L_00431AA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_00431AE8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431AC4u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431AC4u) [[unlikely]] return; }
L_00431AC4:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431ADCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431ADCu) [[unlikely]] return; }
L_00431ADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00431B14; } }
    c.budget -= 1;
L_00431AE8:
    ldl(c.r[4], (c.r[29].w[0] + 7u));
    ldr(c.r[4], (c.r[29].w[0]));
    sdl(c.r[4], (c.r[18].w[0] + 19u));
    sdr(c.r[4], (c.r[18].w[0] + 12u));
    set32(c.r[2], 0u + 1u);
    ldl(c.r[4], (c.r[19].w[0] + 7u));
    ldr(c.r[4], (c.r[19].w[0]));
    sdl(c.r[4], (c.r[18].w[0] + 27u));
    sdr(c.r[4], (c.r[18].w[0] + 20u));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
L_00431B14:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00431B30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));  c.pc = t; return; }
L_00431B38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 30816u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_00431B60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00431B8C; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00431B8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431B80u); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_00E0(c, 65u, depth + 1u); else { c.pc = 0x00480200u; return; } if (c.pc != 0x00431B80u) [[unlikely]] return; }
L_00431B80:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00431BE0; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00431B8C:
    c.r[2].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00431B60u | kUnwind; return; } goto L_00431B60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] + 30816u);
    set32(c.r[17], 0u + 31u);
    c.budget -= 4;
L_00431BA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00431BC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431BBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 167u, depth + 1u); else { c.pc = 0x004317C8u; return; } if (c.pc != 0x00431BBCu) [[unlikely]] return; }
L_00431BBC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00431BC0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00431BA8u | kUnwind; return; } goto L_00431BA8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041EF88u | kUnwind; return; } [[clang::musttail]] return unit_00C7(c, 407u, depth); }
L_00431BE0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00431BF8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431C1Cu); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 18u, depth + 1u); else { c.pc = 0x004242D0u; return; } if (c.pc != 0x00431C1Cu) [[unlikely]] return; }
L_00431C1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[17], c.r[2].w[0] + 30816u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00431C5C; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00431C38:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 64u);
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] << 6);  if (t) { goto L_00431C5C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00431C38u | kUnwind; return; } goto L_00431C38; } }
L_00431C5C:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00431C88; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], c.r[4].w[0] - 24368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431C7Cu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x00431C7Cu) [[unlikely]] return; }
L_00431C7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00431CBC; } }
    c.budget -= 1;
L_00431C88:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431C98u); set32(c.r[16], 0u + 64u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00431C98u) [[unlikely]] return; }
L_00431C98:
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 56u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[19].w[0]);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 9;
L_00431CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431CC4u);  if (depth < kMaxDepth) unit_00C9(c, 19u, depth + 1u); else { c.pc = 0x004242E8u; return; } if (c.pc != 0x00431CC4u) [[unlikely]] return; }
L_00431CC4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00431CE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431CFCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 18u, depth + 1u); else { c.pc = 0x004242D0u; return; } if (c.pc != 0x00431CFCu) [[unlikely]] return; }
L_00431CFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004242E8u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 19u, depth); }
L_00431D10:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 60u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_00431D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00431DBC; } }
    c.budget -= 1;
L_00431D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431D58u); set32(c.r[4], ld32((c.r[18].w[0] + 44u)));  if (depth < kMaxDepth) unit_00E0(c, 65u, depth + 1u); else { c.pc = 0x00480200u; return; } if (c.pc != 0x00431D58u) [[unlikely]] return; }
L_00431D58:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], c.r[18].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00431D50u | kUnwind; return; } goto L_00431D50; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431D7Cu); set32(c.r[17], c.r[18].w[0] + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431D7Cu) [[unlikely]] return; }
L_00431D7C:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431D9Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431D9Cu) [[unlikely]] return; }
L_00431D9C:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 24u), 0u);
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
L_00431DBC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00431DD0:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 8;
L_00431DF0:
    set32(c.r[2], 0u + 8191u);
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 2;
L_00431DF8:
    c.budget -= 7;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[2].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00431DF8u | kUnwind; return; } goto L_00431DF8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00431E20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 32668u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00431E44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00431E44u); set32(c.r[4], ld32((c.r[2].w[0] - 32664u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00431E44u) [[unlikely]] return; }
L_00431E44:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00431E50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] - 32552u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
L_00431E68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[7].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_00431E84; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00431E98; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00431E84:
    c.r[2].d[0] = c.r[5].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00431E68u | kUnwind; return; } goto L_00431E68; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00431E98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00431EA0:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_00431EA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.r[3].d[0] = ld64((c.r[5].w[0] + 8u));
    set32(c.r[7], c.r[4].w[0] << 11);
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 11;
    c.r[4].d[0] = c.r[2].d[0] - c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00431F00; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 32u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DD(c, 50u, depth); }
L_00431F00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00431F08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00431FC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431F2Cu);  if (depth < kMaxDepth) unit_00C9(c, 294u, depth + 1u); else { c.pc = 0x00426F10u; return; } if (c.pc != 0x00431F2Cu) [[unlikely]] return; }
L_00431F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431F34u); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_00C7(c, 246u, depth + 1u); else { c.pc = 0x0041DBE8u; return; } if (c.pc != 0x00431F34u) [[unlikely]] return; }
L_00431F34:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00431FB0; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 24272u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00430000u < 16384u) { entry = entries_00CC[(t - 0x00430000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00431F60:
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00431FA0; } }
L_00431F70:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[16].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_00431FA0; } }
    c.budget -= 1;
L_00431F98:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 2;
L_00431FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431FA8u);  if (depth < kMaxDepth) unit_00C7(c, 232u, depth + 1u); else { c.pc = 0x0041D9A8u; return; } if (c.pc != 0x00431FA8u) [[unlikely]] return; }
L_00431FA8:
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 1;
L_00431FAC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00431FB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00426F58u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 297u, depth); }
L_00431FC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00431FD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00431FF4u); set32(c.r[4], c.r[19].w[0] - 32660u);  if (depth < kMaxDepth) unit_00C9(c, 356u, depth + 1u); else { c.pc = 0x004277E8u; return; } if (c.pc != 0x00431FF4u) [[unlikely]] return; }
L_00431FF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0043202C; } }
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] - 32552u);
    set32(c.r[17], 0u + 12u);
    c.budget -= 3;
L_00432008:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00432020; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043201Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 222u, depth + 1u); else { c.pc = 0x00431F08u; return; } if (c.pc != 0x0043201Cu) [[unlikely]] return; }
    goto L_0043201C;
L_00432018:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0043201C:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00432020:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00432008u | kUnwind; return; } goto L_00432008; } }
    goto L_00432028;
L_00432024:
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_00432028:
    st32((c.r[19].w[0] - 32660u), 0u);
    c.budget -= 1;
L_0043202C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00432048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] - 32668u), c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 32664u), c.r[5].w[0]);  c.pc = t; return; }
L_00432060:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_004320EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432084u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 116u, depth + 1u); else { c.pc = 0x00420C90u; return; } if (c.pc != 0x00432084u) [[unlikely]] return; }
L_00432084:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[17], c.r[2].w[0] - 31928u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004320E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004320A4u);  if (depth < kMaxDepth) unit_00C8(c, 70u, depth + 1u); else { c.pc = 0x00420838u; return; } if (c.pc != 0x004320A4u) [[unlikely]] return; }
L_004320A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004320ACu); set32(c.r[4], 0u + 16896u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x004320ACu) [[unlikely]] return; }
L_004320AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004320B8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C7(c, 347u, depth + 1u); else { c.pc = 0x0041E6F8u; return; } if (c.pc != 0x004320B8u) [[unlikely]] return; }
L_004320B8:
    set32(c.r[4], 0u + 16897u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004320C4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x004320C4u) [[unlikely]] return; }
L_004320C4:
    set32(c.r[4], 0u + 17152u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004320EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004320D8u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x004320D8u) [[unlikely]] return; }
L_004320D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004320E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 352u, depth + 1u); else { c.pc = 0x0041E760u; return; } if (c.pc != 0x004320E0u) [[unlikely]] return; }
L_004320E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004320E8u); set32(c.r[4], 0u + 17153u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x004320E8u) [[unlikely]] return; }
L_004320E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004320EC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00432100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432110u);  if (depth < kMaxDepth) unit_00CC(c, 248u, depth + 1u); else { c.pc = 0x00432128u; return; } if (c.pc != 0x00432110u) [[unlikely]] return; }
L_00432110:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00432128:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_00432150; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 24232u);  if (t) { goto L_004322B8; } }
    c.budget -= 1;
L_00432150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432158u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 116u, depth + 1u); else { c.pc = 0x00420C90u; return; } if (c.pc != 0x00432158u) [[unlikely]] return; }
L_00432158:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_004322C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 31928u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432178u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 70u, depth + 1u); else { c.pc = 0x00420838u; return; } if (c.pc != 0x00432178u) [[unlikely]] return; }
L_00432178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432180u); set32(c.r[4], 0u + 17408u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00432180u) [[unlikely]] return; }
L_00432180:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043218Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C7(c, 347u, depth + 1u); else { c.pc = 0x0041E6F8u; return; } if (c.pc != 0x0043218Cu) [[unlikely]] return; }
L_0043218C:
    set32(c.r[4], 0u + 17409u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432198u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00432198u) [[unlikely]] return; }
L_00432198:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_004321C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004321B0u); set32(c.r[4], c.r[4].w[0] - 24184u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x004321B0u) [[unlikely]] return; }
L_004321B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 24152u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004322B8; } }
L_004321C0:
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 19u);  goto L_004321E8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004321D8u); set32(c.r[4], c.r[4].w[0] - 24112u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x004321D8u) [[unlikely]] return; }
L_004321D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 24056u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004322B8; } }
L_004321E8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00432210; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004321FCu); set32(c.r[4], c.r[4].w[0] - 24016u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x004321FCu) [[unlikely]] return; }
L_004321FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 24056u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004322B8; } }
    c.budget -= 1;
L_00432210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432218u); set32(c.r[4], 0u + 17920u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00432218u) [[unlikely]] return; }
L_00432218:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432228u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 335u, depth + 1u); else { c.pc = 0x0041E5C8u; return; } if (c.pc != 0x00432228u) [[unlikely]] return; }
L_00432228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432230u); set32(c.r[4], 0u + 17921u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00432230u) [[unlikely]] return; }
L_00432230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432238u); set32(c.r[4], 0u + 17920u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00432238u) [[unlikely]] return; }
L_00432238:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432248u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00C7(c, 335u, depth + 1u); else { c.pc = 0x0041E5C8u; return; } if (c.pc != 0x00432248u) [[unlikely]] return; }
L_00432248:
    set32(c.r[4], 0u + 17921u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432254u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00432254u) [[unlikely]] return; }
L_00432254:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_00432288; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432268u); set32(c.r[5], c.r[5].w[0] - 23960u);  if (depth < kMaxDepth) unit_00CC(c, 216u, depth + 1u); else { c.pc = 0x00431E20u; return; } if (c.pc != 0x00432268u) [[unlikely]] return; }
L_00432268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432270u); set32(c.r[4], 0u + 17664u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00432270u) [[unlikely]] return; }
L_00432270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432278u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 352u, depth + 1u); else { c.pc = 0x0041E760u; return; } if (c.pc != 0x00432278u) [[unlikely]] return; }
L_00432278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432280u); set32(c.r[4], 0u + 17665u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00432280u) [[unlikely]] return; }
L_00432280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004322CC; } }
L_00432288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432290u); set32(c.r[4], 0u + 20480u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00432290u) [[unlikely]] return; }
L_00432290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432298u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 352u, depth + 1u); else { c.pc = 0x0041E760u; return; } if (c.pc != 0x00432298u) [[unlikely]] return; }
L_00432298:
    set32(c.r[4], 0u + 20481u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004322A4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x004322A4u) [[unlikely]] return; }
L_004322A4:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004322CC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23912u);
    c.budget -= 3;
L_004322B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004322C0u);  if (depth < kMaxDepth) unit_00CC(c, 216u, depth + 1u); else { c.pc = 0x00431E20u; return; } if (c.pc != 0x004322C0u) [[unlikely]] return; }
L_004322C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004322CC; } }
L_004322C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004322CC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004322E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] - 32552u);
    set32(c.r[4], 0u + 12u);
    c.budget -= 4;
L_004322F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004322F0u | kUnwind; return; } goto L_004322F0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_00432318:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 48u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DD(c, 50u, depth); }
L_00432338:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0]), 0ull);  if (t) { goto L_00432368; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 23864u);  if (t) { goto L_004323A0; } }
    c.budget -= 1;
L_00432368:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_00432380; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 23824u);  if (t) { goto L_004323A0; } }
    c.budget -= 1;
L_00432380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432388u);  if (depth < kMaxDepth) unit_00CC(c, 271u, depth + 1u); else { c.pc = 0x004322E0u; return; } if (c.pc != 0x00432388u) [[unlikely]] return; }
L_00432388:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004323B0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23784u);
    c.budget -= 3;
L_004323A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004323A8u);  if (depth < kMaxDepth) unit_00CC(c, 216u, depth + 1u); else { c.pc = 0x00431E20u; return; } if (c.pc != 0x004323A8u) [[unlikely]] return; }
L_004323A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00432498; } }
L_004323B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004323B8u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 116u, depth + 1u); else { c.pc = 0x00420C90u; return; } if (c.pc != 0x004323B8u) [[unlikely]] return; }
L_004323B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00432450; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] - 31928u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004323D8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 70u, depth + 1u); else { c.pc = 0x00420838u; return; } if (c.pc != 0x004323D8u) [[unlikely]] return; }
L_004323D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 23736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004323E8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 206u, depth + 1u); else { c.pc = 0x00415758u; return; } if (c.pc != 0x004323E8u) [[unlikely]] return; }
L_004323E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004323F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 248u, depth + 1u); else { c.pc = 0x00432128u; return; } if (c.pc != 0x004323F0u) [[unlikely]] return; }
L_004323F0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[16].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_00432498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432408u); set32(c.r[4], 0u + 18688u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00432408u) [[unlikely]] return; }
L_00432408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 4056u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432418u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 347u, depth + 1u); else { c.pc = 0x0041E6F8u; return; } if (c.pc != 0x00432418u) [[unlikely]] return; }
L_00432418:
    set32(c.r[4], 0u + 18689u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432424u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00432424u) [[unlikely]] return; }
L_00432424:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  goto L_00432464; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432440u); set32(c.r[5], c.r[5].w[0] - 23696u);  if (depth < kMaxDepth) unit_00CC(c, 216u, depth + 1u); else { c.pc = 0x00431E20u; return; } if (c.pc != 0x00432440u) [[unlikely]] return; }
L_00432440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432448u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 273u, depth + 1u); else { c.pc = 0x00432318u; return; } if (c.pc != 0x00432448u) [[unlikely]] return; }
L_00432448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00432498; } }
L_00432450:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0])));
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 5;
L_00432464:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 8u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(2047ll);
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[3].d[0] = c.r[3].d[0] << 21;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
L_00432498:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004324B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00432538; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));  goto L_004324E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004324E0u);  if (depth < kMaxDepth) unit_00CC(c, 305u, depth + 1u); else { c.pc = 0x004327B0u; return; } if (c.pc != 0x004324E0u) [[unlikely]] return; }
L_004324E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 1;
L_004324E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  goto L_00432520; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004324F4u); set32(c.r[4], 0u + 20480u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x004324F4u) [[unlikely]] return; }
L_004324F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004324FCu); set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_00C7(c, 352u, depth + 1u); else { c.pc = 0x0041E760u; return; } if (c.pc != 0x004324FCu) [[unlikely]] return; }
L_004324FC:
    set32(c.r[4], 0u + 20481u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432508u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00432508u) [[unlikely]] return; }
L_00432508:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] - 23656u);  if (t) { goto L_0043251C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043251Cu);  if (depth < kMaxDepth) unit_00C5(c, 206u, depth + 1u); else { c.pc = 0x00415758u; return; } if (c.pc != 0x0043251Cu) [[unlikely]] return; }
L_0043251C:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00432520:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00432318u | kUnwind; return; } goto L_00432318; }
L_00432538:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00432550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00432578; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043256Cu); set32(c.r[5], c.r[5].w[0] - 23632u);  if (depth < kMaxDepth) unit_00CC(c, 216u, depth + 1u); else { c.pc = 0x00431E20u; return; } if (c.pc != 0x0043256Cu) [[unlikely]] return; }
L_0043256C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004325D8; } }
    c.budget -= 1;
L_00432578:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00432588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 28u), c.r[5].w[0]);  if (t) { goto L_004325B8; } }
L_00432588:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_004325A0; } }
    set32(c.r[4], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_004325BC; } }
L_004325A0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[7].w[0] + 16u)));  if (t) { goto L_004325BC; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_004325BC; } }
L_004325B8:
    set32(c.r[4], ld32((c.r[7].w[0] + 16u)));
    c.budget -= 1;
L_004325BC:
    set32(c.r[2], ld32((c.r[7].w[0] + 28u)));
    st32((c.r[7].w[0] + 40u), 0u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = 0ull;
    st32((c.r[7].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 7;
L_004325D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004325E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00432610; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432604u); set32(c.r[5], c.r[5].w[0] - 23632u);  if (depth < kMaxDepth) unit_00CC(c, 216u, depth + 1u); else { c.pc = 0x00431E20u; return; } if (c.pc != 0x00432604u) [[unlikely]] return; }
L_00432604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00432614; } }
    c.budget -= 1;
L_00432610:
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 1;
L_00432614:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00432620:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.budget -= 12;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_00432660; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 23632u);  if (t) { goto L_0043267C; } }
    c.budget -= 1;
L_00432660:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_00432670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 23608u);  if (t) { goto L_0043267C; } }
L_00432670:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_00432690; } }
    set32(c.r[5], c.r[5].w[0] - 23576u);
    c.budget -= 1;
L_0043267C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432684u);  if (depth < kMaxDepth) unit_00CC(c, 216u, depth + 1u); else { c.pc = 0x00431E20u; return; } if (c.pc != 0x00432684u) [[unlikely]] return; }
L_00432684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043278C; } }
    c.budget -= 1;
L_00432690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432698u); set32(c.r[20], 0u + 1u);  if (depth < kMaxDepth) unit_00CC(c, 218u, depth + 1u); else { c.pc = 0x00431E50u; return; } if (c.pc != 0x00432698u) [[unlikely]] return; }
L_00432698:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[20].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));  goto L_004326A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043278C; } }
L_004326A8:
    set32(c.r[21], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[21].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043278C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_004326C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[20].w[0]));  if (t) { goto L_0043278C; } }
    c.budget -= 1;
L_004326C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004326D0u);  if (depth < kMaxDepth) unit_00C7(c, 228u, depth + 1u); else { c.pc = 0x0041D920u; return; } if (c.pc != 0x004326D0u) [[unlikely]] return; }
L_004326D0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_0043278C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[16], c.r[18].w[0] << 11);
    c.r[7].d[0] = ld64((c.r[17].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[19].w[0]);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[7].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 36u), c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432714u); if (c.r[6].d[0] != 0) c.r[16].d[0] = c.r[7].d[0];  if (depth < kMaxDepth) unit_00CC(c, 221u, depth + 1u); else { c.pc = 0x00431EA8u; return; } if (c.pc != 0x00432714u) [[unlikely]] return; }
L_00432714:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043272Cu); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 243u, depth + 1u); else { c.pc = 0x0041DB38u; return; } if (c.pc != 0x0043272Cu) [[unlikely]] return; }
L_0043272C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00432790; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[16], ld32((c.r[2].w[0] - 4056u)));
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[20].d[0]) { st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[21].w[0]));  goto L_00432780; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043274Cu);  if (depth < kMaxDepth) unit_00C7(c, 326u, depth + 1u); else { c.pc = 0x0041E488u; return; } if (c.pc != 0x0043274Cu) [[unlikely]] return; }
L_0043274C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432754u);  if (depth < kMaxDepth) unit_00C7(c, 317u, depth + 1u); else { c.pc = 0x0041E388u; return; } if (c.pc != 0x00432754u) [[unlikely]] return; }
L_00432754:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043276Cu); st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C7(c, 232u, depth + 1u); else { c.pc = 0x0041D9A8u; return; } if (c.pc != 0x0043276Cu) [[unlikely]] return; }
L_0043276C:
    st32((c.r[17].w[0] + 44u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_00432788; } }
L_00432780:
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 2;
L_00432788:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_0043278C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00432790:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004327B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_00432800; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] - 23536u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00431E20u | kUnwind; return; } goto L_00431E20; }
L_00432800:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00432888; }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00630000u);  if (t) { goto L_00432824; } }
    goto L_0043281C;
L_00432818:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.budget -= 1;
L_0043281C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432824u);  if (depth < kMaxDepth) unit_00C7(c, 268u, depth + 1u); else { c.pc = 0x0041DE30u; return; } if (c.pc != 0x00432824u) [[unlikely]] return; }
L_00432824:
    set32(c.r[19], 0u + 2u);
    c.r[17].d[0] = c.r[17].d[0] | 65526ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_00432840; } }
    c.budget -= 1;
L_00432838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432840u);  if (depth < kMaxDepth) unit_00CC(c, 214u, depth + 1u); else { c.pc = 0x00431DF0u; return; } if (c.pc != 0x00432840u) [[unlikely]] return; }
L_00432840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432848u);  if (depth < kMaxDepth) unit_00C7(c, 317u, depth + 1u); else { c.pc = 0x0041E388u; return; } if (c.pc != 0x00432848u) [[unlikely]] return; }
L_00432848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432850u);  if (depth < kMaxDepth) unit_00CC(c, 230u, depth + 1u); else { c.pc = 0x00431FD0u; return; } if (c.pc != 0x00432850u) [[unlikely]] return; }
L_00432850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432858u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 314u, depth + 1u); else { c.pc = 0x004328A8u; return; } if (c.pc != 0x00432858u) [[unlikely]] return; }
L_00432858:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[19].d[0]) { st32((c.r[16].w[0] + 40u), 0u);  goto L_00432880; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00432838u | kUnwind; return; } goto L_00432838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043287Cu); set32(c.r[4], c.r[20].w[0] - 23512u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x0043287Cu) [[unlikely]] return; }
L_0043287C:
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 1;
L_00432880:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00432888:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004328A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004328D0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004328C4u); set32(c.r[5], c.r[5].w[0] - 23632u);  if (depth < kMaxDepth) unit_00CC(c, 216u, depth + 1u); else { c.pc = 0x00431E20u; return; } if (c.pc != 0x004328C4u) [[unlikely]] return; }
L_004328C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004328D4; } }
    c.budget -= 1;
L_004328D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 1;
L_004328D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004328E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2048u);  c.pc = t; return; }
L_004328E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00432910; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432904u); set32(c.r[5], c.r[5].w[0] - 23632u);  if (depth < kMaxDepth) unit_00CC(c, 216u, depth + 1u); else { c.pc = 0x00431E20u; return; } if (c.pc != 0x00432904u) [[unlikely]] return; }
L_00432904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00432928; } }
    c.budget -= 1;
L_00432910:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00432928; }
    set32(c.r[2], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 11);
    c.budget -= 2;
L_00432928:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00432938:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00432128u | kUnwind; return; } goto L_00432128; }
L_00432950:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[5].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] << 11;
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_00432970:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[5].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] << 11;
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_004329A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004329B0u);  if (depth < kMaxDepth) unit_00CC(c, 319u, depth + 1u); else { c.pc = 0x00432938u; return; } if (c.pc != 0x004329B0u) [[unlikely]] return; }
L_004329B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004329C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004329D0u);  if (depth < kMaxDepth) unit_00CC(c, 319u, depth + 1u); else { c.pc = 0x00432938u; return; } if (c.pc != 0x004329D0u) [[unlikely]] return; }
L_004329D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004329F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00432AA8; } }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 204ll ? 1ull : 0ull;  if (t) { goto L_00432A90; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 205u);  if (t) { goto L_00432A40; } }
    set32(c.r[2], 0u + 201u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 202ll ? 1ull : 0ull;  if (t) { goto L_00432A70; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 200u);  if (t) { goto L_00432A80; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00432A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00432AAC; } }
    c.budget -= 1;
L_00432A40:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 205ll ? 1ull : 0ull;  if (t) { goto L_00432A90; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 299u);  if (t) { goto L_00432A80; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00432AA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00432AAC; } }
L_00432A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432A68u);  if (depth < kMaxDepth) unit_00CC(c, 320u, depth + 1u); else { c.pc = 0x00432950u; return; } if (c.pc != 0x00432A68u) [[unlikely]] return; }
L_00432A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00432AA4; } }
L_00432A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432A78u);  if (depth < kMaxDepth) unit_00CC(c, 321u, depth + 1u); else { c.pc = 0x00432970u; return; } if (c.pc != 0x00432A78u) [[unlikely]] return; }
L_00432A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00432AA4; } }
L_00432A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432A88u);  if (depth < kMaxDepth) unit_00CC(c, 322u, depth + 1u); else { c.pc = 0x004329A0u; return; } if (c.pc != 0x00432A88u) [[unlikely]] return; }
L_00432A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00432AA4; } }
L_00432A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432A98u);  if (depth < kMaxDepth) unit_00CC(c, 324u, depth + 1u); else { c.pc = 0x004329C0u; return; } if (c.pc != 0x00432A98u) [[unlikely]] return; }
L_00432A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00432AA4; } }
L_00432AA0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00432AA4:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00432AA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00432AAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00432AB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00426EE0u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 292u, depth); }
L_00432AD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00426EF8u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 293u, depth); }
L_00432AE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432B04u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 331u, depth + 1u); else { c.pc = 0x00432AB8u; return; } if (c.pc != 0x00432B04u) [[unlikely]] return; }
L_00432B04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432B10u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 336u, depth + 1u); else { c.pc = 0x00432B28u; return; } if (c.pc != 0x00432B10u) [[unlikely]] return; }
L_00432B10:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00432AD0u | kUnwind; return; } goto L_00432AD0; }
L_00432B28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] - 31572u), c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 31568u), c.r[5].w[0]);  c.pc = t; return; }
L_00432B40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 31572u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00432B64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00432B64u); set32(c.r[4], ld32((c.r[2].w[0] - 31568u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00432B64u) [[unlikely]] return; }
L_00432B64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00432B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432B84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 331u, depth + 1u); else { c.pc = 0x00432AB8u; return; } if (c.pc != 0x00432B84u) [[unlikely]] return; }
L_00432B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432B8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 342u, depth + 1u); else { c.pc = 0x00432BA0u; return; } if (c.pc != 0x00432B8Cu) [[unlikely]] return; }
L_00432B8C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00432AD0u | kUnwind; return; } goto L_00432AD0; }
L_00432BA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31624u);
    set32(c.r[6], 0u + 360u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432BBCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 36u, depth + 1u); else { c.pc = 0x004745D8u; return; } if (c.pc != 0x00432BBCu) [[unlikely]] return; }
L_00432BBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 31576u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00432BE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432BF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 331u, depth + 1u); else { c.pc = 0x00432AB8u; return; } if (c.pc != 0x00432BF4u) [[unlikely]] return; }
L_00432BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432BFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 347u, depth + 1u); else { c.pc = 0x00432C10u; return; } if (c.pc != 0x00432BFCu) [[unlikely]] return; }
L_00432BFC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00432AD0u | kUnwind; return; } goto L_00432AD0; }
L_00432C10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 31576u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_00432C28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432C44u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 331u, depth + 1u); else { c.pc = 0x00432AB8u; return; } if (c.pc != 0x00432C44u) [[unlikely]] return; }
L_00432C44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432C50u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 352u, depth + 1u); else { c.pc = 0x00432C70u; return; } if (c.pc != 0x00432C50u) [[unlikely]] return; }
L_00432C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432C58u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 332u, depth + 1u); else { c.pc = 0x00432AD0u; return; } if (c.pc != 0x00432C58u) [[unlikely]] return; }
L_00432C58:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00432C70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] - 31624u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[6], 0u + 360u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432CA8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 36u, depth + 1u); else { c.pc = 0x004745D8u; return; } if (c.pc != 0x00432CA8u) [[unlikely]] return; }
L_00432CA8:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[2].d[0] = c.r[19].sd[0] < 1024ll ? 1ull : 0ull;  goto L_00432CC0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 22456u);  if (t) { goto L_00432D48; } }
    c.budget -= 1;
L_00432CC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] & 3ull;  goto L_00432CD8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 22416u);  if (t) { goto L_00432D48; } }
    c.budget -= 1;
L_00432CD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00432CE8; } }
    set32(c.r[2], c.r[18].w[0] - c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_00432CE8:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 44u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432D00u); set32(c.r[16], c.r[17].w[0] + 44u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00432D00u) [[unlikely]] return; }
L_00432D00:
    c.r[2].d[0] = c.r[16].d[0] & 3ull;
    st32((c.r[17].w[0]), c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 4u), c.r[19].w[0]);  if (t) { goto L_00432D18; } }
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_00432D18:
    set32(c.r[2], c.r[16].w[0] + 384u);
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432D2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 364u, depth + 1u); else { c.pc = 0x00432DF0u; return; } if (c.pc != 0x00432D2Cu) [[unlikely]] return; }
L_00432D2C:
    set32(c.r[3], c.r[16].w[0] + 768u);
    set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00432D54; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 22376u);
    c.budget -= 2;
L_00432D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432D50u);  if (depth < kMaxDepth) unit_00CC(c, 337u, depth + 1u); else { c.pc = 0x00432B40u; return; } if (c.pc != 0x00432D50u) [[unlikely]] return; }
L_00432D50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00432D54:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00432D70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432D84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 331u, depth + 1u); else { c.pc = 0x00432AB8u; return; } if (c.pc != 0x00432D84u) [[unlikely]] return; }
L_00432D84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432D8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 360u, depth + 1u); else { c.pc = 0x00432DA0u; return; } if (c.pc != 0x00432D8Cu) [[unlikely]] return; }
L_00432D8C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00432AD0u | kUnwind; return; } goto L_00432AD0; }
L_00432DA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 44u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DD(c, 50u, depth); }
L_00432DC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432DD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 331u, depth + 1u); else { c.pc = 0x00432AB8u; return; } if (c.pc != 0x00432DD4u) [[unlikely]] return; }
L_00432DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432DDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 364u, depth + 1u); else { c.pc = 0x00432DF0u; return; } if (c.pc != 0x00432DDCu) [[unlikely]] return; }
L_00432DDC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00432AD0u | kUnwind; return; } goto L_00432AD0; }
L_00432DF0:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 4;
L_00432E00:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < 96ll ? 1ull : 0ull;
    st32((c.r[2].w[0]), 0u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00432E00u | kUnwind; return; } goto L_00432E00; } }
    set32(c.r[2], 0u + 64u);
    st32((c.r[6].w[0] + 20u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 24u), c.r[2].w[0]);  c.pc = t; return; }
L_00432E30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432E60u); set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 16));  if (depth < kMaxDepth) unit_00CC(c, 331u, depth + 1u); else { c.pc = 0x00432AB8u; return; } if (c.pc != 0x00432E60u) [[unlikely]] return; }
L_00432E60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00432E74u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 369u, depth + 1u); else { c.pc = 0x00432E90u; return; } if (c.pc != 0x00432E74u) [[unlikely]] return; }
L_00432E74:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00432AD0u | kUnwind; return; } goto L_00432AD0; }
L_00432E90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[24].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[13], c.r[13].w[0] - 23480u);
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[3], ld32((c.r[24].w[0] + 28u)));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[2], ld32((c.r[24].w[0] + 32u)));
    set32(c.r[11], 0u - 3567u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[15], 0u - 2006u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[13].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[8], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[24].w[0] + 40u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[5].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[8], ld32((c.r[24].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[10], ld32((c.r[24].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[13].w[0]);
    set32(c.r[12], ld32((c.r[24].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 3567u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 12));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 12));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[16], ld32((c.r[24].w[0] + 12u)));
    set32(c.r[14], c.r[10].w[0] << 2);
    c.r[10].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[14], c.r[14].w[0] + c.r[8].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[8], 0u + 2006u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 12));
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[3].w[0], c.r[8].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 1, c.r[9].w[0], c.r[15].w[0]);
    c.r[15].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[13], c.r[10].w[0] + c.r[16].w[0]);
    c.r[10].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[12].w[0])));
    set32(c.r[8], ld32((c.r[13].w[0])));
    set32(c.r[11], c.r[11].w[0] + c.r[15].w[0]);
    set32(c.r[12], ld32((c.r[10].w[0])));
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 12));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[14].w[0]), c.r[11].w[0]);
    set32(c.r[11], 0u + 32767u);
    mmi::mult(c, 1, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[9], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[24].w[0] + 20u)));
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 12));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 12));
    set32(c.r[10], 0u + 32767u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 12));
    st32((c.r[2].w[0]), c.r[9].w[0]);
    set32(c.r[2], 0u - 32768u);
    set32(c.r[4], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[12], 0u - 32768u);
    set32(c.r[8], ld32((c.r[24].w[0] + 20u)));
    c.r[10].d[0] = c.r[10].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[11].d[0] = c.r[11].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[5].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[13].d[0] = c.r[4].sd[0] < -32768ll ? 1ull : 0ull;
    set32(c.r[9], ld32((c.r[24].w[0] + 24u)));
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    set32(c.r[2], 0u + 32767u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    if (c.r[13].d[0] != 0) c.r[4].d[0] = c.r[12].d[0];
    c.r[10].d[0] = c.r[10].d[0] ^ 0ull;
    c.r[11].d[0] = c.r[11].d[0] ^ 0ull;
    set32(c.r[3], 0u + 32767u);
    if (c.r[10].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    if (c.r[11].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    c.r[9].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[24].w[0] + 20u), c.r[8].w[0]);
    c.budget -= 88;
    { const bool t = c.r[9].d[0] != 0ull; st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00432FF4; } }
    st32((c.r[24].w[0] + 20u), 0u);
    c.budget -= 1;
L_00432FF4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00433000:
    set32(c.r[29], c.r[29].w[0] + 48u);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 4;
L_00433010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 2;
L_00433018:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_00433024:
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433034u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 331u, depth + 1u); else { c.pc = 0x00432AB8u; return; } if (c.pc != 0x00433034u) [[unlikely]] return; }
L_00433034:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433044u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 376u, depth + 1u); else { c.pc = 0x00433060u; return; } if (c.pc != 0x00433044u) [[unlikely]] return; }
L_00433044:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00432AD0u | kUnwind; return; } goto L_00432AD0; }
L_00433060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00433080; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 22336u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00432B40u | kUnwind; return; } goto L_00432B40; }
L_00433080:
    set32(c.r[3], c.r[5].w[0] + 127u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(255ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_004330AC; }
    c.r[2].d[0] = c.r[6].sd[0] < -127ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_004330AC; }
    c.r[2].d[0] = c.r[6].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[5].w[0] - 127u);  if (t) { goto L_004330C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 1;
L_004330AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 22296u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00432B40u | kUnwind; return; } goto L_00432B40; }
L_004330C0:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_004330CC; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_004330CC:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] >= 0; st32((c.r[4].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_004330DC; } }
    set32(c.r[2], 0u + 127u);
    set32(c.r[7], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 2;
L_004330DC:
    set32(c.r[2], c.r[6].w[0] + 127u);
    set32(c.r[3], c.r[6].w[0] - 127u);
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_004330EC; }
L_004330EC:
    st32((c.r[4].w[0] + 32u), c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[4].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_00433100; } }
    set32(c.r[2], 0u + 127u);
    set32(c.r[3], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 2;
L_00433100:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00433110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043312Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 331u, depth + 1u); else { c.pc = 0x00432AB8u; return; } if (c.pc != 0x0043312Cu) [[unlikely]] return; }
L_0043312C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433138u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 380u, depth + 1u); else { c.pc = 0x00433150u; return; } if (c.pc != 0x00433138u) [[unlikely]] return; }
L_00433138:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00432AD0u | kUnwind; return; } goto L_00432AD0; }
L_00433150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00433178; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 22248u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00432B40u | kUnwind; return; } goto L_00432B40; }
L_00433178:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[3], 0u + 750u);  if (t) { goto L_00433198; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 22208u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00432B40u | kUnwind; return; } goto L_00432B40; }
L_00433198:
    set32(c.r[5], 0u + 1u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x004331A4u);  goto L_004331A8; }
L_004331A8:
    st32((c.r[7].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[6], 0u + 96u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[2].sd[0] < 97ll ? 1ull : 0ull;
    c.r[4].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[6].d[0];
    st32((c.r[7].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004331D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00427048u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 304u, depth); }
L_004331F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042D298u | kUnwind; return; } [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_00433208:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(68ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00433230; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 22152u);  if (t) { goto L_00433240; } }
    c.budget -= 1;
L_00433230:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00433250; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 22096u);
    c.budget -= 2;
L_00433240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433248u);  if (depth < kMaxDepth) unit_00CC(c, 382u, depth + 1u); else { c.pc = 0x004331F0u; return; } if (c.pc != 0x00433248u) [[unlikely]] return; }
L_00433248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043325C; } }
L_00433250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433258u);  if (depth < kMaxDepth) unit_00CC(c, 401u, depth + 1u); else { c.pc = 0x00433500u; return; } if (c.pc != 0x00433258u) [[unlikely]] return; }
L_00433258:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0043325C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00433270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00433288; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00433500; }
L_00433288:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00433298:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  c.pc = t; return; }
L_004332A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  c.pc = t; return; }
L_004332A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004332C0u); st32((c.r[16].w[0] + 28u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00CC(c, 410u, depth + 1u); else { c.pc = 0x00433700u; return; } if (c.pc != 0x004332C0u) [[unlikely]] return; }
L_004332C0:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004332D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 28u)));
    st32((c.r[20].w[0] + 36u), c.r[16].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433324u); st32((c.r[20].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CC(c, 403u, depth + 1u); else { c.pc = 0x00433570u; return; } if (c.pc != 0x00433324u) [[unlikely]] return; }
L_00433324:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 16u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 20u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 8;
    { const bool t = c.r[19].sd[0] > 0; st32((c.r[20].w[0] + 12u), 0u);  if (t) { goto L_00433370; } }
    set32(c.r[2], 0u + 2u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004332A8u | kUnwind; return; } goto L_004332A8; }
L_00433370:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004333A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004333B8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 387u, depth + 1u); else { c.pc = 0x00433298u; return; } if (c.pc != 0x004333B8u) [[unlikely]] return; }
L_004333B8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_004334CC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_004334C8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_004333FC; }
    set32(c.r[17], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004333F8u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_00CC(c, 414u, depth + 1u); else { c.pc = 0x00433808u; return; } if (c.pc != 0x004333F8u) [[unlikely]] return; }
L_004333F8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_004333FC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00433498; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = c.r[6].d[0] | 26936ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.r[6].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[6].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433438u); st32((c.r[16].w[0] + 32u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00CC(c, 406u, depth + 1u); else { c.pc = 0x004335F8u; return; } if (c.pc != 0x00433438u) [[unlikely]] return; }
L_00433438:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; st32((c.r[16].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_00433458; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00433480; }
L_00433458:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_00433470; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00433480; }
L_00433470:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00433498; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00433480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433488u); set32(c.r[17], 0u + 3u);  if (depth < kMaxDepth) unit_00CC(c, 389u, depth + 1u); else { c.pc = 0x004332A8u; return; } if (c.pc != 0x00433488u) [[unlikely]] return; }
L_00433488:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
L_00433498:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_004334CC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_004334CC; }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004334C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 417u, depth + 1u); else { c.pc = 0x00433838u; return; } if (c.pc != 0x004334C8u) [[unlikely]] return; }
L_004334C8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004334CC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004334E0:
    st32((c.r[4].w[0] + 52u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), c.r[6].w[0]);  c.pc = t; return; }
L_004334F0:
    st32((c.r[4].w[0] + 64u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.r[6].w[0]);  c.pc = t; return; }
L_00433500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 960u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 44u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 12u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433550u); st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00433550u) [[unlikely]] return; }
L_00433550:
    set32(c.r[4], c.r[16].w[0] + 56u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 12u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DD(c, 50u, depth); }
L_00433570:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[17].sd[0] <= 0; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_004335D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004335A4u);  if (depth < kMaxDepth) unit_00CC(c, 410u, depth + 1u); else { c.pc = 0x00433700u; return; } if (c.pc != 0x004335A4u) [[unlikely]] return; }
L_004335A4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004335B4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 410u, depth + 1u); else { c.pc = 0x00433700u; return; } if (c.pc != 0x004335B4u) [[unlikely]] return; }
L_004335B4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x004335B8u);  goto L_004335BC; }
L_004335BC:
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    mmi::div(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004335D8; } }
L_004335D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00310000u);
    c.r[2].d[0] = c.r[2].d[0] | 26936ull;
    c.budget -= 2;
L_004335D8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004335F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 960u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_004336E8; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00310000u);
    c.r[17].d[0] = c.r[17].d[0] | 26936ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004336E8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00433638; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00433670; } }
L_00433638:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[12] = ld32((c.r[2].w[0] - 22160u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    fpu_div(c, 12u, c.f[0], c.f[12]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433660u);  if (depth < kMaxDepth) unit_00DC(c, 44u, depth + 1u); else { c.pc = 0x00470C80u; return; } if (c.pc != 0x00433660u) [[unlikely]] return; }
L_00433660:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[1] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_004336BC; } }
L_00433670:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44700000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433680u);  if (depth < kMaxDepth) unit_00DC(c, 44u, depth + 1u); else { c.pc = 0x00470C80u; return; } if (c.pc != 0x00433680u) [[unlikely]] return; }
L_00433680:
    set32(c.r[2], c.r[17].w[0] - c.r[16].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[13] = ld32((c.r[3].w[0] - 22160u));
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_div(c, 13u, c.f[0], c.f[13]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004336B8u);  if (depth < kMaxDepth) unit_00C2(c, 242u, depth + 1u); else { c.pc = 0x0040AD90u; return; } if (c.pc != 0x004336B8u) [[unlikely]] return; }
L_004336B8:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 1;
L_004336BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4700000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = c.f[1];  goto L_004336D0; }
L_004336D0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = c.f[1];  goto L_004336E0; }
L_004336E0:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.budget -= 2;
L_004336E8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00433700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00310000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 26936ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 16u), c.f[20]);  if (t) { goto L_004337F0; } }
    set32(c.r[3], 0u - 960u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004337F0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00433740; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00433780; } }
L_00433740:
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[13] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[1].w[0];
    fpu_div(c, 13u, c.f[0], c.f[13]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043376Cu);  if (depth < kMaxDepth) unit_00C2(c, 242u, depth + 1u); else { c.pc = 0x0040AD90u; return; } if (c.pc != 0x0043376Cu) [[unlikely]] return; }
L_0043376C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4A450000u);
    c.r[1].d[0] = c.r[1].d[0] | 42208ull;
    c.f[1] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_004337C0; } }
L_00433780:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44700000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433790u);  if (depth < kMaxDepth) unit_00DC(c, 44u, depth + 1u); else { c.pc = 0x00470C80u; return; } if (c.pc != 0x00433790u) [[unlikely]] return; }
L_00433790:
    set32(c.r[2], 0u - c.r[16].w[0]);
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004337A4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00DC(c, 44u, depth + 1u); else { c.pc = 0x00470C80u; return; } if (c.pc != 0x004337A4u) [[unlikely]] return; }
L_004337A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[1] = ld32((c.r[2].w[0] - 22160u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[20]);
    c.budget -= 7;
L_004337C0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = c.f[1];  goto L_004337D0; }
L_004337D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4A450000u);
    c.r[1].d[0] = c.r[1].d[0] | 42208ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = c.f[1];  goto L_004337E8; }
L_004337E8:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.budget -= 2;
L_004337F0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00433808:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0043382C; }
    goto L_0043381C;
L_00433818:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043381C:
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00433828u); set32(c.r[4], ld32((c.r[4].w[0] + 48u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00433828u) [[unlikely]] return; }
L_00433828:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0043382C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00433838:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0043385C; }
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00433858u); set32(c.r[4], ld32((c.r[4].w[0] + 60u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00433858u) [[unlikely]] return; }
L_00433858:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0043385C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00433868:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00433890; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 21968u);  if (t) { goto L_004338A0; } }
    c.budget -= 1;
L_00433890:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004338B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 21912u);
    c.budget -= 2;
L_004338A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004338A8u);  if (depth < kMaxDepth) unit_00CC(c, 382u, depth + 1u); else { c.pc = 0x004331F0u; return; } if (c.pc != 0x004338A8u) [[unlikely]] return; }
L_004338A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004338BC; } }
L_004338B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004338B8u);  if (depth < kMaxDepth) unit_00CC(c, 449u, depth + 1u); else { c.pc = 0x00433B90u; return; } if (c.pc != 0x004338B8u) [[unlikely]] return; }
L_004338B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004338BC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004338D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004338E8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00433B90; }
L_004338E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004338F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00433930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433928u); set32(c.r[5], c.r[7].w[0] - 12u);  if (depth < kMaxDepth) unit_00C6(c, 117u, depth + 1u); else { c.pc = 0x00418C18u; return; } if (c.pc != 0x00433928u) [[unlikely]] return; }
L_00433928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00433940; } }
L_00433930:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043393Cu); set32(c.r[6], c.r[7].w[0] - 12u);  if (depth < kMaxDepth) unit_00C6(c, 94u, depth + 1u); else { c.pc = 0x004188A8u; return; } if (c.pc != 0x0043393Cu) [[unlikely]] return; }
L_0043393C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_00433940:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_00433960; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433958u); set32(c.r[4], c.r[4].w[0] - 21856u);  if (depth < kMaxDepth) unit_00CC(c, 382u, depth + 1u); else { c.pc = 0x004331F0u; return; } if (c.pc != 0x00433958u) [[unlikely]] return; }
L_00433958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00433968; } }
L_00433960:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 2;
L_00433968:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00433980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004339A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004339A4u);  if (depth < kMaxDepth) unit_00C6(c, 130u, depth + 1u); else { c.pc = 0x00418D30u; return; } if (c.pc != 0x004339A4u) [[unlikely]] return; }
L_004339A4:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_004339A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004339B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041ADC0u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 407u, depth); }
L_004339D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041ABB8u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 393u, depth); }
L_004339E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041AE28u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 411u, depth); }
L_00433A00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041AF58u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 421u, depth); }
L_00433A18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00419308u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 188u, depth); }
L_00433A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041A3B8u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 327u, depth); }
L_00433A48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041A528u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 337u, depth); }
L_00433A60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433A70u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C6(c, 197u, depth + 1u); else { c.pc = 0x004193F8u; return; } if (c.pc != 0x00433A70u) [[unlikely]] return; }
L_00433A70:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 4u);  goto L_00433ABC; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 21792u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00430000u < 16384u) { entry = entries_00CC[(t - 0x00430000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00433A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00433ABC; } }
L_00433AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00433ABC; } }
L_00433AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00433ABC; } }
L_00433AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00433ABC; } }
L_00433AB8:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00433ABC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00433AD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 960u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[5].sd[0] < -960ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00419D60u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 264u, depth); }
L_00433AF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00419E10u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 269u, depth); }
L_00433B10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00433B30; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00419D60u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 264u, depth); }
L_00433B30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00433B40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00433B60; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00419E10u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 269u, depth); }
L_00433B60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00433B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041A268u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 318u, depth); }
L_00433B88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  c.pc = t; return; }
L_00433B90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] - 22032u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_00433BA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00433BD0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 21696u);  if (t) { goto L_00433BE0; } }
    c.budget -= 1;
L_00433BD0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00433BF0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 21640u);
    c.budget -= 2;
L_00433BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433BE8u);  if (depth < kMaxDepth) unit_00CC(c, 382u, depth + 1u); else { c.pc = 0x004331F0u; return; } if (c.pc != 0x00433BE8u) [[unlikely]] return; }
L_00433BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00433BFC; } }
L_00433BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433BF8u);  if (depth < kMaxDepth) unit_00CC(c, 474u, depth + 1u); else { c.pc = 0x00433E68u; return; } if (c.pc != 0x00433BF8u) [[unlikely]] return; }
L_00433BF8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00433BFC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00433C10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00433C28; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00433E68; }
L_00433C28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00433C38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[7], c.r[3].w[0] - 16u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00433C78; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433C70u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 277u, depth + 1u); else { c.pc = 0x0042EA78u; return; } if (c.pc != 0x00433C70u) [[unlikely]] return; }
L_00433C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00433C88; } }
L_00433C78:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433C84u); set32(c.r[5], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00CB(c, 268u, depth + 1u); else { c.pc = 0x0042E990u; return; } if (c.pc != 0x00433C84u) [[unlikely]] return; }
L_00433C84:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_00433C88:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_00433CA8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433CA0u); set32(c.r[4], c.r[4].w[0] - 21584u);  if (depth < kMaxDepth) unit_00CC(c, 382u, depth + 1u); else { c.pc = 0x004331F0u; return; } if (c.pc != 0x00433CA0u) [[unlikely]] return; }
L_00433CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00433CB8; } }
L_00433CA8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00433CB8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00433CD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00433CF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00433CF4u);  if (depth < kMaxDepth) unit_00CB(c, 298u, depth + 1u); else { c.pc = 0x0042EDF0u; return; } if (c.pc != 0x00433CF4u) [[unlikely]] return; }
L_00433CF4:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_00433CF8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00433D08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042F0A8u | kUnwind; return; } [[clang::musttail]] return unit_00CB(c, 316u, depth); }
L_00433D28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042F118u | kUnwind; return; } [[clang::musttail]] return unit_00CB(c, 320u, depth); }
L_00433D40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042F250u | kUnwind; return; } [[clang::musttail]] return unit_00CB(c, 332u, depth); }
L_00433D58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 21528u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004331F0u | kUnwind; return; } goto L_004331F0; }
L_00433D78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042F348u | kUnwind; return; } [[clang::musttail]] return unit_00CB(c, 340u, depth); }
L_00433D90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042F680u | kUnwind; return; } [[clang::musttail]] return unit_00CB(c, 369u, depth); }
L_00433DA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042F758u | kUnwind; return; } [[clang::musttail]] return unit_00CB(c, 376u, depth); }
L_00433DC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042F430u | kUnwind; return; } [[clang::musttail]] return unit_00CB(c, 349u, depth); }
L_00433DD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004300D0u | kUnwind; return; } goto L_004300D0; }
L_00433DF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00430058u | kUnwind; return; } goto L_00430058; }
L_00433E08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 960u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[6].sd[0] < -960ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00430270u | kUnwind; return; } goto L_00430270; }
L_00433E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004301C0u | kUnwind; return; } goto L_004301C0; }
L_00433E48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042F5E8u | kUnwind; return; } [[clang::musttail]] return unit_00CB(c, 364u, depth); }
L_00433E60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  c.pc = t; return; }
L_00433E68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[2], c.r[2].w[0] - 21760u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_00433E88:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[24].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x4D520000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[16].d[0] | 20294ull;
    c.r[15].d[0] = ld8((c.r[24].w[0]));
    c.r[14].d[0] = ld8((c.r[24].w[0] + 3u));
    c.r[12].d[0] = ld8((c.r[24].w[0] + 2u));
    c.r[13].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[24], c.r[24].w[0] + 4u);
    c.r[5].d[0] = ld8((c.r[24].w[0] + 3u));
    set32(c.r[14], c.r[14].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[24].w[0] + 2u));
    set32(c.r[13], c.r[13].w[0] << 8);
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[2].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[5].d[0] = ld8((c.r[24].w[0] + 2u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[11].d[0] = ld8((c.r[24].w[0] + 3u));
    c.r[25].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[10].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[25].w[0]) >> 8));
    set32(c.r[4], c.r[25].w[0] >> 24);
    set32(c.r[2], c.r[25].w[0] << 8);
    c.r[9].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[12], c.r[12].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    c.r[17].d[0] = 0ull + 0ull;
    c.r[15].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.r[14].d[0] = 0ull + 0ull;
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    c.r[13].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[11], c.r[11].w[0] << 24);
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[10], c.r[10].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[25].w[0] << 24);
    c.r[9].d[0] = c.r[9].d[0] | c.r[11].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[10].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[12].d[0];
    c.r[25].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[5].d[0];
    set32(c.r[24], c.r[24].w[0] + 4u);
    c.budget -= 62;
    { const bool t = c.r[15].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00CD(c, 4u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46460000u);
    c.r[2].d[0] = c.r[2].d[0] | 18753ull;
    c.budget -= 4;
    if (c.r[9].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[24].w[0] + c.r[25].w[0]);  goto L_00433F98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00CD(c, 4u, depth); } }
L_00433F98:
    set32(c.r[11], c.r[2].w[0] - 4u);
    c.r[3].d[0] = c.r[24].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00CD(c, 4u, depth); } }
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[16], 0u - 256u);
    c.r[9].d[0] = ld8((c.r[24].w[0]));
    c.budget -= 4;
L_00433FB8:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x444E0000u);
    c.r[8].d[0] = ld8((c.r[24].w[0] + 3u));
    c.r[10].d[0] = c.r[10].d[0] | 21331ull;
    c.r[6].d[0] = ld8((c.r[24].w[0] + 2u));
    c.r[7].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[24], c.r[24].w[0] + 4u);
    c.r[5].d[0] = ld8((c.r[24].w[0] + 3u));
    set32(c.r[8], c.r[8].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[24].w[0] + 2u));
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[4].d[0] = ld8((c.r[24].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[2].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[24], c.r[24].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 18;
    [[clang::musttail]] return unit_00CD(c, 1u, depth);
}

}
