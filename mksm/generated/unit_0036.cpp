#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0036[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21,
    0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 27,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33,
    0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0,
    0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0,
    0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0,
    0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0,
    0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0,
    0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285,
    0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 299, 0, 300, 0, 301, 0, 0, 0, 302, 0, 0, 303, 0, 304, 0, 305,
    0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 310, 0, 311, 0, 312, 0, 313, 0,
    0, 0, 314, 0, 0, 315, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0,
    322, 0, 323, 0, 324, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 328, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 337, 0, 338, 0, 339, 0,
    0, 0, 340, 0, 0, 341, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347,
    0, 0, 348, 0, 349, 0, 350, 0, 351, 0, 0, 0, 352, 0, 0, 353, 0, 354, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0,
    357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 0, 0, 365, 0, 0, 366,
    0, 367, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 378, 0, 379, 0, 0, 0, 380,
    0, 0, 381, 0, 382, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 388, 0,
    389, 0, 0, 390, 0, 0, 0, 0, 391, 0, 392, 0, 393, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0,
    399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0,
    0, 405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0,
    412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0,
    416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0,
    427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0,
    434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 444,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0,
    0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0,
    0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0,
    0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0,
    469, 0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0,
    0, 481, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0,
    487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0,
    0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 0, 498, 0, 499, 0,
    0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0,
    0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 509, 0, 0, 510, 0, 0, 0,
    0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514,
    0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0,
    520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0,
    0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 0,
    0, 0, 543, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 548, 0,
    549, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554,
};

void unit_0036(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001D8000;
    case 2u: goto L_001D800C;
    case 3u: goto L_001D803C;
    case 4u: goto L_001D8050;
    case 5u: goto L_001D8088;
    case 6u: goto L_001D80C8;
    case 7u: goto L_001D80D8;
    case 8u: goto L_001D8108;
    case 9u: goto L_001D813C;
    case 10u: goto L_001D8158;
    case 11u: goto L_001D817C;
    case 12u: goto L_001D8190;
    case 13u: goto L_001D81A4;
    case 14u: goto L_001D81B4;
    case 15u: goto L_001D81D8;
    case 16u: goto L_001D81EC;
    case 17u: goto L_001D8200;
    case 18u: goto L_001D8214;
    case 19u: goto L_001D8224;
    case 20u: goto L_001D8258;
    case 21u: goto L_001D827C;
    case 22u: goto L_001D8290;
    case 23u: goto L_001D82A0;
    case 24u: goto L_001D82C4;
    case 25u: goto L_001D82D8;
    case 26u: goto L_001D82EC;
    case 27u: goto L_001D82FC;
    case 28u: goto L_001D8324;
    case 29u: goto L_001D8334;
    case 30u: goto L_001D8354;
    case 31u: goto L_001D83C0;
    case 32u: goto L_001D83F4;
    case 33u: goto L_001D83FC;
    case 34u: goto L_001D840C;
    case 35u: goto L_001D8454;
    case 36u: goto L_001D8470;
    case 37u: goto L_001D8480;
    case 38u: goto L_001D84A0;
    case 39u: goto L_001D84A8;
    case 40u: goto L_001D84B4;
    case 41u: goto L_001D84C0;
    case 42u: goto L_001D84F0;
    case 43u: goto L_001D84F8;
    case 44u: goto L_001D8504;
    case 45u: goto L_001D8510;
    case 46u: goto L_001D8538;
    case 47u: goto L_001D8550;
    case 48u: goto L_001D8560;
    case 49u: goto L_001D8580;
    case 50u: goto L_001D8588;
    case 51u: goto L_001D8594;
    case 52u: goto L_001D85A0;
    case 53u: goto L_001D85B4;
    case 54u: goto L_001D85C0;
    case 55u: goto L_001D85DC;
    case 56u: goto L_001D85EC;
    case 57u: goto L_001D8620;
    case 58u: goto L_001D8644;
    case 59u: goto L_001D8670;
    case 60u: goto L_001D8680;
    case 61u: goto L_001D8690;
    case 62u: goto L_001D86B4;
    case 63u: goto L_001D86D8;
    case 64u: goto L_001D86FC;
    case 65u: goto L_001D8714;
    case 66u: goto L_001D872C;
    case 67u: goto L_001D8744;
    case 68u: goto L_001D875C;
    case 69u: goto L_001D8774;
    case 70u: goto L_001D878C;
    case 71u: goto L_001D87A4;
    case 72u: goto L_001D87B8;
    case 73u: goto L_001D87D0;
    case 74u: goto L_001D87E0;
    case 75u: goto L_001D87F0;
    case 76u: goto L_001D8804;
    case 77u: goto L_001D8814;
    case 78u: goto L_001D883C;
    case 79u: goto L_001D8864;
    case 80u: goto L_001D8894;
    case 81u: goto L_001D88C4;
    case 82u: goto L_001D88F4;
    case 83u: goto L_001D8924;
    case 84u: goto L_001D8960;
    case 85u: goto L_001D8990;
    case 86u: goto L_001D89B4;
    case 87u: goto L_001D89F0;
    case 88u: goto L_001D8A14;
    case 89u: goto L_001D8A38;
    case 90u: goto L_001D8A68;
    case 91u: goto L_001D8A98;
    case 92u: goto L_001D8AC0;
    case 93u: goto L_001D8AD4;
    case 94u: goto L_001D8AE8;
    case 95u: goto L_001D8B10;
    case 96u: goto L_001D8B5C;
    case 97u: goto L_001D8B70;
    case 98u: goto L_001D8BA0;
    case 99u: goto L_001D8BB0;
    case 100u: goto L_001D8BE8;
    case 101u: goto L_001D8BF4;
    case 102u: goto L_001D8C04;
    case 103u: goto L_001D8C1C;
    case 104u: goto L_001D8C28;
    case 105u: goto L_001D8C3C;
    case 106u: goto L_001D8C64;
    case 107u: goto L_001D8C74;
    case 108u: goto L_001D8CAC;
    case 109u: goto L_001D8CB8;
    case 110u: goto L_001D8CC8;
    case 111u: goto L_001D8CE0;
    case 112u: goto L_001D8CEC;
    case 113u: goto L_001D8D00;
    case 114u: goto L_001D8D20;
    case 115u: goto L_001D8D6C;
    case 116u: goto L_001D8DC4;
    case 117u: goto L_001D8DE4;
    case 118u: goto L_001D8E0C;
    case 119u: goto L_001D8E2C;
    case 120u: goto L_001D8E40;
    case 121u: goto L_001D8E4C;
    case 122u: goto L_001D8E98;
    case 123u: goto L_001D8ED4;
    case 124u: goto L_001D8F08;
    case 125u: goto L_001D8F48;
    case 126u: goto L_001D8F90;
    case 127u: goto L_001D8FA4;
    case 128u: goto L_001D8FD8;
    case 129u: goto L_001D8FEC;
    case 130u: goto L_001D9060;
    case 131u: goto L_001D90B8;
    case 132u: goto L_001D90E8;
    case 133u: goto L_001D9144;
    case 134u: goto L_001D9160;
    case 135u: goto L_001D9184;
    case 136u: goto L_001D91A0;
    case 137u: goto L_001D91C4;
    case 138u: goto L_001D91E0;
    case 139u: goto L_001D9204;
    case 140u: goto L_001D9228;
    case 141u: goto L_001D9244;
    case 142u: goto L_001D9260;
    case 143u: goto L_001D9278;
    case 144u: goto L_001D9290;
    case 145u: goto L_001D92A8;
    case 146u: goto L_001D92C0;
    case 147u: goto L_001D92D8;
    case 148u: goto L_001D92F0;
    case 149u: goto L_001D9308;
    case 150u: goto L_001D9318;
    case 151u: goto L_001D9344;
    case 152u: goto L_001D934C;
    case 153u: goto L_001D9364;
    case 154u: goto L_001D9384;
    case 155u: goto L_001D93A0;
    case 156u: goto L_001D93C0;
    case 157u: goto L_001D93DC;
    case 158u: goto L_001D93F4;
    case 159u: goto L_001D940C;
    case 160u: goto L_001D942C;
    case 161u: goto L_001D9448;
    case 162u: goto L_001D9468;
    case 163u: goto L_001D9484;
    case 164u: goto L_001D94A4;
    case 165u: goto L_001D94C0;
    case 166u: goto L_001D94D8;
    case 167u: goto L_001D94F0;
    case 168u: goto L_001D9510;
    case 169u: goto L_001D952C;
    case 170u: goto L_001D9548;
    case 171u: goto L_001D9564;
    case 172u: goto L_001D9580;
    case 173u: goto L_001D959C;
    case 174u: goto L_001D95B8;
    case 175u: goto L_001D95D4;
    case 176u: goto L_001D95F0;
    case 177u: goto L_001D960C;
    case 178u: goto L_001D962C;
    case 179u: goto L_001D9648;
    case 180u: goto L_001D9668;
    case 181u: goto L_001D9684;
    case 182u: goto L_001D96A0;
    case 183u: goto L_001D96A8;
    case 184u: goto L_001D96C0;
    case 185u: goto L_001D96DC;
    case 186u: goto L_001D9710;
    case 187u: goto L_001D9720;
    case 188u: goto L_001D9738;
    case 189u: goto L_001D9750;
    case 190u: goto L_001D9768;
    case 191u: goto L_001D9780;
    case 192u: goto L_001D9798;
    case 193u: goto L_001D97B0;
    case 194u: goto L_001D97C8;
    case 195u: goto L_001D9840;
    case 196u: goto L_001D98A0;
    case 197u: goto L_001D98A8;
    case 198u: goto L_001D98C8;
    case 199u: goto L_001D98D8;
    case 200u: goto L_001D98EC;
    case 201u: goto L_001D9908;
    case 202u: goto L_001D991C;
    case 203u: goto L_001D9938;
    case 204u: goto L_001D9968;
    case 205u: goto L_001D9990;
    case 206u: goto L_001D99B8;
    case 207u: goto L_001D99E0;
    case 208u: goto L_001D99F8;
    case 209u: goto L_001D9A14;
    case 210u: goto L_001D9A28;
    case 211u: goto L_001D9A58;
    case 212u: goto L_001D9A78;
    case 213u: goto L_001D9A88;
    case 214u: goto L_001D9AA8;
    case 215u: goto L_001D9AB8;
    case 216u: goto L_001D9AD0;
    case 217u: goto L_001D9AE0;
    case 218u: goto L_001D9AF8;
    case 219u: goto L_001D9B10;
    case 220u: goto L_001D9B40;
    case 221u: goto L_001D9B54;
    case 222u: goto L_001D9B6C;
    case 223u: goto L_001D9BB0;
    case 224u: goto L_001D9BC8;
    case 225u: goto L_001D9BDC;
    case 226u: goto L_001D9C78;
    case 227u: goto L_001D9CB8;
    case 228u: goto L_001D9CD4;
    case 229u: goto L_001D9CE8;
    case 230u: goto L_001D9CFC;
    case 231u: goto L_001D9D10;
    case 232u: goto L_001D9D24;
    case 233u: goto L_001D9D38;
    case 234u: goto L_001D9D4C;
    case 235u: goto L_001D9D60;
    case 236u: goto L_001D9D74;
    case 237u: goto L_001D9E08;
    case 238u: goto L_001D9E20;
    case 239u: goto L_001D9E50;
    case 240u: goto L_001D9E70;
    case 241u: goto L_001D9EA0;
    case 242u: goto L_001D9EB8;
    case 243u: goto L_001D9EE8;
    case 244u: goto L_001D9F08;
    case 245u: goto L_001D9F38;
    case 246u: goto L_001D9F60;
    case 247u: goto L_001D9FD8;
    case 248u: goto L_001D9FF8;
    case 249u: goto L_001DA028;
    case 250u: goto L_001DA0A8;
    case 251u: goto L_001DA0C8;
    case 252u: goto L_001DA140;
    case 253u: goto L_001DA160;
    case 254u: goto L_001DA1D8;
    case 255u: goto L_001DA1F8;
    case 256u: goto L_001DA268;
    case 257u: goto L_001DA288;
    case 258u: goto L_001DA300;
    case 259u: goto L_001DA320;
    case 260u: goto L_001DA390;
    case 261u: goto L_001DA3B0;
    case 262u: goto L_001DA428;
    case 263u: goto L_001DA448;
    case 264u: goto L_001DA4B8;
    case 265u: goto L_001DA4C8;
    case 266u: goto L_001DA4E0;
    case 267u: goto L_001DA4F8;
    case 268u: goto L_001DA504;
    case 269u: goto L_001DA528;
    case 270u: goto L_001DA540;
    case 271u: goto L_001DA570;
    case 272u: goto L_001DA58C;
    case 273u: goto L_001DA598;
    case 274u: goto L_001DA5D0;
    case 275u: goto L_001DA600;
    case 276u: goto L_001DA608;
    case 277u: goto L_001DA614;
    case 278u: goto L_001DA62C;
    case 279u: goto L_001DA638;
    case 280u: goto L_001DA654;
    case 281u: goto L_001DA664;
    case 282u: goto L_001DA6A8;
    case 283u: goto L_001DA6CC;
    case 284u: goto L_001DA6D8;
    case 285u: goto L_001DA6FC;
    case 286u: goto L_001DA720;
    case 287u: goto L_001DA748;
    case 288u: goto L_001DA780;
    case 289u: goto L_001DA7B0;
    case 290u: goto L_001DA7D4;
    case 291u: goto L_001DA7FC;
    case 292u: goto L_001DA830;
    case 293u: goto L_001DA840;
    case 294u: goto L_001DA870;
    case 295u: goto L_001DA884;
    case 296u: goto L_001DA894;
    case 297u: goto L_001DA8A4;
    case 298u: goto L_001DA8B8;
    case 299u: goto L_001DA8C0;
    case 300u: goto L_001DA8C8;
    case 301u: goto L_001DA8D0;
    case 302u: goto L_001DA8E0;
    case 303u: goto L_001DA8EC;
    case 304u: goto L_001DA8F4;
    case 305u: goto L_001DA8FC;
    case 306u: goto L_001DA918;
    case 307u: goto L_001DA928;
    case 308u: goto L_001DA944;
    case 309u: goto L_001DA954;
    case 310u: goto L_001DA960;
    case 311u: goto L_001DA968;
    case 312u: goto L_001DA970;
    case 313u: goto L_001DA978;
    case 314u: goto L_001DA988;
    case 315u: goto L_001DA994;
    case 316u: goto L_001DA99C;
    case 317u: goto L_001DA9A4;
    case 318u: goto L_001DA9B8;
    case 319u: goto L_001DA9C8;
    case 320u: goto L_001DA9E4;
    case 321u: goto L_001DA9F4;
    case 322u: goto L_001DAA00;
    case 323u: goto L_001DAA08;
    case 324u: goto L_001DAA10;
    case 325u: goto L_001DAA18;
    case 326u: goto L_001DAA28;
    case 327u: goto L_001DAA34;
    case 328u: goto L_001DAA3C;
    case 329u: goto L_001DAA44;
    case 330u: goto L_001DAA58;
    case 331u: goto L_001DAA68;
    case 332u: goto L_001DAA98;
    case 333u: goto L_001DAAAC;
    case 334u: goto L_001DAABC;
    case 335u: goto L_001DAACC;
    case 336u: goto L_001DAAE0;
    case 337u: goto L_001DAAE8;
    case 338u: goto L_001DAAF0;
    case 339u: goto L_001DAAF8;
    case 340u: goto L_001DAB08;
    case 341u: goto L_001DAB14;
    case 342u: goto L_001DAB1C;
    case 343u: goto L_001DAB24;
    case 344u: goto L_001DAB40;
    case 345u: goto L_001DAB50;
    case 346u: goto L_001DAB6C;
    case 347u: goto L_001DAB7C;
    case 348u: goto L_001DAB88;
    case 349u: goto L_001DAB90;
    case 350u: goto L_001DAB98;
    case 351u: goto L_001DABA0;
    case 352u: goto L_001DABB0;
    case 353u: goto L_001DABBC;
    case 354u: goto L_001DABC4;
    case 355u: goto L_001DABCC;
    case 356u: goto L_001DABE0;
    case 357u: goto L_001DAC00;
    case 358u: goto L_001DAC10;
    case 359u: goto L_001DAC2C;
    case 360u: goto L_001DAC3C;
    case 361u: goto L_001DAC48;
    case 362u: goto L_001DAC50;
    case 363u: goto L_001DAC58;
    case 364u: goto L_001DAC60;
    case 365u: goto L_001DAC70;
    case 366u: goto L_001DAC7C;
    case 367u: goto L_001DAC84;
    case 368u: goto L_001DAC8C;
    case 369u: goto L_001DACA0;
    case 370u: goto L_001DACC0;
    case 371u: goto L_001DACD0;
    case 372u: goto L_001DAD00;
    case 373u: goto L_001DAD14;
    case 374u: goto L_001DAD24;
    case 375u: goto L_001DAD34;
    case 376u: goto L_001DAD54;
    case 377u: goto L_001DAD5C;
    case 378u: goto L_001DAD64;
    case 379u: goto L_001DAD6C;
    case 380u: goto L_001DAD7C;
    case 381u: goto L_001DAD88;
    case 382u: goto L_001DAD90;
    case 383u: goto L_001DAD98;
    case 384u: goto L_001DADB0;
    case 385u: goto L_001DADC0;
    case 386u: goto L_001DADE4;
    case 387u: goto L_001DADF4;
    case 388u: goto L_001DADF8;
    case 389u: goto L_001DAE00;
    case 390u: goto L_001DAE0C;
    case 391u: goto L_001DAE20;
    case 392u: goto L_001DAE28;
    case 393u: goto L_001DAE30;
    case 394u: goto L_001DAE38;
    case 395u: goto L_001DAE48;
    case 396u: goto L_001DAE54;
    case 397u: goto L_001DAE5C;
    case 398u: goto L_001DAE64;
    case 399u: goto L_001DAE80;
    case 400u: goto L_001DAE98;
    case 401u: goto L_001DAEBC;
    case 402u: goto L_001DAED0;
    case 403u: goto L_001DAEE4;
    case 404u: goto L_001DAEF4;
    case 405u: goto L_001DAF04;
    case 406u: goto L_001DAF14;
    case 407u: goto L_001DAF24;
    case 408u: goto L_001DAF34;
    case 409u: goto L_001DAF44;
    case 410u: goto L_001DAF54;
    case 411u: goto L_001DAF70;
    case 412u: goto L_001DAF80;
    case 413u: goto L_001DAF90;
    case 414u: goto L_001DAFC8;
    case 415u: goto L_001DAFDC;
    case 416u: goto L_001DB000;
    case 417u: goto L_001DB028;
    case 418u: goto L_001DB050;
    case 419u: goto L_001DB088;
    case 420u: goto L_001DB0A8;
    case 421u: goto L_001DB0C0;
    case 422u: goto L_001DB0D0;
    case 423u: goto L_001DB0E0;
    case 424u: goto L_001DB140;
    case 425u: goto L_001DB160;
    case 426u: goto L_001DB170;
    case 427u: goto L_001DB180;
    case 428u: goto L_001DB214;
    case 429u: goto L_001DB238;
    case 430u: goto L_001DB260;
    case 431u: goto L_001DB2D0;
    case 432u: goto L_001DB2F8;
    case 433u: goto L_001DB360;
    case 434u: goto L_001DB380;
    case 435u: goto L_001DB3E0;
    case 436u: goto L_001DB424;
    case 437u: goto L_001DB448;
    case 438u: goto L_001DB480;
    case 439u: goto L_001DB4C4;
    case 440u: goto L_001DB4E8;
    case 441u: goto L_001DB520;
    case 442u: goto L_001DB538;
    case 443u: goto L_001DB560;
    case 444u: goto L_001DB57C;
    case 445u: goto L_001DB5B0;
    case 446u: goto L_001DB5E0;
    case 447u: goto L_001DB5F0;
    case 448u: goto L_001DB608;
    case 449u: goto L_001DB618;
    case 450u: goto L_001DB630;
    case 451u: goto L_001DB640;
    case 452u: goto L_001DB650;
    case 453u: goto L_001DB668;
    case 454u: goto L_001DB678;
    case 455u: goto L_001DB688;
    case 456u: goto L_001DB6B0;
    case 457u: goto L_001DB6BC;
    case 458u: goto L_001DB6CC;
    case 459u: goto L_001DB6DC;
    case 460u: goto L_001DB6E8;
    case 461u: goto L_001DB708;
    case 462u: goto L_001DB740;
    case 463u: goto L_001DB748;
    case 464u: goto L_001DB754;
    case 465u: goto L_001DB760;
    case 466u: goto L_001DB788;
    case 467u: goto L_001DB7CC;
    case 468u: goto L_001DB7F8;
    case 469u: goto L_001DB800;
    case 470u: goto L_001DB808;
    case 471u: goto L_001DB814;
    case 472u: goto L_001DB820;
    case 473u: goto L_001DB840;
    case 474u: goto L_001DB848;
    case 475u: goto L_001DB854;
    case 476u: goto L_001DB860;
    case 477u: goto L_001DB898;
    case 478u: goto L_001DB8D0;
    case 479u: goto L_001DB8F0;
    case 480u: goto L_001DB8F8;
    case 481u: goto L_001DB904;
    case 482u: goto L_001DB910;
    case 483u: goto L_001DB924;
    case 484u: goto L_001DB940;
    case 485u: goto L_001DB950;
    case 486u: goto L_001DB968;
    case 487u: goto L_001DB980;
    case 488u: goto L_001DB994;
    case 489u: goto L_001DB9A8;
    case 490u: goto L_001DB9B8;
    case 491u: goto L_001DB9D0;
    case 492u: goto L_001DB9E0;
    case 493u: goto L_001DB9F8;
    case 494u: goto L_001DBA08;
    case 495u: goto L_001DBA30;
    case 496u: goto L_001DBA48;
    case 497u: goto L_001DBA64;
    case 498u: goto L_001DBA70;
    case 499u: goto L_001DBA78;
    case 500u: goto L_001DBA8C;
    case 501u: goto L_001DBA9C;
    case 502u: goto L_001DBACC;
    case 503u: goto L_001DBAE0;
    case 504u: goto L_001DBAF4;
    case 505u: goto L_001DBB10;
    case 506u: goto L_001DBB34;
    case 507u: goto L_001DBB50;
    case 508u: goto L_001DBB58;
    case 509u: goto L_001DBB64;
    case 510u: goto L_001DBB70;
    case 511u: goto L_001DBB84;
    case 512u: goto L_001DBB8C;
    case 513u: goto L_001DBBB0;
    case 514u: goto L_001DBBFC;
    case 515u: goto L_001DBC20;
    case 516u: goto L_001DBC38;
    case 517u: goto L_001DBC48;
    case 518u: goto L_001DBC50;
    case 519u: goto L_001DBC5C;
    case 520u: goto L_001DBC80;
    case 521u: goto L_001DBCAC;
    case 522u: goto L_001DBCC8;
    case 523u: goto L_001DBCD8;
    case 524u: goto L_001DBD04;
    case 525u: goto L_001DBD18;
    case 526u: goto L_001DBD40;
    case 527u: goto L_001DBD50;
    case 528u: goto L_001DBD68;
    case 529u: goto L_001DBD78;
    case 530u: goto L_001DBDA0;
    case 531u: goto L_001DBDB0;
    case 532u: goto L_001DBDC0;
    case 533u: goto L_001DBDC8;
    case 534u: goto L_001DBDF0;
    case 535u: goto L_001DBE08;
    case 536u: goto L_001DBE18;
    case 537u: goto L_001DBE3C;
    case 538u: goto L_001DBE70;
    case 539u: goto L_001DBEA4;
    case 540u: goto L_001DBEB8;
    case 541u: goto L_001DBED8;
    case 542u: goto L_001DBEF4;
    case 543u: goto L_001DBF08;
    case 544u: goto L_001DBF10;
    case 545u: goto L_001DBF2C;
    case 546u: goto L_001DBF48;
    case 547u: goto L_001DBF5C;
    case 548u: goto L_001DBF78;
    case 549u: goto L_001DBF80;
    case 550u: goto L_001DBF98;
    case 551u: goto L_001DBFA8;
    case 552u: goto L_001DBFB8;
    case 553u: goto L_001DBFC8;
    case 554u: goto L_001DBFFC;
    default: bad_entry(c, 0x001D8000u); return;
    }
L_001D8000:
    set32(c.r[4], c.r[5].w[0] + 4040u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D800Cu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D800Cu) [[unlikely]] return; }
L_001D800C:
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[5], c.r[23].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 29676u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[16], c.r[16].w[0] + 20u);
    c.r[4].d[0] = c.r[22].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[23].d[0] = c.r[5].d[0];
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7FF8u | kUnwind; return; } [[clang::musttail]] return unit_0035(c, 612u, depth); } }
L_001D803C:
    c.r[3].d[0] = c.r[23].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[2], 0u + 5u);
    if (c.r[3].d[0] == 0) c.r[23].d[0] = c.r[2].d[0];
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[17], 0u + 20u);
    c.budget -= 5;
L_001D8050:
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 29676u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[5].w[0] + 4040u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x001D8078u);  goto L_001D807C; }
L_001D807C:
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8088u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D8088u) [[unlikely]] return; }
L_001D8088:
    mmi::mult(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[2].w[0] + 148u)));
    st32((c.r[29].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[5], c.r[21].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[21].d[0] = c.r[5].d[0];
    c.r[3].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8050u | kUnwind; return; } goto L_001D8050; } }
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[23].sd[0] <= 0;  if (t) { goto L_001D8388; } }
    c.budget -= 1;
L_001D80C8:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D80F8; } }
    c.budget -= 1;
L_001D80D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] - 29676u)));
    mmi::div(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x001D80ECu);  goto L_001D80F0; }
L_001D80F0:
    c.r[3].d[0] = c.hi.d[0];
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_001D80F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[2].w[0] + 4040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8108u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D8108u) [[unlikely]] return; }
L_001D8108:
    set32(c.r[3], 0u + 20u);
    set32(c.r[4], 0u + 1u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[3].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D80D8u | kUnwind; return; } goto L_001D80D8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[19], c.r[5].w[0] + 4040u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D813Cu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D813Cu) [[unlikely]] return; }
L_001D813C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[21].d[0];  if (t) { goto L_001D8248; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8158u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D8158u) [[unlikely]] return; }
L_001D8158:
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D81E0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D817Cu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D817Cu) [[unlikely]] return; }
L_001D817C:
    set32(c.r[16], ld32((c.r[2].w[0] + 52u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[30].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8190u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D8190u) [[unlikely]] return; }
L_001D8190:
    set32(c.r[17], ld32((c.r[2].w[0] + 148u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], c.r[20].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D81A4u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D81A4u) [[unlikely]] return; }
L_001D81A4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D81B4u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D81B4u) [[unlikely]] return; }
L_001D81B4:
    set32(c.r[8], ld32((c.r[17].w[0] + 16u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[18].w[0] + 64u));
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.f[13] = ld32((c.r[2].w[0] + 68u));
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D81D8u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001D81D8u) [[unlikely]] return; }
L_001D81D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8324; } }
L_001D81E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D81ECu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D81ECu) [[unlikely]] return; }
L_001D81EC:
    set32(c.r[16], ld32((c.r[2].w[0] + 52u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[30].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8200u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D8200u) [[unlikely]] return; }
L_001D8200:
    set32(c.r[17], ld32((c.r[2].w[0] + 148u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], c.r[18].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8214u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D8214u) [[unlikely]] return; }
L_001D8214:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8224u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D8224u) [[unlikely]] return; }
L_001D8224:
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 16u)));
    c.f[12] = ld32((c.r[18].w[0] + 64u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[2].w[0] + 68u));
    c.r[6].d[0] = c.r[6].d[0] | 49088ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8318; } }
L_001D8248:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8258u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D8258u) [[unlikely]] return; }
L_001D8258:
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D82CC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D827Cu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D827Cu) [[unlikely]] return; }
L_001D827C:
    set32(c.r[16], ld32((c.r[2].w[0] + 148u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8290u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D8290u) [[unlikely]] return; }
L_001D8290:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D82A0u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D82A0u) [[unlikely]] return; }
L_001D82A0:
    set32(c.r[8], ld32((c.r[16].w[0] + 16u)));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[7], 0u + 2u);
    c.f[12] = ld32((c.r[17].w[0] + 80u));
    c.f[13] = ld32((c.r[2].w[0] + 84u));
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D82C4u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001D82C4u) [[unlikely]] return; }
L_001D82C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8324; } }
L_001D82CC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D82D8u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D82D8u) [[unlikely]] return; }
L_001D82D8:
    set32(c.r[16], ld32((c.r[2].w[0] + 148u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D82ECu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D82ECu) [[unlikely]] return; }
L_001D82EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D82FCu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D82FCu) [[unlikely]] return; }
L_001D82FC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 16u)));
    c.f[12] = ld32((c.r[17].w[0] + 80u));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.r[6].d[0] = c.r[6].d[0] | 49088ull;
    c.f[13] = ld32((c.r[2].w[0] + 84u));
    c.budget -= 7;
L_001D8318:
    set32(c.r[7], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8324u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001D8324u) [[unlikely]] return; }
L_001D8324:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 4040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8334u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D8334u) [[unlikely]] return; }
L_001D8334:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 4040u);
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8354u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001D8354u) [[unlikely]] return; }
L_001D8354:
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[30], c.r[30].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] - 29676u)));
    c.r[3].d[0] = c.r[22].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    mmi::div(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x001D8374u);  goto L_001D8378; }
L_001D8378:
    c.r[4].d[0] = c.hi.d[0];
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D80C8u | kUnwind; return; } goto L_001D80C8; } }
L_001D8388:
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
L_001D83C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D83F4u);  if (depth < kMaxDepth) unit_009E(c, 88u, depth + 1u); else { c.pc = 0x00378E98u; return; } if (c.pc != 0x001D83F4u) [[unlikely]] return; }
L_001D83F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D83FCu);  if (depth < kMaxDepth) unit_0039(c, 85u, depth + 1u); else { c.pc = 0x001E4AE0u; return; } if (c.pc != 0x001D83FCu) [[unlikely]] return; }
L_001D83FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20668u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D840Cu);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x001D840Cu) [[unlikely]] return; }
L_001D840C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 4u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 15804u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == c.r[4].d[0];  if (t) { goto L_001D843C; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001D84D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8520; } }
L_001D843C:
    set32(c.r[4], 0u + 651u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8454u);  if (depth < kMaxDepth) unit_007E(c, 301u, depth + 1u); else { c.pc = 0x002FB1C0u; return; } if (c.pc != 0x001D8454u) [[unlikely]] return; }
L_001D8454:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], 0u + 599u);
    c.budget -= 7;
L_001D8470:
    st32((c.r[18].w[0] + 15804u), c.r[17].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8480u);  if (depth < kMaxDepth) unit_007E(c, 288u, depth + 1u); else { c.pc = 0x002FB070u; return; } if (c.pc != 0x001D8480u) [[unlikely]] return; }
L_001D8480:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8470u | kUnwind; return; } goto L_001D8470; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[19].w[0] + 19624u), c.r[2].w[0]);
    set32(c.r[16], 0u + 3u);
    st32((c.r[18].w[0] + 15804u), c.r[3].w[0]);
    c.budget -= 5;
L_001D84A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D84A8u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x001D84A8u) [[unlikely]] return; }
L_001D84A8:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D84B4u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x001D84B4u) [[unlikely]] return; }
L_001D84B4:
    set32(c.r[4], c.r[20].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D84C0u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001D84C0u) [[unlikely]] return; }
L_001D84C0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D84A0u | kUnwind; return; } goto L_001D84A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D85A8; } }
L_001D84D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[18].w[0] + 15804u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 19624u), c.r[4].w[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[16], 0u + 3u);
    c.budget -= 8;
L_001D84F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D84F8u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x001D84F8u) [[unlikely]] return; }
L_001D84F8:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8504u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x001D8504u) [[unlikely]] return; }
L_001D8504:
    set32(c.r[4], c.r[20].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8510u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001D8510u) [[unlikely]] return; }
L_001D8510:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D84F0u | kUnwind; return; } goto L_001D84F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D85A8; } }
L_001D8520:
    set32(c.r[4], 0u + 653u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8538u);  if (depth < kMaxDepth) unit_007E(c, 301u, depth + 1u); else { c.pc = 0x002FB1C0u; return; } if (c.pc != 0x001D8538u) [[unlikely]] return; }
L_001D8538:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], 0u + 599u);
    c.budget -= 6;
L_001D8550:
    st32((c.r[18].w[0] + 15804u), c.r[17].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8560u);  if (depth < kMaxDepth) unit_007E(c, 288u, depth + 1u); else { c.pc = 0x002FB070u; return; } if (c.pc != 0x001D8560u) [[unlikely]] return; }
L_001D8560:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8550u | kUnwind; return; } goto L_001D8550; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[19].w[0] + 19624u), c.r[2].w[0]);
    set32(c.r[16], 0u + 3u);
    st32((c.r[18].w[0] + 15804u), c.r[3].w[0]);
    c.budget -= 5;
L_001D8580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8588u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x001D8588u) [[unlikely]] return; }
L_001D8588:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8594u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x001D8594u) [[unlikely]] return; }
L_001D8594:
    set32(c.r[4], c.r[20].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D85A0u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001D85A0u) [[unlikely]] return; }
L_001D85A0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8580u | kUnwind; return; } goto L_001D8580; } }
L_001D85A8:
    st32((c.r[18].w[0] + 15804u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D85B4u);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x002FAF28u; return; } if (c.pc != 0x001D85B4u) [[unlikely]] return; }
L_001D85B4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D85C0u);  if (depth < kMaxDepth) unit_0019(c, 203u, depth + 1u); else { c.pc = 0x001663E0u; return; } if (c.pc != 0x001D85C0u) [[unlikely]] return; }
L_001D85C0:
    set32(c.r[2], 0u + 96u);
    set32(c.r[3], c.r[22].w[0] + 12224u);
    st32((c.r[21].w[0] + 10160u), c.r[2].w[0]);
    set32(c.r[4], 0u + 96u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D85DCu);  if (depth < kMaxDepth) unit_002E(c, 506u, depth + 1u); else { c.pc = 0x001BB8A8u; return; } if (c.pc != 0x001D85DCu) [[unlikely]] return; }
L_001D85DC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[23].w[0] - 29688u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D85ECu);  if (depth < kMaxDepth) unit_003B(c, 173u, depth + 1u); else { c.pc = 0x001EE858u; return; } if (c.pc != 0x001D85ECu) [[unlikely]] return; }
L_001D85EC:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D8620:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8644u);  if (depth < kMaxDepth) unit_009E(c, 166u, depth + 1u); else { c.pc = 0x0037A008u; return; } if (c.pc != 0x001D8644u) [[unlikely]] return; }
L_001D8644:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[8], c.r[3].w[0] - 5096u);
    ldl(c.r[2], (c.r[8].w[0] + 7u));
    ldr(c.r[2], (c.r[8].w[0]));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 11592u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8670u);  if (depth < kMaxDepth) unit_009E(c, 222u, depth + 1u); else { c.pc = 0x0037A918u; return; } if (c.pc != 0x001D8670u) [[unlikely]] return; }
L_001D8670:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8680u);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A938u; return; } if (c.pc != 0x001D8680u) [[unlikely]] return; }
L_001D8680:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8690u);  if (depth < kMaxDepth) unit_009E(c, 206u, depth + 1u); else { c.pc = 0x0037A748u; return; } if (c.pc != 0x001D8690u) [[unlikely]] return; }
L_001D8690:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 0ull;
    c.r[6].d[0] = 0ull | 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D86B4u);  if (depth < kMaxDepth) unit_009E(c, 199u, depth + 1u); else { c.pc = 0x0037A608u; return; } if (c.pc != 0x001D86B4u) [[unlikely]] return; }
L_001D86B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D86D8u);  if (depth < kMaxDepth) unit_009E(c, 199u, depth + 1u); else { c.pc = 0x0037A608u; return; } if (c.pc != 0x001D86D8u) [[unlikely]] return; }
L_001D86D8:
    c.r[9].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D86FCu);  if (depth < kMaxDepth) unit_009E(c, 199u, depth + 1u); else { c.pc = 0x0037A608u; return; } if (c.pc != 0x001D86FCu) [[unlikely]] return; }
L_001D86FC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 26920u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8714u);  if (depth < kMaxDepth) unit_009E(c, 197u, depth + 1u); else { c.pc = 0x0037A5D8u; return; } if (c.pc != 0x001D8714u) [[unlikely]] return; }
L_001D8714:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 26864u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D872Cu);  if (depth < kMaxDepth) unit_009E(c, 197u, depth + 1u); else { c.pc = 0x0037A5D8u; return; } if (c.pc != 0x001D872Cu) [[unlikely]] return; }
L_001D872C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 26744u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8744u);  if (depth < kMaxDepth) unit_009E(c, 197u, depth + 1u); else { c.pc = 0x0037A5D8u; return; } if (c.pc != 0x001D8744u) [[unlikely]] return; }
L_001D8744:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 26656u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D875Cu);  if (depth < kMaxDepth) unit_009E(c, 197u, depth + 1u); else { c.pc = 0x0037A5D8u; return; } if (c.pc != 0x001D875Cu) [[unlikely]] return; }
L_001D875C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 26632u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8774u);  if (depth < kMaxDepth) unit_009E(c, 197u, depth + 1u); else { c.pc = 0x0037A5D8u; return; } if (c.pc != 0x001D8774u) [[unlikely]] return; }
L_001D8774:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 26792u);
    set32(c.r[5], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D878Cu);  if (depth < kMaxDepth) unit_009E(c, 197u, depth + 1u); else { c.pc = 0x0037A5D8u; return; } if (c.pc != 0x001D878Cu) [[unlikely]] return; }
L_001D878C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 26712u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D87A4u);  if (depth < kMaxDepth) unit_009E(c, 197u, depth + 1u); else { c.pc = 0x0037A5D8u; return; } if (c.pc != 0x001D87A4u) [[unlikely]] return; }
L_001D87A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D87B8u);  if (depth < kMaxDepth) unit_009E(c, 197u, depth + 1u); else { c.pc = 0x0037A5D8u; return; } if (c.pc != 0x001D87B8u) [[unlikely]] return; }
L_001D87B8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 26816u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D87D0u);  if (depth < kMaxDepth) unit_009E(c, 197u, depth + 1u); else { c.pc = 0x0037A5D8u; return; } if (c.pc != 0x001D87D0u) [[unlikely]] return; }
L_001D87D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D87E0u);  if (depth < kMaxDepth) unit_009E(c, 210u, depth + 1u); else { c.pc = 0x0037A790u; return; } if (c.pc != 0x001D87E0u) [[unlikely]] return; }
L_001D87E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D87F0u);  if (depth < kMaxDepth) unit_009E(c, 212u, depth + 1u); else { c.pc = 0x0037A7B0u; return; } if (c.pc != 0x001D87F0u) [[unlikely]] return; }
L_001D87F0:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8804u);  if (depth < kMaxDepth) unit_009E(c, 140u, depth + 1u); else { c.pc = 0x00379AA8u; return; } if (c.pc != 0x001D8804u) [[unlikely]] return; }
L_001D8804:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8814u);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A938u; return; } if (c.pc != 0x001D8814u) [[unlikely]] return; }
L_001D8814:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 15168u);
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D883Cu);  if (depth < kMaxDepth) unit_009E(c, 199u, depth + 1u); else { c.pc = 0x0037A608u; return; } if (c.pc != 0x001D883Cu) [[unlikely]] return; }
L_001D883C:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 16456u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8864u);  if (depth < kMaxDepth) unit_009E(c, 199u, depth + 1u); else { c.pc = 0x0037A608u; return; } if (c.pc != 0x001D8864u) [[unlikely]] return; }
L_001D8864:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[7], c.r[7].w[0] + 17768u);
    set32(c.r[9], c.r[9].w[0] - 16992u);
    set32(c.r[10], c.r[10].w[0] - 16976u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8894u);  if (depth < kMaxDepth) unit_009E(c, 199u, depth + 1u); else { c.pc = 0x0037A608u; return; } if (c.pc != 0x001D8894u) [[unlikely]] return; }
L_001D8894:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[7], c.r[7].w[0] - 16264u);
    set32(c.r[9], c.r[9].w[0] - 16072u);
    set32(c.r[10], c.r[10].w[0] - 15768u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D88C4u);  if (depth < kMaxDepth) unit_009E(c, 199u, depth + 1u); else { c.pc = 0x0037A608u; return; } if (c.pc != 0x001D88C4u) [[unlikely]] return; }
L_001D88C4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00140000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00140000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00140000u);
    set32(c.r[7], c.r[7].w[0] + 9528u);
    set32(c.r[9], c.r[9].w[0] + 5880u);
    set32(c.r[10], c.r[10].w[0] + 9576u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D88F4u);  if (depth < kMaxDepth) unit_009E(c, 199u, depth + 1u); else { c.pc = 0x0037A608u; return; } if (c.pc != 0x001D88F4u) [[unlikely]] return; }
L_001D88F4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 18432u);
    set32(c.r[9], c.r[9].w[0] - 16512u);
    set32(c.r[10], c.r[10].w[0] - 16488u);
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8924u);  if (depth < kMaxDepth) unit_009E(c, 199u, depth + 1u); else { c.pc = 0x0037A608u; return; } if (c.pc != 0x001D8924u) [[unlikely]] return; }
L_001D8924:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[17], c.r[17].w[0] - 17376u);
    set32(c.r[18], c.r[18].w[0] - 17488u);
    set32(c.r[19], c.r[19].w[0] - 17208u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8960u);  if (depth < kMaxDepth) unit_009E(c, 199u, depth + 1u); else { c.pc = 0x0037A608u; return; } if (c.pc != 0x001D8960u) [[unlikely]] return; }
L_001D8960:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 13256u);
    set32(c.r[9], c.r[9].w[0] - 13184u);
    set32(c.r[10], c.r[10].w[0] - 13168u);
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8990u);  if (depth < kMaxDepth) unit_009E(c, 199u, depth + 1u); else { c.pc = 0x0037A608u; return; } if (c.pc != 0x001D8990u) [[unlikely]] return; }
L_001D8990:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D89B4u);  if (depth < kMaxDepth) unit_009E(c, 199u, depth + 1u); else { c.pc = 0x0037A608u; return; } if (c.pc != 0x001D89B4u) [[unlikely]] return; }
L_001D89B4:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[17], c.r[17].w[0] - 18112u);
    set32(c.r[18], c.r[18].w[0] + 13024u);
    set32(c.r[19], c.r[19].w[0] - 18072u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D89F0u);  if (depth < kMaxDepth) unit_009E(c, 199u, depth + 1u); else { c.pc = 0x0037A608u; return; } if (c.pc != 0x001D89F0u) [[unlikely]] return; }
L_001D89F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8A14u);  if (depth < kMaxDepth) unit_009E(c, 199u, depth + 1u); else { c.pc = 0x0037A608u; return; } if (c.pc != 0x001D8A14u) [[unlikely]] return; }
L_001D8A14:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 18u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8A38u);  if (depth < kMaxDepth) unit_009E(c, 199u, depth + 1u); else { c.pc = 0x0037A608u; return; } if (c.pc != 0x001D8A38u) [[unlikely]] return; }
L_001D8A38:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[7], c.r[7].w[0] - 18008u);
    set32(c.r[9], c.r[9].w[0] + 13360u);
    set32(c.r[10], c.r[10].w[0] - 17968u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 19u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8A68u);  if (depth < kMaxDepth) unit_009E(c, 199u, depth + 1u); else { c.pc = 0x0037A608u; return; } if (c.pc != 0x001D8A68u) [[unlikely]] return; }
L_001D8A68:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[9], c.r[9].w[0] - 17848u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 17928u);
    set32(c.r[10], c.r[10].w[0] - 17648u);
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8A98u);  if (depth < kMaxDepth) unit_009E(c, 199u, depth + 1u); else { c.pc = 0x0037A608u; return; } if (c.pc != 0x001D8A98u) [[unlikely]] return; }
L_001D8A98:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] - 16472u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 21u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8AC0u);  if (depth < kMaxDepth) unit_009E(c, 199u, depth + 1u); else { c.pc = 0x0037A608u; return; } if (c.pc != 0x001D8AC0u) [[unlikely]] return; }
L_001D8AC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8AD4u);  if (depth < kMaxDepth) unit_0037(c, 160u, depth + 1u); else { c.pc = 0x001DD280u; return; } if (c.pc != 0x001D8AD4u) [[unlikely]] return; }
L_001D8AD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 1700u);
    set32(c.r[6], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8AE8u);  if (depth < kMaxDepth) unit_009E(c, 174u, depth + 1u); else { c.pc = 0x0037A170u; return; } if (c.pc != 0x001D8AE8u) [[unlikely]] return; }
L_001D8AE8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1696u), 0u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D8B10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[19].w[0] - 26348u)));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[19].w[0] - 26348u), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001D8D00; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    set32(c.r[18], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8B5Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D8B5Cu) [[unlikely]] return; }
L_001D8B5C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8B70u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001D8B70u) [[unlikely]] return; }
L_001D8B70:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8C44; } }
    set32(c.r[2], 0u + 60u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[19].w[0] - 26348u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0] - 26368u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8BA0u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001D8BA0u) [[unlikely]] return; }
L_001D8BA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8BB0u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001D8BB0u) [[unlikely]] return; }
L_001D8BB0:
    st8((c.r[17].w[0] + 10090u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[16].w[0] + 12992u);
    st8((c.r[16].w[0] + 10090u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[4], c.r[17].w[0] + 12992u);
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    st32((c.r[17].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[17].w[0] + 132u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    st32((c.r[17].w[0] + 136u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 148u));
    st32((c.r[17].w[0] + 148u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8BE8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001D8BE8u) [[unlikely]] return; }
L_001D8BE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8BF4u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001D8BF4u) [[unlikely]] return; }
L_001D8BF4:
    c.f[12] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8C04u);  if (depth < kMaxDepth) unit_0089(c, 195u, depth + 1u); else { c.pc = 0x00326150u; return; } if (c.pc != 0x001D8C04u) [[unlikely]] return; }
L_001D8C04:
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8C1Cu);  if (depth < kMaxDepth) unit_008E(c, 289u, depth + 1u); else { c.pc = 0x0033B270u; return; } if (c.pc != 0x001D8C1Cu) [[unlikely]] return; }
L_001D8C1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8C28u);  if (depth < kMaxDepth) unit_0019(c, 157u, depth + 1u); else { c.pc = 0x00165C70u; return; } if (c.pc != 0x001D8C28u) [[unlikely]] return; }
L_001D8C28:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8C3Cu);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x001D8C3Cu) [[unlikely]] return; }
L_001D8C3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8D00; } }
L_001D8C44:
    set32(c.r[2], 0u + 60u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[19].w[0] - 26348u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] - 26368u), c.r[18].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8C64u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001D8C64u) [[unlikely]] return; }
L_001D8C64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8C74u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001D8C74u) [[unlikely]] return; }
L_001D8C74:
    st8((c.r[16].w[0] + 10090u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[17].w[0] + 12992u);
    st8((c.r[17].w[0] + 10090u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[4], c.r[16].w[0] + 12992u);
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    st32((c.r[16].w[0] + 132u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 148u));
    st32((c.r[16].w[0] + 148u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8CACu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001D8CACu) [[unlikely]] return; }
L_001D8CAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8CB8u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001D8CB8u) [[unlikely]] return; }
L_001D8CB8:
    c.f[12] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8CC8u);  if (depth < kMaxDepth) unit_0089(c, 195u, depth + 1u); else { c.pc = 0x00326150u; return; } if (c.pc != 0x001D8CC8u) [[unlikely]] return; }
L_001D8CC8:
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8CE0u);  if (depth < kMaxDepth) unit_008E(c, 289u, depth + 1u); else { c.pc = 0x0033B270u; return; } if (c.pc != 0x001D8CE0u) [[unlikely]] return; }
L_001D8CE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8CECu);  if (depth < kMaxDepth) unit_0019(c, 157u, depth + 1u); else { c.pc = 0x00165C70u; return; } if (c.pc != 0x001D8CECu) [[unlikely]] return; }
L_001D8CEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8D00u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x001D8D00u) [[unlikely]] return; }
L_001D8D00:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D8D20:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.budget -= 13;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001D8ED8; } }
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 7694u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_001D8ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8D6Cu);  if (depth < kMaxDepth) unit_0089(c, 168u, depth + 1u); else { c.pc = 0x00325DD8u; return; } if (c.pc != 0x001D8D6Cu) [[unlikely]] return; }
L_001D8D6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8ED8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 104u)));
    set32(c.r[18], 0u + 268u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[21], c.r[2].w[0] - 1u);
    set32(c.r[17], c.r[17].w[0] - 14152u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[18].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[6], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8DC4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001D8DC4u) [[unlikely]] return; }
L_001D8DC4:
    set32(c.r[19], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8DE4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001D8DE4u) [[unlikely]] return; }
L_001D8DE4:
    set32(c.r[17], c.r[17].w[0] + c.r[18].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 60u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8E0Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001D8E0Cu) [[unlikely]] return; }
L_001D8E0C:
    set32(c.r[17], c.r[29].w[0] + 32u);
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8E2Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001D8E2Cu) [[unlikely]] return; }
L_001D8E2C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8E40u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001D8E40u) [[unlikely]] return; }
L_001D8E40:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8E4Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x001D8E4Cu) [[unlikely]] return; }
L_001D8E4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D8EA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 26344u);
    set32(c.r[18], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D8ED8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 4904u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8E98u);  if (depth < kMaxDepth) unit_0049(c, 269u, depth + 1u); else { c.pc = 0x002272B8u; return; } if (c.pc != 0x001D8E98u) [[unlikely]] return; }
L_001D8E98:
    st32((c.r[18].w[0]), c.r[22].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8ED8; } }
L_001D8EA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 26344u);
    set32(c.r[18], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[22].d[0];  if (t) { goto L_001D8ED8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 4904u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8ED4u);  if (depth < kMaxDepth) unit_0049(c, 273u, depth + 1u); else { c.pc = 0x00227358u; return; } if (c.pc != 0x001D8ED4u) [[unlikely]] return; }
L_001D8ED4:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 1;
L_001D8ED8:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D8F08:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[2].w[0] - 11584u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 16;
L_001D8F48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D9018; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D9018; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D9018; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 13196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D9018; } }
    set32(c.r[17], c.r[22].w[0] + 27456u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 11264u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8F90u);  if (depth < kMaxDepth) unit_0036(c, 445u, depth + 1u); else { c.pc = 0x001DB5B0u; return; } if (c.pc != 0x001D8F90u) [[unlikely]] return; }
L_001D8F90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001D8FB8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8FA4u);  if (depth < kMaxDepth) unit_0036(c, 445u, depth + 1u); else { c.pc = 0x001DB5B0u; return; } if (c.pc != 0x001D8FA4u) [[unlikely]] return; }
L_001D8FA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001D8FB8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8FBC; } }
L_001D8FB8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D8FBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001D9018; } }
    set32(c.r[17], c.r[21].w[0] - 24832u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 11264u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8FD8u);  if (depth < kMaxDepth) unit_0036(c, 445u, depth + 1u); else { c.pc = 0x001DB5B0u; return; } if (c.pc != 0x001D8FD8u) [[unlikely]] return; }
L_001D8FD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001D9000; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8FECu);  if (depth < kMaxDepth) unit_0036(c, 445u, depth + 1u); else { c.pc = 0x001DB5B0u; return; } if (c.pc != 0x001D8FECu) [[unlikely]] return; }
L_001D8FEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001D9000; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D9004; } }
L_001D9000:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D9004:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001D9018; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D9030; } }
L_001D9018:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 13248u);
    c.r[2].d[0] = c.r[20].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8F48u | kUnwind; return; } goto L_001D8F48; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D9030:
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
L_001D9060:
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
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001D96DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D96C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 14u);
    set32(c.r[2], c.r[2].w[0] + 2056u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 6;
L_001D90B8:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 132u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D90B8u | kUnwind; return; } goto L_001D90B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 4040u);
    set32(c.r[16], c.r[16].w[0] + 10304u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D90E8u);  if (depth < kMaxDepth) unit_0036(c, 57u, depth + 1u); else { c.pc = 0x001D8620u; return; } if (c.pc != 0x001D90E8u) [[unlikely]] return; }
L_001D90E8:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[18].w[0] + 7792u), 0u);
    set32(c.r[4], c.r[18].w[0] + 7792u);
    set32(c.r[2], c.r[2].w[0] + 29808u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[4].w[0] + 2504u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 3816u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[30], c.r[6].w[0] + 10440u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[17], c.r[17].w[0] + 10320u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[4].w[0] + 28u), 0u);
    set32(c.r[18], c.r[18].w[0] + 10336u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9144u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D9144u) [[unlikely]] return; }
L_001D9144:
    set32(c.r[19], c.r[19].w[0] + 10376u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5832u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9160u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D9160u) [[unlikely]] return; }
L_001D9160:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] - 3864u);
    set32(c.r[20], c.r[20].w[0] + 10392u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9184u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D9184u) [[unlikely]] return; }
L_001D9184:
    set32(c.r[21], c.r[21].w[0] + 10408u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5816u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D91A0u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D91A0u) [[unlikely]] return; }
L_001D91A0:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] - 3912u);
    set32(c.r[22], c.r[22].w[0] + 10424u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D91C4u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D91C4u) [[unlikely]] return; }
L_001D91C4:
    set32(c.r[23], c.r[23].w[0] + 10464u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5800u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D91E0u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D91E0u) [[unlikely]] return; }
L_001D91E0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], c.r[2].w[0] + 10352u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[2].w[0] + 10352u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9204u);  if (depth < kMaxDepth) unit_009E(c, 327u, depth + 1u); else { c.pc = 0x0037B4A0u; return; } if (c.pc != 0x001D9204u) [[unlikely]] return; }
L_001D9204:
    set32(c.r[16], c.r[16].w[0] + 10544u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] - 3960u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 10608u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9228u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D9228u) [[unlikely]] return; }
L_001D9228:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5288u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9244u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D9244u) [[unlikely]] return; }
L_001D9244:
    set32(c.r[18], c.r[18].w[0] + 10744u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[20].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] - 4008u);
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9260u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D9260u) [[unlikely]] return; }
L_001D9260:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5272u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9278u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D9278u) [[unlikely]] return; }
L_001D9278:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[21].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] - 4056u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9290u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D9290u) [[unlikely]] return; }
L_001D9290:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5248u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D92A8u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D92A8u) [[unlikely]] return; }
L_001D92A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[22].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] - 4104u);
    st32((c.r[22].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D92C0u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D92C0u) [[unlikely]] return; }
L_001D92C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5232u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D92D8u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D92D8u) [[unlikely]] return; }
L_001D92D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[30].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] - 4152u);
    st32((c.r[30].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D92F0u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D92F0u) [[unlikely]] return; }
L_001D92F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5208u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9308u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D9308u) [[unlikely]] return; }
L_001D9308:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[3].w[0] + 10456u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9318u);  if (depth < kMaxDepth) unit_009A(c, 228u, depth + 1u); else { c.pc = 0x0036B258u; return; } if (c.pc != 0x001D9318u) [[unlikely]] return; }
L_001D9318:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 4200u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[4].w[0] + 10456u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 4248u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[23].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[23].w[0] + 4u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9344u);  if (depth < kMaxDepth) unit_0037(c, 87u, depth + 1u); else { c.pc = 0x001DCA48u; return; } if (c.pc != 0x001D9344u) [[unlikely]] return; }
L_001D9344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D934Cu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D934Cu) [[unlikely]] return; }
L_001D934C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5184u);
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9364u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D9364u) [[unlikely]] return; }
L_001D9364:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 10512u);
    set32(c.r[2], c.r[2].w[0] - 4296u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9384u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D9384u) [[unlikely]] return; }
L_001D9384:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5112u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] + 10512u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D93A0u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D93A0u) [[unlikely]] return; }
L_001D93A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 10528u);
    set32(c.r[2], c.r[2].w[0] - 4344u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D93C0u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D93C0u) [[unlikely]] return; }
L_001D93C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5088u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] + 10528u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D93DCu);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D93DCu) [[unlikely]] return; }
L_001D93DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] - 4392u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D93F4u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D93F4u) [[unlikely]] return; }
L_001D93F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5072u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D940Cu);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D940Cu) [[unlikely]] return; }
L_001D940C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 10560u);
    set32(c.r[2], c.r[2].w[0] - 4440u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D942Cu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D942Cu) [[unlikely]] return; }
L_001D942C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5056u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] + 10560u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9448u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D9448u) [[unlikely]] return; }
L_001D9448:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 10576u);
    set32(c.r[2], c.r[2].w[0] - 4488u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9468u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D9468u) [[unlikely]] return; }
L_001D9468:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5040u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] + 10576u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9484u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D9484u) [[unlikely]] return; }
L_001D9484:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 10592u);
    set32(c.r[2], c.r[2].w[0] - 4536u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D94A4u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D94A4u) [[unlikely]] return; }
L_001D94A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5024u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] + 10592u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D94C0u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D94C0u) [[unlikely]] return; }
L_001D94C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] - 4584u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D94D8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D94D8u) [[unlikely]] return; }
L_001D94D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5008u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D94F0u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D94F0u) [[unlikely]] return; }
L_001D94F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 10624u);
    set32(c.r[2], c.r[2].w[0] - 4632u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9510u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D9510u) [[unlikely]] return; }
L_001D9510:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 4992u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] + 10624u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D952Cu);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D952Cu) [[unlikely]] return; }
L_001D952C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 10640u);
    set32(c.r[2], c.r[2].w[0] - 4656u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9548u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D9548u) [[unlikely]] return; }
L_001D9548:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 4976u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] + 10640u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9564u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x001D9564u) [[unlikely]] return; }
L_001D9564:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 10656u);
    set32(c.r[2], c.r[2].w[0] - 4680u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9580u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D9580u) [[unlikely]] return; }
L_001D9580:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 4968u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] + 10656u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D959Cu);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x001D959Cu) [[unlikely]] return; }
L_001D959C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 10672u);
    set32(c.r[2], c.r[2].w[0] - 4704u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D95B8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D95B8u) [[unlikely]] return; }
L_001D95B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 4960u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] + 10672u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D95D4u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x001D95D4u) [[unlikely]] return; }
L_001D95D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 10688u);
    set32(c.r[2], c.r[2].w[0] - 4728u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D95F0u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D95F0u) [[unlikely]] return; }
L_001D95F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 4952u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] + 10688u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D960Cu);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x001D960Cu) [[unlikely]] return; }
L_001D960C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 10704u);
    set32(c.r[2], c.r[2].w[0] - 4776u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D962Cu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D962Cu) [[unlikely]] return; }
L_001D962C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 4936u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] + 10704u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9648u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D9648u) [[unlikely]] return; }
L_001D9648:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 10720u);
    set32(c.r[2], c.r[2].w[0] - 4824u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9668u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D9668u) [[unlikely]] return; }
L_001D9668:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 4920u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] + 10720u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9684u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D9684u) [[unlikely]] return; }
L_001D9684:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 4872u);
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D96A0u);  if (depth < kMaxDepth) unit_0037(c, 177u, depth + 1u); else { c.pc = 0x001DD488u; return; } if (c.pc != 0x001D96A0u) [[unlikely]] return; }
L_001D96A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D96A8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001D96A8u) [[unlikely]] return; }
L_001D96A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 4888u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D96C0u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001D96C0u) [[unlikely]] return; }
L_001D96C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D96DC; } }
L_001D96C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 7792u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D96DCu);  if (depth < kMaxDepth) unit_0066(c, 105u, depth + 1u); else { c.pc = 0x00298E80u; return; } if (c.pc != 0x001D96DCu) [[unlikely]] return; }
L_001D96DC:
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
L_001D9710:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9720:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19360u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9738:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19364u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9750:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19368u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9768:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19372u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9780:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19376u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9798:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19380u), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D97B0:
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 19384u), c.f[12]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D97C8:
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
L_001D9840:
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
L_001D98A0:
    set32(c.r[4], c.r[4].w[0] + 21548u);
    set32(c.r[2], 0u + 499u);
    c.budget -= 2;
L_001D98A8:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D98A8u | kUnwind; return; } goto L_001D98A8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D98C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7792u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D98D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 82u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D98ECu);  if (depth < kMaxDepth) unit_0030(c, 139u, depth + 1u); else { c.pc = 0x001C1A20u; return; } if (c.pc != 0x001D98ECu) [[unlikely]] return; }
L_001D98EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] - 32072u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9908:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 88u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D991Cu);  if (depth < kMaxDepth) unit_0030(c, 139u, depth + 1u); else { c.pc = 0x001C1A20u; return; } if (c.pc != 0x001D991Cu) [[unlikely]] return; }
L_001D991C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] - 32076u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9938:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 10u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[7], 0u + 60u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 23040u);
    set32(c.r[5], 0u + 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9968u);  if (depth < kMaxDepth) unit_0085(c, 277u, depth + 1u); else { c.pc = 0x00316F58u; return; } if (c.pc != 0x001D9968u) [[unlikely]] return; }
L_001D9968:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFA860000u);
    set32(c.r[6], c.r[6].w[0] - 26440u);
    set32(c.r[7], c.r[7].w[0] - 26408u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[8].d[0] = c.r[8].d[0] | 45113ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9990u);  if (depth < kMaxDepth) unit_0085(c, 282u, depth + 1u); else { c.pc = 0x003170B0u; return; } if (c.pc != 0x001D9990u) [[unlikely]] return; }
L_001D9990:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFA860000u);
    set32(c.r[6], c.r[6].w[0] - 26424u);
    set32(c.r[7], c.r[7].w[0] - 26360u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[8].d[0] = c.r[8].d[0] | 45113ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D99B8u);  if (depth < kMaxDepth) unit_0085(c, 282u, depth + 1u); else { c.pc = 0x003170B0u; return; } if (c.pc != 0x001D99B8u) [[unlikely]] return; }
L_001D99B8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFA860000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 26408u);
    set32(c.r[7], c.r[7].w[0] + 7120u);
    set32(c.r[5], 0u + 7u);
    c.r[8].d[0] = c.r[8].d[0] | 45113ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D99E0u);  if (depth < kMaxDepth) unit_0085(c, 282u, depth + 1u); else { c.pc = 0x003170B0u; return; } if (c.pc != 0x001D99E0u) [[unlikely]] return; }
L_001D99E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D99F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 59u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9A14u);  if (depth < kMaxDepth) unit_007E(c, 301u, depth + 1u); else { c.pc = 0x002FB1C0u; return; } if (c.pc != 0x001D9A14u) [[unlikely]] return; }
L_001D9A14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9A28:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[17], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[16].w[0] + 14664u), 0u);
    st32((c.r[2].w[0] + 19624u), c.r[17].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9A58u);  if (depth < kMaxDepth) unit_0035(c, 485u, depth + 1u); else { c.pc = 0x001D73C8u; return; } if (c.pc != 0x001D9A58u) [[unlikely]] return; }
L_001D9A58:
    st32((c.r[16].w[0] + 14664u), c.r[17].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9A78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9A88u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001D9A88u) [[unlikely]] return; }
L_001D9A88:
    set32(c.r[2], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[4], 0u + 4u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[3].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9AA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9AB8u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001D9AB8u) [[unlikely]] return; }
L_001D9AB8:
    set32(c.r[3], 0u + 4u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9AD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9AE0u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001D9AE0u) [[unlikely]] return; }
L_001D9AE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 224u), 0u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9AF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9B10u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001D9B10u) [[unlikely]] return; }
L_001D9B10:
    set32(c.r[3], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[5], 0u + 4u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    if (c.r[4].d[0] == 0) c.r[3].d[0] = c.r[5].d[0];
    st32((c.r[2].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9B40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9B54u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001D9B54u) [[unlikely]] return; }
L_001D9B54:
    set32(c.r[16], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[3], 0u + 4u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9B6Cu);  if (depth < kMaxDepth) unit_0023(c, 239u, depth + 1u); else { c.pc = 0x0018F068u; return; } if (c.pc != 0x001D9B6Cu) [[unlikely]] return; }
L_001D9B6C:
    set32(c.r[3], 0u + 20u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 17320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[1].w[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9BC8u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001D9BC8u) [[unlikely]] return; }
L_001D9BC8:
    set32(c.r[3], ld32((c.r[2].w[0] + 224u)));
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9BDCu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001D9BDCu) [[unlikely]] return; }
L_001D9BDC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9C0C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D9C4C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9C2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D9C4C; } }
L_001D9C0C:
    set32(c.r[3], 0u + 20u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 17320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D9C64; } }
L_001D9C2C:
    set32(c.r[3], 0u + 20u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 17320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D9C64; } }
L_001D9C4C:
    set32(c.r[3], 0u + 20u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 17320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
L_001D9C64:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9C78:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 88u), c.f[29]);
    set32(c.r[4], c.r[4].w[0] + 12224u);
    st32((c.r[29].w[0] + 80u), c.f[28]);
    st32((c.r[29].w[0] + 72u), c.f[27]);
    st32((c.r[29].w[0] + 64u), c.f[26]);
    st32((c.r[29].w[0] + 56u), c.f[25]);
    st32((c.r[29].w[0] + 48u), c.f[24]);
    st32((c.r[29].w[0] + 40u), c.f[23]);
    st32((c.r[29].w[0] + 32u), c.f[22]);
    st32((c.r[29].w[0] + 24u), c.f[21]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9CB8u);  if (depth < kMaxDepth) unit_0038(c, 556u, depth + 1u); else { c.pc = 0x001E3F80u; return; } if (c.pc != 0x001D9CB8u) [[unlikely]] return; }
L_001D9CB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42780000u);
    c.f[20] = c.r[1].w[0];
    c.f[29] = c.r[2].w[0];
    c.f[29] = fp::cvt_s_w(c.f[29]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9CD4u);  if (depth < kMaxDepth) unit_0026(c, 132u, depth + 1u); else { c.pc = 0x0019AE20u; return; } if (c.pc != 0x001D9CD4u) [[unlikely]] return; }
L_001D9CD4:
    c.f[27] = c.r[2].w[0];
    c.f[27] = fp::cvt_s_w(c.f[27]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9CE8u);  if (depth < kMaxDepth) unit_0026(c, 168u, depth + 1u); else { c.pc = 0x0019B120u; return; } if (c.pc != 0x001D9CE8u) [[unlikely]] return; }
L_001D9CE8:
    c.f[28] = c.r[2].w[0];
    c.f[28] = fp::cvt_s_w(c.f[28]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9CFCu);  if (depth < kMaxDepth) unit_0026(c, 174u, depth + 1u); else { c.pc = 0x0019B258u; return; } if (c.pc != 0x001D9CFCu) [[unlikely]] return; }
L_001D9CFC:
    c.f[26] = c.r[2].w[0];
    c.f[26] = fp::cvt_s_w(c.f[26]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9D10u);  if (depth < kMaxDepth) unit_0028(c, 169u, depth + 1u); else { c.pc = 0x001A25E0u; return; } if (c.pc != 0x001D9D10u) [[unlikely]] return; }
L_001D9D10:
    c.f[25] = c.r[2].w[0];
    c.f[25] = fp::cvt_s_w(c.f[25]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9D24u);  if (depth < kMaxDepth) unit_0028(c, 165u, depth + 1u); else { c.pc = 0x001A2570u; return; } if (c.pc != 0x001D9D24u) [[unlikely]] return; }
L_001D9D24:
    c.f[24] = c.r[2].w[0];
    c.f[24] = fp::cvt_s_w(c.f[24]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9D38u);  if (depth < kMaxDepth) unit_0028(c, 163u, depth + 1u); else { c.pc = 0x001A2550u; return; } if (c.pc != 0x001D9D38u) [[unlikely]] return; }
L_001D9D38:
    c.f[23] = c.r[2].w[0];
    c.f[23] = fp::cvt_s_w(c.f[23]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9D4Cu);  if (depth < kMaxDepth) unit_0028(c, 156u, depth + 1u); else { c.pc = 0x001A2490u; return; } if (c.pc != 0x001D9D4Cu) [[unlikely]] return; }
L_001D9D4C:
    c.f[22] = c.r[2].w[0];
    c.f[22] = fp::cvt_s_w(c.f[22]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9D60u);  if (depth < kMaxDepth) unit_0028(c, 157u, depth + 1u); else { c.pc = 0x001A24A0u; return; } if (c.pc != 0x001D9D60u) [[unlikely]] return; }
L_001D9D60:
    c.f[21] = c.r[2].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9D74u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001D9D74u) [[unlikely]] return; }
L_001D9D74:
    set32(c.r[3], ld32((c.r[2].w[0] + 136u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D9D94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = ld32((c.r[2].w[0] + 15956u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::add(c.f[0], c.f[20]);
    c.budget -= 4;
L_001D9D94:
    c.f[0] = fp::add(c.f[29], c.f[27]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[20], c.f[28]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[29] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::add(c.f[0], c.f[26]);
    c.f[28] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = fp::add(c.f[1], c.f[25]);
    c.f[27] = ld32((c.r[29].w[0] + 72u));
    c.f[26] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[24]);
    c.f[25] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = fp::add(c.f[1], c.f[23]);
    c.f[24] = ld32((c.r[29].w[0] + 48u));
    c.f[23] = ld32((c.r[29].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[22]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    c.f[1] = fp::add(c.f[1], c.f[21]);
    c.f[22] = ld32((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 24u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9E08:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9E20u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001D9E20u) [[unlikely]] return; }
L_001D9E20:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], 0u + 96u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 19384u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9E70u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001D9E70u) [[unlikely]] return; }
L_001D9E70:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], 0u + 96u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 19384u), c.f[20]);
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9EA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9EB8u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001D9EB8u) [[unlikely]] return; }
L_001D9EB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], 0u + 96u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 19424u)));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9EE8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9F08u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001D9F08u) [[unlikely]] return; }
L_001D9F08:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], 0u + 96u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 19424u), c.r[17].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9F38:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9F60u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001D9F60u) [[unlikely]] return; }
L_001D9F60:
    set32(c.r[2], c.r[2].w[0] + 19552u);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D9F90; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D9FB4; } }
L_001D9F90:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 9;
L_001D9FB4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9FD8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9FF8u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001D9FF8u) [[unlikely]] return; }
L_001D9FF8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 19552u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DA054; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[7], 0u + 500u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    set32(c.r[3], c.r[6].w[0] + 19552u);
    c.budget -= 4;
L_001DA028:
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[7].d[0];  if (t) { goto L_001DA044; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA058; } }
L_001DA044:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DA028u | kUnwind; return; } goto L_001DA028; } }
L_001DA054:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_001DA058:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DA090; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[16].d[0] & 127ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    st32((c.r[3].w[0] + 19552u), c.r[4].w[0]);
    c.budget -= 11;
L_001DA090:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DA0A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA0C8u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001DA0C8u) [[unlikely]] return; }
L_001DA0C8:
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
L_001DA140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA160u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001DA160u) [[unlikely]] return; }
L_001DA160:
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
L_001DA1D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA1F8u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001DA1F8u) [[unlikely]] return; }
L_001DA1F8:
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
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 19436u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DA268:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA288u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001DA288u) [[unlikely]] return; }
L_001DA288:
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
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
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
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 19436u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DA300:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA320u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001DA320u) [[unlikely]] return; }
L_001DA320:
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], 0u + 96u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[16].w[0] + 31u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
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
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 19428u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DA390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA3B0u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001DA3B0u) [[unlikely]] return; }
L_001DA3B0:
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], 0u + 96u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[16].w[0] + 31u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[16].d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[16].d[0] = c.r[16].d[0] & 31ull;
    set32(c.r[3], c.r[3].w[0] - 26584u);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 19428u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = ~(0ull | c.r[5].d[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DA428:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA448u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001DA448u) [[unlikely]] return; }
L_001DA448:
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], 0u + 96u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[16].w[0] + 31u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
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
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DA4B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 29824u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DA4C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 29824u)));
    set32(c.r[2], c.r[2].w[0] + 21552u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DA4E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA4F8u);  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001A7018u; return; } if (c.pc != 0x001DA4F8u) [[unlikely]] return; }
L_001DA4F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA504u);  if (depth < kMaxDepth) unit_0029(c, 367u, depth + 1u); else { c.pc = 0x001A7340u; return; } if (c.pc != 0x001DA504u) [[unlikely]] return; }
L_001DA504:
    set32(c.r[3], 0u + 21552u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] - 21552u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DA528:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 29824u)));
    set32(c.r[2], c.r[2].w[0] + 228u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DA540:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], 0u + 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA578; } }
L_001DA570:
    set32(c.r[17], c.r[17].w[0] + 21552u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001DA578:
    c.r[2].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DA5AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA58Cu);  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001A7018u; return; } if (c.pc != 0x001DA58Cu) [[unlikely]] return; }
L_001DA58C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA598u);  if (depth < kMaxDepth) unit_0029(c, 367u, depth + 1u); else { c.pc = 0x001A7340u; return; } if (c.pc != 0x001DA598u) [[unlikely]] return; }
L_001DA598:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DA570u | kUnwind; return; } goto L_001DA570; } }
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001DA5AC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DA5D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[20], 0u + 1u);
    c.budget -= 12;
L_001DA600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA608u);  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001A7018u; return; } if (c.pc != 0x001DA608u) [[unlikely]] return; }
L_001DA608:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA614u);  if (depth < kMaxDepth) unit_0029(c, 367u, depth + 1u); else { c.pc = 0x001A7340u; return; } if (c.pc != 0x001DA614u) [[unlikely]] return; }
L_001DA614:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[20].d[0];  if (t) { goto L_001DA66C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA62Cu);  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001A7018u; return; } if (c.pc != 0x001DA62Cu) [[unlikely]] return; }
L_001DA62C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA638u);  if (depth < kMaxDepth) unit_0029(c, 367u, depth + 1u); else { c.pc = 0x001A7340u; return; } if (c.pc != 0x001DA638u) [[unlikely]] return; }
L_001DA638:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DA66C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA654u);  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001A7018u; return; } if (c.pc != 0x001DA654u) [[unlikely]] return; }
L_001DA654:
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA664u);  if (depth < kMaxDepth) unit_0029(c, 367u, depth + 1u); else { c.pc = 0x001A7340u; return; } if (c.pc != 0x001DA664u) [[unlikely]] return; }
L_001DA664:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_001DA66C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 21552u);
    c.r[2].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DA600u | kUnwind; return; } goto L_001DA600; } }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DA6A8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA6CCu);  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001A7018u; return; } if (c.pc != 0x001DA6CCu) [[unlikely]] return; }
L_001DA6CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA6D8u);  if (depth < kMaxDepth) unit_0029(c, 367u, depth + 1u); else { c.pc = 0x001A7340u; return; } if (c.pc != 0x001DA6D8u) [[unlikely]] return; }
L_001DA6D8:
    set32(c.r[3], 0u + 21552u);
    set32(c.r[17], ld32((c.r[18].w[0] - 29824u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[6], 0u + 21552u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 21552u);
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA6FCu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001DA6FCu) [[unlikely]] return; }
L_001DA6FC:
    set32(c.r[3], ld32((c.r[18].w[0] - 29824u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 132u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA720u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DA720u) [[unlikely]] return; }
L_001DA720:
    c.f[1] = ld32((c.r[17].w[0] + 19392u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    st32((c.r[2].w[0] + 128u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 19396u));
    st32((c.r[2].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 19400u));
    st32((c.r[2].w[0] + 136u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA748u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DA748u) [[unlikely]] return; }
L_001DA748:
    c.f[1] = ld32((c.r[17].w[0] + 19488u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[2].w[0] + 128u), c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.f[0] = ld32((c.r[17].w[0] + 19492u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 19496u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st32((c.r[2].w[0] + 136u), c.f[1]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DA780:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 21552u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[17], ld32((c.r[18].w[0] - 29824u)));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 21552u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA7B0u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001DA7B0u) [[unlikely]] return; }
L_001DA7B0:
    set32(c.r[3], ld32((c.r[18].w[0] - 29824u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 132u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA7D4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DA7D4u) [[unlikely]] return; }
L_001DA7D4:
    c.f[1] = ld32((c.r[17].w[0] + 19392u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    st32((c.r[2].w[0] + 128u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 19396u));
    st32((c.r[2].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 19400u));
    st32((c.r[2].w[0] + 136u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA7FCu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DA7FCu) [[unlikely]] return; }
L_001DA7FC:
    c.f[1] = ld32((c.r[17].w[0] + 19488u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[2].w[0] + 128u), c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.f[0] = ld32((c.r[17].w[0] + 19492u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 19496u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st32((c.r[2].w[0] + 136u), c.f[1]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DA830:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 29936u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DA840:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DA8D0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA870u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DA870u) [[unlikely]] return; }
L_001DA870:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA884u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DA884u) [[unlikely]] return; }
L_001DA884:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA894u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001DA894u) [[unlikely]] return; }
L_001DA894:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA8A4u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001DA8A4u) [[unlikely]] return; }
L_001DA8A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA8B8u);  if (depth < kMaxDepth) unit_0000(c, 1u, depth + 1u); else { c.pc = 0x00100000u; return; } if (c.pc != 0x001DA8B8u) [[unlikely]] return; }
L_001DA8B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 29936u), c.r[2].w[0]);
    c.budget -= 2;
L_001DA8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA8FC; } }
L_001DA8C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA8D0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001DA8D0u) [[unlikely]] return; }
L_001DA8D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] - 29936u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA8FC; } }
L_001DA8E0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA8ECu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001DA8ECu) [[unlikely]] return; }
L_001DA8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DA8C8u | kUnwind; return; } goto L_001DA8C8; } }
L_001DA8F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA8FCu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001DA8FCu) [[unlikely]] return; }
L_001DA8FC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DA918:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 29932u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DA928:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DA978; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA944u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001DA944u) [[unlikely]] return; }
L_001DA944:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA954u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001DA954u) [[unlikely]] return; }
L_001DA954:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA960u);  if (depth < kMaxDepth) unit_0007(c, 182u, depth + 1u); else { c.pc = 0x0011D6D0u; return; } if (c.pc != 0x001DA960u) [[unlikely]] return; }
L_001DA960:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 29932u), c.r[2].w[0]);
    c.budget -= 2;
L_001DA968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA9A4; } }
L_001DA970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA978u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001DA978u) [[unlikely]] return; }
L_001DA978:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] - 29932u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA9A4; } }
L_001DA988:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA994u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001DA994u) [[unlikely]] return; }
L_001DA994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DA970u | kUnwind; return; } goto L_001DA970; } }
L_001DA99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA9A4u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001DA9A4u) [[unlikely]] return; }
L_001DA9A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DA9B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 29928u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DA9C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DAA18; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA9E4u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001DA9E4u) [[unlikely]] return; }
L_001DA9E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 12816u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA9F4u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001DA9F4u) [[unlikely]] return; }
L_001DA9F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAA00u);  if (depth < kMaxDepth) unit_001D(c, 161u, depth + 1u); else { c.pc = 0x00176018u; return; } if (c.pc != 0x001DAA00u) [[unlikely]] return; }
L_001DAA00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 29928u), c.r[2].w[0]);
    c.budget -= 2;
L_001DAA08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DAA44; } }
L_001DAA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAA18u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001DAA18u) [[unlikely]] return; }
L_001DAA18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] - 29928u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DAA44; } }
L_001DAA28:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAA34u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001DAA34u) [[unlikely]] return; }
L_001DAA34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DAA10u | kUnwind; return; } goto L_001DAA10; } }
L_001DAA3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAA44u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001DAA44u) [[unlikely]] return; }
L_001DAA44:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DAA58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 29924u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DAA68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DAAF8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAA98u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DAA98u) [[unlikely]] return; }
L_001DAA98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAAACu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DAAACu) [[unlikely]] return; }
L_001DAAAC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAABCu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001DAABCu) [[unlikely]] return; }
L_001DAABC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAACCu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001DAACCu) [[unlikely]] return; }
L_001DAACC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAAE0u);  if (depth < kMaxDepth) unit_0000(c, 81u, depth + 1u); else { c.pc = 0x00100D78u; return; } if (c.pc != 0x001DAAE0u) [[unlikely]] return; }
L_001DAAE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 29924u), c.r[2].w[0]);
    c.budget -= 2;
L_001DAAE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DAB24; } }
L_001DAAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAAF8u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001DAAF8u) [[unlikely]] return; }
L_001DAAF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] - 29924u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DAB24; } }
L_001DAB08:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAB14u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001DAB14u) [[unlikely]] return; }
L_001DAB14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DAAF0u | kUnwind; return; } goto L_001DAAF0; } }
L_001DAB1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAB24u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001DAB24u) [[unlikely]] return; }
L_001DAB24:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DAB40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 29920u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DAB50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DABA0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAB6Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001DAB6Cu) [[unlikely]] return; }
L_001DAB6C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAB7Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001DAB7Cu) [[unlikely]] return; }
L_001DAB7C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAB88u);  if (depth < kMaxDepth) unit_002C(c, 452u, depth + 1u); else { c.pc = 0x001B3150u; return; } if (c.pc != 0x001DAB88u) [[unlikely]] return; }
L_001DAB88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 29920u), c.r[2].w[0]);
    c.budget -= 2;
L_001DAB90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DABCC; } }
L_001DAB98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DABA0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001DABA0u) [[unlikely]] return; }
L_001DABA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] - 29920u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DABCC; } }
L_001DABB0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DABBCu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001DABBCu) [[unlikely]] return; }
L_001DABBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DAB98u | kUnwind; return; } goto L_001DAB98; } }
L_001DABC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DABCCu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001DABCCu) [[unlikely]] return; }
L_001DABCC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DABE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 11336u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DAC00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 29916u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DAC10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DAC60; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAC2Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001DAC2Cu) [[unlikely]] return; }
L_001DAC2C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAC3Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001DAC3Cu) [[unlikely]] return; }
L_001DAC3C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAC48u);  if (depth < kMaxDepth) unit_0008(c, 155u, depth + 1u); else { c.pc = 0x00121580u; return; } if (c.pc != 0x001DAC48u) [[unlikely]] return; }
L_001DAC48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 29916u), c.r[2].w[0]);
    c.budget -= 2;
L_001DAC50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DAC8C; } }
L_001DAC58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAC60u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001DAC60u) [[unlikely]] return; }
L_001DAC60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] - 29916u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DAC8C; } }
L_001DAC70:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAC7Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001DAC7Cu) [[unlikely]] return; }
L_001DAC7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DAC58u | kUnwind; return; } goto L_001DAC58; } }
L_001DAC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAC8Cu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001DAC8Cu) [[unlikely]] return; }
L_001DAC8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DACA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 11392u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DACC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 29912u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DACD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DAD6C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAD00u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DAD00u) [[unlikely]] return; }
L_001DAD00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAD14u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DAD14u) [[unlikely]] return; }
L_001DAD14:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAD24u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001DAD24u) [[unlikely]] return; }
L_001DAD24:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAD34u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001DAD34u) [[unlikely]] return; }
L_001DAD34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAD54u);  if (depth < kMaxDepth) unit_0001(c, 43u, depth + 1u); else { c.pc = 0x00104510u; return; } if (c.pc != 0x001DAD54u) [[unlikely]] return; }
L_001DAD54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 29912u), c.r[2].w[0]);
    c.budget -= 2;
L_001DAD5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DAD98; } }
L_001DAD64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAD6Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001DAD6Cu) [[unlikely]] return; }
L_001DAD6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] - 29912u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DAD98; } }
L_001DAD7C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAD88u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001DAD88u) [[unlikely]] return; }
L_001DAD88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DAD64u | kUnwind; return; } goto L_001DAD64; } }
L_001DAD90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAD98u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001DAD98u) [[unlikely]] return; }
L_001DAD98:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DADB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 29908u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DADC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DAE38; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DADE4u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001DADE4u) [[unlikely]] return; }
L_001DADE4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DADF4u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001DADF4u) [[unlikely]] return; }
L_001DADF4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DADF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAE00u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013A6A8u; return; } if (c.pc != 0x001DAE00u) [[unlikely]] return; }
L_001DAE00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAE0Cu);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013A670u; return; } if (c.pc != 0x001DAE0Cu) [[unlikely]] return; }
L_001DAE0C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAE20u);  if (depth < kMaxDepth) unit_0001(c, 153u, depth + 1u); else { c.pc = 0x001051B8u; return; } if (c.pc != 0x001DAE20u) [[unlikely]] return; }
L_001DAE20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 29908u), c.r[2].w[0]);
    c.budget -= 2;
L_001DAE28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DAE64; } }
L_001DAE30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAE38u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001DAE38u) [[unlikely]] return; }
L_001DAE38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] - 29908u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DAE64; } }
L_001DAE48:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAE54u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001DAE54u) [[unlikely]] return; }
L_001DAE54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DAE30u | kUnwind; return; } goto L_001DAE30; } }
L_001DAE5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAE64u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001DAE64u) [[unlikely]] return; }
L_001DAE64:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DAE80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAE98u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001DAE98u) [[unlikely]] return; }
L_001DAE98:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001DAF54; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAEBCu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DAEBCu) [[unlikely]] return; }
L_001DAEBC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAED0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DAED0u) [[unlikely]] return; }
L_001DAED0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAEE4u);  if (depth < kMaxDepth) unit_0036(c, 441u, depth + 1u); else { c.pc = 0x001DB520u; return; } if (c.pc != 0x001DAEE4u) [[unlikely]] return; }
L_001DAEE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAEF4u);  if (depth < kMaxDepth) unit_0036(c, 441u, depth + 1u); else { c.pc = 0x001DB520u; return; } if (c.pc != 0x001DAEF4u) [[unlikely]] return; }
L_001DAEF4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAF04u);  if (depth < kMaxDepth) unit_0036(c, 447u, depth + 1u); else { c.pc = 0x001DB5F0u; return; } if (c.pc != 0x001DAF04u) [[unlikely]] return; }
L_001DAF04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAF14u);  if (depth < kMaxDepth) unit_0036(c, 447u, depth + 1u); else { c.pc = 0x001DB5F0u; return; } if (c.pc != 0x001DAF14u) [[unlikely]] return; }
L_001DAF14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAF24u);  if (depth < kMaxDepth) unit_0036(c, 441u, depth + 1u); else { c.pc = 0x001DB520u; return; } if (c.pc != 0x001DAF24u) [[unlikely]] return; }
L_001DAF24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAF34u);  if (depth < kMaxDepth) unit_0036(c, 441u, depth + 1u); else { c.pc = 0x001DB520u; return; } if (c.pc != 0x001DAF34u) [[unlikely]] return; }
L_001DAF34:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAF44u);  if (depth < kMaxDepth) unit_0036(c, 447u, depth + 1u); else { c.pc = 0x001DB5F0u; return; } if (c.pc != 0x001DAF44u) [[unlikely]] return; }
L_001DAF44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAF54u);  if (depth < kMaxDepth) unit_0036(c, 447u, depth + 1u); else { c.pc = 0x001DB5F0u; return; } if (c.pc != 0x001DAF54u) [[unlikely]] return; }
L_001DAF54:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DAF70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 29688u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DAF80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[2].w[0] - 29688u), c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DAF90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 29824u)));
    set32(c.r[6], 0u + 1u);
    st32((c.r[3].w[0] + 212u), c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_001DB000; } }
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DAFC8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001DAFDC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DAFC8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001DB028; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DAFDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[3], 0u + 120u);
    set32(c.r[2], c.r[2].w[0] + 10368u);
    st32((c.r[2].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 140u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 144u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], 0u + 40u);
    set32(c.r[2], c.r[2].w[0] + 10368u);
    set32(c.r[3], 0u + 30u);
    st32((c.r[2].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 140u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 144u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB028:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 10368u);
    set32(c.r[3], 0u + 60u);
    st32((c.r[2].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 140u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 144u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 132u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 2056u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 11264u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB088u);  if (depth < kMaxDepth) unit_0037(c, 185u, depth + 1u); else { c.pc = 0x001DD550u; return; } if (c.pc != 0x001DB088u) [[unlikely]] return; }
L_001DB088:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB0A8:
    set32(c.r[2], ld32((c.r[4].w[0] + 11264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DB0C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB0C0:
    set32(c.r[2], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB0D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 11264u)));
    st32((c.r[2].w[0] + 60u), c.f[12]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB0E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = ld32((c.r[2].w[0] - 29784u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 11264u)));
    c.f[20] = ld32((c.r[16].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DB12C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB140; } }
L_001DB12C:
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB140u);  if (depth < kMaxDepth) unit_0023(c, 244u, depth + 1u); else { c.pc = 0x0018F120u; return; } if (c.pc != 0x001DB140u) [[unlikely]] return; }
L_001DB140:
    st32((c.r[16].w[0] + 60u), c.f[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB160:
    set32(c.r[2], ld32((c.r[4].w[0] + 11264u)));
    st32((c.r[2].w[0] + 64u), c.f[12]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB170:
    set32(c.r[2], ld32((c.r[4].w[0] + 11264u)));
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[0] = 0u;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 40u), c.f[21]);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 11264u)));
    c.f[21] = ld32((c.r[16].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DB1C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB218; } }
L_001DB1C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.f[20] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = ld32((c.r[2].w[0] - 29784u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DB200; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB214; } }
L_001DB200:
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB214u);  if (depth < kMaxDepth) unit_0023(c, 244u, depth + 1u); else { c.pc = 0x0018F120u; return; } if (c.pc != 0x001DB214u) [[unlikely]] return; }
L_001DB214:
    st32((c.r[16].w[0] + 60u), c.f[20]);
    c.budget -= 1;
L_001DB218:
    st32((c.r[16].w[0] + 64u), c.f[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 40u));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB238:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 11264u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001DB2B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB260u);  if (depth < kMaxDepth) unit_0036(c, 445u, depth + 1u); else { c.pc = 0x001DB5B0u; return; } if (c.pc != 0x001DB260u) [[unlikely]] return; }
L_001DB260:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001DB2B4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], c.r[2].w[0] + 14208u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 13284u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DB2A8; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 26532u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001DB2B4; } }
L_001DB2A8:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
L_001DB2B4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB2D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 11264u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001DB344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB2F8u);  if (depth < kMaxDepth) unit_0036(c, 445u, depth + 1u); else { c.pc = 0x001DB5B0u; return; } if (c.pc != 0x001DB2F8u) [[unlikely]] return; }
L_001DB2F8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001DB344; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 72u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[17].w[0]);
    set32(c.r[4], c.r[2].w[0] + 14208u);
    st32((c.r[16].w[0] + 68u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 13284u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DB338; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 26532u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001DB344; } }
L_001DB338:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
L_001DB344:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 11264u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001DB3CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB380u);  if (depth < kMaxDepth) unit_0036(c, 445u, depth + 1u); else { c.pc = 0x001DB5B0u; return; } if (c.pc != 0x001DB380u) [[unlikely]] return; }
L_001DB380:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001DB3CC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], c.r[2].w[0] + 14208u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 13284u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DB3C0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 26532u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001DB3CC; } }
L_001DB3C0:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
L_001DB3CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB3E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB424u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DB424u) [[unlikely]] return; }
L_001DB424:
    set32(c.r[2], ld32((c.r[2].w[0] + 11264u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    st32((c.r[2].w[0] + 72u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 68u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 76u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 80u), c.r[18].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB448u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DB448u) [[unlikely]] return; }
L_001DB448:
    set32(c.r[2], ld32((c.r[2].w[0] + 11264u)));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st32((c.r[2].w[0] + 72u), c.r[20].w[0]);
    st32((c.r[2].w[0] + 68u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 76u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 80u), c.r[20].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB480:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB4C4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DB4C4u) [[unlikely]] return; }
L_001DB4C4:
    set32(c.r[3], ld32((c.r[2].w[0] + 11264u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 72u)));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB4E8u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001DB4E8u) [[unlikely]] return; }
L_001DB4E8:
    set32(c.r[3], ld32((c.r[2].w[0] + 11264u)));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], ld32((c.r[3].w[0] + 72u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB520:
    set32(c.r[2], ld32((c.r[4].w[0] + 11264u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    st32((c.r[2].w[0] + 68u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB538:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 11264u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB560u);  if (depth < kMaxDepth) unit_0036(c, 445u, depth + 1u); else { c.pc = 0x001DB5B0u; return; } if (c.pc != 0x001DB560u) [[unlikely]] return; }
L_001DB560:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001DB590; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB57Cu);  if (depth < kMaxDepth) unit_0036(c, 445u, depth + 1u); else { c.pc = 0x001DB5B0u; return; } if (c.pc != 0x001DB57Cu) [[unlikely]] return; }
L_001DB57C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_001DB590; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB594; } }
L_001DB590:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DB594:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB5B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DB5E0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[3].w[0] - 26392u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB5E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB5F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 11264u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 72u)));
    st32((c.r[2].w[0] + 72u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB608:
    set32(c.r[3], ld32((c.r[4].w[0] + 11264u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB618:
    set32(c.r[2], ld32((c.r[4].w[0] + 11264u)));
    st32((c.r[2].w[0] + 84u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 88u), c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB630:
    set32(c.r[3], ld32((c.r[4].w[0] + 11264u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB640:
    set32(c.r[3], ld32((c.r[4].w[0] + 11264u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB650:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 5728u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB668:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0] + 5728u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB678:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 5728u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB688:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 4040u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], 0u + 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB6B0u);  if (depth < kMaxDepth) unit_0037(c, 154u, depth + 1u); else { c.pc = 0x001DD1F0u; return; } if (c.pc != 0x001DB6B0u) [[unlikely]] return; }
L_001DB6B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB6BCu);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A958u; return; } if (c.pc != 0x001DB6BCu) [[unlikely]] return; }
L_001DB6BC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB6CCu);  if (depth < kMaxDepth) unit_009E(c, 155u, depth + 1u); else { c.pc = 0x00379D08u; return; } if (c.pc != 0x001DB6CCu) [[unlikely]] return; }
L_001DB6CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB6DCu);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A938u; return; } if (c.pc != 0x001DB6DCu) [[unlikely]] return; }
L_001DB6DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB6E8u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A958u; return; } if (c.pc != 0x001DB6E8u) [[unlikely]] return; }
L_001DB6E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DB6B0u | kUnwind; return; } goto L_001DB6B0; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB708:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 3u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[5].w[0] + 19624u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 15804u), c.r[3].w[0]);
    c.budget -= 14;
L_001DB740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB748u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x001DB748u) [[unlikely]] return; }
L_001DB748:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB754u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x001DB754u) [[unlikely]] return; }
L_001DB754:
    set32(c.r[4], c.r[17].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB760u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001DB760u) [[unlikely]] return; }
L_001DB760:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DB740u | kUnwind; return; } goto L_001DB740; } }
    st32((c.r[18].w[0] + 15804u), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB788:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    set32(c.r[16], c.r[2].w[0] + 24040u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB7CCu);  if (depth < kMaxDepth) unit_007D(c, 261u, depth + 1u); else { c.pc = 0x002F79E8u; return; } if (c.pc != 0x001DB7CCu) [[unlikely]] return; }
L_001DB7CC:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DB828; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[20].w[0] - 26388u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB7F8u);  if (depth < kMaxDepth) unit_007D(c, 267u, depth + 1u); else { c.pc = 0x002F7AB0u; return; } if (c.pc != 0x001DB7F8u) [[unlikely]] return; }
L_001DB7F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB814; } }
L_001DB800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB808u);  if (depth < kMaxDepth) unit_007D(c, 21u, depth + 1u); else { c.pc = 0x002F4200u; return; } if (c.pc != 0x001DB808u) [[unlikely]] return; }
L_001DB808:
    set32(c.r[4], c.r[17].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB814u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001DB814u) [[unlikely]] return; }
L_001DB814:
    set32(c.r[4], c.r[21].w[0] + 24040u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB820u);  if (depth < kMaxDepth) unit_007D(c, 262u, depth + 1u); else { c.pc = 0x002F7A00u; return; } if (c.pc != 0x001DB820u) [[unlikely]] return; }
L_001DB820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DB800u | kUnwind; return; } goto L_001DB800; } }
L_001DB828:
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 19624u), c.r[2].w[0]);
    set32(c.r[16], 0u + 3u);
    st32((c.r[19].w[0] + 15804u), c.r[3].w[0]);
    c.budget -= 6;
L_001DB840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB848u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x001DB848u) [[unlikely]] return; }
L_001DB848:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB854u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x001DB854u) [[unlikely]] return; }
L_001DB854:
    set32(c.r[4], c.r[17].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB860u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001DB860u) [[unlikely]] return; }
L_001DB860:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DB840u | kUnwind; return; } goto L_001DB840; } }
    st32((c.r[19].w[0] + 15804u), 0u);
    st32((c.r[20].w[0] - 26388u), 0u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB898:
    c.f[12] = c.r[5].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] + 24040u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], 0u + 3u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB8D0u);  if (depth < kMaxDepth) unit_007D(c, 266u, depth + 1u); else { c.pc = 0x002F7A58u; return; } if (c.pc != 0x001DB8D0u) [[unlikely]] return; }
L_001DB8D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[5].w[0] + 19624u), c.r[2].w[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 15804u), c.r[3].w[0]);
    c.budget -= 8;
L_001DB8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB8F8u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x001DB8F8u) [[unlikely]] return; }
L_001DB8F8:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB904u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x001DB904u) [[unlikely]] return; }
L_001DB904:
    set32(c.r[4], c.r[17].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB910u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001DB910u) [[unlikely]] return; }
L_001DB910:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DB8F0u | kUnwind; return; } goto L_001DB8F0; } }
    st32((c.r[18].w[0] + 15804u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB924u);  if (depth < kMaxDepth) unit_0023(c, 68u, depth + 1u); else { c.pc = 0x0018D118u; return; } if (c.pc != 0x001DB924u) [[unlikely]] return; }
L_001DB924:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB950u);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x002FAF28u; return; } if (c.pc != 0x001DB950u) [[unlikely]] return; }
L_001DB950:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB968:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 4040u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB980u);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A968u; return; } if (c.pc != 0x001DB980u) [[unlikely]] return; }
L_001DB980:
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001DB994; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB994u);  if (depth < kMaxDepth) unit_0039(c, 343u, depth + 1u); else { c.pc = 0x001E6E50u; return; } if (c.pc != 0x001DB994u) [[unlikely]] return; }
L_001DB994:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB9A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB9B8u);  if (depth < kMaxDepth) unit_0039(c, 339u, depth + 1u); else { c.pc = 0x001E6DB8u; return; } if (c.pc != 0x001DB9B8u) [[unlikely]] return; }
L_001DB9B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB9D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB9E0u);  if (depth < kMaxDepth) unit_0039(c, 343u, depth + 1u); else { c.pc = 0x001E6E50u; return; } if (c.pc != 0x001DB9E0u) [[unlikely]] return; }
L_001DB9E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB9F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBA08u);  if (depth < kMaxDepth) unit_000E(c, 140u, depth + 1u); else { c.pc = 0x00139250u; return; } if (c.pc != 0x001DBA08u) [[unlikely]] return; }
L_001DBA08:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], 0u + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC2540000u);
    st32((c.r[5].w[0] + 15804u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 19624u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 6756ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBA30u);  if (depth < kMaxDepth) unit_0040(c, 48u, depth + 1u); else { c.pc = 0x00200910u; return; } if (c.pc != 0x001DBA30u) [[unlikely]] return; }
L_001DBA30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DBA48:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBA64u);  if (depth < kMaxDepth) unit_000E(c, 154u, depth + 1u); else { c.pc = 0x001394C8u; return; } if (c.pc != 0x001DBA64u) [[unlikely]] return; }
L_001DBA64:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBA70u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x001DBA70u) [[unlikely]] return; }
L_001DBA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBA78u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x001DBA78u) [[unlikely]] return; }
L_001DBA78:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[16], c.r[16].w[0] + 17200u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBA8Cu);  if (depth < kMaxDepth) unit_0071(c, 235u, depth + 1u); else { c.pc = 0x002C6878u; return; } if (c.pc != 0x001DBA8Cu) [[unlikely]] return; }
L_001DBA8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBA9Cu);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x001DBA9Cu) [[unlikely]] return; }
L_001DBA9C:
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DBAB0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001DBAF4; } }
L_001DBAB0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[16], c.r[16].w[0] + 4040u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBACCu);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001DBACCu) [[unlikely]] return; }
L_001DBACC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBAE0u);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001DBAE0u) [[unlikely]] return; }
L_001DBAE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBAF4u);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001DBAF4u) [[unlikely]] return; }
L_001DBAF4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DBB10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 3u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBB34u);  if (depth < kMaxDepth) unit_0040(c, 59u, depth + 1u); else { c.pc = 0x00200A70u; return; } if (c.pc != 0x001DBB34u) [[unlikely]] return; }
L_001DBB34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[5].w[0] + 19624u), c.r[2].w[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 15804u), c.r[3].w[0]);
    c.budget -= 7;
L_001DBB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBB58u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x001DBB58u) [[unlikely]] return; }
L_001DBB58:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBB64u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x001DBB64u) [[unlikely]] return; }
L_001DBB64:
    set32(c.r[4], c.r[17].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBB70u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001DBB70u) [[unlikely]] return; }
L_001DBB70:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DBB50u | kUnwind; return; } goto L_001DBB50; } }
    st32((c.r[18].w[0] + 15804u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBB84u);  if (depth < kMaxDepth) unit_000E(c, 376u, depth + 1u); else { c.pc = 0x0013AF48u; return; } if (c.pc != 0x001DBB84u) [[unlikely]] return; }
L_001DBB84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBB8Cu);  if (depth < kMaxDepth) unit_0029(c, 111u, depth + 1u); else { c.pc = 0x001A4F90u; return; } if (c.pc != 0x001DBB8Cu) [[unlikely]] return; }
L_001DBB8C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DBBB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], ld32((c.r[3].w[0] + 14852u)));
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001DBBE0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[16].w[0] - 26384u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001DBBEC; } }
L_001DBBE0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DBC0C; } }
L_001DBBEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] + 15804u), c.r[4].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBBFCu);  if (depth < kMaxDepth) unit_007D(c, 73u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x001DBBFCu) [[unlikely]] return; }
L_001DBBFC:
    set32(c.r[3], ld32((c.r[16].w[0] - 26384u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] - 26384u), c.r[3].w[0]);
    c.budget -= 4;
L_001DBC0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DBC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBC38u);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x002FAF28u; return; } if (c.pc != 0x001DBC38u) [[unlikely]] return; }
L_001DBC38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[3].w[0] + 19624u), c.r[2].w[0]);
    c.budget -= 4;
L_001DBC48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBC50u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x001DBC50u) [[unlikely]] return; }
L_001DBC50:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBC5Cu);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x001DBC5Cu) [[unlikely]] return; }
L_001DBC5C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DBC48u | kUnwind; return; } goto L_001DBC48; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0] + 15804u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4040u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBC80u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A958u; return; } if (c.pc != 0x001DBC80u) [[unlikely]] return; }
L_001DBC80:
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001DBCAC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 120u);
    st32((c.r[3].w[0] - 26384u), c.r[2].w[0]);
    set32(c.r[4], 0u + 59u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBCACu);  if (depth < kMaxDepth) unit_007E(c, 301u, depth + 1u); else { c.pc = 0x002FB1C0u; return; } if (c.pc != 0x001DBCACu) [[unlikely]] return; }
L_001DBCAC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DBCC8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DBCD8:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 12688u);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBD04u);  if (depth < kMaxDepth) unit_001A(c, 88u, depth + 1u); else { c.pc = 0x00168FF0u; return; } if (c.pc != 0x001DBD04u) [[unlikely]] return; }
L_001DBD04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DBD18:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 10168u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBD40u);  if (depth < kMaxDepth) unit_0043(c, 33u, depth + 1u); else { c.pc = 0x0020C7E0u; return; } if (c.pc != 0x001DBD40u) [[unlikely]] return; }
L_001DBD40:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001DBD84; } }
    c.budget -= 1;
L_001DBD50:
    set32(c.r[16], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 13224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBD68u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001DBD68u) [[unlikely]] return; }
L_001DBD68:
    st32((c.r[17].w[0] + 104u), c.r[16].w[0]);
    set32(c.r[4], c.r[18].w[0] + 10168u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBD78u);  if (depth < kMaxDepth) unit_0043(c, 35u, depth + 1u); else { c.pc = 0x0020C818u; return; } if (c.pc != 0x001DBD78u) [[unlikely]] return; }
L_001DBD78:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DBD50u | kUnwind; return; } goto L_001DBD50; } }
L_001DBD84:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DBDA0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DBDB0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DBDC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DBDC8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[17], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBDF0u);  if (depth < kMaxDepth) unit_003C(c, 166u, depth + 1u); else { c.pc = 0x001F18C0u; return; } if (c.pc != 0x001DBDF0u) [[unlikely]] return; }
L_001DBDF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    c.r[2].d[0] = c.r[2].d[0] | 2816ull;
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] + 13248u);
    c.budget -= 6;
L_001DBE08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBE18u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001DBE18u) [[unlikely]] return; }
L_001DBE18:
    st8((c.r[16].w[0] + 10090u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st16((c.r[16].w[0] + 7694u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 10924u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DBE08u | kUnwind; return; } goto L_001DBE08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBE3Cu);  if (depth < kMaxDepth) unit_007D(c, 213u, depth + 1u); else { c.pc = 0x002F70B0u; return; } if (c.pc != 0x001DBE3Cu) [[unlikely]] return; }
L_001DBE3C:
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 10260u), 0u);
    st32((c.r[4].w[0] - 18344u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DBE70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] + 9872u);
    set32(c.r[17], c.r[17].w[0] + 27456u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBEA4u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001DBEA4u) [[unlikely]] return; }
L_001DBEA4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 13248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBEB8u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001DBEB8u) [[unlikely]] return; }
L_001DBEB8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[17], c.r[2].w[0] - 22480u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBED8u);  if (depth < kMaxDepth) unit_0087(c, 224u, depth + 1u); else { c.pc = 0x0031F410u; return; } if (c.pc != 0x001DBED8u) [[unlikely]] return; }
L_001DBED8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 501u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBEF4u);  if (depth < kMaxDepth) unit_0087(c, 236u, depth + 1u); else { c.pc = 0x0031F638u; return; } if (c.pc != 0x001DBEF4u) [[unlikely]] return; }
L_001DBEF4:
    set32(c.r[5], ld32((c.r[18].w[0] + 128u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBF08u);  if (depth < kMaxDepth) unit_0087(c, 238u, depth + 1u); else { c.pc = 0x0031F688u; return; } if (c.pc != 0x001DBF08u) [[unlikely]] return; }
L_001DBF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBF10u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001DBF10u) [[unlikely]] return; }
L_001DBF10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DBF5C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBF2Cu);  if (depth < kMaxDepth) unit_0087(c, 224u, depth + 1u); else { c.pc = 0x0031F410u; return; } if (c.pc != 0x001DBF2Cu) [[unlikely]] return; }
L_001DBF2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 501u);
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBF48u);  if (depth < kMaxDepth) unit_0087(c, 236u, depth + 1u); else { c.pc = 0x0031F638u; return; } if (c.pc != 0x001DBF48u) [[unlikely]] return; }
L_001DBF48:
    set32(c.r[5], ld32((c.r[16].w[0] + 128u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBF5Cu);  if (depth < kMaxDepth) unit_0087(c, 238u, depth + 1u); else { c.pc = 0x0031F688u; return; } if (c.pc != 0x001DBF5Cu) [[unlikely]] return; }
L_001DBF5C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DBF78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DBF80:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[3].w[0] + 19304u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DBF98:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DBFA8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DBFB8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DBFC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 15u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 20720u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] - 26588u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 12224u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBFFCu);  if (depth < kMaxDepth) unit_0039(c, 100u, depth + 1u); else { c.pc = 0x001E4C28u; return; } if (c.pc != 0x001DBFFCu) [[unlikely]] return; }
L_001DBFFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0037(c, 1u, depth);
}

}
