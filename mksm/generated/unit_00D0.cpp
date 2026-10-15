#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00D0[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0,
    0, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 24, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0,
    0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 64, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0,
    100, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0,
    0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0,
    0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0,
    0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0,
    0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0,
    0, 257, 0, 0, 0, 258, 259, 0, 0, 260, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293,
    0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0,
    0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0,
    0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332,
    0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0,
    0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0,
    0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0,
    0, 0, 359, 0, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0,
    0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0,
    0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0,
    0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0,
    391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394,
    0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0,
    409, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0,
    414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 419, 0,
    0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0,
    0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0,
    0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0,
    0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0,
    0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0,
    445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0,
    451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0,
    0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0,
    0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0,
    0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0,
    471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0,
    0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 0,
    0, 484, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489,
};

void unit_00D0(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00440000;
    case 2u: goto L_00440008;
    case 3u: goto L_00440028;
    case 4u: goto L_00440064;
    case 5u: goto L_004400E0;
    case 6u: goto L_00440138;
    case 7u: goto L_00440148;
    case 8u: goto L_00440150;
    case 9u: goto L_00440164;
    case 10u: goto L_00440178;
    case 11u: goto L_00440188;
    case 12u: goto L_00440190;
    case 13u: goto L_004401A0;
    case 14u: goto L_004401D8;
    case 15u: goto L_004401E4;
    case 16u: goto L_00440230;
    case 17u: goto L_00440248;
    case 18u: goto L_00440264;
    case 19u: goto L_00440274;
    case 20u: goto L_00440290;
    case 21u: goto L_0044029C;
    case 22u: goto L_004402A8;
    case 23u: goto L_004402B4;
    case 24u: goto L_004402BC;
    case 25u: goto L_004402C4;
    case 26u: goto L_004402CC;
    case 27u: goto L_004402E8;
    case 28u: goto L_004402F0;
    case 29u: goto L_00440320;
    case 30u: goto L_00440344;
    case 31u: goto L_00440350;
    case 32u: goto L_00440360;
    case 33u: goto L_00440380;
    case 34u: goto L_004403A0;
    case 35u: goto L_004403B0;
    case 36u: goto L_004403DC;
    case 37u: goto L_004403F4;
    case 38u: goto L_0044040C;
    case 39u: goto L_00440424;
    case 40u: goto L_00440438;
    case 41u: goto L_0044047C;
    case 42u: goto L_004404A8;
    case 43u: goto L_004404B8;
    case 44u: goto L_004404F0;
    case 45u: goto L_00440544;
    case 46u: goto L_00440558;
    case 47u: goto L_0044056C;
    case 48u: goto L_00440584;
    case 49u: goto L_004405A4;
    case 50u: goto L_004405C0;
    case 51u: goto L_0044063C;
    case 52u: goto L_00440698;
    case 53u: goto L_004406B4;
    case 54u: goto L_004406F8;
    case 55u: goto L_00440758;
    case 56u: goto L_00440790;
    case 57u: goto L_004407B4;
    case 58u: goto L_004407E0;
    case 59u: goto L_00440800;
    case 60u: goto L_00440850;
    case 61u: goto L_00440860;
    case 62u: goto L_00440880;
    case 63u: goto L_004408C0;
    case 64u: goto L_00440920;
    case 65u: goto L_00440924;
    case 66u: goto L_00440950;
    case 67u: goto L_004409A0;
    case 68u: goto L_004409E0;
    case 69u: goto L_00440A1C;
    case 70u: goto L_00440A40;
    case 71u: goto L_00440A64;
    case 72u: goto L_00440A98;
    case 73u: goto L_00440AF8;
    case 74u: goto L_00440B14;
    case 75u: goto L_00440B48;
    case 76u: goto L_00440B7C;
    case 77u: goto L_00440B90;
    case 78u: goto L_00440BA0;
    case 79u: goto L_00440BF0;
    case 80u: goto L_00440C04;
    case 81u: goto L_00440C18;
    case 82u: goto L_00440C58;
    case 83u: goto L_00440C64;
    case 84u: goto L_00440C80;
    case 85u: goto L_00440CC4;
    case 86u: goto L_00440CDC;
    case 87u: goto L_00440CF8;
    case 88u: goto L_00440D14;
    case 89u: goto L_00440D30;
    case 90u: goto L_00440D38;
    case 91u: goto L_00440D54;
    case 92u: goto L_00440DB8;
    case 93u: goto L_00440DDC;
    case 94u: goto L_00440E00;
    case 95u: goto L_00440E14;
    case 96u: goto L_00440E20;
    case 97u: goto L_00440E48;
    case 98u: goto L_00440E64;
    case 99u: goto L_00440E70;
    case 100u: goto L_00440E80;
    case 101u: goto L_00440E94;
    case 102u: goto L_00440EA0;
    case 103u: goto L_00440EB0;
    case 104u: goto L_00440EC8;
    case 105u: goto L_00440EE0;
    case 106u: goto L_00440EF8;
    case 107u: goto L_00440F18;
    case 108u: goto L_00440F30;
    case 109u: goto L_00440F58;
    case 110u: goto L_00440F68;
    case 111u: goto L_00440F74;
    case 112u: goto L_00440F80;
    case 113u: goto L_00440FD0;
    case 114u: goto L_00440FE0;
    case 115u: goto L_00440FF8;
    case 116u: goto L_00441018;
    case 117u: goto L_00441024;
    case 118u: goto L_00441060;
    case 119u: goto L_0044108C;
    case 120u: goto L_004410A0;
    case 121u: goto L_004410B0;
    case 122u: goto L_004410F0;
    case 123u: goto L_00441180;
    case 124u: goto L_0044118C;
    case 125u: goto L_00441194;
    case 126u: goto L_004411B8;
    case 127u: goto L_00441200;
    case 128u: goto L_00441294;
    case 129u: goto L_004412A8;
    case 130u: goto L_004412BC;
    case 131u: goto L_004412D0;
    case 132u: goto L_004412E0;
    case 133u: goto L_004412EC;
    case 134u: goto L_004412F8;
    case 135u: goto L_00441304;
    case 136u: goto L_00441310;
    case 137u: goto L_0044131C;
    case 138u: goto L_00441328;
    case 139u: goto L_00441334;
    case 140u: goto L_00441340;
    case 141u: goto L_0044134C;
    case 142u: goto L_00441354;
    case 143u: goto L_00441370;
    case 144u: goto L_00441384;
    case 145u: goto L_004413A0;
    case 146u: goto L_004413B0;
    case 147u: goto L_004413C8;
    case 148u: goto L_004413E0;
    case 149u: goto L_004413F0;
    case 150u: goto L_00441410;
    case 151u: goto L_00441430;
    case 152u: goto L_0044146C;
    case 153u: goto L_00441494;
    case 154u: goto L_004414F0;
    case 155u: goto L_00441520;
    case 156u: goto L_00441538;
    case 157u: goto L_0044154C;
    case 158u: goto L_00441554;
    case 159u: goto L_0044156C;
    case 160u: goto L_00441598;
    case 161u: goto L_00441608;
    case 162u: goto L_0044161C;
    case 163u: goto L_00441630;
    case 164u: goto L_00441638;
    case 165u: goto L_0044164C;
    case 166u: goto L_00441654;
    case 167u: goto L_00441670;
    case 168u: goto L_00441680;
    case 169u: goto L_00441690;
    case 170u: goto L_004416A0;
    case 171u: goto L_004416A8;
    case 172u: goto L_004416B8;
    case 173u: goto L_004416C8;
    case 174u: goto L_004416DC;
    case 175u: goto L_004416F0;
    case 176u: goto L_0044174C;
    case 177u: goto L_00441760;
    case 178u: goto L_00441770;
    case 179u: goto L_00441784;
    case 180u: goto L_0044179C;
    case 181u: goto L_004417BC;
    case 182u: goto L_004417E0;
    case 183u: goto L_00441818;
    case 184u: goto L_00441824;
    case 185u: goto L_00441830;
    case 186u: goto L_00441878;
    case 187u: goto L_00441898;
    case 188u: goto L_004418B8;
    case 189u: goto L_004418DC;
    case 190u: goto L_004418EC;
    case 191u: goto L_00441908;
    case 192u: goto L_00441928;
    case 193u: goto L_00441948;
    case 194u: goto L_00441968;
    case 195u: goto L_00441988;
    case 196u: goto L_004419A0;
    case 197u: goto L_004419DC;
    case 198u: goto L_004419E8;
    case 199u: goto L_00441A18;
    case 200u: goto L_00441A48;
    case 201u: goto L_00441A64;
    case 202u: goto L_00441A94;
    case 203u: goto L_00441AB0;
    case 204u: goto L_00441AC8;
    case 205u: goto L_00441AD0;
    case 206u: goto L_00441AF0;
    case 207u: goto L_00441B10;
    case 208u: goto L_00441B28;
    case 209u: goto L_00441B30;
    case 210u: goto L_00441B38;
    case 211u: goto L_00441B50;
    case 212u: goto L_00441B78;
    case 213u: goto L_00441B8C;
    case 214u: goto L_00441B94;
    case 215u: goto L_00441BA8;
    case 216u: goto L_00441BC8;
    case 217u: goto L_00441BD8;
    case 218u: goto L_00441C18;
    case 219u: goto L_00441C38;
    case 220u: goto L_00441C48;
    case 221u: goto L_00441C88;
    case 222u: goto L_00441CA0;
    case 223u: goto L_00441CB4;
    case 224u: goto L_00441CC8;
    case 225u: goto L_00441CD0;
    case 226u: goto L_00441CD8;
    case 227u: goto L_00441CF0;
    case 228u: goto L_00441D10;
    case 229u: goto L_00441D20;
    case 230u: goto L_00441D38;
    case 231u: goto L_00441D58;
    case 232u: goto L_00441D68;
    case 233u: goto L_00441D80;
    case 234u: goto L_00441DA0;
    case 235u: goto L_00441DB0;
    case 236u: goto L_00441DD0;
    case 237u: goto L_00441DF0;
    case 238u: goto L_00441E08;
    case 239u: goto L_00441E28;
    case 240u: goto L_00441E48;
    case 241u: goto L_00441E68;
    case 242u: goto L_00441E88;
    case 243u: goto L_00441E90;
    case 244u: goto L_00441EA8;
    case 245u: goto L_00441EB0;
    case 246u: goto L_00441EE8;
    case 247u: goto L_00441F18;
    case 248u: goto L_00441F38;
    case 249u: goto L_00441F58;
    case 250u: goto L_00441F74;
    case 251u: goto L_00441F88;
    case 252u: goto L_00441FA0;
    case 253u: goto L_00441FB4;
    case 254u: goto L_00441FC8;
    case 255u: goto L_00441FE8;
    case 256u: goto L_00441FF8;
    case 257u: goto L_00442004;
    case 258u: goto L_00442014;
    case 259u: goto L_00442018;
    case 260u: goto L_00442024;
    case 261u: goto L_00442028;
    case 262u: goto L_00442098;
    case 263u: goto L_004420B4;
    case 264u: goto L_004420C4;
    case 265u: goto L_004420E8;
    case 266u: goto L_00442144;
    case 267u: goto L_00442180;
    case 268u: goto L_00442198;
    case 269u: goto L_004421A4;
    case 270u: goto L_004421C0;
    case 271u: goto L_00442214;
    case 272u: goto L_00442228;
    case 273u: goto L_0044227C;
    case 274u: goto L_004422A8;
    case 275u: goto L_004422E0;
    case 276u: goto L_00442330;
    case 277u: goto L_00442380;
    case 278u: goto L_004423B8;
    case 279u: goto L_004423D0;
    case 280u: goto L_004423F0;
    case 281u: goto L_004423F8;
    case 282u: goto L_00442420;
    case 283u: goto L_00442440;
    case 284u: goto L_00442470;
    case 285u: goto L_00442488;
    case 286u: goto L_004424A0;
    case 287u: goto L_004424C8;
    case 288u: goto L_00442510;
    case 289u: goto L_00442570;
    case 290u: goto L_00442580;
    case 291u: goto L_004425B0;
    case 292u: goto L_004425EC;
    case 293u: goto L_004425FC;
    case 294u: goto L_00442604;
    case 295u: goto L_00442620;
    case 296u: goto L_00442630;
    case 297u: goto L_00442678;
    case 298u: goto L_004426C0;
    case 299u: goto L_004426C8;
    case 300u: goto L_004426E0;
    case 301u: goto L_00442768;
    case 302u: goto L_004427A0;
    case 303u: goto L_004427B8;
    case 304u: goto L_004427D0;
    case 305u: goto L_00442818;
    case 306u: goto L_00442824;
    case 307u: goto L_00442860;
    case 308u: goto L_00442884;
    case 309u: goto L_004428A0;
    case 310u: goto L_004428C0;
    case 311u: goto L_00442920;
    case 312u: goto L_00442948;
    case 313u: goto L_004429B0;
    case 314u: goto L_004429E8;
    case 315u: goto L_00442A0C;
    case 316u: goto L_00442A3C;
    case 317u: goto L_00442A54;
    case 318u: goto L_00442A80;
    case 319u: goto L_00442AA8;
    case 320u: goto L_00442AD0;
    case 321u: goto L_00442AE8;
    case 322u: goto L_00442B00;
    case 323u: goto L_00442B40;
    case 324u: goto L_00442B58;
    case 325u: goto L_00442B70;
    case 326u: goto L_00442BB0;
    case 327u: goto L_00442BC0;
    case 328u: goto L_00442BD8;
    case 329u: goto L_00442BF8;
    case 330u: goto L_00442C18;
    case 331u: goto L_00442C50;
    case 332u: goto L_00442C7C;
    case 333u: goto L_00442C98;
    case 334u: goto L_00442CB8;
    case 335u: goto L_00442D18;
    case 336u: goto L_00442D50;
    case 337u: goto L_00442D58;
    case 338u: goto L_00442DB8;
    case 339u: goto L_00442E08;
    case 340u: goto L_00442E28;
    case 341u: goto L_00442E48;
    case 342u: goto L_00442E68;
    case 343u: goto L_00442E88;
    case 344u: goto L_00442EA8;
    case 345u: goto L_00442EB8;
    case 346u: goto L_00442ED0;
    case 347u: goto L_00442EF4;
    case 348u: goto L_00442F0C;
    case 349u: goto L_00442F20;
    case 350u: goto L_00442F30;
    case 351u: goto L_00442F40;
    case 352u: goto L_00442F58;
    case 353u: goto L_00442F88;
    case 354u: goto L_00442FA4;
    case 355u: goto L_00442FB8;
    case 356u: goto L_00442FD0;
    case 357u: goto L_00442FDC;
    case 358u: goto L_00442FF0;
    case 359u: goto L_00443008;
    case 360u: goto L_00443018;
    case 361u: goto L_00443024;
    case 362u: goto L_00443030;
    case 363u: goto L_00443050;
    case 364u: goto L_00443068;
    case 365u: goto L_00443088;
    case 366u: goto L_004430C0;
    case 367u: goto L_004430D4;
    case 368u: goto L_00443108;
    case 369u: goto L_00443120;
    case 370u: goto L_00443130;
    case 371u: goto L_00443140;
    case 372u: goto L_00443158;
    case 373u: goto L_0044316C;
    case 374u: goto L_00443188;
    case 375u: goto L_004431A0;
    case 376u: goto L_004431B4;
    case 377u: goto L_004431D0;
    case 378u: goto L_004431F8;
    case 379u: goto L_00443240;
    case 380u: goto L_00443258;
    case 381u: goto L_00443290;
    case 382u: goto L_004432EC;
    case 383u: goto L_00443310;
    case 384u: goto L_00443344;
    case 385u: goto L_004433B8;
    case 386u: goto L_004433E0;
    case 387u: goto L_00443420;
    case 388u: goto L_00443440;
    case 389u: goto L_00443458;
    case 390u: goto L_00443470;
    case 391u: goto L_00443480;
    case 392u: goto L_004434CC;
    case 393u: goto L_004434E4;
    case 394u: goto L_004434FC;
    case 395u: goto L_00443514;
    case 396u: goto L_00443538;
    case 397u: goto L_00443548;
    case 398u: goto L_00443560;
    case 399u: goto L_00443590;
    case 400u: goto L_004435A4;
    case 401u: goto L_004435BC;
    case 402u: goto L_004435D0;
    case 403u: goto L_004435E8;
    case 404u: goto L_0044361C;
    case 405u: goto L_0044362C;
    case 406u: goto L_00443644;
    case 407u: goto L_0044366C;
    case 408u: goto L_00443678;
    case 409u: goto L_00443680;
    case 410u: goto L_00443688;
    case 411u: goto L_004436B0;
    case 412u: goto L_004436C4;
    case 413u: goto L_004436F0;
    case 414u: goto L_00443700;
    case 415u: goto L_00443760;
    case 416u: goto L_004437C0;
    case 417u: goto L_004437DC;
    case 418u: goto L_004437F0;
    case 419u: goto L_004437F8;
    case 420u: goto L_00443818;
    case 421u: goto L_00443828;
    case 422u: goto L_0044384C;
    case 423u: goto L_00443878;
    case 424u: goto L_00443898;
    case 425u: goto L_004438B0;
    case 426u: goto L_004438E0;
    case 427u: goto L_00443904;
    case 428u: goto L_00443928;
    case 429u: goto L_0044396C;
    case 430u: goto L_0044399C;
    case 431u: goto L_004439A8;
    case 432u: goto L_004439B8;
    case 433u: goto L_004439CC;
    case 434u: goto L_004439E0;
    case 435u: goto L_004439F4;
    case 436u: goto L_00443A08;
    case 437u: goto L_00443A18;
    case 438u: goto L_00443A38;
    case 439u: goto L_00443A5C;
    case 440u: goto L_00443A70;
    case 441u: goto L_00443A84;
    case 442u: goto L_00443AAC;
    case 443u: goto L_00443AC8;
    case 444u: goto L_00443AEC;
    case 445u: goto L_00443B00;
    case 446u: goto L_00443B14;
    case 447u: goto L_00443B28;
    case 448u: goto L_00443B3C;
    case 449u: goto L_00443B50;
    case 450u: goto L_00443B64;
    case 451u: goto L_00443B80;
    case 452u: goto L_00443BB0;
    case 453u: goto L_00443BBC;
    case 454u: goto L_00443BF8;
    case 455u: goto L_00443C28;
    case 456u: goto L_00443C40;
    case 457u: goto L_00443C58;
    case 458u: goto L_00443C70;
    case 459u: goto L_00443C90;
    case 460u: goto L_00443CD4;
    case 461u: goto L_00443CEC;
    case 462u: goto L_00443D04;
    case 463u: goto L_00443D2C;
    case 464u: goto L_00443D40;
    case 465u: goto L_00443D70;
    case 466u: goto L_00443D88;
    case 467u: goto L_00443DA0;
    case 468u: goto L_00443DB8;
    case 469u: goto L_00443DD0;
    case 470u: goto L_00443DE8;
    case 471u: goto L_00443E00;
    case 472u: goto L_00443E28;
    case 473u: goto L_00443E3C;
    case 474u: goto L_00443E60;
    case 475u: goto L_00443E78;
    case 476u: goto L_00443E98;
    case 477u: goto L_00443EC0;
    case 478u: goto L_00443EF8;
    case 479u: goto L_00443F20;
    case 480u: goto L_00443F28;
    case 481u: goto L_00443F38;
    case 482u: goto L_00443F6C;
    case 483u: goto L_00443F74;
    case 484u: goto L_00443F84;
    case 485u: goto L_00443F8C;
    case 486u: goto L_00443FA0;
    case 487u: goto L_00443FCC;
    case 488u: goto L_00443FE0;
    case 489u: goto L_00443FFC;
    default: bad_entry(c, 0x00440000u); return;
    }
L_00440000:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
    c.pc = 0x00440004u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00440008:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8196u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00419E10u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 269u, depth); }
L_00440028:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8196u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 1000u);  if (t) { goto L_004400D0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00440058; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004400BC; } }
    c.budget -= 1;
L_00440058:
    c.f[12] = c.r[5].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440064u); c.f[12] = fp::cvt_s_w(c.f[12]);  if (depth < kMaxDepth) unit_00C2(c, 232u, depth + 1u); else { c.pc = 0x0040AC48u; return; } if (c.pc != 0x00440064u) [[unlikely]] return; }
L_00440064:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40DD0000u);
    c.r[1].d[0] = c.r[1].d[0] | 3156ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44D80000u);
    c.r[1].d[0] = c.r[1].d[0] | 26493ull;
    c.f[3] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 22;
L_004400BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041A5A8u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 344u, depth); }
L_004400D0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004400E0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], c.r[5].w[0] + 29200u);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], 0u - 32u);
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 31u);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    st32((c.r[5].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 20u), c.r[2].w[0]);  c.pc = t; return; }
L_00440138:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440148u);  if (depth < kMaxDepth) unit_00C5(c, 6u, depth + 1u); else { c.pc = 0x00414048u; return; } if (c.pc != 0x00440148u) [[unlikely]] return; }
L_00440148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440150u);  if (depth < kMaxDepth) unit_00DC(c, 171u, depth + 1u); else { c.pc = 0x004719A0u; return; } if (c.pc != 0x00440150u) [[unlikely]] return; }
L_00440150:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440164u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_00D5(c, 259u, depth + 1u); else { c.pc = 0x004568A0u; return; } if (c.pc != 0x00440164u) [[unlikely]] return; }
L_00440164:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00440178:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440188u);  if (depth < kMaxDepth) unit_00DC(c, 172u, depth + 1u); else { c.pc = 0x004719B8u; return; } if (c.pc != 0x00440188u) [[unlikely]] return; }
L_00440188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440190u);  if (depth < kMaxDepth) unit_00C5(c, 28u, depth + 1u); else { c.pc = 0x004141C0u; return; } if (c.pc != 0x00440190u) [[unlikely]] return; }
L_00440190:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004401A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[2], c.r[16].w[0] + 3376u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8196u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 504u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 500u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[17], ld32((c.r[4].w[0])));  if (t) { goto L_00440218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004401D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 225u, depth + 1u); else { c.pc = 0x00419908u; return; } if (c.pc != 0x004401D8u) [[unlikely]] return; }
L_004401D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004401E4u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 231u, depth + 1u); else { c.pc = 0x00419990u; return; } if (c.pc != 0x004401E4u) [[unlikely]] return; }
L_004401E4:
    c.budget -= 2;
    if (c.r[18].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0044021C; }
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0044021C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00443258; }
L_00440218:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0044021C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00440230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00440248; }
L_00440248:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440264u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00440264u) [[unlikely]] return; }
L_00440264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004402D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440274u);  if (depth < kMaxDepth) unit_00D0(c, 105u, depth + 1u); else { c.pc = 0x00440EE0u; return; } if (c.pc != 0x00440274u) [[unlikely]] return; }
L_00440274:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00440288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004402D0; } }
L_00440288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440290u);  if (depth < kMaxDepth) unit_00D0(c, 27u, depth + 1u); else { c.pc = 0x004402E8u; return; } if (c.pc != 0x00440290u) [[unlikely]] return; }
L_00440290:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044029Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 28u, depth + 1u); else { c.pc = 0x004402F0u; return; } if (c.pc != 0x0044029Cu) [[unlikely]] return; }
L_0044029C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004402A8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 75u, depth + 1u); else { c.pc = 0x00440B48u; return; } if (c.pc != 0x004402A8u) [[unlikely]] return; }
L_004402A8:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004402B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 81u, depth + 1u); else { c.pc = 0x00440C18u; return; } if (c.pc != 0x004402B4u) [[unlikely]] return; }
L_004402B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004402BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 107u, depth + 1u); else { c.pc = 0x00440F18u; return; } if (c.pc != 0x004402BCu) [[unlikely]] return; }
L_004402BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004402C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 115u, depth + 1u); else { c.pc = 0x00440FF8u; return; } if (c.pc != 0x004402C4u) [[unlikely]] return; }
L_004402C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004402CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 13u, depth + 1u); else { c.pc = 0x004401A0u; return; } if (c.pc != 0x004402CCu) [[unlikely]] return; }
L_004402CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004402D0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004402E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004402F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 4u);
    st32((c.r[18].w[0]), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440320u); set32(c.r[17], ld32((c.r[16].w[0] + 8196u)));  if (depth < kMaxDepth) unit_00D0(c, 92u, depth + 1u); else { c.pc = 0x00440DB8u; return; } if (c.pc != 0x00440320u) [[unlikely]] return; }
L_00440320:
    set32(c.r[7], c.r[29].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00440364; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440344u); st32((c.r[18].w[0]), c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440344u) [[unlikely]] return; }
L_00440344:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440350u); set32(c.r[5], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_00D0(c, 94u, depth + 1u); else { c.pc = 0x00440E00u; return; } if (c.pc != 0x00440350u) [[unlikely]] return; }
L_00440350:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00440364; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440360u);  if (depth < kMaxDepth) unit_00D0(c, 96u, depth + 1u); else { c.pc = 0x00440E20u; return; } if (c.pc != 0x00440360u) [[unlikely]] return; }
L_00440360:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00440364:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00440380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004403A0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004403A0u) [[unlikely]] return; }
L_004403A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004403B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_004403E8; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004403DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004403DCu) [[unlikely]] return; }
L_004403DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00440428; } }
    c.budget -= 1;
L_004403E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004403F4u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x004403F4u) [[unlikely]] return; }
L_004403F4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044040Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044040Cu) [[unlikely]] return; }
L_0044040C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440424u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440424u) [[unlikely]] return; }
L_00440424:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00440428:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00440438:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 8196u)));
    set32(c.r[19], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044047Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 33u, depth + 1u); else { c.pc = 0x00440380u; return; } if (c.pc != 0x0044047Cu) [[unlikely]] return; }
L_0044047C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[16], ld32((c.r[29].w[0] + 4u)));
    c.r[6].d[0] = c.r[6].d[0] | 36864ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[18].d[0];
    c.r[3].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[6].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004404A8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 252u, depth + 1u); else { c.pc = 0x004565B0u; return; } if (c.pc != 0x004404A8u) [[unlikely]] return; }
L_004404A8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004404B8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 35u, depth + 1u); else { c.pc = 0x004403B0u; return; } if (c.pc != 0x004404B8u) [[unlikely]] return; }
L_004404B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[21].w[0]), c.r[16].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004404F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[6], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[17], c.r[20].w[0] + 3376u);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    st32((c.r[30].w[0]), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440544u); set32(c.r[19], ld32((c.r[20].w[0] + 8196u)));  if (depth < kMaxDepth) unit_00D0(c, 73u, depth + 1u); else { c.pc = 0x00440AF8u; return; } if (c.pc != 0x00440544u) [[unlikely]] return; }
L_00440544:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);  goto L_00440588; }
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440558u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 93u, depth + 1u); else { c.pc = 0x00450D80u; return; } if (c.pc != 0x00440558u) [[unlikely]] return; }
L_00440558:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] < 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00440728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044056Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044056Cu) [[unlikely]] return; }
L_0044056C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  goto L_00440598; }
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440584u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 98u, depth + 1u); else { c.pc = 0x00450E58u; return; } if (c.pc != 0x00440584u) [[unlikely]] return; }
L_00440584:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 1;
L_00440588:
    set32(c.r[2], c.r[2].w[0] + 1080u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00440728; } }
    c.budget -= 1;
L_00440598:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004405A4u); set32(c.r[6], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00D4(c, 96u, depth + 1u); else { c.pc = 0x00450DE0u; return; } if (c.pc != 0x004405A4u) [[unlikely]] return; }
L_004405A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00440728; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004405C0u); c.r[22].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 98u, depth + 1u); else { c.pc = 0x00450E58u; return; } if (c.pc != 0x004405C0u) [[unlikely]] return; }
L_004405C0:
    set32(c.r[3], c.r[16].w[0] - c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[5], ld32((c.r[29].w[0])));  if (t) { goto L_004406C0; } }
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = c.r[17].sd[0] <= 0; st32((c.r[29].w[0] + 12u), 0u);  if (t) { goto L_00440674; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[29].w[0] + 12u);
    set32(c.r[2], c.r[2].w[0] << 1);
    mmi::div(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0044060Cu);  goto L_00440610; }
L_00440610:
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[17].d[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044063Cu); set32(c.r[16], c.r[17].w[0] - c.r[16].w[0]);  if (depth < kMaxDepth) unit_00D0(c, 55u, depth + 1u); else { c.pc = 0x00440758u; return; } if (c.pc != 0x0044063Cu) [[unlikely]] return; }
L_0044063C:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    mmi::div(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00440658u);  goto L_0044065C; }
L_0044065C:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] > 0; st32((c.r[19].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0044069C; } }
L_00440674:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (t) { goto L_0044069C; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1080u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440698u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00C6(c, 369u, depth + 1u); else { c.pc = 0x0041A8A0u; return; } if (c.pc != 0x00440698u) [[unlikely]] return; }
L_00440698:
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_0044069C:
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00440718; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004406B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 27u, depth + 1u); else { c.pc = 0x00450418u; return; } if (c.pc != 0x004406B4u) [[unlikely]] return; }
L_004406B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[20].w[0] + 2504u));  if (t) { goto L_0044071C; } }
    c.budget -= 1;
L_004406C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - c.r[3].w[0]);  if (t) { goto L_00440718; } }
    set32(c.r[2], c.r[4].w[0] + 31u);
    c.r[3].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    set32(c.r[16], c.r[4].w[0] << 5);
    c.budget -= 7;
    if (c.r[16].sd[0] <= 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);  goto L_00440710; }
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004406F8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 58u, depth + 1u); else { c.pc = 0x004407E0u; return; } if (c.pc != 0x004406F8u) [[unlikely]] return; }
L_004406F8:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[4], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] > 0; st32((c.r[19].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_00440718; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 1;
L_00440710:
    set32(c.r[2], c.r[2].w[0] + 1080u);
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_00440718:
    c.r[2].d[0] = ld64((c.r[20].w[0] + 2504u));
    c.budget -= 1;
L_0044071C:
    st32((c.r[30].w[0]), c.r[22].w[0]);
    c.r[2].d[0] = c.r[22].d[0] + c.r[2].d[0];
    st64((c.r[20].w[0] + 2504u), c.r[2].d[0]);
    c.budget -= 3;
L_00440728:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00440758:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    set32(c.r[20], 0u + 1u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), 0u);  if (t) { goto L_00440794; } }
L_00440790:
    set32(c.r[17], c.r[17].w[0] + 18u);
    c.budget -= 1;
L_00440794:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004407C0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 18u);
    set32(c.r[5], 0u + 18u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004407B4u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 369u, depth + 1u); else { c.pc = 0x0041A8A0u; return; } if (c.pc != 0x004407B4u) [[unlikely]] return; }
L_004407B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440790u | kUnwind; return; } goto L_00440790; } }
    st32((c.r[19].w[0]), c.r[20].w[0]);
    c.budget -= 1;
L_004407C0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004407E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8196u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041A8E0u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 370u, depth); }
L_00440800:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 288ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[19].w[0]), 0u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], ld32((c.r[18].w[0] + 8196u)));  if (t) { goto L_004408A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440850u);  if (depth < kMaxDepth) unit_00C6(c, 367u, depth + 1u); else { c.pc = 0x0041A808u; return; } if (c.pc != 0x00440850u) [[unlikely]] return; }
L_00440850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], ld32((c.r[29].w[0])));  if (t) { goto L_00440884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440860u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 477u, depth + 1u); else { c.pc = 0x00443EC0u; return; } if (c.pc != 0x00440860u) [[unlikely]] return; }
L_00440860:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 108ll ? 1ull : 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00440884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440880u);  if (depth < kMaxDepth) unit_00D0(c, 63u, depth + 1u); else { c.pc = 0x004408C0u; return; } if (c.pc != 0x00440880u) [[unlikely]] return; }
L_00440880:
    set32(c.r[7], c.r[2].w[0] - c.r[17].w[0]);
    c.budget -= 1;
L_00440884:
    c.r[3].d[0] = ld64((c.r[18].w[0] + 2504u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 1264u);
    st32((c.r[19].w[0]), c.r[7].w[0]);
    c.r[3].d[0] = c.r[7].d[0] + c.r[3].d[0];
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    st64((c.r[18].w[0] + 2504u), c.r[3].d[0]);
    c.budget -= 7;
L_004408A0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004408C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[17].w[0] + 36u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[2].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[18], c.r[20].w[0] + c.r[6].w[0]);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 88u), c.r[31].d[0]);  if (t) { goto L_00440980; } }
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00440920:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00440924:
    c.r[2].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00440968; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[16], c.r[16].w[0] + 18u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00440924u | kUnwind; return; } goto L_00440924; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 18u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440950u); set32(c.r[19], 0u + 1u);  if (depth < kMaxDepth) unit_00C6(c, 369u, depth + 1u); else { c.pc = 0x0041A8A0u; return; } if (c.pc != 0x00440950u) [[unlikely]] return; }
L_00440950:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_00440968; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00440968; } }
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.r[22].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00440968:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004409AC; } }
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[19].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00440920u | kUnwind; return; } goto L_00440920; }
L_00440980:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004409AC; } }
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { c.r[17].d[0] = c.r[22].d[0] + 0ull;  goto L_004409A8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004409A0u); c.r[5].d[0] = c.r[5].d[0] | 3082ull;  if (depth < kMaxDepth) unit_00D1(c, 19u, depth + 1u); else { c.pc = 0x00444148u; return; } if (c.pc != 0x004409A0u) [[unlikely]] return; }
L_004409A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_004409AC; } }
L_004409A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004409AC:
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
L_004409E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[21].w[0]), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440A1Cu); set32(c.r[20], ld32((c.r[18].w[0] + 8196u)));  if (depth < kMaxDepth) unit_00D0(c, 477u, depth + 1u); else { c.pc = 0x00443EC0u; return; } if (c.pc != 0x00440A1Cu) [[unlikely]] return; }
L_00440A1C:
    c.r[2].d[0] = c.r[2].sd[0] < 108ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00440A38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 2048u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00440AD0; } }
L_00440A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] - 18u);  if (t) { goto L_00440A44; } }
L_00440A40:
    set32(c.r[17], c.r[17].w[0] + 18u);
    c.budget -= 1;
L_00440A44:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[18].w[0] + 2504u));  goto L_00440A7C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 12224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440A64u); set32(c.r[6], 0u + 18u);  if (depth < kMaxDepth) unit_00DD(c, 36u, depth + 1u); else { c.pc = 0x004745D8u; return; } if (c.pc != 0x00440A64u) [[unlikely]] return; }
L_00440A64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 18u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440A40u | kUnwind; return; } goto L_00440A40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 2048u);
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 2504u));
    c.budget -= 4;
L_00440A7C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[21].w[0]), c.r[17].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + c.r[2].d[0];
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440A98u); st64((c.r[18].w[0] + 2504u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00D0(c, 73u, depth + 1u); else { c.pc = 0x00440AF8u; return; } if (c.pc != 0x00440A98u) [[unlikely]] return; }
L_00440A98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00440AD4; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    mmi::div(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00440AB8u);  goto L_00440ABC; }
L_00440ABC:
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[20].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 5;
L_00440AD0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00440AD4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00440AF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440B14u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 199u, depth + 1u); else { c.pc = 0x00441A18u; return; } if (c.pc != 0x00440B14u) [[unlikely]] return; }
L_00440B14:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00440B34; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_00440B34:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00440B48:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[17].w[0] + 8188u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440B7Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 341u, depth + 1u); else { c.pc = 0x00442E48u; return; } if (c.pc != 0x00440B7Cu) [[unlikely]] return; }
L_00440B7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00440BD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440B90u);  if (depth < kMaxDepth) unit_00D0(c, 341u, depth + 1u); else { c.pc = 0x00442E48u; return; } if (c.pc != 0x00440B90u) [[unlikely]] return; }
L_00440B90:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[19].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00440BD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440BA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 79u, depth + 1u); else { c.pc = 0x00440BF0u; return; } if (c.pc != 0x00440BA0u) [[unlikely]] return; }
L_00440BA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00440BD0; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_00442E28; }
L_00440BD0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00440BD4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00440BF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8196u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440C04u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00C6(c, 197u, depth + 1u); else { c.pc = 0x004193F8u; return; } if (c.pc != 0x00440C04u) [[unlikely]] return; }
L_00440C04:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00440C18:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    set32(c.r[21], c.r[17].w[0] + 4128u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[20], ld32((c.r[17].w[0] + 8196u)));
    set32(c.r[18], ld32((c.r[20].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440C58u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 197u, depth + 1u); else { c.pc = 0x004193F8u; return; } if (c.pc != 0x00440C58u) [[unlikely]] return; }
L_00440C58:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440C64u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 311u, depth + 1u); else { c.pc = 0x0041A1F0u; return; } if (c.pc != 0x00440C64u) [[unlikely]] return; }
L_00440C64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_00440C74; } }
    st32((c.r[2].w[0] + 29228u), c.r[16].w[0]);
    c.budget -= 1;
L_00440C74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440C80u); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00440C80u) [[unlikely]] return; }
L_00440C80:
    set32(c.r[3], 0u - 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00440CB8; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], 0u - 2u);  if (t) { goto L_00440CA8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00440CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00440CE8; } }
L_00440CA8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] - 4u);  if (t) { goto L_00440CFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00440CE8; } }
L_00440CB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440CC4u); c.r[5].d[0] = c.r[5].d[0] | 3080ull;  if (depth < kMaxDepth) unit_00D1(c, 19u, depth + 1u); else { c.pc = 0x00444148u; return; } if (c.pc != 0x00440CC4u) [[unlikely]] return; }
L_00440CC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[19].w[0] - 4u);  if (t) { goto L_00440CFC; } }
    c.budget -= 1;
L_00440CD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440CDCu); c.r[5].d[0] = c.r[5].d[0] | 3081ull;  if (depth < kMaxDepth) unit_00D1(c, 19u, depth + 1u); else { c.pc = 0x00444148u; return; } if (c.pc != 0x00440CDCu) [[unlikely]] return; }
L_00440CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[19].w[0] - 4u);  if (t) { goto L_00440CFC; } }
    c.budget -= 1;
L_00440CE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440CF8u); c.r[5].d[0] = c.r[5].d[0] | 3079ull;  if (depth < kMaxDepth) unit_00D1(c, 19u, depth + 1u); else { c.pc = 0x00444148u; return; } if (c.pc != 0x00440CF8u) [[unlikely]] return; }
L_00440CF8:
    set32(c.r[2], c.r[19].w[0] - 4u);
    c.budget -= 1;
L_00440CFC:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 5u);  goto L_00440D18; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440D14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 280u, depth + 1u); else { c.pc = 0x004528E8u; return; } if (c.pc != 0x00440D14u) [[unlikely]] return; }
L_00440D14:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_00440D18:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00440D28; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00440D30; } }
L_00440D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440D30u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D0(c, 106u, depth + 1u); else { c.pc = 0x00440EF8u; return; } if (c.pc != 0x00440D30u) [[unlikely]] return; }
L_00440D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440D38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 104u, depth + 1u); else { c.pc = 0x00440EC8u; return; } if (c.pc != 0x00440D38u) [[unlikely]] return; }
L_00440D38:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00440D90; } }
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));  goto L_00440D94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440D54u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 346u, depth + 1u); else { c.pc = 0x0041A5B8u; return; } if (c.pc != 0x00440D54u) [[unlikely]] return; }
L_00440D54:
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00440D90; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 64u);  goto L_00440EF8; }
L_00440D90:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 1;
L_00440D94:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00440DB8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440DDCu); set32(c.r[5], ld32((c.r[4].w[0] + 8204u)));  if (depth < kMaxDepth) unit_00D0(c, 300u, depth + 1u); else { c.pc = 0x004426E0u; return; } if (c.pc != 0x00440DDCu) [[unlikely]] return; }
L_00440DDC:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00440E00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440E14u); set32(c.r[5], ld32((c.r[4].w[0] + 8204u)));  if (depth < kMaxDepth) unit_00D0(c, 303u, depth + 1u); else { c.pc = 0x004427B8u; return; } if (c.pc != 0x00440E14u) [[unlikely]] return; }
L_00440E14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00440E20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[2], c.r[16].w[0] + 8188u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440E48u); set32(c.r[17], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_00D0(c, 334u, depth + 1u); else { c.pc = 0x00442CB8u; return; } if (c.pc != 0x00440E48u) [[unlikely]] return; }
L_00440E48:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[5], c.r[29].w[0] + 4u);
    set32(c.r[6], c.r[29].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00440EB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440E64u);  if (depth < kMaxDepth) unit_00D0(c, 346u, depth + 1u); else { c.pc = 0x00442ED0u; return; } if (c.pc != 0x00440E64u) [[unlikely]] return; }
L_00440E64:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 2488u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440E70u); set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00D0(c, 365u, depth + 1u); else { c.pc = 0x00443088u; return; } if (c.pc != 0x00440E70u) [[unlikely]] return; }
L_00440E70:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 2496u));
    st64((c.r[16].w[0] + 2488u), c.r[2].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440E80u); set32(c.r[5], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_00D0(c, 365u, depth + 1u); else { c.pc = 0x00443088u; return; } if (c.pc != 0x00440E80u) [[unlikely]] return; }
L_00440E80:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    st64((c.r[16].w[0] + 2496u), c.r[2].d[0]);
    set32(c.r[5], c.r[29].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440E94u); set32(c.r[6], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00D0(c, 346u, depth + 1u); else { c.pc = 0x00442ED0u; return; } if (c.pc != 0x00440E94u) [[unlikely]] return; }
L_00440E94:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 2512u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440EA0u); set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00D0(c, 365u, depth + 1u); else { c.pc = 0x00443088u; return; } if (c.pc != 0x00440EA0u) [[unlikely]] return; }
L_00440EA0:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 2520u));
    st64((c.r[16].w[0] + 2512u), c.r[2].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440EB0u); set32(c.r[5], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_00D0(c, 365u, depth + 1u); else { c.pc = 0x00443088u; return; } if (c.pc != 0x00440EB0u) [[unlikely]] return; }
L_00440EB0:
    st64((c.r[16].w[0] + 2520u), c.r[2].d[0]);
    c.budget -= 1;
L_00440EB4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00440EC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8204u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00442E88; }
L_00440EE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8208u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00442E88; }
L_00440EF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8208u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00442E68; }
L_00440F18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440F30u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 199u, depth + 1u); else { c.pc = 0x00441A18u; return; } if (c.pc != 0x00440F30u) [[unlikely]] return; }
L_00440F30:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00440FBC; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00440FBC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8196u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440F58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 113u, depth + 1u); else { c.pc = 0x00440FD0u; return; } if (c.pc != 0x00440F58u) [[unlikely]] return; }
L_00440F58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00440FB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440F68u);  if (depth < kMaxDepth) unit_00C6(c, 231u, depth + 1u); else { c.pc = 0x00419990u; return; } if (c.pc != 0x00440F68u) [[unlikely]] return; }
L_00440F68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440F74u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 225u, depth + 1u); else { c.pc = 0x00419908u; return; } if (c.pc != 0x00440F74u) [[unlikely]] return; }
L_00440F74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440F80u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 237u, depth + 1u); else { c.pc = 0x00419A18u; return; } if (c.pc != 0x00440F80u) [[unlikely]] return; }
L_00440F80:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 15u);
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 14;
L_00440FB8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00440FBC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00440FD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440FE0u);  if (depth < kMaxDepth) unit_00C6(c, 197u, depth + 1u); else { c.pc = 0x004193F8u; return; } if (c.pc != 0x00440FE0u) [[unlikely]] return; }
L_00440FE0:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00440FF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 27u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 8196u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441018u); set32(c.r[16], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00441018u) [[unlikely]] return; }
L_00441018:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_00441024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00441048; } }
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00419EE0u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 281u, depth); }
L_00441048:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00441060:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[17].w[0] + 13744u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044108Cu); set32(c.r[19], c.r[17].w[0] + 13736u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044108Cu) [[unlikely]] return; }
L_0044108C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00441198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004410A0u); st32((c.r[17].w[0] + 8196u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_00D0(c, 126u, depth + 1u); else { c.pc = 0x004411B8u; return; } if (c.pc != 0x004410A0u) [[unlikely]] return; }
L_004410A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00441198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004410B0u);  if (depth < kMaxDepth) unit_00D0(c, 143u, depth + 1u); else { c.pc = 0x00441370u; return; } if (c.pc != 0x004410B0u) [[unlikely]] return; }
L_004410B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] | 3076ull;  if (t) { goto L_004410E0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_004410E0:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004410F0u); set32(c.r[5], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00C9(c, 104u, depth + 1u); else { c.pc = 0x00424E78u; return; } if (c.pc != 0x004410F0u) [[unlikely]] return; }
L_004410F0:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[11], c.r[5].w[0] - 24u);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[8], c.r[17].w[0] + 13916u);
    set32(c.r[10], c.r[2].w[0] - 88u);
    set32(c.r[3], c.r[3].w[0] - 56u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 15;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 40u);  if (t) { goto L_00441150; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 3077ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_00441150:
    st32((c.r[19].w[0] + 4u), c.r[9].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[19].w[0]), c.r[18].w[0]);
    st32((c.r[17].w[0] + 8468u), c.r[8].w[0]);
    st32((c.r[8].w[0] + 20u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[8].w[0] + 4u), c.r[10].w[0]);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[8].w[0] + 12u), c.r[11].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441180u); st32((c.r[8].w[0] + 16u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 172u, depth + 1u); else { c.pc = 0x00419198u; return; } if (c.pc != 0x00441180u) [[unlikely]] return; }
L_00441180:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044118Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D0(c, 182u, depth + 1u); else { c.pc = 0x004417E0u; return; } if (c.pc != 0x0044118Cu) [[unlikely]] return; }
L_0044118C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441194u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 149u, depth + 1u); else { c.pc = 0x004413F0u; return; } if (c.pc != 0x00441194u) [[unlikely]] return; }
L_00441194:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00441198:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004411B8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[8], c.r[2].w[0] + 29200u);
    st64((c.r[29].w[0] + 72u), c.r[17].d[0]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[2], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 3078ull;  if (t) { goto L_004411F8; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (t) { goto L_00441208; } }
L_004411F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441200u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 19u, depth + 1u); else { c.pc = 0x00444148u; return; } if (c.pc != 0x00441200u) [[unlikely]] return; }
L_00441200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0044135C; } }
L_00441208:
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1080u);
    ldl(c.r[5], (c.r[8].w[0] + 7u));
    ldr(c.r[5], (c.r[8].w[0]));
    ldl(c.r[9], (c.r[8].w[0] + 15u));
    ldr(c.r[9], (c.r[8].w[0] + 8u));
    ldl(c.r[10], (c.r[8].w[0] + 23u));
    ldr(c.r[10], (c.r[8].w[0] + 16u));
    set32(c.r[11], ld32((c.r[8].w[0] + 24u)));
    sdl(c.r[5], (c.r[7].w[0] + 15u));
    sdr(c.r[5], (c.r[7].w[0] + 8u));
    sdl(c.r[9], (c.r[7].w[0] + 23u));
    sdr(c.r[9], (c.r[7].w[0] + 16u));
    sdl(c.r[10], (c.r[7].w[0] + 31u));
    sdr(c.r[10], (c.r[7].w[0] + 24u));
    st32((c.r[7].w[0] + 32u), c.r[11].w[0]);
    set32(c.r[5], 0u + 63u);
    st32((c.r[7].w[0] + 40u), c.r[3].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[17].d[0] = c.r[17].d[0] | 16960ull;
    st32((c.r[7].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[16], c.r[18].w[0] + 4128u);
    st32((c.r[7].w[0] + 68u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 76u), 0u);
    st32((c.r[7].w[0]), 0u);
    st32((c.r[7].w[0] + 4u), 0u);
    st32((c.r[7].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 44u), 0u);
    st32((c.r[7].w[0] + 48u), 0u);
    st32((c.r[7].w[0] + 52u), 0u);
    st32((c.r[7].w[0] + 56u), 0u);
    st32((c.r[7].w[0] + 64u), 0u);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441294u); st32((c.r[7].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00441294u) [[unlikely]] return; }
L_00441294:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004412A8u); st64((c.r[29].w[0] + 8u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x004412A8u) [[unlikely]] return; }
L_004412A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 65u);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004412BCu); st64((c.r[29].w[0] + 24u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x004412BCu) [[unlikely]] return; }
L_004412BC:
    set32(c.r[5], 0u + 66u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004412D0u); st64((c.r[29].w[0] + 40u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x004412D0u) [[unlikely]] return; }
L_004412D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[2].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004412E0u); st64((c.r[29].w[0] + 56u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_00D4(c, 265u, depth + 1u); else { c.pc = 0x00452748u; return; } if (c.pc != 0x004412E0u) [[unlikely]] return; }
L_004412E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004412ECu); set32(c.r[5], 0u + 72u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x004412ECu) [[unlikely]] return; }
L_004412EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004412F8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 273u, depth + 1u); else { c.pc = 0x00452868u; return; } if (c.pc != 0x004412F8u) [[unlikely]] return; }
L_004412F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441304u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 274u, depth + 1u); else { c.pc = 0x00452870u; return; } if (c.pc != 0x00441304u) [[unlikely]] return; }
L_00441304:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441310u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00D4(c, 275u, depth + 1u); else { c.pc = 0x00452888u; return; } if (c.pc != 0x00441310u) [[unlikely]] return; }
L_00441310:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044131Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00D4(c, 276u, depth + 1u); else { c.pc = 0x004528A0u; return; } if (c.pc != 0x0044131Cu) [[unlikely]] return; }
L_0044131C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441328u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00D4(c, 277u, depth + 1u); else { c.pc = 0x004528B8u; return; } if (c.pc != 0x00441328u) [[unlikely]] return; }
L_00441328:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441334u); set32(c.r[5], 0u + 62u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00441334u) [[unlikely]] return; }
L_00441334:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441340u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 278u, depth + 1u); else { c.pc = 0x004528D0u; return; } if (c.pc != 0x00441340u) [[unlikely]] return; }
L_00441340:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044134Cu); set32(c.r[5], 0u + 61u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044134Cu) [[unlikely]] return; }
L_0044134C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441354u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 229u, depth + 1u); else { c.pc = 0x00456160u; return; } if (c.pc != 0x00441354u) [[unlikely]] return; }
L_00441354:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_0044135C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00441370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441384u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 340u, depth + 1u); else { c.pc = 0x0044EE38u; return; } if (c.pc != 0x00441384u) [[unlikely]] return; }
L_00441384:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_004413A8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004413A0u); set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_00C6(c, 94u, depth + 1u); else { c.pc = 0x004188A8u; return; } if (c.pc != 0x004413A0u) [[unlikely]] return; }
L_004413A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004413B4; } }
L_004413A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004413B0u);  if (depth < kMaxDepth) unit_00D0(c, 148u, depth + 1u); else { c.pc = 0x004413E0u; return; } if (c.pc != 0x004413B0u) [[unlikely]] return; }
L_004413B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004413B4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004413CC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004413C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 295u, depth + 1u); else { c.pc = 0x0041A080u; return; } if (c.pc != 0x004413C8u) [[unlikely]] return; }
L_004413C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004413CC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004413E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] - 1528u)));  c.pc = t; return; }
L_004413F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 5168u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441410u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 144u, depth + 1u); else { c.pc = 0x00451480u; return; } if (c.pc != 0x00441410u) [[unlikely]] return; }
L_00441410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D4(c, 27u, depth); }
L_00441430:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 4128u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 8196u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044146Cu); set32(c.r[18], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00D4(c, 125u, depth + 1u); else { c.pc = 0x004511C0u; return; } if (c.pc != 0x0044146Cu) [[unlikely]] return; }
L_0044146C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_004414C8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  goto L_004414B8; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441494u); set32(c.r[7], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00D0(c, 154u, depth + 1u); else { c.pc = 0x004414F0u; return; } if (c.pc != 0x00441494u) [[unlikely]] return; }
L_00441494:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0]), c.r[4].w[0]);  goto L_004414BC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 4;
L_004414B8:
    st32((c.r[20].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_004414BC:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_004414C8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004414F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441520u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 197u, depth + 1u); else { c.pc = 0x004193F8u; return; } if (c.pc != 0x00441520u) [[unlikely]] return; }
L_00441520:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 52u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441538u); st32((c.r[3].w[0] - 2068u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 213u, depth + 1u); else { c.pc = 0x004195C0u; return; } if (c.pc != 0x00441538u) [[unlikely]] return; }
L_00441538:
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044154Cu); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00D5(c, 235u, depth + 1u); else { c.pc = 0x00456328u; return; } if (c.pc != 0x0044154Cu) [[unlikely]] return; }
L_0044154C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441554u); st64((c.r[29].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00D5(c, 239u, depth + 1u); else { c.pc = 0x00456468u; return; } if (c.pc != 0x00441554u) [[unlikely]] return; }
L_00441554:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044156Cu); st64((c.r[29].w[0] + 24u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00D4(c, 284u, depth + 1u); else { c.pc = 0x00452948u; return; } if (c.pc != 0x0044156Cu) [[unlikely]] return; }
L_0044156C:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00441598:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8196u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_00441658; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[7], c.r[2].w[0] + 29200u);
    ldl(c.r[4], (c.r[3].w[0] + 15u));
    ldr(c.r[4], (c.r[3].w[0] + 8u));
    ldl(c.r[5], (c.r[3].w[0] + 23u));
    ldr(c.r[5], (c.r[3].w[0] + 16u));
    ldl(c.r[6], (c.r[3].w[0] + 31u));
    ldr(c.r[6], (c.r[3].w[0] + 24u));
    sdl(c.r[4], (c.r[7].w[0] + 7u));
    sdr(c.r[4], (c.r[7].w[0]));
    sdl(c.r[5], (c.r[7].w[0] + 15u));
    sdr(c.r[5], (c.r[7].w[0] + 8u));
    sdl(c.r[6], (c.r[7].w[0] + 23u));
    sdr(c.r[6], (c.r[7].w[0] + 16u));
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441608u); st32((c.r[7].w[0] + 24u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_00D3(c, 340u, depth + 1u); else { c.pc = 0x0044EE38u; return; } if (c.pc != 0x00441608u) [[unlikely]] return; }
L_00441608:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00441628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044161Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 167u, depth + 1u); else { c.pc = 0x00441670u; return; } if (c.pc != 0x0044161Cu) [[unlikely]] return; }
L_0044161C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0044163C; } }
    c.budget -= 1;
L_00441628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441630u);  if (depth < kMaxDepth) unit_00D0(c, 173u, depth + 1u); else { c.pc = 0x004416C8u; return; } if (c.pc != 0x00441630u) [[unlikely]] return; }
L_00441630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441638u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 169u, depth + 1u); else { c.pc = 0x00441690u; return; } if (c.pc != 0x00441638u) [[unlikely]] return; }
L_00441638:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0044163C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044164Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044164Cu) [[unlikely]] return; }
L_0044164C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441654u);  if (depth < kMaxDepth) unit_00D5(c, 234u, depth + 1u); else { c.pc = 0x004562B8u; return; } if (c.pc != 0x00441654u) [[unlikely]] return; }
L_00441654:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00441658:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00441670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441680u);  if (depth < kMaxDepth) unit_00C6(c, 130u, depth + 1u); else { c.pc = 0x00418D30u; return; } if (c.pc != 0x00441680u) [[unlikely]] return; }
L_00441680:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00441690:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 1528u), c.r[4].w[0]);  c.pc = t; return; }
L_004416A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004416A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004416B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 182u, depth + 1u); else { c.pc = 0x004417E0u; return; } if (c.pc != 0x004416B8u) [[unlikely]] return; }
L_004416B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004416C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8196u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004416DCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00C6(c, 188u, depth + 1u); else { c.pc = 0x00419308u; return; } if (c.pc != 0x004416DCu) [[unlikely]] return; }
L_004416DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004416F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[20].w[0] + 8196u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], ld32((c.r[19].w[0])));  if (t) { goto L_00441744; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[19].w[0] + 48u), 0u);  goto L_00441740; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00441758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004417C4; } }
L_00441740:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00441744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044174Cu);  if (depth < kMaxDepth) unit_00D0(c, 185u, depth + 1u); else { c.pc = 0x00441830u; return; } if (c.pc != 0x0044174Cu) [[unlikely]] return; }
L_0044174C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004417C0; } }
    c.budget -= 1;
L_00441758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441760u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 113u, depth + 1u); else { c.pc = 0x00440FD0u; return; } if (c.pc != 0x00441760u) [[unlikely]] return; }
L_00441760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004417C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441770u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 231u, depth + 1u); else { c.pc = 0x00419990u; return; } if (c.pc != 0x00441770u) [[unlikely]] return; }
L_00441770:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441784u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 188u, depth + 1u); else { c.pc = 0x004418B8u; return; } if (c.pc != 0x00441784u) [[unlikely]] return; }
L_00441784:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044179Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 350u, depth + 1u); else { c.pc = 0x0041A608u; return; } if (c.pc != 0x0044179Cu) [[unlikely]] return; }
L_0044179C:
    set32(c.r[4], c.r[20].w[0] + 4128u);
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[19].w[0] + 48u), c.r[16].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004417BCu); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00D4(c, 281u, depth + 1u); else { c.pc = 0x004528F0u; return; } if (c.pc != 0x004417BCu) [[unlikely]] return; }
L_004417BC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004417C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004417C4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004417E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] + 4128u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8196u)));
    st32((c.r[3].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], ld32((c.r[3].w[0])));  if (t) { goto L_00441814; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00441828; } }
L_00441814:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00441818:
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00441878; }
L_00441824:
    c.budget -= 1;
L_00441828:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00441830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8196u)));
    set32(c.r[4], c.r[4].w[0] + 4128u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_00441864; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00441870; } }
L_00441864:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00441878; }
L_00441870:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00441878:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441898u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 327u, depth + 1u); else { c.pc = 0x0041A3B8u; return; } if (c.pc != 0x00441898u) [[unlikely]] return; }
L_00441898:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00D4(c, 279u, depth); }
L_004418B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004418DCu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 172u, depth + 1u); else { c.pc = 0x00451960u; return; } if (c.pc != 0x004418DCu) [[unlikely]] return; }
L_004418DC:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004418ECu); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00D7(c, 36u, depth + 1u); else { c.pc = 0x0045C4A0u; return; } if (c.pc != 0x004418ECu) [[unlikely]] return; }
L_004418EC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00441908:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3075ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_00441928:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3075ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_00441948:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3075ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_00441968:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3075ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_00441988:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004419A0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 199u, depth + 1u); else { c.pc = 0x00441A18u; return; } if (c.pc != 0x004419A0u) [[unlikely]] return; }
L_004419A0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00441A04; }
    set32(c.r[16], ld32((c.r[16].w[0] + 8196u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], ld32((c.r[16].w[0])));  if (t) { goto L_00441A00; } }
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00441A00; } }
    set32(c.r[7], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004419DCu); set32(c.r[6], ld32((c.r[6].w[0] + 16u)));  if (depth < kMaxDepth) unit_00DC(c, 147u, depth + 1u); else { c.pc = 0x004717A0u; return; } if (c.pc != 0x004419DCu) [[unlikely]] return; }
L_004419DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004419E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 358u, depth + 1u); else { c.pc = 0x0041A738u; return; } if (c.pc != 0x004419E8u) [[unlikely]] return; }
L_004419E8:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 2528u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 6;
L_00441A00:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00441A04:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00441A18:
    set32(c.r[3], ld32((c.r[4].w[0] + 14000u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8196u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 3340u);  if (t) { goto L_00441A40; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[5].d[0];
    c.budget -= 5;
L_00441A40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00441A48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441A64u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x00441A64u) [[unlikely]] return; }
L_00441A64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00441A88; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 419ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_00441A88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441A94u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00441A94u) [[unlikely]] return; }
L_00441A94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00441AB0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8468u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441AB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441AB0u) [[unlikely]] return; }
L_00441AB0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00441AC8:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_00441AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441AF0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00441AF0u) [[unlikely]] return; }
L_00441AF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00441B14; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8468u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00441B10; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441B10u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441B10u) [[unlikely]] return; }
L_00441B10:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00441B14:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00441B28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00441B30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00441B38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441B50u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00441B50u) [[unlikely]] return; }
L_00441B50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00441B68; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00441B78; }
L_00441B68:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00441B78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441B8Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 215u, depth + 1u); else { c.pc = 0x00441BA8u; return; } if (c.pc != 0x00441B8Cu) [[unlikely]] return; }
L_00441B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441B94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 218u, depth + 1u); else { c.pc = 0x00441C18u; return; } if (c.pc != 0x00441B94u) [[unlikely]] return; }
L_00441B94:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00441BA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 7u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441BC8u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_00D4(c, 261u, depth + 1u); else { c.pc = 0x004526E0u; return; } if (c.pc != 0x00441BC8u) [[unlikely]] return; }
L_00441BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00441C00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441BD8u); set32(c.r[5], ld32((c.r[16].w[0] + 8476u)));  if (depth < kMaxDepth) unit_00D0(c, 341u, depth + 1u); else { c.pc = 0x00442E48u; return; } if (c.pc != 0x00441BD8u) [[unlikely]] return; }
L_00441BD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_00441C00; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00D4(c, 260u, depth); }
L_00441C00:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00441C18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 7u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441C38u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_00D4(c, 263u, depth + 1u); else { c.pc = 0x00452710u; return; } if (c.pc != 0x00441C38u) [[unlikely]] return; }
L_00441C38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00441C70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441C48u); set32(c.r[5], ld32((c.r[16].w[0] + 8476u)));  if (depth < kMaxDepth) unit_00D0(c, 343u, depth + 1u); else { c.pc = 0x00442E88u; return; } if (c.pc != 0x00441C48u) [[unlikely]] return; }
L_00441C48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_00441C70; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00D4(c, 262u, depth); }
L_00441C70:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00441C88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441CA0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00441CA0u) [[unlikely]] return; }
L_00441CA0:
    set32(c.r[3], c.r[16].w[0] + 13916u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00441CB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441CB4u); st32((c.r[16].w[0] + 8468u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00D0(c, 224u, depth + 1u); else { c.pc = 0x00441CC8u; return; } if (c.pc != 0x00441CB4u) [[unlikely]] return; }
L_00441CB4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00441CB8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00441CC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00441CD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00441CD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441CF0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00441CF0u) [[unlikely]] return; }
L_00441CF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00441D10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441D10u);  if (depth < kMaxDepth) unit_00D4(c, 258u, depth + 1u); else { c.pc = 0x00452678u; return; } if (c.pc != 0x00441D10u) [[unlikely]] return; }
L_00441D10:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00441D20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441D38u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00441D38u) [[unlikely]] return; }
L_00441D38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 6u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00441D58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441D58u);  if (depth < kMaxDepth) unit_00D4(c, 258u, depth + 1u); else { c.pc = 0x00452678u; return; } if (c.pc != 0x00441D58u) [[unlikely]] return; }
L_00441D58:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00441D68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441D80u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00441D80u) [[unlikely]] return; }
L_00441D80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 7u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00441DA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441DA0u);  if (depth < kMaxDepth) unit_00D4(c, 258u, depth + 1u); else { c.pc = 0x00452678u; return; } if (c.pc != 0x00441DA0u) [[unlikely]] return; }
L_00441DA0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00441DB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441DD0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00441DD0u) [[unlikely]] return; }
L_00441DD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00441DF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441DF0u);  if (depth < kMaxDepth) unit_00D4(c, 258u, depth + 1u); else { c.pc = 0x00452678u; return; } if (c.pc != 0x00441DF0u) [[unlikely]] return; }
L_00441DF0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00441E08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 2561ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_00441E28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 2561ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_00441E48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 2561ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_00441E68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 2561ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_00441E88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00441E90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00442F88; }
L_00441EA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00441EB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 8u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441EE8u); set32(c.r[6], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00D0(c, 255u, depth + 1u); else { c.pc = 0x00441FE8u; return; } if (c.pc != 0x00441EE8u) [[unlikely]] return; }
L_00441EE8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00441F08u);  goto L_00441F0C; }
L_00441F0C:
    c.r[8].d[0] = c.hi.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441F18u);  if (depth < kMaxDepth) unit_00D0(c, 261u, depth + 1u); else { c.pc = 0x00442028u; return; } if (c.pc != 0x00441F18u) [[unlikely]] return; }
L_00441F18:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], 0u + 2048u);  if (t) { goto L_00441FCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441F38u);  if (depth < kMaxDepth) unit_00D0(c, 261u, depth + 1u); else { c.pc = 0x00442028u; return; } if (c.pc != 0x00441F38u) [[unlikely]] return; }
L_00441F38:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00441FD0; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441F58u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 261u, depth + 1u); else { c.pc = 0x00442028u; return; } if (c.pc != 0x00441F58u) [[unlikely]] return; }
L_00441F58:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], 0u + 3u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00441FCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441F74u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 272u, depth + 1u); else { c.pc = 0x00442228u; return; } if (c.pc != 0x00441F74u) [[unlikely]] return; }
L_00441F74:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441F88u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00D0(c, 275u, depth + 1u); else { c.pc = 0x004422E0u; return; } if (c.pc != 0x00441F88u) [[unlikely]] return; }
L_00441F88:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], 0u + 5u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441FA0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 272u, depth + 1u); else { c.pc = 0x00442228u; return; } if (c.pc != 0x00441FA0u) [[unlikely]] return; }
L_00441FA0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441FB4u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_00D0(c, 275u, depth + 1u); else { c.pc = 0x004422E0u; return; } if (c.pc != 0x00441FB4u) [[unlikely]] return; }
L_00441FB4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441FC8u); set32(c.r[7], 0u + 7u);  if (depth < kMaxDepth) unit_00D0(c, 277u, depth + 1u); else { c.pc = 0x00442380u; return; } if (c.pc != 0x00441FC8u) [[unlikely]] return; }
L_00441FC8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00441FCC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00441FD0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00441FE8:
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00441FF8:
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[8].w[0]);
    c.budget -= 3;
L_00442004:
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.budget -= 4;
L_00442014:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00441FF8u | kUnwind; return; } goto L_00441FF8; } }
    goto L_0044201C;
L_00442018:
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_0044201C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00442024:
    c.budget -= 1;
L_00442028:
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[9], c.r[7].w[0] << 2);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], c.r[16].w[0] + 16u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00442088; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 4u);  if (t) { goto L_004420B4; } }
L_00442088:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[19], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442098u); set32(c.r[18], 0u + 5u);  if (depth < kMaxDepth) unit_00D0(c, 265u, depth + 1u); else { c.pc = 0x004420E8u; return; } if (c.pc != 0x00442098u) [[unlikely]] return; }
L_00442098:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_004420C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004420B4u);  if (depth < kMaxDepth) unit_00D0(c, 290u, depth + 1u); else { c.pc = 0x00442580u; return; } if (c.pc != 0x004420B4u) [[unlikely]] return; }
L_004420B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004420C4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 279u, depth + 1u); else { c.pc = 0x004423D0u; return; } if (c.pc != 0x004420C4u) [[unlikely]] return; }
L_004420C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004420C8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004420E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[6].w[0] - c.r[7].w[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1036ull;
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] > 0; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00442130; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_00442130:
    st32((c.r[16].w[0] + 16u), c.r[7].w[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442144u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 104u, depth + 1u); else { c.pc = 0x00424E78u; return; } if (c.pc != 0x00442144u) [[unlikely]] return; }
L_00442144:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] | 1034ull;  if (t) { goto L_00442168; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_00442168:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00442180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442198u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 270u, depth + 1u); else { c.pc = 0x004421C0u; return; } if (c.pc != 0x00442198u) [[unlikely]] return; }
L_00442198:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004421A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D0(c, 270u, depth + 1u); else { c.pc = 0x004421C0u; return; } if (c.pc != 0x004421A4u) [[unlikely]] return; }
L_004421A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 2u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_004421C0; }
L_004421C0:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4880u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; set32(c.r[16], c.r[4].w[0] + 16u);  if (t) { goto L_00442218; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00442218; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00442214u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00442214u) [[unlikely]] return; }
L_00442214:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_00442218:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00442228:
    set32(c.r[2], c.r[8].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[8].w[0] << 2);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[6].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[7].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044227Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 279u, depth + 1u); else { c.pc = 0x004423D0u; return; } if (c.pc != 0x0044227Cu) [[unlikely]] return; }
L_0044227C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[19].w[0] + 5808u);
    set32(c.r[19], c.r[19].w[0] + 7848u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], 0u + 15u);
    c.budget -= 11;
L_004422A8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[19], c.r[19].w[0] - 136u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004422A8u | kUnwind; return; } goto L_004422A8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004422E0:
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[5].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[6].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442330u); c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00D0(c, 279u, depth + 1u); else { c.pc = 0x004423D0u; return; } if (c.pc != 0x00442330u) [[unlikely]] return; }
L_00442330:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00442380:
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004423B8u); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00D0(c, 279u, depth + 1u); else { c.pc = 0x004423D0u; return; } if (c.pc != 0x004423B8u) [[unlikely]] return; }
L_004423B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_004423F0; }
L_004423D0:
    set32(c.r[2], 0u + 9u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 76u), c.r[2].w[0]);  c.pc = t; return; }
L_004423F0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_004423F8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004423F8u | kUnwind; return; } goto L_004423F8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00442420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442440u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 287u, depth + 1u); else { c.pc = 0x004424C8u; return; } if (c.pc != 0x00442440u) [[unlikely]] return; }
L_00442440:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00442468; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 1032ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_00442468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442470u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 264u, depth + 1u); else { c.pc = 0x00452728u; return; } if (c.pc != 0x00442470u) [[unlikely]] return; }
L_00442470:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004424B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442488u);  if (depth < kMaxDepth) unit_00D4(c, 264u, depth + 1u); else { c.pc = 0x00452728u; return; } if (c.pc != 0x00442488u) [[unlikely]] return; }
L_00442488:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_004424B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004424A0u);  if (depth < kMaxDepth) unit_00D4(c, 264u, depth + 1u); else { c.pc = 0x00452728u; return; } if (c.pc != 0x004424A0u) [[unlikely]] return; }
L_004424A0:
    set32(c.r[3], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_004424B0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00442510; }
L_004424C8:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00442504; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00442504; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00442504; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00442504; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_00442504; }
L_00442504:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00442510:
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + 4880u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { goto L_00442560; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 1033ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_00442560:
    set32(c.r[7], ld32((c.r[8].w[0] + 4u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442570u); c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00D0(c, 290u, depth + 1u); else { c.pc = 0x00442580u; return; } if (c.pc != 0x00442570u) [[unlikely]] return; }
L_00442570:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00442580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004425B0u); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 37u, depth + 1u); else { c.pc = 0x00444340u; return; } if (c.pc != 0x004425B0u) [[unlikely]] return; }
L_004425B0:
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[4], c.r[16].w[0] + 24u);
    ldl(c.r[2], (c.r[19].w[0] + 7u));
    ldr(c.r[2], (c.r[19].w[0]));
    ldl(c.r[3], (c.r[19].w[0] + 15u));
    ldr(c.r[3], (c.r[19].w[0] + 8u));
    ldl(c.r[5], (c.r[19].w[0] + 23u));
    ldr(c.r[5], (c.r[19].w[0] + 16u));
    sdl(c.r[2], (c.r[16].w[0] + 7u));
    sdr(c.r[2], (c.r[16].w[0]));
    sdl(c.r[3], (c.r[16].w[0] + 15u));
    sdr(c.r[3], (c.r[16].w[0] + 8u));
    sdl(c.r[5], (c.r[16].w[0] + 23u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004425ECu); sdr(c.r[5], (c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_00D0(c, 295u, depth + 1u); else { c.pc = 0x00442620u; return; } if (c.pc != 0x004425ECu) [[unlikely]] return; }
L_004425EC:
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004425FCu); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_00D3(c, 400u, depth + 1u); else { c.pc = 0x0044F6E8u; return; } if (c.pc != 0x004425FCu) [[unlikely]] return; }
L_004425FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442604u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 38u, depth + 1u); else { c.pc = 0x00444358u; return; } if (c.pc != 0x00442604u) [[unlikely]] return; }
L_00442604:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00442620:
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), 0u);  c.pc = t; return; }
L_00442630:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4896u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    ldl(c.r[2], (c.r[7].w[0] + 7u));
    ldr(c.r[2], (c.r[7].w[0]));
    ldl(c.r[3], (c.r[7].w[0] + 15u));
    ldr(c.r[3], (c.r[7].w[0] + 8u));
    sdl(c.r[2], (c.r[4].w[0] + 7u));
    sdr(c.r[2], (c.r[4].w[0]));
    sdl(c.r[3], (c.r[4].w[0] + 15u));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; sdr(c.r[3], (c.r[4].w[0] + 8u));  c.pc = t; return; }
L_00442678:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4896u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    ldl(c.r[2], (c.r[4].w[0] + 7u));
    ldr(c.r[2], (c.r[4].w[0]));
    ldl(c.r[3], (c.r[4].w[0] + 15u));
    ldr(c.r[3], (c.r[4].w[0] + 8u));
    sdl(c.r[2], (c.r[7].w[0] + 7u));
    sdr(c.r[2], (c.r[7].w[0]));
    sdl(c.r[3], (c.r[7].w[0] + 15u));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; sdr(c.r[3], (c.r[7].w[0] + 8u));  c.pc = t; return; }
L_004426C0:
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_004426C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_004426F8; }
L_004426E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_004426F8; }
L_004426F8:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 4880u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  if (t) { goto L_00442758; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00442760; } }
L_00442758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044278C; } }
L_00442760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442768u); set32(c.r[7], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00D0(c, 313u, depth + 1u); else { c.pc = 0x004429B0u; return; } if (c.pc != 0x00442768u) [[unlikely]] return; }
L_00442768:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 9;
L_0044278C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004427A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_004427D0; }
L_004427B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_004427D0; }
L_004427D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[21].w[0] << 3);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[21].w[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[22].w[0] + 4880u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 18;
L_00442818:
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 3;
L_00442824:
    set32(c.r[18], c.r[4].w[0] + 16u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_004428F0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004428F0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00442858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004428F4; } }
    c.budget -= 1;
L_00442858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442860u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 319u, depth + 1u); else { c.pc = 0x00442AA8u; return; } if (c.pc != 0x00442860u) [[unlikely]] return; }
L_00442860:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_004428A8; }
    set32(c.r[16], c.r[20].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442884u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 319u, depth + 1u); else { c.pc = 0x00442AA8u; return; } if (c.pc != 0x00442884u) [[unlikely]] return; }
L_00442884:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_004428A8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004428A0u); c.r[5].d[0] = c.r[5].d[0] | 1035ull;  if (depth < kMaxDepth) unit_00D1(c, 19u, depth + 1u); else { c.pc = 0x00444148u; return; } if (c.pc != 0x004428A0u) [[unlikely]] return; }
L_004428A0:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_004428A8:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 32u)));  goto L_004428D8; }
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[19].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 36u)));  goto L_004428C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004428C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 311u, depth + 1u); else { c.pc = 0x00442920u; return; } if (c.pc != 0x004428C0u) [[unlikely]] return; }
L_004428C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_004428C4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);  if (t) { goto L_004428E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_004428E4; } }
    c.budget -= 1;
L_004428D8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);  if (t) { goto L_004428E4; } }
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 1;
L_004428E4:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[22].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 3;
L_004428F0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004428F4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00442920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 24u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442948u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_00D0(c, 313u, depth + 1u); else { c.pc = 0x004429B0u; return; } if (c.pc != 0x00442948u) [[unlikely]] return; }
L_00442948:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 16u)));  goto L_00442974; }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004429A0; }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 1;
L_00442974:
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_00442998; }
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004429A0; }
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_00442998:
    st32((c.r[16].w[0]), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_004429A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004429B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004429E8u); c.r[19].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004429E8u) [[unlikely]] return; }
L_004429E8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00442A0Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00442A0Cu) [[unlikely]] return; }
L_00442A0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00442A60; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00442A3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00442A3Cu) [[unlikely]] return; }
L_00442A3C:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00442A54u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00442A54u) [[unlikely]] return; }
L_00442A54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { goto L_00442A6C; } }
    c.budget -= 1;
L_00442A60:
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
L_00442A6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00442A80u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00442A80u) [[unlikely]] return; }
L_00442A80:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00442AA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00442AD0u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00442AD0u) [[unlikely]] return; }
L_00442AD0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00442AE8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00442AE8u) [[unlikely]] return; }
L_00442AE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00442B00:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 4920u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442B40u); c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 37u, depth + 1u); else { c.pc = 0x00444340u; return; } if (c.pc != 0x00442B40u) [[unlikely]] return; }
L_00442B40:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442B58u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D1(c, 38u, depth + 1u); else { c.pc = 0x00444358u; return; } if (c.pc != 0x00442B58u) [[unlikely]] return; }
L_00442B58:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00442B70:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442BB0u); set32(c.r[16], c.r[16].w[0] + 4920u);  if (depth < kMaxDepth) unit_00D1(c, 37u, depth + 1u); else { c.pc = 0x00444340u; return; } if (c.pc != 0x00442BB0u) [[unlikely]] return; }
L_00442BB0:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442BC0u); st32((c.r[16].w[0]), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00D1(c, 38u, depth + 1u); else { c.pc = 0x00444358u; return; } if (c.pc != 0x00442BC0u) [[unlikely]] return; }
L_00442BC0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00442BD8:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4908u)));  c.pc = t; return; }
L_00442BF8:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4932u)));  c.pc = t; return; }
L_00442C18:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442C50u); set32(c.r[16], c.r[3].w[0] + 4896u);  if (depth < kMaxDepth) unit_00D1(c, 37u, depth + 1u); else { c.pc = 0x00444340u; return; } if (c.pc != 0x00442C50u) [[unlikely]] return; }
L_00442C50:
    set32(c.r[17], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[18], ld32((c.r[16].w[0] + 36u)));  if (t) { goto L_00442C80; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_00442C84; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00442C7Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00442C7Cu) [[unlikely]] return; }
L_00442C7C:
    set32(c.r[17], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00442C80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 1;
L_00442C84:
    c.r[3].d[0] = c.r[17].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442C98u); if (c.r[3].d[0] != 0) c.r[17].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_00D1(c, 38u, depth + 1u); else { c.pc = 0x00444358u; return; } if (c.pc != 0x00442C98u) [[unlikely]] return; }
L_00442C98:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00442CB8:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + 4880u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st32((c.r[6].w[0]), 0u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] | 1025ull;  if (t) { goto L_00442D00; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_00442D00:
    set32(c.r[3], ld32((c.r[7].w[0] + 20u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00442D18:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4896u);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);  if (t) { goto L_00442D44; } }
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 1;
L_00442D44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00442D50:
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 2;
L_00442D58:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[9], c.r[4].w[0] + 4880u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[9].w[0] + 4u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], 0u + 11u);  if (t) { goto L_00442DA8; } }
    set32(c.r[5], ld32((c.r[9].w[0] + 76u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D4(c, 258u, depth); }
L_00442DA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00442DB8:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[9], c.r[16].w[0] + 4880u);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + c.r[2].w[0]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[9].w[0] + 4u)));
    set32(c.r[6], 0u + 12u);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00442E0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442E08u); set32(c.r[5], ld32((c.r[9].w[0] + 76u)));  if (depth < kMaxDepth) unit_00D4(c, 258u, depth + 1u); else { c.pc = 0x00452678u; return; } if (c.pc != 0x00442E08u) [[unlikely]] return; }
L_00442E08:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00442E0C:
    set32(c.r[3], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00442E28:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4888u), c.r[6].w[0]);  c.pc = t; return; }
L_00442E48:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4888u)));  c.pc = t; return; }
L_00442E68:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4892u), c.r[6].w[0]);  c.pc = t; return; }
L_00442E88:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4892u)));  c.pc = t; return; }
L_00442EA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442EB8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 300u, depth + 1u); else { c.pc = 0x004426E0u; return; } if (c.pc != 0x00442EB8u) [[unlikely]] return; }
L_00442EB8:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00442ED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442EF4u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 360u, depth + 1u); else { c.pc = 0x00443018u; return; } if (c.pc != 0x00442EF4u) [[unlikely]] return; }
L_00442EF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_00442F28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442F0Cu);  if (depth < kMaxDepth) unit_00C9(c, 153u, depth + 1u); else { c.pc = 0x004258E8u; return; } if (c.pc != 0x00442F0Cu) [[unlikely]] return; }
L_00442F0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442F20u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C9(c, 153u, depth + 1u); else { c.pc = 0x004258E8u; return; } if (c.pc != 0x00442F20u) [[unlikely]] return; }
L_00442F20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_00442F70; } }
L_00442F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442F30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 363u, depth + 1u); else { c.pc = 0x00443050u; return; } if (c.pc != 0x00442F30u) [[unlikely]] return; }
L_00442F30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00442F68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442F40u);  if (depth < kMaxDepth) unit_00C9(c, 87u, depth + 1u); else { c.pc = 0x00424D08u; return; } if (c.pc != 0x00442F40u) [[unlikely]] return; }
L_00442F40:
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00442F58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00442F58u) [[unlikely]] return; }
L_00442F58:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_00442F70; } }
L_00442F68:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[18].w[0]), 0u);
    c.budget -= 2;
L_00442F70:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00442F88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442FA4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00C9(c, 104u, depth + 1u); else { c.pc = 0x00424E78u; return; } if (c.pc != 0x00442FA4u) [[unlikely]] return; }
L_00442FA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00442FB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00442FB8u) [[unlikely]] return; }
L_00442FB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[3].w[0] + 29232u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00442FD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00442FD0u) [[unlikely]] return; }
L_00442FD0:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442FDCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 36u, depth + 1u); else { c.pc = 0x00424468u; return; } if (c.pc != 0x00442FDCu) [[unlikely]] return; }
L_00442FDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00442FF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00442FF0u) [[unlikely]] return; }
L_00442FF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[3].w[0] + 29236u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00443008u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00443008u) [[unlikely]] return; }
L_00443008:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00443018:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
L_00443024:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00443030u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00443030u) [[unlikely]] return; }
L_00443030:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 29232u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00443050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00443068u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00443068u) [[unlikely]] return; }
L_00443068:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 29236u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00443088:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];  c.pc = t; return; }
L_004430C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004430D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x004430D4u) [[unlikely]] return; }
L_004430D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 353ull;  if (t) { goto L_00443100; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_00443100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443108u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_00D4(c, 27u, depth + 1u); else { c.pc = 0x00450418u; return; } if (c.pc != 0x00443108u) [[unlikely]] return; }
L_00443108:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00443120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443130u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00443130u) [[unlikely]] return; }
L_00443130:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00443140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 49u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443158u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00443158u) [[unlikely]] return; }
L_00443158:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 56u);  if (t) { goto L_00443174; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044316Cu);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044316Cu) [[unlikely]] return; }
L_0044316C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0044317C; } }
L_00443174:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0044317C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00443188:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 49u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004431A0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x004431A0u) [[unlikely]] return; }
L_004431A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 57u);  if (t) { goto L_004431BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004431B4u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x004431B4u) [[unlikely]] return; }
L_004431B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004431C4; } }
L_004431BC:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004431C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004431D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[16], c.r[18].w[0] + 3376u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004431F8u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 37u, depth + 1u); else { c.pc = 0x00444340u; return; } if (c.pc != 0x004431F8u) [[unlikely]] return; }
L_004431F8:
    set32(c.r[6], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 360u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 356u), c.r[6].w[0]);
    set32(c.r[7], c.r[3].w[0] + 31u);
    c.r[5].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[7].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 3740u), c.r[6].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443240u); st32((c.r[16].w[0] + 360u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00D1(c, 38u, depth + 1u); else { c.pc = 0x00444358u; return; } if (c.pc != 0x00443240u) [[unlikely]] return; }
L_00443240:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00443258:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[16], c.r[17].w[0] + 3376u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443290u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 37u, depth + 1u); else { c.pc = 0x00444340u; return; } if (c.pc != 0x00443290u) [[unlikely]] return; }
L_00443290:
    set32(c.r[7], ld32((c.r[16].w[0] + 500u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 504u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[7].w[0] + 31u);
    c.r[5].d[0] = c.r[7].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    c.r[3].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_004432E4; } }
    set32(c.r[2], c.r[2].w[0] << 5);
    st32((c.r[16].w[0] + 492u), c.r[18].w[0]);
    set32(c.r[2], c.r[7].w[0] - c.r[2].w[0]);
    set32(c.r[20], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 3884u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 500u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 500u), c.r[3].w[0]);
    c.budget -= 10;
L_004432E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004432ECu);  if (depth < kMaxDepth) unit_00D1(c, 38u, depth + 1u); else { c.pc = 0x00444358u; return; } if (c.pc != 0x004432ECu) [[unlikely]] return; }
L_004432EC:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00443310:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[16], c.r[18].w[0] + 3376u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443344u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 37u, depth + 1u); else { c.pc = 0x00444340u; return; } if (c.pc != 0x00443344u) [[unlikely]] return; }
L_00443344:
    set32(c.r[3], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 500u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00443368; } }
    set32(c.r[2], 0u - 1u);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_004433B0; } }
L_00443368:
    set32(c.r[2], ld32((c.r[16].w[0] + 492u)));
    set32(c.r[20], 0u + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 504u)));
    c.r[5].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[6], c.r[3].w[0] + 31u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 3884u)));
    st32((c.r[19].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 504u), c.r[2].w[0]);
    c.budget -= 18;
L_004433B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004433B8u);  if (depth < kMaxDepth) unit_00D1(c, 38u, depth + 1u); else { c.pc = 0x00444358u; return; } if (c.pc != 0x004433B8u) [[unlikely]] return; }
L_004433B8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004433E0:
    set32(c.r[29], c.r[29].w[0] + 48u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 80u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 16;
L_00443420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00770000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 32u);
    set32(c.r[5], c.r[5].w[0] - 32048u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D4(c, 399u, depth); }
L_00443440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D4(c, 402u, depth); }
L_00443458:
    st32((c.r[4].w[0] + 144u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_00443470:
    st32((c.r[4].w[0] + 144u), 0u);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_00443480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 6u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[17], c.r[17].w[0] + 6u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0]), 0u);
    c.budget -= 17;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044351C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004434CCu);  if (depth < kMaxDepth) unit_00D0(c, 396u, depth + 1u); else { c.pc = 0x00443538u; return; } if (c.pc != 0x004434CCu) [[unlikely]] return; }
L_004434CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] - 12u);  goto L_004434EC; }
    set32(c.r[16], c.r[16].w[0] - 2u);
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004434E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 396u, depth + 1u); else { c.pc = 0x00443538u; return; } if (c.pc != 0x004434E4u) [[unlikely]] return; }
L_004434E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - 12u);  if (t) { goto L_0044351C; } }
L_004434EC:
    set32(c.r[17], c.r[17].w[0] + 12u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004434FCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 399u, depth + 1u); else { c.pc = 0x00443590u; return; } if (c.pc != 0x004434FCu) [[unlikely]] return; }
L_004434FC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0044351C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443514u);  if (depth < kMaxDepth) unit_00D0(c, 403u, depth + 1u); else { c.pc = 0x004435E8u; return; } if (c.pc != 0x00443514u) [[unlikely]] return; }
L_00443514:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0044351C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00443538:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443548u);  if (depth < kMaxDepth) unit_00D0(c, 398u, depth + 1u); else { c.pc = 0x00443560u; return; } if (c.pc != 0x00443548u) [[unlikely]] return; }
L_00443548:
    c.r[2].d[0] = c.r[2].d[0] ^ 447ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00443560:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[6].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];  c.pc = t; return; }
L_00443590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004435A4u);  if (depth < kMaxDepth) unit_00D4(c, 403u, depth + 1u); else { c.pc = 0x004539B8u; return; } if (c.pc != 0x004435A4u) [[unlikely]] return; }
L_004435A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004435D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004435BCu);  if (depth < kMaxDepth) unit_00D4(c, 420u, depth + 1u); else { c.pc = 0x00453BD0u; return; } if (c.pc != 0x004435BCu) [[unlikely]] return; }
L_004435BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004435D0u); st32((c.r[29].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00D4(c, 407u, depth + 1u); else { c.pc = 0x00453A80u; return; } if (c.pc != 0x004435D0u) [[unlikely]] return; }
L_004435D0:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_004435D4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004435E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 75u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044361Cu); set32(c.r[19], c.r[17].w[0] + 120u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044361Cu) [[unlikely]] return; }
L_0044361C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044362Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044362Cu) [[unlikely]] return; }
L_0044362C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00443644; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[16].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00443644u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00443644u) [[unlikely]] return; }
L_00443644:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044368C; } }
    c.r[2].d[0] = c.r[18].sd[0] < 2049ll ? 1ull : 0ull;
    set32(c.r[16], 0u + 2048u);
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[18].d[0];
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044366Cu); set32(c.r[4], c.r[17].w[0] + 268u);  if (depth < kMaxDepth) unit_00D5(c, 252u, depth + 1u); else { c.pc = 0x004565B0u; return; } if (c.pc != 0x0044366Cu) [[unlikely]] return; }
L_0044366C:
    st32((c.r[19].w[0] + 144u), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443678u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 423u, depth + 1u); else { c.pc = 0x00443878u; return; } if (c.pc != 0x00443678u) [[unlikely]] return; }
L_00443678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443680u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 476u, depth + 1u); else { c.pc = 0x00443E98u; return; } if (c.pc != 0x00443680u) [[unlikely]] return; }
L_00443680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443688u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 411u, depth + 1u); else { c.pc = 0x004436B0u; return; } if (c.pc != 0x00443688u) [[unlikely]] return; }
L_00443688:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0044368C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004436B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004436C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 421u, depth + 1u); else { c.pc = 0x00443828u; return; } if (c.pc != 0x004436C4u) [[unlikely]] return; }
L_004436C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 120u);  if (t) { goto L_004436E0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_004436F0; }
L_004436E0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004436F0:
    c.r[2].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 2176u);  if (t) { goto L_00443760; } }
L_00443700:
    ldl(c.r[3], (c.r[5].w[0] + 7u));
    ldr(c.r[3], (c.r[5].w[0]));
    ldl(c.r[6], (c.r[5].w[0] + 15u));
    ldr(c.r[6], (c.r[5].w[0] + 8u));
    ldl(c.r[7], (c.r[5].w[0] + 23u));
    ldr(c.r[7], (c.r[5].w[0] + 16u));
    ldl(c.r[8], (c.r[5].w[0] + 31u));
    ldr(c.r[8], (c.r[5].w[0] + 24u));
    sdl(c.r[3], (c.r[4].w[0] + 7u));
    sdr(c.r[3], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    sdl(c.r[7], (c.r[4].w[0] + 23u));
    sdr(c.r[7], (c.r[4].w[0] + 16u));
    sdl(c.r[8], (c.r[4].w[0] + 31u));
    sdr(c.r[8], (c.r[4].w[0] + 24u));
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00443700u | kUnwind; return; } goto L_00443700; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00443794; } }
    c.budget -= 1;
L_00443760:
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.r[6].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[7].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[5].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[3].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[7].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00443760u | kUnwind; return; } goto L_00443760; } }
L_00443794:
    ldl(c.r[2], (c.r[5].w[0] + 7u));
    ldr(c.r[2], (c.r[5].w[0]));
    ldl(c.r[3], (c.r[5].w[0] + 15u));
    ldr(c.r[3], (c.r[5].w[0] + 8u));
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    sdl(c.r[2], (c.r[4].w[0] + 7u));
    sdr(c.r[2], (c.r[4].w[0]));
    sdl(c.r[3], (c.r[4].w[0] + 15u));
    sdr(c.r[3], (c.r[4].w[0] + 8u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[6].w[0]);  c.pc = t; return; }
L_004437C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004437DCu); set32(c.r[16], c.r[17].w[0] + 120u);  if (depth < kMaxDepth) unit_00D0(c, 421u, depth + 1u); else { c.pc = 0x00443828u; return; } if (c.pc != 0x004437DCu) [[unlikely]] return; }
L_004437DC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00443810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004437F0u);  if (depth < kMaxDepth) unit_00D0(c, 413u, depth + 1u); else { c.pc = 0x004436F0u; return; } if (c.pc != 0x004437F0u) [[unlikely]] return; }
L_004437F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004437F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 423u, depth + 1u); else { c.pc = 0x00443878u; return; } if (c.pc != 0x004437F8u) [[unlikely]] return; }
L_004437F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00443E98; }
L_00443810:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 2;
L_00443818:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00443828:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 14000u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00443864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044384Cu);  if (depth < kMaxDepth) unit_00D1(c, 266u, depth + 1u); else { c.pc = 0x00446448u; return; } if (c.pc != 0x0044384Cu) [[unlikely]] return; }
L_0044384C:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 14000u)));  goto L_00443860; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00443864; } }
    c.budget -= 1;
L_00443860:
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00443864:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00443878:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[4], c.r[16].w[0] + 148u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443898u); set32(c.r[5], ld32((c.r[16].w[0] + 144u)));  if (depth < kMaxDepth) unit_00D4(c, 403u, depth + 1u); else { c.pc = 0x004539B8u; return; } if (c.pc != 0x00443898u) [[unlikely]] return; }
L_00443898:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004438C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004438B0u);  if (depth < kMaxDepth) unit_00D0(c, 426u, depth + 1u); else { c.pc = 0x004438E0u; return; } if (c.pc != 0x004438B0u) [[unlikely]] return; }
L_004438B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00D4(c, 407u, depth); }
L_004438C8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004438E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443904u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 420u, depth + 1u); else { c.pc = 0x00453BD0u; return; } if (c.pc != 0x00443904u) [[unlikely]] return; }
L_00443904:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[5], c.r[29].w[0] + 4u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 8u);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0]), c.r[3].w[0]);  if (t) { goto L_00443A20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443928u);  if (depth < kMaxDepth) unit_00D4(c, 438u, depth + 1u); else { c.pc = 0x00453EE0u; return; } if (c.pc != 0x00443928u) [[unlikely]] return; }
L_00443928:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_0044393C; } }
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
L_0044393C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 12u);
    set32(c.r[16], c.r[2].w[0] << 1);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] << 2);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044396Cu); set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00D5(c, 23u, depth + 1u); else { c.pc = 0x00454320u; return; } if (c.pc != 0x0044396Cu) [[unlikely]] return; }
L_0044396C:
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    c.r[16].d[0] = c.r[16].sd[0] < 110ll ? 1ull : 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    set32(c.r[2], 0u - c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00443990; } }
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_00443990:
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044399Cu); st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D0(c, 438u, depth + 1u); else { c.pc = 0x00443A38u; return; } if (c.pc != 0x0044399Cu) [[unlikely]] return; }
L_0044399C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004439A8u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_00D0(c, 443u, depth + 1u); else { c.pc = 0x00443AC8u; return; } if (c.pc != 0x004439A8u) [[unlikely]] return; }
L_004439A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 189u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004439B8u); set32(c.r[6], 0u + 189u);  if (depth < kMaxDepth) unit_00D0(c, 451u, depth + 1u); else { c.pc = 0x00443B80u; return; } if (c.pc != 0x004439B8u) [[unlikely]] return; }
L_004439B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[5], 0u + 191u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004439CCu); set32(c.r[6], 0u + 191u);  if (depth < kMaxDepth) unit_00D0(c, 451u, depth + 1u); else { c.pc = 0x00443B80u; return; } if (c.pc != 0x004439CCu) [[unlikely]] return; }
L_004439CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[5], 0u + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004439E0u); set32(c.r[6], 0u + 223u);  if (depth < kMaxDepth) unit_00D0(c, 451u, depth + 1u); else { c.pc = 0x00443B80u; return; } if (c.pc != 0x004439E0u) [[unlikely]] return; }
L_004439E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[5], 0u + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004439F4u); set32(c.r[6], 0u + 239u);  if (depth < kMaxDepth) unit_00D0(c, 451u, depth + 1u); else { c.pc = 0x00443B80u; return; } if (c.pc != 0x004439F4u) [[unlikely]] return; }
L_004439F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[6], c.r[17].w[0] + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443A08u); set32(c.r[5], ld32((c.r[17].w[0] + 68u)));  if (depth < kMaxDepth) unit_00D0(c, 454u, depth + 1u); else { c.pc = 0x00443BF8u; return; } if (c.pc != 0x00443A08u) [[unlikely]] return; }
L_00443A08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443A18u); set32(c.r[6], c.r[17].w[0] + 92u);  if (depth < kMaxDepth) unit_00D0(c, 459u, depth + 1u); else { c.pc = 0x00443C90u; return; } if (c.pc != 0x00443A18u) [[unlikely]] return; }
L_00443A18:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00443A20:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00443A38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 16312u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443A5Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 472u, depth + 1u); else { c.pc = 0x00443E28u; return; } if (c.pc != 0x00443A5Cu) [[unlikely]] return; }
L_00443A5C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 16392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443A70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 472u, depth + 1u); else { c.pc = 0x00443E28u; return; } if (c.pc != 0x00443A70u) [[unlikely]] return; }
L_00443A70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 16472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443A84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 472u, depth + 1u); else { c.pc = 0x00443E28u; return; } if (c.pc != 0x00443A84u) [[unlikely]] return; }
L_00443A84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16552u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00443AA4; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_00443AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443AACu);  if (depth < kMaxDepth) unit_00D0(c, 472u, depth + 1u); else { c.pc = 0x00443E28u; return; } if (c.pc != 0x00443AACu) [[unlikely]] return; }
L_00443AAC:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00443AC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 16864u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443AECu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 472u, depth + 1u); else { c.pc = 0x00443E28u; return; } if (c.pc != 0x00443AECu) [[unlikely]] return; }
L_00443AEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443B00u); set32(c.r[5], c.r[5].w[0] + 16944u);  if (depth < kMaxDepth) unit_00D0(c, 472u, depth + 1u); else { c.pc = 0x00443E28u; return; } if (c.pc != 0x00443B00u) [[unlikely]] return; }
L_00443B00:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443B14u); set32(c.r[5], c.r[5].w[0] + 17024u);  if (depth < kMaxDepth) unit_00D0(c, 472u, depth + 1u); else { c.pc = 0x00443E28u; return; } if (c.pc != 0x00443B14u) [[unlikely]] return; }
L_00443B14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443B28u); set32(c.r[5], c.r[5].w[0] + 17104u);  if (depth < kMaxDepth) unit_00D0(c, 472u, depth + 1u); else { c.pc = 0x00443E28u; return; } if (c.pc != 0x00443B28u) [[unlikely]] return; }
L_00443B28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443B3Cu); set32(c.r[5], c.r[5].w[0] + 17288u);  if (depth < kMaxDepth) unit_00D0(c, 472u, depth + 1u); else { c.pc = 0x00443E28u; return; } if (c.pc != 0x00443B3Cu) [[unlikely]] return; }
L_00443B3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443B50u); set32(c.r[5], c.r[5].w[0] + 17368u);  if (depth < kMaxDepth) unit_00D0(c, 472u, depth + 1u); else { c.pc = 0x00443E28u; return; } if (c.pc != 0x00443B50u) [[unlikely]] return; }
L_00443B50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443B64u); set32(c.r[5], c.r[5].w[0] + 17448u);  if (depth < kMaxDepth) unit_00D0(c, 472u, depth + 1u); else { c.pc = 0x00443E28u; return; } if (c.pc != 0x00443B64u) [[unlikely]] return; }
L_00443B64:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00443B80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00443BDC; } }
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 2;
L_00443BB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443BBCu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 424u, depth + 1u); else { c.pc = 0x00453CC0u; return; } if (c.pc != 0x00443BBCu) [[unlikely]] return; }
L_00443BBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_00443BCC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00443BE0; } }
L_00443BCC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00443BB0u | kUnwind; return; } goto L_00443BB0; } }
L_00443BDC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00443BE0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00443BF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_00443C74; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443C28u); set32(c.r[6], c.r[6].w[0] + 17648u);  if (depth < kMaxDepth) unit_00D0(c, 474u, depth + 1u); else { c.pc = 0x00443E60u; return; } if (c.pc != 0x00443C28u) [[unlikely]] return; }
L_00443C28:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 17760u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443C40u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 474u, depth + 1u); else { c.pc = 0x00443E60u; return; } if (c.pc != 0x00443C40u) [[unlikely]] return; }
L_00443C40:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 17888u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443C58u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 474u, depth + 1u); else { c.pc = 0x00443E60u; return; } if (c.pc != 0x00443C58u) [[unlikely]] return; }
L_00443C58:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443C70u); set32(c.r[6], c.r[6].w[0] + 18000u);  if (depth < kMaxDepth) unit_00D0(c, 474u, depth + 1u); else { c.pc = 0x00443E60u; return; } if (c.pc != 0x00443C70u) [[unlikely]] return; }
L_00443C70:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_00443C74:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00443C90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 18112u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 8u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    set32(c.r[20], c.r[16].w[0] + 12u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[18].d[0] & 255ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443CD4u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 474u, depth + 1u); else { c.pc = 0x00443E60u; return; } if (c.pc != 0x00443CD4u) [[unlikely]] return; }
L_00443CD4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 18224u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443CECu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 474u, depth + 1u); else { c.pc = 0x00443E60u; return; } if (c.pc != 0x00443CECu) [[unlikely]] return; }
L_00443CEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443D04u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 52u, depth + 1u); else { c.pc = 0x004547A8u; return; } if (c.pc != 0x00443D04u) [[unlikely]] return; }
L_00443D04:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], c.r[6].w[0] + 18520u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00443D24; } }
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00443D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443D2Cu);  if (depth < kMaxDepth) unit_00D0(c, 474u, depth + 1u); else { c.pc = 0x00443E60u; return; } if (c.pc != 0x00443D2Cu) [[unlikely]] return; }
L_00443D2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443D40u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 427u, depth + 1u); else { c.pc = 0x00453D30u; return; } if (c.pc != 0x00443D40u) [[unlikely]] return; }
L_00443D40:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[6], c.r[6].w[0] + 18632u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00443E04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443D70u);  if (depth < kMaxDepth) unit_00D0(c, 474u, depth + 1u); else { c.pc = 0x00443E60u; return; } if (c.pc != 0x00443D70u) [[unlikely]] return; }
L_00443D70:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 18744u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443D88u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 474u, depth + 1u); else { c.pc = 0x00443E60u; return; } if (c.pc != 0x00443D88u) [[unlikely]] return; }
L_00443D88:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 18856u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443DA0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 474u, depth + 1u); else { c.pc = 0x00443E60u; return; } if (c.pc != 0x00443DA0u) [[unlikely]] return; }
L_00443DA0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 18968u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443DB8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 474u, depth + 1u); else { c.pc = 0x00443E60u; return; } if (c.pc != 0x00443DB8u) [[unlikely]] return; }
L_00443DB8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 19088u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443DD0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 474u, depth + 1u); else { c.pc = 0x00443E60u; return; } if (c.pc != 0x00443DD0u) [[unlikely]] return; }
L_00443DD0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 19200u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443DE8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 474u, depth + 1u); else { c.pc = 0x00443E60u; return; } if (c.pc != 0x00443DE8u) [[unlikely]] return; }
L_00443DE8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443E00u); set32(c.r[6], c.r[6].w[0] + 19336u);  if (depth < kMaxDepth) unit_00D0(c, 474u, depth + 1u); else { c.pc = 0x00443E60u; return; } if (c.pc != 0x00443E00u) [[unlikely]] return; }
L_00443E00:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_00443E04:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00443E28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00443E3Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00443E3Cu) [[unlikely]] return; }
L_00443E3C:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00443E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00443E78u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00443E78u) [[unlikely]] return; }
L_00443E78:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00443E98:
    set32(c.r[5], c.r[4].w[0] + 152u);
    set32(c.r[4], c.r[4].w[0] + 2316u);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), c.r[2].w[0]);  c.pc = t; return; }
L_00443EC0:
    set32(c.r[4], c.r[4].w[0] + 120u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00443EF0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
L_00443EF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00443EF8:
    set32(c.r[3], ld32((c.r[4].w[0] + 120u)));
    set32(c.r[4], c.r[4].w[0] + 212u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00443F14; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  goto L_00443F14; }
L_00443F14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00443F20:
    set32(c.r[2], c.r[2].w[0]);
    c.budget -= 2;
L_00443F28:
    c.r[2].d[0] = c.r[5].d[0] ^ 14256ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00443F38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00770000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[3].w[0] - 31532u);
    set32(c.r[2], c.r[2].w[0] - 11792u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 14256u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443F6Cu); st32((c.r[5].w[0] - 1492u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_00D1(c, 30u, depth + 1u); else { c.pc = 0x004442C8u; return; } if (c.pc != 0x00443F6Cu) [[unlikely]] return; }
L_00443F6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443F74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 486u, depth + 1u); else { c.pc = 0x00443FA0u; return; } if (c.pc != 0x00443F74u) [[unlikely]] return; }
L_00443F74:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00443F94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443F84u);  if (depth < kMaxDepth) unit_00D1(c, 32u, depth + 1u); else { c.pc = 0x004442F8u; return; } if (c.pc != 0x00443F84u) [[unlikely]] return; }
L_00443F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443F8Cu);  if (depth < kMaxDepth) unit_00D1(c, 35u, depth + 1u); else { c.pc = 0x00444330u; return; } if (c.pc != 0x00443F8Cu) [[unlikely]] return; }
L_00443F8C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00443F94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00443FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[16].w[0] - 2040u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[6], 0u + 137u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443FCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 259u, depth + 1u); else { c.pc = 0x004568A0u; return; } if (c.pc != 0x00443FCCu) [[unlikely]] return; }
L_00443FCC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], 0u + 400u);
    set32(c.r[5], c.r[5].w[0] - 11376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443FE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 252u, depth + 1u); else { c.pc = 0x004565B0u; return; } if (c.pc != 0x00443FE0u) [[unlikely]] return; }
L_00443FE0:
    ldl(c.r[2], (c.r[17].w[0] + 7u));
    ldr(c.r[2], (c.r[17].w[0]));
    sdl(c.r[2], (c.r[16].w[0] + 407u));
    sdr(c.r[2], (c.r[16].w[0] + 400u));
    st32((c.r[16].w[0] + 408u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443FFCu); set32(c.r[4], c.r[16].w[0] + 412u);  if (depth < kMaxDepth) unit_00D1(c, 17u, depth + 1u); else { c.pc = 0x00444118u; return; } if (c.pc != 0x00443FFCu) [[unlikely]] return; }
L_00443FFC:
    set32(c.r[4], c.r[16].w[0] + 432u);
    c.budget -= 1;
    [[clang::musttail]] return unit_00D1(c, 1u, depth);
}

}
