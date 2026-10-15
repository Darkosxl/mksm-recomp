#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0011[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 4, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 9, 10, 0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0,
    17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 22, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 31, 0, 0, 0, 32, 0, 33,
    0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 37, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 0, 0, 46,
    0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 52, 0,
    0, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 60, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 0, 70, 71, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 96, 0, 0, 0, 97,
    0, 98, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 110, 0, 111, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 126, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137,
    0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0,
    0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0,
    0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0,
    0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0,
    0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0,
    0, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 239, 0, 240, 0,
    0, 241, 0, 242, 0, 0, 243, 0, 244, 0, 0, 245, 0, 246, 0, 0, 247, 0, 248, 0, 0, 249, 0, 250, 0, 0, 251, 0, 252, 0, 0, 253,
    0, 254, 0, 0, 255, 0, 256, 0, 0, 257, 0, 258, 0, 0, 259, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0,
    0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0,
    0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0011(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00144000;
    case 2u: goto L_00144040;
    case 3u: goto L_0014404C;
    case 4u: goto L_00144050;
    case 5u: goto L_0014405C;
    case 6u: goto L_00144064;
    case 7u: goto L_0014406C;
    case 8u: goto L_00144080;
    case 9u: goto L_00144098;
    case 10u: goto L_0014409C;
    case 11u: goto L_001440A8;
    case 12u: goto L_001440B0;
    case 13u: goto L_001440B8;
    case 14u: goto L_001440D0;
    case 15u: goto L_001440E4;
    case 16u: goto L_001440F0;
    case 17u: goto L_00144100;
    case 18u: goto L_00144110;
    case 19u: goto L_0014413C;
    case 20u: goto L_00144150;
    case 21u: goto L_00144190;
    case 22u: goto L_00144194;
    case 23u: goto L_001441A4;
    case 24u: goto L_001441AC;
    case 25u: goto L_001441B4;
    case 26u: goto L_001441C8;
    case 27u: goto L_001441F4;
    case 28u: goto L_00144208;
    case 29u: goto L_0014423C;
    case 30u: goto L_00144260;
    case 31u: goto L_00144264;
    case 32u: goto L_00144274;
    case 33u: goto L_0014427C;
    case 34u: goto L_00144284;
    case 35u: goto L_00144290;
    case 36u: goto L_001442B4;
    case 37u: goto L_001442B8;
    case 38u: goto L_001442C8;
    case 39u: goto L_001442D0;
    case 40u: goto L_001442D8;
    case 41u: goto L_001442F0;
    case 42u: goto L_00144314;
    case 43u: goto L_00144328;
    case 44u: goto L_00144368;
    case 45u: goto L_0014436C;
    case 46u: goto L_0014437C;
    case 47u: goto L_00144384;
    case 48u: goto L_0014438C;
    case 49u: goto L_00144420;
    case 50u: goto L_00144434;
    case 51u: goto L_00144474;
    case 52u: goto L_00144478;
    case 53u: goto L_00144488;
    case 54u: goto L_00144490;
    case 55u: goto L_00144498;
    case 56u: goto L_001444AC;
    case 57u: goto L_001444D0;
    case 58u: goto L_001444E4;
    case 59u: goto L_00144524;
    case 60u: goto L_00144528;
    case 61u: goto L_00144538;
    case 62u: goto L_00144540;
    case 63u: goto L_00144548;
    case 64u: goto L_0014455C;
    case 65u: goto L_00144574;
    case 66u: goto L_00144594;
    case 67u: goto L_001445AC;
    case 68u: goto L_001445DC;
    case 69u: goto L_001445F4;
    case 70u: goto L_00144614;
    case 71u: goto L_00144618;
    case 72u: goto L_00144624;
    case 73u: goto L_0014462C;
    case 74u: goto L_00144634;
    case 75u: goto L_0014465C;
    case 76u: goto L_00144674;
    case 77u: goto L_00144690;
    case 78u: goto L_001446A0;
    case 79u: goto L_0014471C;
    case 80u: goto L_00144738;
    case 81u: goto L_0014474C;
    case 82u: goto L_00144780;
    case 83u: goto L_0014479C;
    case 84u: goto L_001447B4;
    case 85u: goto L_00144810;
    case 86u: goto L_0014482C;
    case 87u: goto L_00144840;
    case 88u: goto L_00144874;
    case 89u: goto L_00144890;
    case 90u: goto L_001448A8;
    case 91u: goto L_00144900;
    case 92u: goto L_00144920;
    case 93u: goto L_00144930;
    case 94u: goto L_00144948;
    case 95u: goto L_00144968;
    case 96u: goto L_0014496C;
    case 97u: goto L_0014497C;
    case 98u: goto L_00144984;
    case 99u: goto L_0014498C;
    case 100u: goto L_001449A0;
    case 101u: goto L_001449B0;
    case 102u: goto L_001449C0;
    case 103u: goto L_001449D8;
    case 104u: goto L_001449F4;
    case 105u: goto L_00144A08;
    case 106u: goto L_00144A3C;
    case 107u: goto L_00144AC8;
    case 108u: goto L_00144ACC;
    case 109u: goto L_00144B24;
    case 110u: goto L_00144B28;
    case 111u: goto L_00144B30;
    case 112u: goto L_00144B38;
    case 113u: goto L_00144B50;
    case 114u: goto L_00144B64;
    case 115u: goto L_00144B78;
    case 116u: goto L_00144BA0;
    case 117u: goto L_00144BB8;
    case 118u: goto L_00144BE8;
    case 119u: goto L_00144C00;
    case 120u: goto L_00144C30;
    case 121u: goto L_00144C48;
    case 122u: goto L_00144C9C;
    case 123u: goto L_00144CB4;
    case 124u: goto L_00144CD8;
    case 125u: goto L_00144D88;
    case 126u: goto L_00144D8C;
    case 127u: goto L_00144DA0;
    case 128u: goto L_00144DA8;
    case 129u: goto L_00144DB0;
    case 130u: goto L_00144DC4;
    case 131u: goto L_00144DF4;
    case 132u: goto L_00144E0C;
    case 133u: goto L_00144E18;
    case 134u: goto L_00144E38;
    case 135u: goto L_00144E50;
    case 136u: goto L_00144E5C;
    case 137u: goto L_00144E7C;
    case 138u: goto L_00144E94;
    case 139u: goto L_00144EA0;
    case 140u: goto L_00144EC0;
    case 141u: goto L_00144EE0;
    case 142u: goto L_00144EEC;
    case 143u: goto L_00144F24;
    case 144u: goto L_00144F3C;
    case 145u: goto L_00144F4C;
    case 146u: goto L_00144F6C;
    case 147u: goto L_00144F84;
    case 148u: goto L_00144FA8;
    case 149u: goto L_00144FC0;
    case 150u: goto L_00145004;
    case 151u: goto L_0014501C;
    case 152u: goto L_0014502C;
    case 153u: goto L_0014504C;
    case 154u: goto L_00145064;
    case 155u: goto L_00145074;
    case 156u: goto L_00145094;
    case 157u: goto L_001450AC;
    case 158u: goto L_001450BC;
    case 159u: goto L_001450E4;
    case 160u: goto L_001450FC;
    case 161u: goto L_00145130;
    case 162u: goto L_00145148;
    case 163u: goto L_0014517C;
    case 164u: goto L_00145194;
    case 165u: goto L_001451A0;
    case 166u: goto L_001451D4;
    case 167u: goto L_001451EC;
    case 168u: goto L_001451F8;
    case 169u: goto L_00145214;
    case 170u: goto L_0014522C;
    case 171u: goto L_00145238;
    case 172u: goto L_00145254;
    case 173u: goto L_0014526C;
    case 174u: goto L_001452A0;
    case 175u: goto L_001452B8;
    case 176u: goto L_001452EC;
    case 177u: goto L_00145304;
    case 178u: goto L_00145338;
    case 179u: goto L_00145350;
    case 180u: goto L_0014535C;
    case 181u: goto L_00145394;
    case 182u: goto L_001453AC;
    case 183u: goto L_001453B8;
    case 184u: goto L_001453F0;
    case 185u: goto L_00145408;
    case 186u: goto L_00145430;
    case 187u: goto L_00145448;
    case 188u: goto L_0014548C;
    case 189u: goto L_001454AC;
    case 190u: goto L_001454C8;
    case 191u: goto L_001454E0;
    case 192u: goto L_00145508;
    case 193u: goto L_00145538;
    case 194u: goto L_00145560;
    case 195u: goto L_00145578;
    case 196u: goto L_0014558C;
    case 197u: goto L_001455BC;
    case 198u: goto L_001455D4;
    case 199u: goto L_001455F0;
    case 200u: goto L_00145608;
    case 201u: goto L_00145614;
    case 202u: goto L_00145630;
    case 203u: goto L_00145648;
    case 204u: goto L_00145654;
    case 205u: goto L_00145670;
    case 206u: goto L_00145688;
    case 207u: goto L_001456BC;
    case 208u: goto L_001456D4;
    case 209u: goto L_00145708;
    case 210u: goto L_00145720;
    case 211u: goto L_00145758;
    case 212u: goto L_00145794;
    case 213u: goto L_001457BC;
    case 214u: goto L_001457D4;
    case 215u: goto L_001457F4;
    case 216u: goto L_0014580C;
    case 217u: goto L_00145830;
    case 218u: goto L_00145840;
    case 219u: goto L_00145848;
    case 220u: goto L_0014586C;
    case 221u: goto L_00145884;
    case 222u: goto L_00145890;
    case 223u: goto L_0014589C;
    case 224u: goto L_001458C4;
    case 225u: goto L_001458DC;
    case 226u: goto L_001458E8;
    case 227u: goto L_001458F4;
    case 228u: goto L_0014591C;
    case 229u: goto L_00145934;
    case 230u: goto L_00145940;
    case 231u: goto L_0014594C;
    case 232u: goto L_00145974;
    case 233u: goto L_0014598C;
    case 234u: goto L_00145998;
    case 235u: goto L_001459A4;
    case 236u: goto L_001459C0;
    case 237u: goto L_001459DC;
    case 238u: goto L_001459E4;
    case 239u: goto L_001459F0;
    case 240u: goto L_001459F8;
    case 241u: goto L_00145A04;
    case 242u: goto L_00145A0C;
    case 243u: goto L_00145A18;
    case 244u: goto L_00145A20;
    case 245u: goto L_00145A2C;
    case 246u: goto L_00145A34;
    case 247u: goto L_00145A40;
    case 248u: goto L_00145A48;
    case 249u: goto L_00145A54;
    case 250u: goto L_00145A5C;
    case 251u: goto L_00145A68;
    case 252u: goto L_00145A70;
    case 253u: goto L_00145A7C;
    case 254u: goto L_00145A84;
    case 255u: goto L_00145A90;
    case 256u: goto L_00145A98;
    case 257u: goto L_00145AA4;
    case 258u: goto L_00145AAC;
    case 259u: goto L_00145AB8;
    case 260u: goto L_00145AC0;
    case 261u: goto L_00145ACC;
    case 262u: goto L_00145AD4;
    case 263u: goto L_00145ADC;
    case 264u: goto L_00145B20;
    case 265u: goto L_00145B74;
    case 266u: goto L_00145B9C;
    case 267u: goto L_00145BD0;
    case 268u: goto L_00145BF0;
    case 269u: goto L_00145C04;
    case 270u: goto L_00145C2C;
    case 271u: goto L_00145C60;
    case 272u: goto L_00145C80;
    case 273u: goto L_00145C94;
    case 274u: goto L_00145CBC;
    case 275u: goto L_00145CC8;
    case 276u: goto L_00145CF0;
    case 277u: goto L_00145D10;
    case 278u: goto L_00145D30;
    case 279u: goto L_00145D48;
    case 280u: goto L_00145DA0;
    case 281u: goto L_00145DC0;
    case 282u: goto L_00145DDC;
    case 283u: goto L_00145E28;
    case 284u: goto L_00145E6C;
    case 285u: goto L_00145EB8;
    case 286u: goto L_00145F18;
    case 287u: goto L_00145F2C;
    case 288u: goto L_00145F3C;
    case 289u: goto L_00145F68;
    case 290u: goto L_00145F80;
    case 291u: goto L_00145FC0;
    case 292u: goto L_00146008;
    case 293u: goto L_0014601C;
    case 294u: goto L_00146074;
    case 295u: goto L_001460E0;
    case 296u: goto L_001460F0;
    case 297u: goto L_00146164;
    case 298u: goto L_0014617C;
    case 299u: goto L_001461C0;
    case 300u: goto L_001462B0;
    case 301u: goto L_001462D8;
    case 302u: goto L_00146314;
    case 303u: goto L_00146348;
    case 304u: goto L_00146360;
    case 305u: goto L_00146378;
    case 306u: goto L_001463F4;
    case 307u: goto L_0014642C;
    case 308u: goto L_00146468;
    case 309u: goto L_001464E8;
    case 310u: goto L_00146584;
    case 311u: goto L_001465B8;
    case 312u: goto L_001465D0;
    case 313u: goto L_00146648;
    case 314u: goto L_0014666C;
    case 315u: goto L_001466C0;
    case 316u: goto L_001466E8;
    case 317u: goto L_00146700;
    case 318u: goto L_00146738;
    case 319u: goto L_00146840;
    case 320u: goto L_0014688C;
    case 321u: goto L_001468A0;
    case 322u: goto L_001468CC;
    case 323u: goto L_0014693C;
    case 324u: goto L_00146998;
    case 325u: goto L_001469FC;
    case 326u: goto L_00146A68;
    case 327u: goto L_00146B18;
    case 328u: goto L_00146BC0;
    case 329u: goto L_00146CA0;
    case 330u: goto L_00146CC8;
    case 331u: goto L_00146D08;
    case 332u: goto L_00146D40;
    case 333u: goto L_00146D58;
    case 334u: goto L_00146D70;
    case 335u: goto L_00146DF8;
    case 336u: goto L_00146E3C;
    case 337u: goto L_00146E58;
    case 338u: goto L_00146E78;
    case 339u: goto L_00146EB8;
    case 340u: goto L_00146F10;
    case 341u: goto L_00146F4C;
    case 342u: goto L_00146F64;
    case 343u: goto L_00146FCC;
    case 344u: goto L_00146FE8;
    case 345u: goto L_00147018;
    case 346u: goto L_00147044;
    case 347u: goto L_00147090;
    case 348u: goto L_001470B0;
    case 349u: goto L_001470D8;
    case 350u: goto L_001470F0;
    case 351u: goto L_00147128;
    case 352u: goto L_00147144;
    case 353u: goto L_00147164;
    case 354u: goto L_001471A4;
    case 355u: goto L_001471C4;
    case 356u: goto L_001471F8;
    case 357u: goto L_00147210;
    case 358u: goto L_00147218;
    case 359u: goto L_00147230;
    case 360u: goto L_00147258;
    case 361u: goto L_00147284;
    case 362u: goto L_00147320;
    case 363u: goto L_00147354;
    case 364u: goto L_0014739C;
    case 365u: goto L_001473B0;
    case 366u: goto L_001473D0;
    case 367u: goto L_00147414;
    case 368u: goto L_00147480;
    case 369u: goto L_00147504;
    case 370u: goto L_00147524;
    case 371u: goto L_00147538;
    case 372u: goto L_00147540;
    case 373u: goto L_00147558;
    case 374u: goto L_00147574;
    case 375u: goto L_00147588;
    case 376u: goto L_001475A0;
    case 377u: goto L_001475DC;
    case 378u: goto L_00147628;
    case 379u: goto L_001476D0;
    case 380u: goto L_00147754;
    case 381u: goto L_0014778C;
    case 382u: goto L_001477A4;
    case 383u: goto L_001477EC;
    case 384u: goto L_00147830;
    case 385u: goto L_00147888;
    case 386u: goto L_001478B4;
    case 387u: goto L_001478C8;
    case 388u: goto L_001478DC;
    case 389u: goto L_00147CE0;
    case 390u: goto L_00147D68;
    case 391u: goto L_00147DC4;
    case 392u: goto L_00147E20;
    case 393u: goto L_00147E74;
    case 394u: goto L_00147F14;
    case 395u: goto L_00147FE0;
    default: bad_entry(c, 0x00144000u); return;
    }
L_00144000:
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00143FF8u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 339u, depth); } }
    set32(c.r[2], c.r[3].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[3].d[0] = c.r[4].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00143FE0u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 338u, depth); } }
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00143FB0u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 337u, depth); } }
    set32(c.r[4], c.r[30].w[0] - 2504u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00144040:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014404Cu);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x0014404Cu) [[unlikely]] return; }
L_0014404C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00144050:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014405Cu);  if (depth < kMaxDepth) unit_0013(c, 325u, depth + 1u); else { c.pc = 0x0014EE48u; return; } if (c.pc != 0x0014405Cu) [[unlikely]] return; }
L_0014405C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014406C; } }
L_00144064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014406Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0014406Cu) [[unlikely]] return; }
L_0014406C:
    set32(c.r[6], ld32((c.r[22].w[0] + 284u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144080u);  if (depth < kMaxDepth) unit_009B(c, 414u, depth + 1u); else { c.pc = 0x0036F520u; return; } if (c.pc != 0x00144080u) [[unlikely]] return; }
L_00144080:
    set32(c.r[4], c.r[30].w[0] - 2504u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144098u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x00144098u) [[unlikely]] return; }
L_00144098:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0014409C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001440A8u);  if (depth < kMaxDepth) unit_0018(c, 66u, depth + 1u); else { c.pc = 0x00160860u; return; } if (c.pc != 0x001440A8u) [[unlikely]] return; }
L_001440A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001440B8; } }
L_001440B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001440B8u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001440B8u) [[unlikely]] return; }
L_001440B8:
    set32(c.r[6], ld32((c.r[22].w[0] + 288u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001440D0u);  if (depth < kMaxDepth) unit_009B(c, 414u, depth + 1u); else { c.pc = 0x0036F520u; return; } if (c.pc != 0x001440D0u) [[unlikely]] return; }
L_001440D0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001440E4u);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x001440E4u) [[unlikely]] return; }
L_001440E4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0014490C; } }
L_001440F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[17], ld32((c.r[2].w[0] + 12228u)));
    set32(c.r[5], c.r[5].w[0] + 15768u);
    c.budget -= 4;
L_00144100:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144110u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00144110u) [[unlikely]] return; }
L_00144110:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0014455C; } }
    set32(c.r[2], c.r[17].w[0] - 169u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(23ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001441D8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014413Cu);  if (depth < kMaxDepth) unit_0090(c, 172u, depth + 1u); else { c.pc = 0x003418C8u; return; } if (c.pc != 0x0014413Cu) [[unlikely]] return; }
L_0014413C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 17248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144150u);  if (depth < kMaxDepth) unit_007B(c, 65u, depth + 1u); else { c.pc = 0x002ECA00u; return; } if (c.pc != 0x00144150u) [[unlikely]] return; }
L_00144150:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0014455C; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0014455C; } }
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0014455C; } }
    set32(c.r[4], c.r[30].w[0] - 2504u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144190u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x00144190u) [[unlikely]] return; }
L_00144190:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00144194:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001441A4u);  if (depth < kMaxDepth) unit_0013(c, 351u, depth + 1u); else { c.pc = 0x0014F3B8u; return; } if (c.pc != 0x001441A4u) [[unlikely]] return; }
L_001441A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001441B4; } }
L_001441AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001441B4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001441B4u) [[unlikely]] return; }
L_001441B4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], 0u + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001441C8u);  if (depth < kMaxDepth) unit_009B(c, 414u, depth + 1u); else { c.pc = 0x0036F520u; return; } if (c.pc != 0x001441C8u) [[unlikely]] return; }
L_001441C8:
    set32(c.r[2], 0u + 60u);
    st32((c.r[22].w[0] + 2224u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014455C; } }
L_001441D8:
    set32(c.r[2], 0u + 160u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001442F8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001441F4u);  if (depth < kMaxDepth) unit_0090(c, 172u, depth + 1u); else { c.pc = 0x003418C8u; return; } if (c.pc != 0x001441F4u) [[unlikely]] return; }
L_001441F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 17248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144208u);  if (depth < kMaxDepth) unit_007B(c, 65u, depth + 1u); else { c.pc = 0x002ECA00u; return; } if (c.pc != 0x00144208u) [[unlikely]] return; }
L_00144208:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0014455C; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0014455C; } }
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0014455C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014423Cu);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x0014423Cu) [[unlikely]] return; }
L_0014423C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00144284; } }
    set32(c.r[4], c.r[30].w[0] - 2504u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144260u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x00144260u) [[unlikely]] return; }
L_00144260:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00144264:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144274u);  if (depth < kMaxDepth) unit_0016(c, 397u, depth + 1u); else { c.pc = 0x0015B3D8u; return; } if (c.pc != 0x00144274u) [[unlikely]] return; }
L_00144274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144498; } }
L_0014427C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144284u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00144284u) [[unlikely]] return; }
L_00144284:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144290u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00144290u) [[unlikely]] return; }
L_00144290:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0014455C; } }
    set32(c.r[4], c.r[30].w[0] - 2504u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001442B4u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x001442B4u) [[unlikely]] return; }
L_001442B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001442B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001442C8u);  if (depth < kMaxDepth) unit_0016(c, 397u, depth + 1u); else { c.pc = 0x0015B3D8u; return; } if (c.pc != 0x001442C8u) [[unlikely]] return; }
L_001442C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001442D8; } }
L_001442D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001442D8u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001442D8u) [[unlikely]] return; }
L_001442D8:
    set32(c.r[6], ld32((c.r[22].w[0] + 288u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001442F0u);  if (depth < kMaxDepth) unit_009B(c, 414u, depth + 1u); else { c.pc = 0x0036F520u; return; } if (c.pc != 0x001442F0u) [[unlikely]] return; }
L_001442F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014455C; } }
L_001442F8:
    set32(c.r[2], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0014438C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144314u);  if (depth < kMaxDepth) unit_0090(c, 172u, depth + 1u); else { c.pc = 0x003418C8u; return; } if (c.pc != 0x00144314u) [[unlikely]] return; }
L_00144314:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 17248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144328u);  if (depth < kMaxDepth) unit_007B(c, 65u, depth + 1u); else { c.pc = 0x002ECA00u; return; } if (c.pc != 0x00144328u) [[unlikely]] return; }
L_00144328:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0014455C; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0014455C; } }
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0014455C; } }
    set32(c.r[4], c.r[30].w[0] - 2504u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144368u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x00144368u) [[unlikely]] return; }
L_00144368:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0014436C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014437Cu);  if (depth < kMaxDepth) unit_0014(c, 306u, depth + 1u); else { c.pc = 0x001537B0u; return; } if (c.pc != 0x0014437Cu) [[unlikely]] return; }
L_0014437C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144498; } }
L_00144384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014438Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0014438Cu) [[unlikely]] return; }
L_0014438C:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00144410; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00144410; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00144410; } }
    set32(c.r[2], 0u + 29u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00144410; } }
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00144410; } }
    set32(c.r[2], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00144410; } }
    set32(c.r[2], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00144410; } }
    set32(c.r[2], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00144410; } }
    set32(c.r[2], 0u + 101u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00144410; } }
    set32(c.r[2], 0u + 132u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00144410; } }
    set32(c.r[2], 0u + 144u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001444B4; } }
L_00144410:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144420u);  if (depth < kMaxDepth) unit_0090(c, 172u, depth + 1u); else { c.pc = 0x003418C8u; return; } if (c.pc != 0x00144420u) [[unlikely]] return; }
L_00144420:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 17248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144434u);  if (depth < kMaxDepth) unit_007B(c, 65u, depth + 1u); else { c.pc = 0x002ECA00u; return; } if (c.pc != 0x00144434u) [[unlikely]] return; }
L_00144434:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0014455C; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0014455C; } }
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0014455C; } }
    set32(c.r[4], c.r[30].w[0] - 2504u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144474u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x00144474u) [[unlikely]] return; }
L_00144474:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00144478:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144488u);  if (depth < kMaxDepth) unit_0016(c, 397u, depth + 1u); else { c.pc = 0x0015B3D8u; return; } if (c.pc != 0x00144488u) [[unlikely]] return; }
L_00144488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144498; } }
L_00144490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144498u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00144498u) [[unlikely]] return; }
L_00144498:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001444ACu);  if (depth < kMaxDepth) unit_009B(c, 414u, depth + 1u); else { c.pc = 0x0036F520u; return; } if (c.pc != 0x001444ACu) [[unlikely]] return; }
L_001444AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014455C; } }
L_001444B4:
    set32(c.r[2], 0u + 195u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0014455C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001444D0u);  if (depth < kMaxDepth) unit_0090(c, 172u, depth + 1u); else { c.pc = 0x003418C8u; return; } if (c.pc != 0x001444D0u) [[unlikely]] return; }
L_001444D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 17248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001444E4u);  if (depth < kMaxDepth) unit_007B(c, 65u, depth + 1u); else { c.pc = 0x002ECA00u; return; } if (c.pc != 0x001444E4u) [[unlikely]] return; }
L_001444E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0014455C; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0014455C; } }
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0014455C; } }
    set32(c.r[4], c.r[30].w[0] - 2504u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144524u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x00144524u) [[unlikely]] return; }
L_00144524:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00144528:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144538u);  if (depth < kMaxDepth) unit_0015(c, 191u, depth + 1u); else { c.pc = 0x00155B70u; return; } if (c.pc != 0x00144538u) [[unlikely]] return; }
L_00144538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144548; } }
L_00144540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144548u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00144548u) [[unlikely]] return; }
L_00144548:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014455Cu);  if (depth < kMaxDepth) unit_009B(c, 414u, depth + 1u); else { c.pc = 0x0036F520u; return; } if (c.pc != 0x0014455Cu) [[unlikely]] return; }
L_0014455C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15784u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144574u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00144574u) [[unlikely]] return; }
L_00144574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00144704; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15800u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144594u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00144594u) [[unlikely]] return; }
L_00144594:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001447F8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001445ACu);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x001445ACu) [[unlikely]] return; }
L_001445AC:
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[3].d[0] = ld16((c.r[22].w[0] + 284u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15816u);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001445DCu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x001445DCu) [[unlikely]] return; }
L_001445DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001447F8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001445F4u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x001445F4u) [[unlikely]] return; }
L_001445F4:
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[4], c.r[30].w[0] - 2504u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144614u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x00144614u) [[unlikely]] return; }
L_00144614:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00144618:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144624u);  if (depth < kMaxDepth) unit_0012(c, 198u, depth + 1u); else { c.pc = 0x00149660u; return; } if (c.pc != 0x00144624u) [[unlikely]] return; }
L_00144624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144634; } }
L_0014462C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144634u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00144634u) [[unlikely]] return; }
L_00144634:
    set32(c.r[2], ld32((c.r[2].w[0] + 2420u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 15832u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014465Cu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x0014465Cu) [[unlikely]] return; }
L_0014465C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001447F8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144674u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00144674u) [[unlikely]] return; }
L_00144674:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144690u);  if (depth < kMaxDepth) unit_0090(c, 172u, depth + 1u); else { c.pc = 0x003418C8u; return; } if (c.pc != 0x00144690u) [[unlikely]] return; }
L_00144690:
    set32(c.r[4], ld32((c.r[16].w[0] - 17248u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001446A0u);  if (depth < kMaxDepth) unit_007B(c, 65u, depth + 1u); else { c.pc = 0x002ECA00u; return; } if (c.pc != 0x001446A0u) [[unlikely]] return; }
L_001446A0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001447F8; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001447F8; } }
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001447F8; } }
    set32(c.r[3], 0u + 40u);
    set32(c.r[2], c.r[18].w[0] - 1u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 600u);
    set32(c.r[2], c.r[2].w[0] << 2);
    mmi::mult(c, 0, c.r[23].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = 0ull | 39452ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001447F8; } }
L_00144704:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15800u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014471Cu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x0014471Cu) [[unlikely]] return; }
L_0014471C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001447F8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144738u);  if (depth < kMaxDepth) unit_0090(c, 172u, depth + 1u); else { c.pc = 0x003418C8u; return; } if (c.pc != 0x00144738u) [[unlikely]] return; }
L_00144738:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 17248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014474Cu);  if (depth < kMaxDepth) unit_007B(c, 65u, depth + 1u); else { c.pc = 0x002ECA00u; return; } if (c.pc != 0x0014474Cu) [[unlikely]] return; }
L_0014474C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001447F8; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001447F8; } }
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001447F8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144780u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00144780u) [[unlikely]] return; }
L_00144780:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15848u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014479Cu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x0014479Cu) [[unlikely]] return; }
L_0014479C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001447E4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001447B4u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x001447B4u) [[unlikely]] return; }
L_001447B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001447E4; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 284u)));
    c.r[4].d[0] = 0ull | 39440ull;
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[18].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001447F8; } }
L_001447E4:
    set32(c.r[2], ld32((c.r[22].w[0] + 284u)));
    set32(c.r[2], c.r[18].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    c.budget -= 5;
L_001447F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15864u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144810u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00144810u) [[unlikely]] return; }
L_00144810:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001448F4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014482Cu);  if (depth < kMaxDepth) unit_0090(c, 172u, depth + 1u); else { c.pc = 0x003418C8u; return; } if (c.pc != 0x0014482Cu) [[unlikely]] return; }
L_0014482C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 17248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144840u);  if (depth < kMaxDepth) unit_007B(c, 65u, depth + 1u); else { c.pc = 0x002ECA00u; return; } if (c.pc != 0x00144840u) [[unlikely]] return; }
L_00144840:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001448F4; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001448F4; } }
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001448F4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144874u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00144874u) [[unlikely]] return; }
L_00144874:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15848u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144890u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00144890u) [[unlikely]] return; }
L_00144890:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001448D4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001448A8u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x001448A8u) [[unlikely]] return; }
L_001448A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001448D4; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 284u)));
    c.r[5].d[0] = 0ull | 39448ull;
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[18].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001448F0; } }
L_001448D4:
    set32(c.r[2], ld32((c.r[22].w[0] + 284u)));
    c.r[6].d[0] = 0ull | 39444ull;
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[18].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 7;
L_001448F0:
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_001448F4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144900u);  if (depth < kMaxDepth) unit_0090(c, 93u, depth + 1u); else { c.pc = 0x00340BF8u; return; } if (c.pc != 0x00144900u) [[unlikely]] return; }
L_00144900:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001440F0u | kUnwind; return; } goto L_001440F0; } }
L_0014490C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 23u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144920u);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x00144920u) [[unlikely]] return; }
L_00144920:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00145498; } }
    c.budget -= 1;
L_00144930:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15880u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144948u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00144948u) [[unlikely]] return; }
L_00144948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001449C0; } }
    set32(c.r[4], c.r[30].w[0] - 2504u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144968u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x00144968u) [[unlikely]] return; }
L_00144968:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0014496C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014497Cu);  if (depth < kMaxDepth) unit_0015(c, 348u, depth + 1u); else { c.pc = 0x001575B0u; return; } if (c.pc != 0x0014497Cu) [[unlikely]] return; }
L_0014497C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014498C; } }
L_00144984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014498Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0014498Cu) [[unlikely]] return; }
L_0014498C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], 0u + 62u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001449A0u);  if (depth < kMaxDepth) unit_009B(c, 414u, depth + 1u); else { c.pc = 0x0036F520u; return; } if (c.pc != 0x001449A0u) [[unlikely]] return; }
L_001449A0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 23u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001449B0u);  if (depth < kMaxDepth) unit_0090(c, 90u, depth + 1u); else { c.pc = 0x00340BA0u; return; } if (c.pc != 0x001449B0u) [[unlikely]] return; }
L_001449B0:
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001449C0u);  if (depth < kMaxDepth) unit_0090(c, 89u, depth + 1u); else { c.pc = 0x00340B90u; return; } if (c.pc != 0x001449C0u) [[unlikely]] return; }
L_001449C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15800u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001449D8u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x001449D8u) [[unlikely]] return; }
L_001449D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00145480; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001449F4u);  if (depth < kMaxDepth) unit_0090(c, 172u, depth + 1u); else { c.pc = 0x003418C8u; return; } if (c.pc != 0x001449F4u) [[unlikely]] return; }
L_001449F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 17248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144A08u);  if (depth < kMaxDepth) unit_007B(c, 65u, depth + 1u); else { c.pc = 0x002ECA00u; return; } if (c.pc != 0x00144A08u) [[unlikely]] return; }
L_00144A08:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00145480; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u + 23u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00145480; } }
    set32(c.r[18], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00145480; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144A3Cu);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00144A3Cu) [[unlikely]] return; }
L_00144A3C:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[22].w[0] + 284u)));
    set32(c.r[17], c.r[23].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[29].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00144A78; } }
    c.r[7].d[0] = 0ull | 39444ull;
    set32(c.r[7], c.r[7].w[0] + c.r[29].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00144AB0; } }
L_00144A78:
    c.r[3].d[0] = 0ull | 39440ull;
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00144CE0; } }
    c.r[5].d[0] = 0ull | 39448ull;
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00144CE0; } }
L_00144AB0:
    set32(c.r[4], c.r[30].w[0] - 2504u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144AC8u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x00144AC8u) [[unlikely]] return; }
L_00144AC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00144ACC:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[7].d[0] = 0ull | 39440ull;
    c.r[6].d[0] = 0ull | 39444ull;
    set32(c.r[7], c.r[7].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = 0ull | 39448ull;
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[8], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[9], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0])));
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[9].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144B24u);  if (depth < kMaxDepth) unit_0016(c, 358u, depth + 1u); else { c.pc = 0x0015ACE8u; return; } if (c.pc != 0x00144B24u) [[unlikely]] return; }
L_00144B24:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00144B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144B38; } }
L_00144B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144B38u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00144B38u) [[unlikely]] return; }
L_00144B38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15888u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144B50u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00144B50u) [[unlikely]] return; }
L_00144B50:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00144B88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144B64u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x00144B64u) [[unlikely]] return; }
L_00144B64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00144B88; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144B78u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00144B78u) [[unlikely]] return; }
L_00144B78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00144B88; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 2648u), c.r[2].w[0]);
    c.budget -= 2;
L_00144B88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15904u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144BA0u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00144BA0u) [[unlikely]] return; }
L_00144BA0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00144BD0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144BB8u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00144BB8u) [[unlikely]] return; }
L_00144BB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00144C58; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 2652u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144C58; } }
L_00144BD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15920u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144BE8u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00144BE8u) [[unlikely]] return; }
L_00144BE8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00144C18; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144C00u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00144C00u) [[unlikely]] return; }
L_00144C00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00144C58; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 2656u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144C58; } }
L_00144C18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15936u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144C30u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00144C30u) [[unlikely]] return; }
L_00144C30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00144C58; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144C48u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00144C48u) [[unlikely]] return; }
L_00144C48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00144C58; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 2660u), c.r[2].w[0]);
    c.budget -= 2;
L_00144C58:
    set32(c.r[2], ld32((c.r[17].w[0] + 2652u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00144C84; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 2656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00144C84; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 2660u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00144C84; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 2656u), c.r[2].w[0]);
    c.budget -= 2;
L_00144C84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15952u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144C9Cu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00144C9Cu) [[unlikely]] return; }
L_00144C9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00144CC4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144CB4u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00144CB4u) [[unlikely]] return; }
L_00144CB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00144CC4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 2644u), c.r[2].w[0]);
    c.budget -= 2;
L_00144CC4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144CD8u);  if (depth < kMaxDepth) unit_009B(c, 414u, depth + 1u); else { c.pc = 0x0036F520u; return; } if (c.pc != 0x00144CD8u) [[unlikely]] return; }
L_00144CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144DC4; } }
L_00144CE0:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + c.r[2].w[0]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00144D14; } }
    c.r[6].d[0] = 0ull | 39444ull;
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[6].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00144DC4; } }
L_00144D14:
    c.r[7].d[0] = 0ull | 39440ull;
    set32(c.r[7], c.r[7].w[0] + c.r[29].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[7].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00144D4C; } }
    c.r[3].d[0] = 0ull | 39448ull;
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00144DC4; } }
L_00144D4C:
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[30].w[0] - 2504u);
    st32((c.r[3].w[0] + 6656u), c.f[0]);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[3].w[0] + 6660u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[3].w[0] + 6668u), 0u);
    st32((c.r[3].w[0] + 6664u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144D88u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x00144D88u) [[unlikely]] return; }
L_00144D88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00144D8C:
    c.r[5].d[0] = 0ull | 39424ull;
    set32(c.r[5], c.r[29].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144DA0u);  if (depth < kMaxDepth) unit_0017(c, 336u, depth + 1u); else { c.pc = 0x0015ED90u; return; } if (c.pc != 0x00144DA0u) [[unlikely]] return; }
L_00144DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144DB0; } }
L_00144DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144DB0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00144DB0u) [[unlikely]] return; }
L_00144DB0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144DC4u);  if (depth < kMaxDepth) unit_009B(c, 414u, depth + 1u); else { c.pc = 0x0036F520u; return; } if (c.pc != 0x00144DC4u) [[unlikely]] return; }
L_00144DC4:
    set32(c.r[3], c.r[22].w[0] + 28u);
    set32(c.r[17], c.r[3].w[0] + c.r[21].w[0]);
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00145458; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15968u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144DF4u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00144DF4u) [[unlikely]] return; }
L_00144DF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00144E20; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144E0Cu);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x00144E0Cu) [[unlikely]] return; }
L_00144E0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144E18u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x00144E18u) [[unlikely]] return; }
L_00144E18:
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 540u), c.f[0]);
    c.budget -= 2;
L_00144E20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15984u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144E38u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00144E38u) [[unlikely]] return; }
L_00144E38:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00144E64; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144E50u);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x00144E50u) [[unlikely]] return; }
L_00144E50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144E5Cu);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x00144E5Cu) [[unlikely]] return; }
L_00144E5C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 548u), c.f[0]);
    c.budget -= 2;
L_00144E64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144E7Cu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00144E7Cu) [[unlikely]] return; }
L_00144E7C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00144EA8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144E94u);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x00144E94u) [[unlikely]] return; }
L_00144E94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144EA0u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x00144EA0u) [[unlikely]] return; }
L_00144EA0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 556u), c.f[0]);
    c.budget -= 2;
L_00144EA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16016u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144EC0u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00144EC0u) [[unlikely]] return; }
L_00144EC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00144EF8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144EE0u);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x00144EE0u) [[unlikely]] return; }
L_00144EE0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144EECu);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x00144EECu) [[unlikely]] return; }
L_00144EEC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144F04; } }
L_00144EF8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 3;
L_00144F04:
    st32((c.r[2].w[0] + 624u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16024u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144F24u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00144F24u) [[unlikely]] return; }
L_00144F24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00144F54; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144F3Cu);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x00144F3Cu) [[unlikely]] return; }
L_00144F3C:
    set32(c.r[16], c.r[18].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144F4Cu);  if (depth < kMaxDepth) unit_0040(c, 249u, depth + 1u); else { c.pc = 0x00202C80u; return; } if (c.pc != 0x00144F4Cu) [[unlikely]] return; }
L_00144F4C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[3].w[0] + 628u), c.r[2].w[0]);
    c.budget -= 2;
L_00144F54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16040u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144F6Cu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00144F6Cu) [[unlikely]] return; }
L_00144F6C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00144F90; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144F84u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00144F84u) [[unlikely]] return; }
L_00144F84:
    set32(c.r[16], c.r[18].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[3].w[0] + 648u), c.r[2].w[0]);
    c.budget -= 3;
L_00144F90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16056u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144FA8u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00144FA8u) [[unlikely]] return; }
L_00144FA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00144FEC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144FC0u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00144FC0u) [[unlikely]] return; }
L_00144FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00144FE0; } }
    set32(c.r[2], c.r[18].w[0] + c.r[21].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[3].w[0] + 564u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144FEC; } }
L_00144FE0:
    set32(c.r[2], c.r[18].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[3].w[0] + 564u), 0u);
    c.budget -= 3;
L_00144FEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16072u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145004u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00145004u) [[unlikely]] return; }
L_00145004:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00145034; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014501Cu);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x0014501Cu) [[unlikely]] return; }
L_0014501C:
    set32(c.r[16], c.r[18].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014502Cu);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x0014502Cu) [[unlikely]] return; }
L_0014502C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 584u), c.f[0]);
    c.budget -= 2;
L_00145034:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16088u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014504Cu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x0014504Cu) [[unlikely]] return; }
L_0014504C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0014507C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145064u);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x00145064u) [[unlikely]] return; }
L_00145064:
    set32(c.r[16], c.r[18].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145074u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x00145074u) [[unlikely]] return; }
L_00145074:
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 588u), c.f[0]);
    c.budget -= 2;
L_0014507C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16104u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145094u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00145094u) [[unlikely]] return; }
L_00145094:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001450C4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001450ACu);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x001450ACu) [[unlikely]] return; }
L_001450AC:
    set32(c.r[16], c.r[18].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001450BCu);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x001450BCu) [[unlikely]] return; }
L_001450BC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 592u), c.f[0]);
    c.budget -= 2;
L_001450C4:
    set32(c.r[2], c.r[18].w[0] + c.r[21].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] + 16120u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001450E4u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x001450E4u) [[unlikely]] return; }
L_001450E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00145118; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001450FCu);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x001450FCu) [[unlikely]] return; }
L_001450FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00145114; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 2524u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145118; } }
L_00145114:
    st32((c.r[17].w[0] + 2524u), 0u);
    c.budget -= 1;
L_00145118:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16136u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145130u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00145130u) [[unlikely]] return; }
L_00145130:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00145164; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145148u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00145148u) [[unlikely]] return; }
L_00145148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00145160; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 2532u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145164; } }
L_00145160:
    st32((c.r[17].w[0] + 2532u), 0u);
    c.budget -= 1;
L_00145164:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16152u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014517Cu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x0014517Cu) [[unlikely]] return; }
L_0014517C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001451A8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145194u);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x00145194u) [[unlikely]] return; }
L_00145194:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001451A0u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x001451A0u) [[unlikely]] return; }
L_001451A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001451B0; } }
L_001451A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_001451B0:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 2548u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16168u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001451D4u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x001451D4u) [[unlikely]] return; }
L_001451D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001451FC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001451ECu);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x001451ECu) [[unlikely]] return; }
L_001451EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001451F8u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x001451F8u) [[unlikely]] return; }
L_001451F8:
    st32((c.r[17].w[0] + 2552u), c.f[0]);
    c.budget -= 1;
L_001451FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16184u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145214u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00145214u) [[unlikely]] return; }
L_00145214:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0014523C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014522Cu);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x0014522Cu) [[unlikely]] return; }
L_0014522C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145238u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x00145238u) [[unlikely]] return; }
L_00145238:
    st32((c.r[17].w[0] + 2572u), c.f[0]);
    c.budget -= 1;
L_0014523C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16200u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145254u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00145254u) [[unlikely]] return; }
L_00145254:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00145288; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014526Cu);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x0014526Cu) [[unlikely]] return; }
L_0014526C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00145284; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 2580u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145288; } }
L_00145284:
    st32((c.r[17].w[0] + 2580u), 0u);
    c.budget -= 1;
L_00145288:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16216u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001452A0u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x001452A0u) [[unlikely]] return; }
L_001452A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001452D4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001452B8u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x001452B8u) [[unlikely]] return; }
L_001452B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001452D0; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 2604u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001452D4; } }
L_001452D0:
    st32((c.r[17].w[0] + 2604u), 0u);
    c.budget -= 1;
L_001452D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16232u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001452ECu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x001452ECu) [[unlikely]] return; }
L_001452EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00145320; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145304u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00145304u) [[unlikely]] return; }
L_00145304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014531C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 2608u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145320; } }
L_0014531C:
    st32((c.r[17].w[0] + 2608u), 0u);
    c.budget -= 1;
L_00145320:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16248u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145338u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00145338u) [[unlikely]] return; }
L_00145338:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0014537C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145350u);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x00145350u) [[unlikely]] return; }
L_00145350:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014535Cu);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x0014535Cu) [[unlikely]] return; }
L_0014535C:
    c.f[1] = c.f[0];
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014537C; } }
    st32((c.r[17].w[0] + 2588u), c.f[1]);
    c.budget -= 1;
L_0014537C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16264u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145394u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00145394u) [[unlikely]] return; }
L_00145394:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001453D8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001453ACu);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x001453ACu) [[unlikely]] return; }
L_001453AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001453B8u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x001453B8u) [[unlikely]] return; }
L_001453B8:
    c.f[1] = c.f[0];
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001453D8; } }
    st32((c.r[17].w[0] + 2592u), c.f[1]);
    c.budget -= 1;
L_001453D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16280u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001453F0u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x001453F0u) [[unlikely]] return; }
L_001453F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00145418; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145408u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00145408u) [[unlikely]] return; }
L_00145408:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00145418; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 2596u), c.r[2].w[0]);
    c.budget -= 2;
L_00145418:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16296u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145430u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00145430u) [[unlikely]] return; }
L_00145430:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00145458; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145448u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00145448u) [[unlikely]] return; }
L_00145448:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00145458; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 2600u), c.r[2].w[0]);
    c.budget -= 2;
L_00145458:
    set32(c.r[2], ld32((c.r[22].w[0] + 2224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00145470; } }
    c.r[2].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00145480; } }
L_00145470:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == c.r[2].d[0];  if (t) { goto L_00145480; } }
    st32((c.r[22].w[0] + 2224u), c.r[23].w[0]);
    c.budget -= 1;
L_00145480:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014548Cu);  if (depth < kMaxDepth) unit_0090(c, 93u, depth + 1u); else { c.pc = 0x00340BF8u; return; } if (c.pc != 0x0014548Cu) [[unlikely]] return; }
L_0014548C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00144930u | kUnwind; return; } goto L_00144930; } }
L_00145498:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001454ACu);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x001454ACu) [[unlikely]] return; }
L_001454AC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001459CC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C8E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 64053ull;
    c.f[20] = c.r[1].w[0];
    c.budget -= 4;
L_001454C8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[6].w[0] + 15800u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001454E0u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x001454E0u) [[unlikely]] return; }
L_001454E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001459B4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001459B4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145508u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00145508u) [[unlikely]] return; }
L_00145508:
    set32(c.r[3], ld32((c.r[22].w[0] + 284u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[7].w[0] + 15816u);
    set32(c.r[23], c.r[2].w[0] - c.r[3].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[23].w[0] << 2);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 2420u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145538u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00145538u) [[unlikely]] return; }
L_00145538:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00145554; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145568; } }
L_00145554:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145560u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00145560u) [[unlikely]] return; }
L_00145560:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[21], c.r[16].w[0] - c.r[17].w[0]);
    c.budget -= 2;
L_00145568:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145578u);  if (depth < kMaxDepth) unit_0013(c, 167u, depth + 1u); else { c.pc = 0x0014D730u; return; } if (c.pc != 0x00145578u) [[unlikely]] return; }
L_00145578:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014558Cu);  if (depth < kMaxDepth) unit_0090(c, 172u, depth + 1u); else { c.pc = 0x003418C8u; return; } if (c.pc != 0x0014558Cu) [[unlikely]] return; }
L_0014558C:
    set32(c.r[3], ld32((c.r[18].w[0] + 2420u)));
    set32(c.r[6], 0u + 112u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 16312u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[7].w[0] + c.r[18].w[0]);
    st16((c.r[3].w[0] + 736u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001455BCu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x001455BCu) [[unlikely]] return; }
L_001455BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001455D8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001455D4u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x001455D4u) [[unlikely]] return; }
L_001455D4:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_001455D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16328u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001455F0u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x001455F0u) [[unlikely]] return; }
L_001455F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00145618; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145608u);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x00145608u) [[unlikely]] return; }
L_00145608:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145614u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x00145614u) [[unlikely]] return; }
L_00145614:
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 1;
L_00145618:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16344u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145630u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00145630u) [[unlikely]] return; }
L_00145630:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00145658; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145648u);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x00145648u) [[unlikely]] return; }
L_00145648:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145654u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x00145654u) [[unlikely]] return; }
L_00145654:
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.budget -= 1;
L_00145658:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16360u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145670u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00145670u) [[unlikely]] return; }
L_00145670:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001456A4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145688u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00145688u) [[unlikely]] return; }
L_00145688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001456A0; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001456A4; } }
L_001456A0:
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 1;
L_001456A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16376u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001456BCu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x001456BCu) [[unlikely]] return; }
L_001456BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001456F0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001456D4u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x001456D4u) [[unlikely]] return; }
L_001456D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001456EC; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001456F0; } }
L_001456EC:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_001456F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16392u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145708u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00145708u) [[unlikely]] return; }
L_00145708:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0014573C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145720u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00145720u) [[unlikely]] return; }
L_00145720:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00145738; } }
    set32(c.r[4], 0u + 1u);
    st32((c.r[17].w[0] + 24u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014573C; } }
L_00145738:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 1;
L_0014573C:
    set32(c.r[2], 0u + 40u);
    set32(c.r[3], 0u + 600u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[23].w[0], c.r[3].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.r[6].d[0] = 0ull + 0ull;
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 7;
L_00145758:
    c.r[3].d[0] = 0ull | 39452ull;
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00145794; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145794u);  if (depth < kMaxDepth) unit_0013(c, 263u, depth + 1u); else { c.pc = 0x0014E768u; return; } if (c.pc != 0x00145794u) [[unlikely]] return; }
L_00145794:
    set32(c.r[2], c.r[16].w[0] << 16);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00145758u | kUnwind; return; } goto L_00145758; } }
    set32(c.r[5], c.r[23].w[0] + 16408u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001457BCu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x001457BCu) [[unlikely]] return; }
L_001457BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001457E0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001457D4u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x001457D4u) [[unlikely]] return; }
L_001457D4:
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
L_001457E0:
    set32(c.r[5], c.r[30].w[0] + 16424u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001457F4u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x001457F4u) [[unlikely]] return; }
L_001457F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00145818; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014580Cu);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x0014580Cu) [[unlikely]] return; }
L_0014580C:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
L_00145818:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] + 16440u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145830u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00145830u) [[unlikely]] return; }
L_00145830:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00145854; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00145840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145848u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00145848u) [[unlikely]] return; }
L_00145848:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 3;
L_00145854:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[6].w[0] + 16456u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014586Cu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x0014586Cu) [[unlikely]] return; }
L_0014586C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001458AC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145884u);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x00145884u) [[unlikely]] return; }
L_00145884:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145890u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x00145890u) [[unlikely]] return; }
L_00145890:
    c.f[12] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014589Cu);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x0014589Cu) [[unlikely]] return; }
L_0014589C:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 96u), c.f[0]);
    c.budget -= 4;
L_001458AC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[7].w[0] + 16472u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001458C4u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x001458C4u) [[unlikely]] return; }
L_001458C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00145904; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001458DCu);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x001458DCu) [[unlikely]] return; }
L_001458DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001458E8u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x001458E8u) [[unlikely]] return; }
L_001458E8:
    c.f[12] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001458F4u);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x001458F4u) [[unlikely]] return; }
L_001458F4:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 100u), c.f[0]);
    c.budget -= 4;
L_00145904:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 16488u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014591Cu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x0014591Cu) [[unlikely]] return; }
L_0014591C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0014595C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145934u);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x00145934u) [[unlikely]] return; }
L_00145934:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145940u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x00145940u) [[unlikely]] return; }
L_00145940:
    c.f[12] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014594Cu);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x0014594Cu) [[unlikely]] return; }
L_0014594C:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 4;
L_0014595C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + 16504u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145974u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00145974u) [[unlikely]] return; }
L_00145974:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001459B4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014598Cu);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x0014598Cu) [[unlikely]] return; }
L_0014598C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145998u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x00145998u) [[unlikely]] return; }
L_00145998:
    c.f[12] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001459A4u);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x001459A4u) [[unlikely]] return; }
L_001459A4:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.budget -= 4;
L_001459B4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001459C0u);  if (depth < kMaxDepth) unit_0090(c, 93u, depth + 1u); else { c.pc = 0x00340BF8u; return; } if (c.pc != 0x001459C0u) [[unlikely]] return; }
L_001459C0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001454C8u | kUnwind; return; } goto L_001454C8; } }
L_001459CC:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 284u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001459DCu);  if (depth < kMaxDepth) unit_0012(c, 87u, depth + 1u); else { c.pc = 0x00148D78u; return; } if (c.pc != 0x001459DCu) [[unlikely]] return; }
L_001459DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145ADC; } }
L_001459E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001459F0u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x001459F0u) [[unlikely]] return; }
L_001459F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00144064u | kUnwind; return; } goto L_00144064; } }
L_001459F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145A04u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00145A04u) [[unlikely]] return; }
L_00145A04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001440B0u | kUnwind; return; } goto L_001440B0; } }
L_00145A0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145A18u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00145A18u) [[unlikely]] return; }
L_00145A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001441ACu | kUnwind; return; } goto L_001441AC; } }
L_00145A20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145A2Cu);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00145A2Cu) [[unlikely]] return; }
L_00145A2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014427Cu | kUnwind; return; } goto L_0014427C; } }
L_00145A34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145A40u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00145A40u) [[unlikely]] return; }
L_00145A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001442D0u | kUnwind; return; } goto L_001442D0; } }
L_00145A48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145A54u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00145A54u) [[unlikely]] return; }
L_00145A54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00144384u | kUnwind; return; } goto L_00144384; } }
L_00145A5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145A68u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00145A68u) [[unlikely]] return; }
L_00145A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00144490u | kUnwind; return; } goto L_00144490; } }
L_00145A70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145A7Cu);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00145A7Cu) [[unlikely]] return; }
L_00145A7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00144540u | kUnwind; return; } goto L_00144540; } }
L_00145A84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145A90u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00145A90u) [[unlikely]] return; }
L_00145A90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014462Cu | kUnwind; return; } goto L_0014462C; } }
L_00145A98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145AA4u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00145AA4u) [[unlikely]] return; }
L_00145AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00144984u | kUnwind; return; } goto L_00144984; } }
L_00145AAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145AB8u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00145AB8u) [[unlikely]] return; }
L_00145AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00144B30u | kUnwind; return; } goto L_00144B30; } }
L_00145AC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145ACCu);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00145ACCu) [[unlikely]] return; }
L_00145ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00144DA8u | kUnwind; return; } goto L_00144DA8; } }
L_00145AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145ADCu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x00145ADCu) [[unlikely]] return; }
L_00145ADC:
    c.r[12].d[0] = 0ull | 39632ull;
    set32(c.r[13], c.r[12].w[0] + c.r[29].w[0]);
    ld128((c.r[13].w[0] - 32u) & ~15u, c.r[16]);
    ld128((c.r[13].w[0] - 48u) & ~15u, c.r[17]);
    ld128((c.r[13].w[0] - 64u) & ~15u, c.r[18]);
    ld128((c.r[13].w[0] - 80u) & ~15u, c.r[19]);
    ld128((c.r[13].w[0] - 96u) & ~15u, c.r[20]);
    ld128((c.r[13].w[0] - 112u) & ~15u, c.r[21]);
    ld128((c.r[13].w[0] - 128u) & ~15u, c.r[22]);
    ld128((c.r[13].w[0] - 144u) & ~15u, c.r[23]);
    ld128((c.r[13].w[0] - 160u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[13].w[0] - 176u));
    c.f[20] = ld32((c.r[13].w[0] - 16u));
    set32(c.r[29], c.r[29].w[0] + c.r[12].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00145B20:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u + 16u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00145B68; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00145B6C; } }
L_00145B68:
    set32(c.r[5], 0u + 62u);
    c.budget -= 1;
L_00145B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145B74u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x00145B74u) [[unlikely]] return; }
L_00145B74:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00145DF8; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 724u)));
    set32(c.r[19], ld32((c.r[18].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00145B9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00145B9Cu) [[unlikely]] return; }
L_00145B9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00145D6C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00145C34; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00145C20; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[16], c.r[18].w[0] + 32u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
L_00145BD0:
    c.f[12] = ld32((c.r[16].w[0] - 8u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[16].w[0] - 4u));
    c.f[14] = ld32((c.r[16].w[0]));
    c.f[15] = 0u;
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145BF0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00145BF0u) [[unlikely]] return; }
L_00145BF0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145C04u);  if (depth < kMaxDepth) unit_0016(c, 387u, depth + 1u); else { c.pc = 0x0015B240u; return; } if (c.pc != 0x00145C04u) [[unlikely]] return; }
L_00145C04:
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[19], c.r[19].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00145BD0u | kUnwind; return; } goto L_00145BD0; } }
L_00145C20:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145C2Cu);  if (depth < kMaxDepth) unit_0016(c, 391u, depth + 1u); else { c.pc = 0x0015B320u; return; } if (c.pc != 0x00145C2Cu) [[unlikely]] return; }
L_00145C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145CBC; } }
L_00145C34:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00145CD0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00145CB0; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[16], c.r[18].w[0] + 32u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
L_00145C60:
    c.f[12] = ld32((c.r[16].w[0] - 8u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[16].w[0] - 4u));
    c.f[14] = ld32((c.r[16].w[0]));
    c.f[15] = 0u;
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145C80u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00145C80u) [[unlikely]] return; }
L_00145C80:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145C94u);  if (depth < kMaxDepth) unit_0016(c, 389u, depth + 1u); else { c.pc = 0x0015B2B0u; return; } if (c.pc != 0x00145C94u) [[unlikely]] return; }
L_00145C94:
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[19], c.r[19].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00145C60u | kUnwind; return; } goto L_00145C60; } }
L_00145CB0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145CBCu);  if (depth < kMaxDepth) unit_0016(c, 393u, depth + 1u); else { c.pc = 0x0015B368u; return; } if (c.pc != 0x00145CBCu) [[unlikely]] return; }
L_00145CBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145CC8u);  if (depth < kMaxDepth) unit_0085(c, 242u, depth + 1u); else { c.pc = 0x00316740u; return; } if (c.pc != 0x00145CC8u) [[unlikely]] return; }
L_00145CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145DF8; } }
L_00145CD0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00145DF8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145CF0u);  if (depth < kMaxDepth) unit_0013(c, 167u, depth + 1u); else { c.pc = 0x0014D730u; return; } if (c.pc != 0x00145CF0u) [[unlikely]] return; }
L_00145CF0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00145DF8; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[16], c.r[18].w[0] + 32u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
L_00145D10:
    c.f[12] = ld32((c.r[16].w[0] - 8u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[16].w[0] - 4u));
    c.f[14] = ld32((c.r[16].w[0]));
    c.f[15] = 0u;
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145D30u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00145D30u) [[unlikely]] return; }
L_00145D30:
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145D48u);  if (depth < kMaxDepth) unit_0013(c, 264u, depth + 1u); else { c.pc = 0x0014E7A8u; return; } if (c.pc != 0x00145D48u) [[unlikely]] return; }
L_00145D48:
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[19], c.r[19].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00145D10u | kUnwind; return; } goto L_00145D10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145DF8; } }
L_00145D6C:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00145D84; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00145DF8; } }
L_00145D84:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00145DF8; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[16], c.r[18].w[0] + 32u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 3;
L_00145DA0:
    c.f[12] = ld32((c.r[16].w[0] - 8u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[16].w[0] - 4u));
    c.f[14] = ld32((c.r[16].w[0]));
    c.f[15] = 0u;
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145DC0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00145DC0u) [[unlikely]] return; }
L_00145DC0:
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145DDCu);  if (depth < kMaxDepth) unit_0016(c, 23u, depth + 1u); else { c.pc = 0x00158378u; return; } if (c.pc != 0x00145DDCu) [[unlikely]] return; }
L_00145DDC:
    c.r[3].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00145DA0u | kUnwind; return; } goto L_00145DA0; } }
L_00145DF8:
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
L_00145E28:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    set32(c.r[19], c.r[17].w[0] + 28u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[21].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 284u)));
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145E6Cu);  if (depth < kMaxDepth) unit_0012(c, 71u, depth + 1u); else { c.pc = 0x00148AB0u; return; } if (c.pc != 0x00145E6Cu) [[unlikely]] return; }
L_00145E6C:
    set32(c.r[16], c.r[16].w[0] << 2);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[20], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00145E90; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 652u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00145EE4; } }
L_00145E90:
    set32(c.r[2], ld32((c.r[17].w[0] + 284u)));
    set32(c.r[21], 0u + 1u);
    st32((c.r[17].w[0] + 24u), c.r[18].w[0]);
    set32(c.r[2], c.r[18].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145EB8u);  if (depth < kMaxDepth) unit_0012(c, 215u, depth + 1u); else { c.pc = 0x00149868u; return; } if (c.pc != 0x00145EB8u) [[unlikely]] return; }
L_00145EB8:
    st32((c.r[16].w[0] + 2416u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 284u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[3].w[0] + 500u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145F94; } }
L_00145EE4:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00145F04; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 300u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145F50; } }
L_00145F04:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00145F74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145F18u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00145F18u) [[unlikely]] return; }
L_00145F18:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145F2Cu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x00145F2Cu) [[unlikely]] return; }
L_00145F2C:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145F3Cu);  if (depth < kMaxDepth) unit_0013(c, 169u, depth + 1u); else { c.pc = 0x0014D778u; return; } if (c.pc != 0x00145F3Cu) [[unlikely]] return; }
L_00145F3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00145F94; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 300u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
L_00145F50:
    set32(c.r[21], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00145F68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00145F68u) [[unlikely]] return; }
L_00145F68:
    st32((c.r[17].w[0] + 24u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00145F94; } }
L_00145F74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145F80u);  if (depth < kMaxDepth) unit_0012(c, 215u, depth + 1u); else { c.pc = 0x00149868u; return; } if (c.pc != 0x00145F80u) [[unlikely]] return; }
L_00145F80:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 2416u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00145F94; } }
    st32((c.r[16].w[0] + 2416u), c.r[3].w[0]);
    c.budget -= 1;
L_00145F94:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00145FC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    set32(c.r[20], c.r[18].w[0] + 28u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 284u)));
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146008u);  if (depth < kMaxDepth) unit_0012(c, 71u, depth + 1u); else { c.pc = 0x00148AB0u; return; } if (c.pc != 0x00146008u) [[unlikely]] return; }
L_00146008:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014601Cu);  if (depth < kMaxDepth) unit_0012(c, 71u, depth + 1u); else { c.pc = 0x00148AB0u; return; } if (c.pc != 0x0014601Cu) [[unlikely]] return; }
L_0014601C:
    set32(c.r[16], c.r[16].w[0] << 2);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[20].w[0] + c.r[16].w[0]);
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    set32(c.r[16], ld32((c.r[16].w[0])));
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[19].d[0];
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0014604C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 652u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001460A0; } }
L_0014604C:
    set32(c.r[2], ld32((c.r[18].w[0] + 284u)));
    set32(c.r[22], 0u + 1u);
    st32((c.r[18].w[0] + 24u), c.r[17].w[0]);
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146074u);  if (depth < kMaxDepth) unit_0012(c, 215u, depth + 1u); else { c.pc = 0x00149868u; return; } if (c.pc != 0x00146074u) [[unlikely]] return; }
L_00146074:
    st32((c.r[16].w[0] + 2416u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 284u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[3].w[0] + 500u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146190; } }
L_001460A0:
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146138; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 284u)));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[4].d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001460E0u);  if (depth < kMaxDepth) unit_0013(c, 178u, depth + 1u); else { c.pc = 0x0014D8D0u; return; } if (c.pc != 0x001460E0u) [[unlikely]] return; }
L_001460E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001460F0u);  if (depth < kMaxDepth) unit_0013(c, 167u, depth + 1u); else { c.pc = 0x0014D730u; return; } if (c.pc != 0x001460F0u) [[unlikely]] return; }
L_001460F0:
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014610C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 284u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00146120; } }
L_0014610C:
    set32(c.r[2], ld32((c.r[18].w[0] + 300u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014614C; } }
L_00146120:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[17].d[0];  if (t) { goto L_00146190; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[17].d[0];  if (t) { goto L_00146190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146144; } }
L_00146138:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146170; } }
L_00146144:
    set32(c.r[2], ld32((c.r[18].w[0] + 300u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0014614C:
    set32(c.r[22], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00146164u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00146164u) [[unlikely]] return; }
L_00146164:
    st32((c.r[18].w[0] + 24u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146190; } }
L_00146170:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014617Cu);  if (depth < kMaxDepth) unit_0012(c, 215u, depth + 1u); else { c.pc = 0x00149868u; return; } if (c.pc != 0x0014617Cu) [[unlikely]] return; }
L_0014617C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 2416u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00146190; } }
    st32((c.r[16].w[0] + 2416u), c.r[3].w[0]);
    c.budget -= 1;
L_00146190:
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
L_001461C0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    set32(c.r[4], c.r[16].w[0] + 28u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 284u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[29].w[0] + 20u), c.r[6].w[0]);
    set32(c.r[30], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[21].w[0] + 160u)));
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[6], c.r[17].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[30].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[18], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 28u), 0u);
    st32((c.r[29].w[0] + 16u), 0u);
    c.budget -= 33;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00146264; } }
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 2228u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    st32((c.r[3].w[0] + 500u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146B8C; } }
L_00146264:
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0014628C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 652u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014628C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 300u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146724; } }
L_0014628C:
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + 28u);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 652u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001462BC; } }
L_001462B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146B8C; } }
L_001462BC:
    set32(c.r[7], ld32((c.r[16].w[0] + 284u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[18].w[0] + 2420u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001462D8u);  if (depth < kMaxDepth) unit_0012(c, 93u, depth + 1u); else { c.pc = 0x00148E68u; return; } if (c.pc != 0x001462D8u) [[unlikely]] return; }
L_001462D8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 2416u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146304; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_00146304; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_00146304; } }
    st32((c.r[18].w[0] + 2416u), c.r[20].w[0]);
    c.budget -= 1;
L_00146304:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146314u);  if (depth < kMaxDepth) unit_009B(c, 364u, depth + 1u); else { c.pc = 0x0036EE28u; return; } if (c.pc != 0x00146314u) [[unlikely]] return; }
L_00146314:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[30].w[0] << 2);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00146444; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00146348u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00146348u) [[unlikely]] return; }
L_00146348:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146444; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146360u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x00146360u) [[unlikely]] return; }
L_00146360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001463A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146378u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x00146378u) [[unlikely]] return; }
L_00146378:
    set32(c.r[3], ld32((c.r[2].w[0] + 652u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001463A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2228u)));
    set32(c.r[3], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001463E0; } }
    st32((c.r[16].w[0] + 2228u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001463E0; } }
L_001463A0:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_001463CC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2228u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001463E0; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_001463E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2224u)));
    st32((c.r[16].w[0] + 2228u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001463E0; } }
L_001463CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 2228u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001463E0; } }
    st32((c.r[16].w[0] + 2228u), c.r[17].w[0]);
    c.budget -= 1;
L_001463E0:
    set32(c.r[2], c.r[22].w[0] + c.r[30].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001463F4u);  if (depth < kMaxDepth) unit_0013(c, 279u, depth + 1u); else { c.pc = 0x0014E9F8u; return; } if (c.pc != 0x001463F4u) [[unlikely]] return; }
L_001463F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 2228u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014642Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014642Cu) [[unlikely]] return; }
L_0014642C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 776u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 2228u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001469A0; } }
L_00146444:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[18], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00146468u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00146468u) [[unlikely]] return; }
L_00146468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001464AC; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 760u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001464AC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 764u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001464A8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 300u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146724; } }
L_001464A8:
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 1;
L_001464AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 13224u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00146554; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 288u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_00146514; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 300u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001464E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001464E8u) [[unlikely]] return; }
L_001464E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 288u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 2228u), c.r[4].w[0]);
    st32((c.r[6].w[0] - 13232u), c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146B8C; } }
L_00146514:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_00146538; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2224u)));
    st32((c.r[16].w[0] + 2228u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
L_00146538:
    set32(c.r[2], ld32((c.r[16].w[0] + 2228u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
    st32((c.r[16].w[0] + 2228u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
L_00146554:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[18].w[0] - 13232u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146594; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 2228u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00146584u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00146584u) [[unlikely]] return; }
L_00146584:
    set32(c.r[2], ld32((c.r[16].w[0] + 2224u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 2228u), c.r[2].w[0]);
    st32((c.r[18].w[0] - 13232u), 0u);
    c.budget -= 4;
L_00146594:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 160u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12228u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001466D8; } }
    set32(c.r[5], 0u + 64u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001465B8u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x001465B8u) [[unlikely]] return; }
L_001465B8:
    set32(c.r[5], ld32((c.r[16].w[0] + 288u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001465D0u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x001465D0u) [[unlikely]] return; }
L_001465D0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001465E8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 652u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001465FC; } }
L_001465E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00146684; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 652u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146684; } }
L_001465FC:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[17], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 288u)));
    set32(c.r[6], c.r[2].w[0] - 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
    st32((c.r[16].w[0] + 2228u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 652u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146654; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[6], 0u + 64u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00146648u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00146648u) [[unlikely]] return; }
L_00146648:
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146678; } }
L_00146654:
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014666Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014666Cu) [[unlikely]] return; }
L_0014666C:
    set32(c.r[2], ld32((c.r[16].w[0] + 288u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_00146678:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146B8C; } }
L_00146684:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001466A4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 288u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00146774; } }
L_001466A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 2228u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001466C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001466C0u) [[unlikely]] return; }
L_001466C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 2228u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 2224u)));
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 2228u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146774; } }
L_001466D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001466E8u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x001466E8u) [[unlikely]] return; }
L_001466E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146750; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146700u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x00146700u) [[unlikely]] return; }
L_00146700:
    set32(c.r[3], ld32((c.r[2].w[0] + 652u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00146750; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[17], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[6], 0u + 64u);
    c.budget -= 2;
L_00146724:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00146738u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00146738u) [[unlikely]] return; }
L_00146738:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 2228u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146B8C; } }
L_00146750:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00146774; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[5], 0u + 64u);
    set32(c.r[6], ld32((c.r[16].w[0] + 2228u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146984; } }
L_00146774:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10960u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00146820; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 284u)));
    set32(c.r[6], 0u + 62u);
    set32(c.r[2], c.r[6].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00146874; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_001467D8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 2224u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 2228u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0] + 500u), c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146B8C; } }
L_001467D8:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_00146804; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2228u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2224u)));
    st32((c.r[16].w[0] + 2228u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
L_00146804:
    set32(c.r[2], ld32((c.r[16].w[0] + 2228u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
    st32((c.r[16].w[0] + 2228u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
L_00146820:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], 0u + 62u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00146874; } }
    set32(c.r[2], c.r[22].w[0] + c.r[30].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_00146840:
    st32((c.r[4].w[0] + 2624u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 2228u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 284u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 2224u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 2228u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0] + 500u), c.r[6].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146B8C; } }
L_00146874:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[18].w[0] - 13228u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001469C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014688Cu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014688Cu) [[unlikely]] return; }
L_0014688C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001468A0u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x001468A0u) [[unlikely]] return; }
L_001468A0:
    set32(c.r[3], ld32((c.r[19].w[0] + 2420u)));
    set32(c.r[6], 0u + 112u);
    set32(c.r[2], ld32((c.r[19].w[0] + 2416u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2232u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 744u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001468CCu);  if (depth < kMaxDepth) unit_009B(c, 334u, depth + 1u); else { c.pc = 0x0036E498u; return; } if (c.pc != 0x001468CCu) [[unlikely]] return; }
L_001468CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014696C; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0014690C; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001468F0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
L_001468F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 2228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2224u)));
    st32((c.r[16].w[0] + 2228u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
L_0014690C:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146950; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 300u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] - 13228u), 0u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014693Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014693Cu) [[unlikely]] return; }
L_0014693C:
    set32(c.r[3], ld32((c.r[16].w[0] + 2224u)));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 2228u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
L_00146950:
    set32(c.r[2], ld32((c.r[16].w[0] + 2228u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
    st32((c.r[16].w[0] + 2228u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001462B0u | kUnwind; return; } goto L_001462B0; } }
L_0014696C:
    set32(c.r[6], ld32((c.r[16].w[0] + 2228u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[18].w[0] - 13228u), 0u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_001469B4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 300u)));
    c.budget -= 1;
L_00146984:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00146998u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00146998u) [[unlikely]] return; }
L_00146998:
    set32(c.r[4], ld32((c.r[16].w[0] + 2228u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001469A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 2224u)));
    st32((c.r[16].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 2228u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146B8C; } }
L_001469B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 2224u)));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 2228u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146B8C; } }
L_001469C8:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_00146AD0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00146AAC; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00146A34; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 2416u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_00146A00; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001469FCu);  if (depth < kMaxDepth) unit_0012(c, 215u, depth + 1u); else { c.pc = 0x00149868u; return; } if (c.pc != 0x001469FCu) [[unlikely]] return; }
L_001469FC:
    st32((c.r[19].w[0] + 2416u), c.r[2].w[0]);
    c.budget -= 1;
L_00146A00:
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00146B88; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00146B88; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2224u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00146B88; } }
    st32((c.r[16].w[0] + 2228u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146B88; } }
L_00146A34:
    set32(c.r[2], ld32((c.r[16].w[0] + 2228u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00146A7C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 2224u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00146A68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00146A68u) [[unlikely]] return; }
L_00146A68:
    set32(c.r[2], ld32((c.r[16].w[0] + 2224u)));
    st32((c.r[16].w[0] + 2228u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146B88; } }
L_00146A7C:
    set32(c.r[2], ld32((c.r[19].w[0] + 2416u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_00146B88; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 112u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 28u), 0u);
    st32((c.r[18].w[0] - 13228u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 4u));
    st16((c.r[16].w[0] + 2232u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146B88; } }
L_00146AAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 2228u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00146B88; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_00146B88; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2224u)));
    st32((c.r[16].w[0] + 2228u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146B88; } }
L_00146AD0:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[5].d[0];  if (t) { goto L_00146B50; } }
    c.r[2].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146B2C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00146B88; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 92u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 88u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00146B18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00146B18u) [[unlikely]] return; }
L_00146B18:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 2228u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146B88; } }
L_00146B2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 2228u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146B88; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00146B88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146B84; } }
L_00146B50:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_00146B88; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00146B88; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00146B88; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_00146B88; } }
L_00146B84:
    st32((c.r[16].w[0] + 2228u), c.r[17].w[0]);
    c.budget -= 1;
L_00146B88:
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    c.budget -= 1;
L_00146B8C:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00146BC0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[18].w[0] + 28u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 284u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[29].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[16], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[17].w[0] + 160u)));
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[6], c.r[19].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[7].w[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    set32(c.r[30], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 32u), 0u);
    c.budget -= 33;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_00146C64; } }
    st32((c.r[18].w[0] + 24u), c.r[19].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 2228u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    st32((c.r[3].w[0] + 500u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014769C; } }
L_00146C64:
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00146C7C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 652u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146EF4; } }
L_00146C7C:
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + 28u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 652u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00146CAC; } }
L_00146CA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014769C; } }
L_00146CAC:
    set32(c.r[7], ld32((c.r[18].w[0] + 284u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[30].w[0] + 2420u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146CC8u);  if (depth < kMaxDepth) unit_0012(c, 93u, depth + 1u); else { c.pc = 0x00148E68u; return; } if (c.pc != 0x00146CC8u) [[unlikely]] return; }
L_00146CC8:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[30].w[0] + 2416u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146CF8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00146CF8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_00146CF8; } }
    st32((c.r[30].w[0] + 2416u), c.r[21].w[0]);
    c.budget -= 1;
L_00146CF8:
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146D08u);  if (depth < kMaxDepth) unit_009B(c, 364u, depth + 1u); else { c.pc = 0x0036EE28u; return; } if (c.pc != 0x00146D08u) [[unlikely]] return; }
L_00146D08:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00146E90; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00146D40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00146D40u) [[unlikely]] return; }
L_00146D40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146E90; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146D58u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x00146D58u) [[unlikely]] return; }
L_00146D58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146D98; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146D70u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x00146D70u) [[unlikely]] return; }
L_00146D70:
    set32(c.r[3], ld32((c.r[2].w[0] + 652u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00146D98; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 2228u)));
    set32(c.r[3], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00146DDC; } }
    st32((c.r[18].w[0] + 2228u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146DDC; } }
L_00146D98:
    set32(c.r[4], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00146DC8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 2228u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00146DDC; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_00146DDC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 2224u)));
    st32((c.r[18].w[0] + 2228u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146DDC; } }
L_00146DC8:
    set32(c.r[2], ld32((c.r[18].w[0] + 2228u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146DDC; } }
    st32((c.r[18].w[0] + 2228u), c.r[19].w[0]);
    c.budget -= 1;
L_00146DDC:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146DF8u);  if (depth < kMaxDepth) unit_0013(c, 279u, depth + 1u); else { c.pc = 0x0014E9F8u; return; } if (c.pc != 0x00146DF8u) [[unlikely]] return; }
L_00146DF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146CA0u | kUnwind; return; } goto L_00146CA0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146CA0u | kUnwind; return; } goto L_00146CA0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 2228u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00146E58; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 13248u);
    set32(c.r[6], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146E3Cu);  if (depth < kMaxDepth) unit_0010(c, 301u, depth + 1u); else { c.pc = 0x001439B0u; return; } if (c.pc != 0x00146E3Cu) [[unlikely]] return; }
L_00146E3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146E58u);  if (depth < kMaxDepth) unit_0010(c, 298u, depth + 1u); else { c.pc = 0x00143900u; return; } if (c.pc != 0x00146E58u) [[unlikely]] return; }
L_00146E58:
    set32(c.r[2], ld32((c.r[18].w[0] + 300u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 2228u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00146E78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00146E78u) [[unlikely]] return; }
L_00146E78:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 776u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 2228u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001471CC; } }
L_00146E90:
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00146EB8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00146EB8u) [[unlikely]] return; }
L_00146EB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146F28; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0] + 760u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146F28; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 764u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00146EE8; } }
    st32((c.r[29].w[0] + 44u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146F28; } }
L_00146EE8:
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146CA0u | kUnwind; return; } goto L_00146CA0; } }
L_00146EF4:
    set32(c.r[3], ld32((c.r[18].w[0] + 300u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00146F10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00146F10u) [[unlikely]] return; }
L_00146F10:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 24u), c.r[19].w[0]);
    st32((c.r[18].w[0] + 2228u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014769C; } }
L_00146F28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 160u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12228u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001470C8; } }
    set32(c.r[5], 0u + 64u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146F4Cu);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x00146F4Cu) [[unlikely]] return; }
L_00146F4C:
    set32(c.r[5], ld32((c.r[18].w[0] + 288u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146F64u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x00146F64u) [[unlikely]] return; }
L_00146F64:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00146F7C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 652u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00146F90; } }
L_00146F7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00147058; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 652u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147058; } }
L_00146F90:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[19], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146CA0u | kUnwind; return; } goto L_00146CA0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 288u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146CA0u | kUnwind; return; } goto L_00146CA0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 13248u);
    set32(c.r[6], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146FCCu);  if (depth < kMaxDepth) unit_0010(c, 301u, depth + 1u); else { c.pc = 0x001439B0u; return; } if (c.pc != 0x00146FCCu) [[unlikely]] return; }
L_00146FCC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[5], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146FE8u);  if (depth < kMaxDepth) unit_0010(c, 298u, depth + 1u); else { c.pc = 0x00143900u; return; } if (c.pc != 0x00146FE8u) [[unlikely]] return; }
L_00146FE8:
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[18].w[0] + 2228u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 652u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147024; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 300u)));
    set32(c.r[6], 0u + 64u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00147018u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00147018u) [[unlikely]] return; }
L_00147018:
    st32((c.r[18].w[0] + 24u), c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001473D0; } }
L_00147024:
    set32(c.r[2], ld32((c.r[18].w[0] + 300u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[6], c.r[6].w[0] - 3u);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00147044u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00147044u) [[unlikely]] return; }
L_00147044:
    set32(c.r[2], ld32((c.r[18].w[0] + 288u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001473D0; } }
L_00147058:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00147078; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 288u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001471E0; } }
L_00147078:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 13248u);
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147090u);  if (depth < kMaxDepth) unit_0010(c, 301u, depth + 1u); else { c.pc = 0x001439B0u; return; } if (c.pc != 0x00147090u) [[unlikely]] return; }
L_00147090:
    set32(c.r[2], ld32((c.r[18].w[0] + 300u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 2228u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001470B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001470B0u) [[unlikely]] return; }
L_001470B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 2228u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 2224u)));
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 2228u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001471E0; } }
L_001470C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001470D8u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x001470D8u) [[unlikely]] return; }
L_001470D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014717C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001470F0u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x001470F0u) [[unlikely]] return; }
L_001470F0:
    set32(c.r[3], ld32((c.r[2].w[0] + 652u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014717C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[17], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146CA0u | kUnwind; return; } goto L_00146CA0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] - 13248u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147128u);  if (depth < kMaxDepth) unit_0010(c, 301u, depth + 1u); else { c.pc = 0x001439B0u; return; } if (c.pc != 0x00147128u) [[unlikely]] return; }
L_00147128:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147144u);  if (depth < kMaxDepth) unit_0010(c, 298u, depth + 1u); else { c.pc = 0x00143900u; return; } if (c.pc != 0x00147144u) [[unlikely]] return; }
L_00147144:
    set32(c.r[3], ld32((c.r[18].w[0] + 300u)));
    set32(c.r[6], 0u + 64u);
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00147164u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00147164u) [[unlikely]] return; }
L_00147164:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 2228u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014769C; } }
L_0014717C:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001471E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 13248u);
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001471A4u);  if (depth < kMaxDepth) unit_0010(c, 301u, depth + 1u); else { c.pc = 0x001439B0u; return; } if (c.pc != 0x001471A4u) [[unlikely]] return; }
L_001471A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 300u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 2228u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001471C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001471C4u) [[unlikely]] return; }
L_001471C4:
    set32(c.r[4], ld32((c.r[18].w[0] + 2228u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001471CC:
    set32(c.r[3], ld32((c.r[18].w[0] + 2224u)));
    st32((c.r[18].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 2228u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014769C; } }
L_001471E0:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[22].w[0] - 13228u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001473DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001471F8u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x001471F8u) [[unlikely]] return; }
L_001471F8:
    set32(c.r[21], 0u + 112u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147210u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x00147210u) [[unlikely]] return; }
L_00147210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147218u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00147218u) [[unlikely]] return; }
L_00147218:
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147230u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x00147230u) [[unlikely]] return; }
L_00147230:
    set32(c.r[3], ld32((c.r[20].w[0] + 2420u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 2416u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2232u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 744u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147258u);  if (depth < kMaxDepth) unit_009B(c, 334u, depth + 1u); else { c.pc = 0x0036E498u; return; } if (c.pc != 0x00147258u) [[unlikely]] return; }
L_00147258:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 2416u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 2420u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2232u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    c.f[12] = ld32((c.r[3].w[0] + 744u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147284u);  if (depth < kMaxDepth) unit_009B(c, 334u, depth + 1u); else { c.pc = 0x0036E498u; return; } if (c.pc != 0x00147284u) [[unlikely]] return; }
L_00147284:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00147294; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147360; } }
L_00147294:
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001472F0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[5].d[0];  if (t) { goto L_001472F0; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_001472D8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146CA0u | kUnwind; return; } goto L_00146CA0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 2228u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146CA0u | kUnwind; return; } goto L_00146CA0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 2224u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147354; } }
L_001472D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 2228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146CA0u | kUnwind; return; } goto L_00146CA0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 2224u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147354; } }
L_001472F0:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147330; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 300u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[4].w[0] - 13228u), 0u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00147320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00147320u) [[unlikely]] return; }
L_00147320:
    st32((c.r[18].w[0] + 24u), c.r[19].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147348; } }
L_00147330:
    set32(c.r[2], ld32((c.r[18].w[0] + 2228u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146CA0u | kUnwind; return; } goto L_00146CA0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146CA0u | kUnwind; return; } goto L_00146CA0; } }
L_00147348:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147354u);  if (depth < kMaxDepth) unit_0012(c, 12u, depth + 1u); else { c.pc = 0x00148188u; return; } if (c.pc != 0x00147354u) [[unlikely]] return; }
L_00147354:
    st32((c.r[18].w[0] + 2228u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146CA0u | kUnwind; return; } goto L_00146CA0; } }
L_00147360:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    st32((c.r[22].w[0] - 13228u), 0u);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 2420u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 2416u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 736u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014739Cu);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031DBE0u; return; } if (c.pc != 0x0014739Cu) [[unlikely]] return; }
L_0014739C:
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001473B0u);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031DBE0u; return; } if (c.pc != 0x001473B0u) [[unlikely]] return; }
L_001473B0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146CA0u | kUnwind; return; } goto L_00146CA0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146CA0u | kUnwind; return; } goto L_00146CA0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001473D0u);  if (depth < kMaxDepth) unit_0011(c, 395u, depth + 1u); else { c.pc = 0x00147FE0u; return; } if (c.pc != 0x001473D0u) [[unlikely]] return; }
L_001473D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014769C; } }
L_001473DC:
    set32(c.r[4], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001474E8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001474C4; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0014744C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 2416u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_00147418; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147414u);  if (depth < kMaxDepth) unit_0012(c, 215u, depth + 1u); else { c.pc = 0x00149868u; return; } if (c.pc != 0x00147414u) [[unlikely]] return; }
L_00147414:
    st32((c.r[20].w[0] + 2416u), c.r[2].w[0]);
    c.budget -= 1;
L_00147418:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00147698; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 2228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_00147698; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 2224u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00147698; } }
    st32((c.r[18].w[0] + 2228u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147698; } }
L_0014744C:
    set32(c.r[2], ld32((c.r[18].w[0] + 2228u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00147494; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 300u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], ld32((c.r[18].w[0] + 2224u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00147480u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00147480u) [[unlikely]] return; }
L_00147480:
    set32(c.r[2], ld32((c.r[18].w[0] + 2224u)));
    st32((c.r[18].w[0] + 2228u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147698; } }
L_00147494:
    set32(c.r[2], ld32((c.r[20].w[0] + 2416u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_00147698; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 112u)));
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[22].w[0] - 13228u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 4u));
    st16((c.r[18].w[0] + 2232u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147698; } }
L_001474C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 2228u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00147698; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_00147698; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 2224u)));
    st32((c.r[18].w[0] + 2228u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147698; } }
L_001474E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00147660; } }
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147504u);  if (depth < kMaxDepth) unit_0013(c, 167u, depth + 1u); else { c.pc = 0x0014D730u; return; } if (c.pc != 0x00147504u) [[unlikely]] return; }
L_00147504:
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001475E8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147698; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147524u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00147524u) [[unlikely]] return; }
L_00147524:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147538u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x00147538u) [[unlikely]] return; }
L_00147538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147540u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00147540u) [[unlikely]] return; }
L_00147540:
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147558u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x00147558u) [[unlikely]] return; }
L_00147558:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147574u);  if (depth < kMaxDepth) unit_0013(c, 167u, depth + 1u); else { c.pc = 0x0014D730u; return; } if (c.pc != 0x00147574u) [[unlikely]] return; }
L_00147574:
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147588u);  if (depth < kMaxDepth) unit_009B(c, 367u, depth + 1u); else { c.pc = 0x0036EF18u; return; } if (c.pc != 0x00147588u) [[unlikely]] return; }
L_00147588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147698; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001475A0u);  if (depth < kMaxDepth) unit_009B(c, 367u, depth + 1u); else { c.pc = 0x0036EF18u; return; } if (c.pc != 0x001475A0u) [[unlikely]] return; }
L_001475A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147698; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147698; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 300u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 92u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 88u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001475DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001475DCu) [[unlikely]] return; }
L_001475DC:
    set32(c.r[3], ld32((c.r[18].w[0] + 2224u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014762C; } }
L_001475E8:
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014763C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00147698; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 300u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[29].w[0] + 48u), c.r[4].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00147628u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00147628u) [[unlikely]] return; }
L_00147628:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_0014762C:
    st32((c.r[18].w[0] + 24u), c.r[19].w[0]);
    st32((c.r[18].w[0] + 2228u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147698; } }
L_0014763C:
    set32(c.r[2], ld32((c.r[18].w[0] + 2228u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147698; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147694; } }
L_00147660:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { goto L_00147698; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00147698; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00147698; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 2228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_00147698; } }
L_00147694:
    st32((c.r[18].w[0] + 2228u), c.r[19].w[0]);
    c.budget -= 1;
L_00147698:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0014769C:
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
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001476D0:
    set32(c.r[29], c.r[29].w[0] - 864u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 816u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st128((c.r[29].w[0] + 768u) & ~15u, c.r[20]);
    set32(c.r[9], 0u + 112u);
    st128((c.r[29].w[0] + 752u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 832u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 800u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 784u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 736u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 720u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 848u), c.f[20]);
    set32(c.r[4], ld32((c.r[3].w[0] - 17248u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[8], ld32((c.r[7].w[0] + 284u)));
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 2420u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 2416u)));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[9].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 736u)));
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.f[20] = ld32((c.r[2].w[0] + 744u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147754u);  if (depth < kMaxDepth) unit_007B(c, 65u, depth + 1u); else { c.pc = 0x002ECA00u; return; } if (c.pc != 0x00147754u) [[unlikely]] return; }
L_00147754:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00147FAC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 14208u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014778Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x0014778Cu) [[unlikely]] return; }
L_0014778C:
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001477A4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001477A4u) [[unlikely]] return; }
L_001477A4:
    c.f[3] = ld32((c.r[29].w[0] + 528u));
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.f[2] = ld32((c.r[29].w[0] + 532u));
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 536u));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.f[4] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[5] = ld32((c.r[29].w[0] + 136u));
    c.f[3] = fp::sub(c.f[3], c.f[4]);
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 540u), 0u);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    st32((c.r[29].w[0] + 528u), c.f[3]);
    st32((c.r[29].w[0] + 532u), c.f[2]);
    st32((c.r[29].w[0] + 536u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001477ECu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001477ECu) [[unlikely]] return; }
L_001477EC:
    c.f[2] = ld32((c.r[29].w[0] + 544u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 548u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 552u));
    c.f[3] = ld32((c.r[29].w[0] + 128u));
    c.f[4] = ld32((c.r[29].w[0] + 132u));
    c.f[5] = ld32((c.r[29].w[0] + 136u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 556u), 0u);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    st32((c.r[29].w[0] + 544u), c.f[2]);
    st32((c.r[29].w[0] + 548u), c.f[1]);
    st32((c.r[29].w[0] + 552u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147830u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x00147830u) [[unlikely]] return; }
L_00147830:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147874; } }
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147874; } }
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001478DC; } }
L_00147874:
    set32(c.r[16], c.r[29].w[0] + 560u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147888u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x00147888u) [[unlikely]] return; }
L_00147888:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[17], c.r[29].w[0] + 624u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 608u), 0u);
    st32((c.r[29].w[0] + 620u), c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 612u), 0u);
    st32((c.r[29].w[0] + 616u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001478B4u);  if (depth < kMaxDepth) unit_0045(c, 3u, depth + 1u); else { c.pc = 0x00214058u; return; } if (c.pc != 0x001478B4u) [[unlikely]] return; }
L_001478B4:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001478C8u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x001478C8u) [[unlikely]] return; }
L_001478C8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001478DCu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x001478DCu) [[unlikely]] return; }
L_001478DC:
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    set32(c.r[3], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[2] = c.r[1].w[0];
    c.f[4] = ld32((c.r[29].w[0] + 532u));
    c.f[5] = fp::add(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 688u), c.f[5]);
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 692u), c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    st32((c.r[29].w[0] + 700u), 0u);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    st32((c.r[29].w[0] + 696u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[3] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 704u), c.f[3]);
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 708u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    st32((c.r[29].w[0] + 716u), 0u);
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 712u), c.f[2]);
    c.budget -= 28;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001479C0; } }
    c.f[0] = fp::add(c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001479C0; } }
    c.f[0] = fp::sub(c.f[5], c.f[20]);
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001479C0; } }
    c.f[0] = fp::add(c.f[3], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001479C0; } }
    c.f[1] = ld32((c.r[29].w[0] + 536u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001479C0; } }
    c.f[0] = fp::add(c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001479C0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147CB8; } }
L_001479C0:
    c.f[0] = ld32((c.r[29].w[0] + 692u));
    c.f[1] = ld32((c.r[29].w[0] + 532u));
    c.f[5] = c.f[0];
    c.f[4] = ld32((c.r[29].w[0] + 708u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[3] = c.f[1];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147A68; } }
    c.f[0] = fp::add(c.f[4], c.f[20]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147A68; } }
    c.f[0] = ld32((c.r[29].w[0] + 688u));
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147A68; } }
    c.f[0] = ld32((c.r[29].w[0] + 704u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147A68; } }
    c.f[2] = ld32((c.r[29].w[0] + 696u));
    c.f[1] = ld32((c.r[29].w[0] + 536u));
    c.f[0] = fp::sub(c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147A68; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147A68; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147CB8; } }
L_00147A68:
    c.f[0] = fp::sub(c.f[5], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147AFC; } }
    c.f[0] = fp::add(c.f[4], c.f[20]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147AFC; } }
    c.f[2] = ld32((c.r[29].w[0] + 688u));
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    c.f[0] = fp::sub(c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147AFC; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147AFC; } }
    c.f[0] = ld32((c.r[29].w[0] + 696u));
    c.f[1] = ld32((c.r[29].w[0] + 536u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147AFC; } }
    c.f[0] = ld32((c.r[29].w[0] + 712u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147AFC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147CB8; } }
L_00147AFC:
    c.f[0] = fp::sub(c.f[5], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147B90; } }
    c.f[0] = fp::add(c.f[4], c.f[20]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147B90; } }
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    c.f[0] = ld32((c.r[29].w[0] + 704u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147B90; } }
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147B90; } }
    c.f[0] = ld32((c.r[29].w[0] + 696u));
    c.f[1] = ld32((c.r[29].w[0] + 536u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147B90; } }
    c.f[0] = ld32((c.r[29].w[0] + 712u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147B90; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147CB8; } }
L_00147B90:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147C28; } }
    c.f[0] = fp::add(c.f[4], c.f[20]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147C28; } }
    c.f[0] = ld32((c.r[29].w[0] + 688u));
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147C28; } }
    c.f[0] = ld32((c.r[29].w[0] + 704u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147C28; } }
    c.f[0] = ld32((c.r[29].w[0] + 696u));
    c.f[1] = ld32((c.r[29].w[0] + 536u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147C28; } }
    c.f[0] = ld32((c.r[29].w[0] + 712u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147C28; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147CB8; } }
L_00147C28:
    c.f[0] = fp::sub(c.f[5], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147CB8; } }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[5]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147CB8; } }
    c.f[0] = ld32((c.r[29].w[0] + 688u));
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147CB8; } }
    c.f[0] = ld32((c.r[29].w[0] + 704u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147CB8; } }
    c.f[0] = ld32((c.r[29].w[0] + 696u));
    c.f[1] = ld32((c.r[29].w[0] + 536u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147CB8; } }
    c.f[0] = ld32((c.r[29].w[0] + 712u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147CB8; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_00147CB8:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00147FAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 16528u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00144000u < 16384u) { entry = entries_0011[(t - 0x00144000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00147CE0:
    c.f[0] = ld32((c.r[29].w[0] + 692u));
    c.f[1] = ld32((c.r[29].w[0] + 548u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.f[0] = ld32((c.r[29].w[0] + 708u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.f[0] = ld32((c.r[29].w[0] + 688u));
    c.f[1] = ld32((c.r[29].w[0] + 544u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.f[0] = ld32((c.r[29].w[0] + 704u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.f[1] = ld32((c.r[29].w[0] + 552u));
    c.f[0] = ld32((c.r[29].w[0] + 712u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147EF4; } }
L_00147D68:
    c.f[0] = ld32((c.r[29].w[0] + 692u));
    c.f[1] = ld32((c.r[29].w[0] + 548u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.f[0] = ld32((c.r[29].w[0] + 708u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.f[2] = ld32((c.r[29].w[0] + 688u));
    c.f[1] = ld32((c.r[29].w[0] + 544u));
    c.f[0] = fp::sub(c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147EC8; } }
L_00147DC4:
    c.f[0] = ld32((c.r[29].w[0] + 692u));
    c.f[1] = ld32((c.r[29].w[0] + 548u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.f[0] = ld32((c.r[29].w[0] + 708u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.f[2] = ld32((c.r[29].w[0] + 688u));
    c.f[1] = ld32((c.r[29].w[0] + 544u));
    c.f[0] = fp::sub(c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147EC8; } }
L_00147E20:
    c.f[0] = ld32((c.r[29].w[0] + 692u));
    c.f[1] = ld32((c.r[29].w[0] + 548u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.f[0] = ld32((c.r[29].w[0] + 708u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.f[1] = ld32((c.r[29].w[0] + 544u));
    c.f[0] = ld32((c.r[29].w[0] + 704u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147EC0; } }
L_00147E74:
    c.f[2] = ld32((c.r[29].w[0] + 692u));
    c.f[1] = ld32((c.r[29].w[0] + 548u));
    c.f[0] = fp::sub(c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.f[0] = ld32((c.r[29].w[0] + 688u));
    c.f[1] = ld32((c.r[29].w[0] + 544u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.f[0] = ld32((c.r[29].w[0] + 704u));
    c.budget -= 1;
L_00147EC0:
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 2;
L_00147EC8:
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.f[0] = ld32((c.r[29].w[0] + 696u));
    c.f[1] = ld32((c.r[29].w[0] + 552u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.f[0] = ld32((c.r[29].w[0] + 712u));
    c.budget -= 1;
L_00147EF4:
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147FB0; } }
L_00147F14:
    c.f[2] = ld32((c.r[29].w[0] + 692u));
    c.f[1] = ld32((c.r[29].w[0] + 548u));
    c.f[0] = fp::sub(c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.f[0] = ld32((c.r[29].w[0] + 688u));
    c.f[1] = ld32((c.r[29].w[0] + 544u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.f[0] = ld32((c.r[29].w[0] + 704u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.f[0] = ld32((c.r[29].w[0] + 696u));
    c.f[1] = ld32((c.r[29].w[0] + 552u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00147FAC; } }
    c.f[0] = ld32((c.r[29].w[0] + 712u));
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00147FB0; } }
L_00147FAC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00147FB0:
    ld128((c.r[29].w[0] + 832u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 816u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 800u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 784u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 768u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 752u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 736u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 720u));
    c.f[20] = ld32((c.r[29].w[0] + 848u));
    set32(c.r[29], c.r[29].w[0] + 864u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00147FE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 64u);
    c.budget -= 8;
    [[clang::musttail]] return unit_0012(c, 1u, depth);
}

}
