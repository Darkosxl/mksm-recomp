#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0018[4096] = {
    1, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0,
    19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0,
    0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0,
    0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 75,
    0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0,
    115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    141, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0,
    182, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203,
    0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0,
    0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0,
    0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0,
    0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 0,
    0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 272, 0, 273, 0, 274, 0, 0, 0, 275, 0, 276, 0,
    277, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0,
    292, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0,
    0, 301, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0,
    315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0,
    337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0,
    0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0,
    352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 355, 0, 0, 356, 0, 0, 357, 0, 0,
    358, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0,
    0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0,
    0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 381, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399,
    0, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 406, 0,
    0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0,
    0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0018(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00160000;
    case 2u: goto L_00160004;
    case 3u: goto L_0016001C;
    case 4u: goto L_0016007C;
    case 5u: goto L_001600A8;
    case 6u: goto L_001600B8;
    case 7u: goto L_001600D4;
    case 8u: goto L_001600DC;
    case 9u: goto L_001600F4;
    case 10u: goto L_00160120;
    case 11u: goto L_00160130;
    case 12u: goto L_00160164;
    case 13u: goto L_00160174;
    case 14u: goto L_001601A8;
    case 15u: goto L_001601BC;
    case 16u: goto L_001601D0;
    case 17u: goto L_001601E0;
    case 18u: goto L_001601F0;
    case 19u: goto L_00160200;
    case 20u: goto L_00160210;
    case 21u: goto L_00160220;
    case 22u: goto L_00160240;
    case 23u: goto L_00160250;
    case 24u: goto L_001602A0;
    case 25u: goto L_001602D0;
    case 26u: goto L_00160300;
    case 27u: goto L_00160354;
    case 28u: goto L_00160380;
    case 29u: goto L_00160390;
    case 30u: goto L_001603AC;
    case 31u: goto L_001603C8;
    case 32u: goto L_001603D8;
    case 33u: goto L_00160400;
    case 34u: goto L_00160410;
    case 35u: goto L_00160454;
    case 36u: goto L_0016049C;
    case 37u: goto L_001604AC;
    case 38u: goto L_00160508;
    case 39u: goto L_0016051C;
    case 40u: goto L_00160530;
    case 41u: goto L_00160540;
    case 42u: goto L_00160550;
    case 43u: goto L_00160578;
    case 44u: goto L_0016059C;
    case 45u: goto L_001605AC;
    case 46u: goto L_001605D4;
    case 47u: goto L_001605F0;
    case 48u: goto L_00160610;
    case 49u: goto L_0016063C;
    case 50u: goto L_00160658;
    case 51u: goto L_001606B4;
    case 52u: goto L_001606D4;
    case 53u: goto L_001606EC;
    case 54u: goto L_001606F8;
    case 55u: goto L_0016070C;
    case 56u: goto L_00160740;
    case 57u: goto L_00160754;
    case 58u: goto L_00160764;
    case 59u: goto L_00160770;
    case 60u: goto L_00160798;
    case 61u: goto L_001607C4;
    case 62u: goto L_001607D8;
    case 63u: goto L_001607E8;
    case 64u: goto L_00160804;
    case 65u: goto L_00160820;
    case 66u: goto L_00160860;
    case 67u: goto L_00160878;
    case 68u: goto L_00160948;
    case 69u: goto L_00160978;
    case 70u: goto L_00160998;
    case 71u: goto L_001609B0;
    case 72u: goto L_001609C0;
    case 73u: goto L_001609D8;
    case 74u: goto L_001609EC;
    case 75u: goto L_001609FC;
    case 76u: goto L_00160A10;
    case 77u: goto L_00160A20;
    case 78u: goto L_00160A30;
    case 79u: goto L_00160A6C;
    case 80u: goto L_00160AD0;
    case 81u: goto L_00160B0C;
    case 82u: goto L_00160B70;
    case 83u: goto L_00160B98;
    case 84u: goto L_00160BA8;
    case 85u: goto L_00160BC0;
    case 86u: goto L_00160BD0;
    case 87u: goto L_00160C28;
    case 88u: goto L_00160C40;
    case 89u: goto L_00160C4C;
    case 90u: goto L_00160C98;
    case 91u: goto L_00160CA8;
    case 92u: goto L_00160CC8;
    case 93u: goto L_00160CD4;
    case 94u: goto L_00160D08;
    case 95u: goto L_00160D30;
    case 96u: goto L_00160D40;
    case 97u: goto L_00160D50;
    case 98u: goto L_00160D60;
    case 99u: goto L_00160D94;
    case 100u: goto L_00160DC8;
    case 101u: goto L_00160E5C;
    case 102u: goto L_00160F08;
    case 103u: goto L_00160F68;
    case 104u: goto L_00160FB0;
    case 105u: goto L_00160FC8;
    case 106u: goto L_00160FE4;
    case 107u: goto L_0016101C;
    case 108u: goto L_00161030;
    case 109u: goto L_00161040;
    case 110u: goto L_00161080;
    case 111u: goto L_001610C0;
    case 112u: goto L_001610D0;
    case 113u: goto L_001610E0;
    case 114u: goto L_001610F8;
    case 115u: goto L_00161100;
    case 116u: goto L_00161110;
    case 117u: goto L_00161130;
    case 118u: goto L_00161160;
    case 119u: goto L_00161188;
    case 120u: goto L_001611C0;
    case 121u: goto L_001611F0;
    case 122u: goto L_00161210;
    case 123u: goto L_00161228;
    case 124u: goto L_00161278;
    case 125u: goto L_001612AC;
    case 126u: goto L_001612BC;
    case 127u: goto L_001612F0;
    case 128u: goto L_00161320;
    case 129u: goto L_0016132C;
    case 130u: goto L_00161350;
    case 131u: goto L_00161370;
    case 132u: goto L_00161394;
    case 133u: goto L_001613A4;
    case 134u: goto L_001613C8;
    case 135u: goto L_00161400;
    case 136u: goto L_00161408;
    case 137u: goto L_00161420;
    case 138u: goto L_00161440;
    case 139u: goto L_00161458;
    case 140u: goto L_00161470;
    case 141u: goto L_00161480;
    case 142u: goto L_00161488;
    case 143u: goto L_00161490;
    case 144u: goto L_001614B8;
    case 145u: goto L_001614D0;
    case 146u: goto L_001614E8;
    case 147u: goto L_001614F8;
    case 148u: goto L_00161520;
    case 149u: goto L_00161538;
    case 150u: goto L_00161550;
    case 151u: goto L_00161574;
    case 152u: goto L_00161584;
    case 153u: goto L_00161594;
    case 154u: goto L_001615A4;
    case 155u: goto L_001615C8;
    case 156u: goto L_001615E0;
    case 157u: goto L_001615F0;
    case 158u: goto L_001616C0;
    case 159u: goto L_001616DC;
    case 160u: goto L_00161730;
    case 161u: goto L_00161790;
    case 162u: goto L_00161818;
    case 163u: goto L_00161830;
    case 164u: goto L_00161840;
    case 165u: goto L_00161880;
    case 166u: goto L_00161890;
    case 167u: goto L_001618C0;
    case 168u: goto L_00161910;
    case 169u: goto L_00161920;
    case 170u: goto L_00161950;
    case 171u: goto L_00161970;
    case 172u: goto L_001619F0;
    case 173u: goto L_00161A1C;
    case 174u: goto L_00161A60;
    case 175u: goto L_00161A8C;
    case 176u: goto L_00161AC8;
    case 177u: goto L_00161AF0;
    case 178u: goto L_00161B08;
    case 179u: goto L_00161B2C;
    case 180u: goto L_00161B70;
    case 181u: goto L_00161BEC;
    case 182u: goto L_00161C00;
    case 183u: goto L_00161C08;
    case 184u: goto L_00161C20;
    case 185u: goto L_00161C4C;
    case 186u: goto L_00161C60;
    case 187u: goto L_00161C70;
    case 188u: goto L_00161C88;
    case 189u: goto L_00161C98;
    case 190u: goto L_00161CA4;
    case 191u: goto L_00161CB4;
    case 192u: goto L_00161CC0;
    case 193u: goto L_00161CD4;
    case 194u: goto L_00161CF0;
    case 195u: goto L_00161CF8;
    case 196u: goto L_00161D10;
    case 197u: goto L_00161D24;
    case 198u: goto L_00161D68;
    case 199u: goto L_00161D9C;
    case 200u: goto L_00161DB8;
    case 201u: goto L_00161DD4;
    case 202u: goto L_00161DE8;
    case 203u: goto L_00161DFC;
    case 204u: goto L_00161E08;
    case 205u: goto L_00161E1C;
    case 206u: goto L_00161E38;
    case 207u: goto L_00161E50;
    case 208u: goto L_00161ED0;
    case 209u: goto L_00161F10;
    case 210u: goto L_00161F44;
    case 211u: goto L_00161F5C;
    case 212u: goto L_00161F9C;
    case 213u: goto L_00161FAC;
    case 214u: goto L_00161FC0;
    case 215u: goto L_00161FC8;
    case 216u: goto L_00161FE4;
    case 217u: goto L_00161FF8;
    case 218u: goto L_0016200C;
    case 219u: goto L_0016201C;
    case 220u: goto L_0016202C;
    case 221u: goto L_00162048;
    case 222u: goto L_00162068;
    case 223u: goto L_0016207C;
    case 224u: goto L_001620B0;
    case 225u: goto L_001620C0;
    case 226u: goto L_001620E0;
    case 227u: goto L_00162100;
    case 228u: goto L_00162114;
    case 229u: goto L_00162128;
    case 230u: goto L_00162148;
    case 231u: goto L_00162168;
    case 232u: goto L_00162178;
    case 233u: goto L_00162180;
    case 234u: goto L_001621A0;
    case 235u: goto L_001621C4;
    case 236u: goto L_00162200;
    case 237u: goto L_00162220;
    case 238u: goto L_00162254;
    case 239u: goto L_00162260;
    case 240u: goto L_00162274;
    case 241u: goto L_0016228C;
    case 242u: goto L_0016229C;
    case 243u: goto L_00162360;
    case 244u: goto L_00162370;
    case 245u: goto L_00162384;
    case 246u: goto L_001623BC;
    case 247u: goto L_001623C4;
    case 248u: goto L_001623D4;
    case 249u: goto L_001623E4;
    case 250u: goto L_00162400;
    case 251u: goto L_00162450;
    case 252u: goto L_001624B8;
    case 253u: goto L_00162510;
    case 254u: goto L_00162528;
    case 255u: goto L_00162538;
    case 256u: goto L_00162558;
    case 257u: goto L_00162564;
    case 258u: goto L_00162570;
    case 259u: goto L_00162588;
    case 260u: goto L_001625B8;
    case 261u: goto L_001625C4;
    case 262u: goto L_001625E8;
    case 263u: goto L_00162608;
    case 264u: goto L_00162624;
    case 265u: goto L_00162638;
    case 266u: goto L_00162658;
    case 267u: goto L_0016266C;
    case 268u: goto L_00162680;
    case 269u: goto L_001626A0;
    case 270u: goto L_001626B8;
    case 271u: goto L_001626C0;
    case 272u: goto L_001626D0;
    case 273u: goto L_001626D8;
    case 274u: goto L_001626E0;
    case 275u: goto L_001626F0;
    case 276u: goto L_001626F8;
    case 277u: goto L_00162700;
    case 278u: goto L_00162710;
    case 279u: goto L_00162724;
    case 280u: goto L_0016273C;
    case 281u: goto L_00162760;
    case 282u: goto L_00162788;
    case 283u: goto L_001627C8;
    case 284u: goto L_001627F0;
    case 285u: goto L_00162828;
    case 286u: goto L_00162868;
    case 287u: goto L_00162880;
    case 288u: goto L_001628A0;
    case 289u: goto L_001628B8;
    case 290u: goto L_001628D4;
    case 291u: goto L_001628EC;
    case 292u: goto L_00162900;
    case 293u: goto L_0016290C;
    case 294u: goto L_00162924;
    case 295u: goto L_00162944;
    case 296u: goto L_0016295C;
    case 297u: goto L_00162978;
    case 298u: goto L_001629A8;
    case 299u: goto L_001629C0;
    case 300u: goto L_001629F8;
    case 301u: goto L_00162A04;
    case 302u: goto L_00162A08;
    case 303u: goto L_00162A20;
    case 304u: goto L_00162A58;
    case 305u: goto L_00162A8C;
    case 306u: goto L_00162AA0;
    case 307u: goto L_00162AD8;
    case 308u: goto L_00162B00;
    case 309u: goto L_00162B10;
    case 310u: goto L_00162B1C;
    case 311u: goto L_00162B2C;
    case 312u: goto L_00162B38;
    case 313u: goto L_00162B4C;
    case 314u: goto L_00162B60;
    case 315u: goto L_00162B80;
    case 316u: goto L_00162BC4;
    case 317u: goto L_00162BD0;
    case 318u: goto L_00162BE0;
    case 319u: goto L_00162C08;
    case 320u: goto L_00162C30;
    case 321u: goto L_00162C48;
    case 322u: goto L_00162C6C;
    case 323u: goto L_00162CB0;
    case 324u: goto L_00162CF0;
    case 325u: goto L_00162D00;
    case 326u: goto L_00162D14;
    case 327u: goto L_00162D4C;
    case 328u: goto L_00162D54;
    case 329u: goto L_00162D64;
    case 330u: goto L_00162D80;
    case 331u: goto L_00162E14;
    case 332u: goto L_00162E20;
    case 333u: goto L_00162E60;
    case 334u: goto L_00162EB4;
    case 335u: goto L_00162ECC;
    case 336u: goto L_00162EEC;
    case 337u: goto L_00162F00;
    case 338u: goto L_00162F0C;
    case 339u: goto L_00162F28;
    case 340u: goto L_00162F34;
    case 341u: goto L_00162F48;
    case 342u: goto L_00162F5C;
    case 343u: goto L_00162F78;
    case 344u: goto L_00162F8C;
    case 345u: goto L_00162FB0;
    case 346u: goto L_00162FC8;
    case 347u: goto L_00162FE0;
    case 348u: goto L_00163000;
    case 349u: goto L_00163020;
    case 350u: goto L_00163050;
    case 351u: goto L_0016306C;
    case 352u: goto L_00163080;
    case 353u: goto L_001630C0;
    case 354u: goto L_001630CC;
    case 355u: goto L_001630DC;
    case 356u: goto L_001630E8;
    case 357u: goto L_001630F4;
    case 358u: goto L_00163100;
    case 359u: goto L_00163104;
    case 360u: goto L_00163128;
    case 361u: goto L_0016313C;
    case 362u: goto L_0016314C;
    case 363u: goto L_00163160;
    case 364u: goto L_00163168;
    case 365u: goto L_00163188;
    case 366u: goto L_001631A0;
    case 367u: goto L_001631CC;
    case 368u: goto L_001631E0;
    case 369u: goto L_00163224;
    case 370u: goto L_00163278;
    case 371u: goto L_00163288;
    case 372u: goto L_00163298;
    case 373u: goto L_001632B0;
    case 374u: goto L_001632CC;
    case 375u: goto L_00163300;
    case 376u: goto L_00163314;
    case 377u: goto L_0016334C;
    case 378u: goto L_00163368;
    case 379u: goto L_00163390;
    case 380u: goto L_001633A0;
    case 381u: goto L_001633A8;
    case 382u: goto L_001633B0;
    case 383u: goto L_001633C0;
    case 384u: goto L_001633D8;
    case 385u: goto L_001633E8;
    case 386u: goto L_00163440;
    case 387u: goto L_0016344C;
    case 388u: goto L_00163460;
    case 389u: goto L_001634A8;
    case 390u: goto L_001634C8;
    case 391u: goto L_00163510;
    case 392u: goto L_00163530;
    case 393u: goto L_0016354C;
    case 394u: goto L_00163560;
    case 395u: goto L_00163594;
    case 396u: goto L_001635B8;
    case 397u: goto L_001635D4;
    case 398u: goto L_001635F0;
    case 399u: goto L_001635FC;
    case 400u: goto L_0016360C;
    case 401u: goto L_00163618;
    case 402u: goto L_00163624;
    case 403u: goto L_00163634;
    case 404u: goto L_00163658;
    case 405u: goto L_0016366C;
    case 406u: goto L_00163678;
    case 407u: goto L_0016368C;
    case 408u: goto L_00163694;
    case 409u: goto L_001636D0;
    case 410u: goto L_001636E8;
    case 411u: goto L_001636F8;
    case 412u: goto L_00163738;
    case 413u: goto L_00163750;
    case 414u: goto L_00163768;
    case 415u: goto L_00163780;
    case 416u: goto L_00163790;
    case 417u: goto L_001637B4;
    case 418u: goto L_001637C8;
    case 419u: goto L_00163804;
    case 420u: goto L_00163820;
    case 421u: goto L_00163838;
    case 422u: goto L_00163864;
    case 423u: goto L_001638CC;
    case 424u: goto L_001638F8;
    case 425u: goto L_0016399C;
    case 426u: goto L_001639B4;
    case 427u: goto L_001639D0;
    case 428u: goto L_00163A20;
    case 429u: goto L_00163AEC;
    case 430u: goto L_00163B20;
    case 431u: goto L_00163B78;
    case 432u: goto L_00163BD8;
    case 433u: goto L_00163BEC;
    case 434u: goto L_00163C1C;
    case 435u: goto L_00163C40;
    case 436u: goto L_00163C58;
    case 437u: goto L_00163C6C;
    case 438u: goto L_00163C84;
    case 439u: goto L_00163CB8;
    case 440u: goto L_00163D04;
    case 441u: goto L_00163D8C;
    case 442u: goto L_00163DC4;
    case 443u: goto L_00163E18;
    case 444u: goto L_00163E5C;
    case 445u: goto L_00163E94;
    case 446u: goto L_00163EE8;
    case 447u: goto L_00163F30;
    case 448u: goto L_00163F7C;
    case 449u: goto L_00163FB0;
    default: bad_entry(c, 0x00160000u); return;
    }
L_00160000:
    c.budget -= 1;
L_00160004:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[20], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[16].w[0] + 27456u);
    set32(c.r[19], c.r[17].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016001Cu);  if (depth < kMaxDepth) unit_0018(c, 80u, depth + 1u); else { c.pc = 0x00160AD0u; return; } if (c.pc != 0x0016001Cu) [[unlikely]] return; }
L_0016001C:
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    c.f[3] = 0u;
    c.f[2] = c.f[0];
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[3]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00160100; } }
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00160084; } }
    c.f[12] = c.f[12] ^ fp::kSign;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016007Cu);  if (depth < kMaxDepth) unit_008A(c, 240u, depth + 1u); else { c.pc = 0x0032B120u; return; } if (c.pc != 0x0016007Cu) [[unlikely]] return; }
L_0016007C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001600A8; } }
L_00160084:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001600A8; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001600A8u);  if (depth < kMaxDepth) unit_008A(c, 240u, depth + 1u); else { c.pc = 0x0032B120u; return; } if (c.pc != 0x001600A8u) [[unlikely]] return; }
L_001600A8:
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001600B8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001600B8u) [[unlikely]] return; }
L_001600B8:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001600D4u);  if (depth < kMaxDepth) unit_0018(c, 50u, depth + 1u); else { c.pc = 0x00160658u; return; } if (c.pc != 0x001600D4u) [[unlikely]] return; }
L_001600D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00160100; } }
L_001600DC:
    c.f[12] = 0u;
    set32(c.r[4], c.r[17].w[0] + 40u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001600F4u);  if (depth < kMaxDepth) unit_0017(c, 374u, depth + 1u); else { c.pc = 0x0015F280u; return; } if (c.pc != 0x001600F4u) [[unlikely]] return; }
L_001600F4:
    set32(c.r[16], c.r[17].w[0] + 4u);
    set32(c.r[21], c.r[29].w[0] + 64u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
L_00160100:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 20u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160120u);  if (depth < kMaxDepth) unit_0018(c, 50u, depth + 1u); else { c.pc = 0x00160658u; return; } if (c.pc != 0x00160120u) [[unlikely]] return; }
L_00160120:
    c.f[21] = 0u;
    set32(c.r[4], c.r[22].w[0] + 27456u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160130u);  if (depth < kMaxDepth) unit_0018(c, 78u, depth + 1u); else { c.pc = 0x00160A30u; return; } if (c.pc != 0x00160130u) [[unlikely]] return; }
L_00160130:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.f[20] = c.f[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00160144; } }
    c.f[20] = c.f[20] ^ fp::kSign;
    c.budget -= 1;
L_00160144:
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001601F0; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160164u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00160164u) [[unlikely]] return; }
L_00160164:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160174u);  if (depth < kMaxDepth) unit_0045(c, 16u, depth + 1u); else { c.pc = 0x00214208u; return; } if (c.pc != 0x00160174u) [[unlikely]] return; }
L_00160174:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[20]));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0016019C; } }
    c.f[20] = c.f[20] ^ fp::kSign;
    c.budget -= 1;
L_0016019C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001601A8u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001601A8u) [[unlikely]] return; }
L_001601A8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001601BCu);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x001601BCu) [[unlikely]] return; }
L_001601BC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001601D0u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x001601D0u) [[unlikely]] return; }
L_001601D0:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001601E0u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x001601E0u) [[unlikely]] return; }
L_001601E0:
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001601F0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001601F0u) [[unlikely]] return; }
L_001601F0:
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160200u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00160200u) [[unlikely]] return; }
L_00160200:
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[18].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160210u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00160210u) [[unlikely]] return; }
L_00160210:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160220u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00160220u) [[unlikely]] return; }
L_00160220:
    set32(c.r[3], ld32((c.r[18].w[0] + 724u)));
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00160240u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00160240u) [[unlikely]] return; }
L_00160240:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160250u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00160250u) [[unlikely]] return; }
L_00160250:
    set32(c.r[2], ld32((c.r[18].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00160260; } }
    st32((c.r[18].w[0] + 500u), 0u);
    c.budget -= 1;
L_00160260:
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[21] = ld32((c.r[29].w[0] + 344u));
    c.f[20] = ld32((c.r[29].w[0] + 336u));
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001602A0:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001602C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001602C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C8E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 64053ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[2].w[0] - 13152u), c.f[0]);
    c.budget -= 5;
L_001602C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001602D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 27456u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160300u);  if (depth < kMaxDepth) unit_0018(c, 80u, depth + 1u); else { c.pc = 0x00160AD0u; return; } if (c.pc != 0x00160300u) [[unlikely]] return; }
L_00160300:
    c.f[3] = 0u;
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001603AC; } }
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0016035C; } }
    c.f[12] = c.f[12] ^ fp::kSign;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160354u);  if (depth < kMaxDepth) unit_008A(c, 240u, depth + 1u); else { c.pc = 0x0032B120u; return; } if (c.pc != 0x00160354u) [[unlikely]] return; }
L_00160354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00160380; } }
L_0016035C:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00160380; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160380u);  if (depth < kMaxDepth) unit_008A(c, 240u, depth + 1u); else { c.pc = 0x0032B120u; return; } if (c.pc != 0x00160380u) [[unlikely]] return; }
L_00160380:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160390u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00160390u) [[unlikely]] return; }
L_00160390:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001603ACu);  if (depth < kMaxDepth) unit_0018(c, 50u, depth + 1u); else { c.pc = 0x00160658u; return; } if (c.pc != 0x001603ACu) [[unlikely]] return; }
L_001603AC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001603C8:
    set32(c.r[2], c.r[4].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001603D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4960000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + 21048u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160400:
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160410:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 160u), c.f[22]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 144u), c.f[20]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 152u), c.f[21]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 27456u);
    c.f[22] = 0u;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160454u);  if (depth < kMaxDepth) unit_0018(c, 78u, depth + 1u); else { c.pc = 0x00160A30u; return; } if (c.pc != 0x00160454u) [[unlikely]] return; }
L_00160454:
    c.f[21] = c.f[0];
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[22]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0016046C; } }
    c.f[21] = c.f[20];
    c.budget -= 1;
L_0016046C:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016047C; } }
    c.f[21] = c.f[21] ^ fp::kSign;
    c.budget -= 1;
L_0016047C:
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00160550; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016049Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0016049Cu) [[unlikely]] return; }
L_0016049C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001604ACu);  if (depth < kMaxDepth) unit_0045(c, 16u, depth + 1u); else { c.pc = 0x00214208u; return; } if (c.pc != 0x001604ACu) [[unlikely]] return; }
L_001604AC:
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[22]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001604E4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 5;
L_001604E4:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001604F8; } }
    c.f[20] = c.f[20] ^ fp::kSign;
    c.budget -= 1;
L_001604F8:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160508u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x00160508u) [[unlikely]] return; }
L_00160508:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016051Cu);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x0016051Cu) [[unlikely]] return; }
L_0016051C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160530u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x00160530u) [[unlikely]] return; }
L_00160530:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160540u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x00160540u) [[unlikely]] return; }
L_00160540:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160550u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00160550u) [[unlikely]] return; }
L_00160550:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[22] = ld32((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 152u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160578:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016059Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0016059Cu) [[unlikely]] return; }
L_0016059C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001605ACu);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x001605ACu) [[unlikely]] return; }
L_001605AC:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[0], c.f[12]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001605D4u);  if (depth < kMaxDepth) unit_008A(c, 240u, depth + 1u); else { c.pc = 0x0032B120u; return; } if (c.pc != 0x001605D4u) [[unlikely]] return; }
L_001605D4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001605F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160610u);  if (depth < kMaxDepth) unit_0017(c, 372u, depth + 1u); else { c.pc = 0x0015F138u; return; } if (c.pc != 0x00160610u) [[unlikely]] return; }
L_00160610:
    set32(c.r[2], c.r[2].w[0] + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[7], ld32((c.r[2].w[0] + 12u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016063Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016063Cu) [[unlikely]] return; }
L_0016063C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160658:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[20].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 152u), c.f[21]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.f[21] = c.f[12];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.f[22]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 144u), c.f[20]);
    st32((c.r[29].w[0] + 168u), c.f[23]);
    c.f[23] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001606B4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001606B4u) [[unlikely]] return; }
L_001606B4:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001606C4; } }
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_001606C4:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001606D4u);  if (depth < kMaxDepth) unit_0045(c, 16u, depth + 1u); else { c.pc = 0x00214208u; return; } if (c.pc != 0x001606D4u) [[unlikely]] return; }
L_001606D4:
    c.f[22] = 0u;
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001606ECu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001606ECu) [[unlikely]] return; }
L_001606EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001606F8u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x001606F8u) [[unlikely]] return; }
L_001606F8:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016070Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0016070Cu) [[unlikely]] return; }
L_0016070C:
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[22]));
    c.f[12] = ld32((c.r[19].w[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00160720; } }
    c.f[12] = c.f[21];
    c.budget -= 1;
L_00160720:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[12]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001607A0; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160740u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00160740u) [[unlikely]] return; }
L_00160740:
    set32(c.r[20], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160754u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00160754u) [[unlikely]] return; }
L_00160754:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160764u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x00160764u) [[unlikely]] return; }
L_00160764:
    st32((c.r[17].w[0] + 4u), c.f[23]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160770u);  if (depth < kMaxDepth) unit_0017(c, 372u, depth + 1u); else { c.pc = 0x0015F138u; return; } if (c.pc != 0x00160770u) [[unlikely]] return; }
L_00160770:
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.f[12] = c.f[22];
    set32(c.r[7], ld32((c.r[2].w[0] + 12u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00160798u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00160798u) [[unlikely]] return; }
L_00160798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001607E8; } }
L_001607A0:
    c.f[12] = ld32((c.r[19].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001607E8; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001607C4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001607C4u) [[unlikely]] return; }
L_001607C4:
    set32(c.r[20], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001607D8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001607D8u) [[unlikely]] return; }
L_001607D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001607E8u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x001607E8u) [[unlikely]] return; }
L_001607E8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001607FC; } }
    st32((c.r[17].w[0] + 4u), c.f[23]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00160820; } }
L_001607FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160804u);  if (depth < kMaxDepth) unit_0017(c, 372u, depth + 1u); else { c.pc = 0x0015F138u; return; } if (c.pc != 0x00160804u) [[unlikely]] return; }
L_00160804:
    c.f[12] = ld32((c.r[19].w[0]));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160820u);  if (depth < kMaxDepth) unit_0018(c, 50u, depth + 1u); else { c.pc = 0x00160658u; return; } if (c.pc != 0x00160820u) [[unlikely]] return; }
L_00160820:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[23] = ld32((c.r[29].w[0] + 168u));
    c.f[22] = ld32((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 152u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160878u);  if (depth < kMaxDepth) unit_009A(c, 308u, depth + 1u); else { c.pc = 0x0036BE78u; return; } if (c.pc != 0x00160878u) [[unlikely]] return; }
L_00160878:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[5] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[8] = c.r[1].w[0];
    set32(c.r[3], c.r[3].w[0] + 20752u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46FC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 31283ull;
    c.f[7] = c.r[1].w[0];
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x430D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 36897ull;
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 54991ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.r[1].d[0] = c.r[1].d[0] | 42179ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    st32((c.r[16].w[0] + 724u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 508u), c.f[0]);
    st32((c.r[16].w[0] + 512u), c.f[5]);
    st32((c.r[16].w[0] + 520u), c.f[1]);
    st32((c.r[16].w[0] + 548u), c.f[8]);
    st32((c.r[16].w[0] + 324u), c.f[2]);
    st32((c.r[16].w[0] + 736u), c.f[7]);
    st32((c.r[16].w[0] + 740u), c.f[3]);
    st32((c.r[16].w[0] + 744u), c.f[6]);
    st32((c.r[16].w[0] + 760u), c.f[4]);
    st32((c.r[16].w[0] + 504u), c.f[5]);
    st32((c.r[16].w[0] + 516u), 0u);
    st32((c.r[16].w[0] + 524u), 0u);
    st32((c.r[16].w[0] + 528u), 0u);
    st32((c.r[16].w[0] + 532u), 0u);
    st32((c.r[16].w[0] + 536u), 0u);
    st32((c.r[16].w[0] + 540u), c.f[8]);
    st32((c.r[16].w[0] + 320u), c.f[7]);
    st32((c.r[16].w[0] + 328u), c.f[6]);
    st32((c.r[16].w[0] + 752u), 0u);
    st32((c.r[16].w[0] + 756u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 51;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160948:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 20752u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 724u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160978u);  if (depth < kMaxDepth) unit_009B(c, 233u, depth + 1u); else { c.pc = 0x0036D470u; return; } if (c.pc != 0x00160978u) [[unlikely]] return; }
L_00160978:
    c.r[16].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00160998; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160998u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00160998u) [[unlikely]] return; }
L_00160998:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001609B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001609C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001609D8u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x001609D8u) [[unlikely]] return; }
L_001609D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001609ECu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x001609ECu) [[unlikely]] return; }
L_001609EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001609FCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001609FCu) [[unlikely]] return; }
L_001609FC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160A10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160A20u);  if (depth < kMaxDepth) unit_009B(c, 250u, depth + 1u); else { c.pc = 0x0036D5A0u; return; } if (c.pc != 0x00160A20u) [[unlikely]] return; }
L_00160A20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 11120u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00160A54; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00160ABC; } }
L_00160A54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160A6Cu);  if (depth < kMaxDepth) unit_0071(c, 315u, depth + 1u); else { c.pc = 0x002C7578u; return; } if (c.pc != 0x00160A6Cu) [[unlikely]] return; }
L_00160A6C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 2u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[1] = c.r[1].w[0];
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[0] = c.f[3] & fp::kAbs;
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00160AAC; } }
    c.f[3] = 0u;
    c.budget -= 1;
L_00160AAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C000000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.budget -= 4;
L_00160ABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 11120u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00160AF4; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00160B5C; } }
L_00160AF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160B0Cu);  if (depth < kMaxDepth) unit_0071(c, 315u, depth + 1u); else { c.pc = 0x002C7578u; return; } if (c.pc != 0x00160B0Cu) [[unlikely]] return; }
L_00160B0C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 3u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[1] = c.r[1].w[0];
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[0] = c.f[3] & fp::kAbs;
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00160B4C; } }
    c.f[3] = 0u;
    c.budget -= 1;
L_00160B4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C000000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.budget -= 4;
L_00160B5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160B70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 21816u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00160B98; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[4].w[0] + 552u), c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160B98:
    c.f[0] = ld32((c.r[4].w[0] + 548u));
    st32((c.r[4].w[0] + 552u), c.f[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160BA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160BC0u);  if (depth < kMaxDepth) unit_0018(c, 24u, depth + 1u); else { c.pc = 0x001602A0u; return; } if (c.pc != 0x00160BC0u) [[unlikely]] return; }
L_00160BC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160BD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00160DA8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00160C74; } }
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00160DA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[16], c.r[2].w[0] + 9872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160C28u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00160C28u) [[unlikely]] return; }
L_00160C28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00160C54; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160C40u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00160C40u) [[unlikely]] return; }
L_00160C40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160C4Cu);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x00160C4Cu) [[unlikely]] return; }
L_00160C4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00160C60; } }
L_00160C54:
    st32((c.r[19].w[0] + 28u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00160DA8; } }
L_00160C60:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00160C74; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_00160C74:
    set32(c.r[3], ld32((c.r[19].w[0] + 160u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] + 64u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00160C98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00160C98u) [[unlikely]] return; }
L_00160C98:
    set32(c.r[4], c.r[19].w[0] + 96u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160CA8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00160CA8u) [[unlikely]] return; }
L_00160CA8:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00160CF8; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160CC8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00160CC8u) [[unlikely]] return; }
L_00160CC8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160CD4u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00160CD4u) [[unlikely]] return; }
L_00160CD4:
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.r[2].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00160CF0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00160CF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00160D08; } }
L_00160CF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160D08u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00160D08u) [[unlikely]] return; }
L_00160D08:
    set32(c.r[3], ld32((c.r[19].w[0] + 160u)));
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] + 80u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[18], c.r[19].w[0] + 128u);
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00160D30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00160D30u) [[unlikely]] return; }
L_00160D30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160D40u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00160D40u) [[unlikely]] return; }
L_00160D40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160D50u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00160D50u) [[unlikely]] return; }
L_00160D50:
    set32(c.r[4], c.r[19].w[0] + 144u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160D60u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00160D60u) [[unlikely]] return; }
L_00160D60:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[15] = 0u;
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 14208u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[14] = ld32((c.r[2].w[0] + 136u));
    c.f[12] = ld32((c.r[2].w[0] + 128u));
    c.f[13] = ld32((c.r[2].w[0] + 132u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160D94u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00160D94u) [[unlikely]] return; }
L_00160D94:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00160DA8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_00160DA8:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160DC8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[7], 0u + 13248u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    set32(c.r[6], c.r[2].w[0] + 14208u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 169u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 144u), c.f[20]);
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 7700u)));
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00160E68; } }
    c.f[0] = ld32((c.r[3].w[0] + 128u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[1] = c.r[1].w[0];
    st32((c.r[20].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[20].w[0] + 8u), c.f[0]);
    c.budget -= 15;
L_00160E5C:
    st32((c.r[19].w[0] + 40u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001610A0; } }
L_00160E68:
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[2], 0u + 1396u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00160EB4; } }
    set32(c.r[2], 0u + 1368u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00160EB4; } }
    set32(c.r[2], 0u + 1464u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00160EB4; } }
    set32(c.r[2], 0u + 1441u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00160EB4; } }
    set32(c.r[2], 0u + 2140u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00160EB4; } }
    set32(c.r[2], 0u + 2024u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00160EE0; } }
L_00160EB4:
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], 0u + 13248u);
    set32(c.r[4], c.r[21].w[0] + 14208u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00160F10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00160EF8; } }
L_00160EE0:
    set32(c.r[2], 0u + 1577u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00160EF8; } }
    set32(c.r[2], 0u + 2329u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00160F10; } }
L_00160EF8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160F08u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00160F08u) [[unlikely]] return; }
L_00160F08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001610A0; } }
L_00160F10:
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[18], 0u + 13248u);
    set32(c.r[17], c.r[21].w[0] + 14208u);
    set32(c.r[6], 0u + 268u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[18].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160F68u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00160F68u) [[unlikely]] return; }
L_00160F68:
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[20].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    st32((c.r[20].w[0] + 12u), 0u);
    st32((c.r[20].w[0] + 8u), c.f[1]);
    c.f[20] = ld32((c.r[20].w[0] + 12u));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.f[15] = c.f[20];
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.f[14] = ld32((c.r[2].w[0] + 136u));
    c.f[12] = ld32((c.r[2].w[0] + 128u));
    c.f[13] = ld32((c.r[2].w[0] + 132u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160FB0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00160FB0u) [[unlikely]] return; }
L_00160FB0:
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[19].w[0] + 128u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160FC8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00160FC8u) [[unlikely]] return; }
L_00160FC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 44u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12228u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00161000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160FE4u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x00160FE4u) [[unlikely]] return; }
L_00160FE4:
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00161000; } }
    st32((c.r[19].w[0] + 40u), c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001610A0; } }
L_00161000:
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[16], 0u + 13248u);
    set32(c.r[17], c.r[21].w[0] + 14208u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016101Cu);  if (depth < kMaxDepth) unit_003D(c, 166u, depth + 1u); else { c.pc = 0x001F6EF8u; return; } if (c.pc != 0x0016101Cu) [[unlikely]] return; }
L_0016101C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016104C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161030u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00161030u) [[unlikely]] return; }
L_00161030:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
L_00161040:
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00161074; } }
L_0016104C:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 7700u)));
    set32(c.r[3], c.r[3].w[0] - 198u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00161090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00160E5Cu | kUnwind; return; } goto L_00160E5C; } }
L_00161074:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], 0u + 7u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
L_00161080:
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00160E5Cu | kUnwind; return; } goto L_00160E5C; } }
L_00161090:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[19].w[0] + 40u), c.f[0]);
    c.budget -= 4;
L_001610A0:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 8;
L_001610C0:
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001610D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001610E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001610F8:
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.budget -= 2;
L_00161100:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00161110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161130u);  if (depth < kMaxDepth) unit_009B(c, 490u, depth + 1u); else { c.pc = 0x0036FD90u; return; } if (c.pc != 0x00161130u) [[unlikely]] return; }
L_00161130:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 176u), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 21224u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00161160:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161188u);  if (depth < kMaxDepth) unit_009B(c, 490u, depth + 1u); else { c.pc = 0x0036FD90u; return; } if (c.pc != 0x00161188u) [[unlikely]] return; }
L_00161188:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 36u), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 21224u);
    st32((c.r[16].w[0] + 176u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001611C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 21224u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001611F0u);  if (depth < kMaxDepth) unit_009B(c, 492u, depth + 1u); else { c.pc = 0x0036FE00u; return; } if (c.pc != 0x001611F0u) [[unlikely]] return; }
L_001611F0:
    c.r[16].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00161210; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161210u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x00161210u) [[unlikely]] return; }
L_00161210:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00161228:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[6], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 144u));
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[7].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 148u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 152u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00161278:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.r[19].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001612ACu);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x001612ACu) [[unlikely]] return; }
L_001612AC:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001612BCu);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x001612BCu) [[unlikely]] return; }
L_001612BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 24368u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001613A4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001612F0u);  if (depth < kMaxDepth) unit_0013(c, 331u, depth + 1u); else { c.pc = 0x0014EF58u; return; } if (c.pc != 0x001612F0u) [[unlikely]] return; }
L_001612F0:
    st32((c.r[17].w[0] + 740u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00161384; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016137C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161320u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x00161320u) [[unlikely]] return; }
L_00161320:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016132Cu);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x0016132Cu) [[unlikely]] return; }
L_0016132C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00161378; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00161350u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00161350u) [[unlikely]] return; }
L_00161350:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00161378; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 220u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00161370u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00161370u) [[unlikely]] return; }
L_00161370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016137C; } }
L_00161378:
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_0016137C:
    c.r[2].d[0] = c.r[18].d[0] ^ 1ull;
    st32((c.r[17].w[0] + 772u), c.r[2].w[0]);
    c.budget -= 2;
L_00161384:
    c.r[2].d[0] = c.r[19].d[0] ^ 1ull;
    st32((c.r[17].w[0] + 776u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161394u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x00161394u) [[unlikely]] return; }
L_00161394:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001613A4u);  if (depth < kMaxDepth) unit_009B(c, 418u, depth + 1u); else { c.pc = 0x0036F5D8u; return; } if (c.pc != 0x001613A4u) [[unlikely]] return; }
L_001613A4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001613C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00161458; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00161458; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 13144u);
    set32(c.r[2], c.r[2].w[0] + 21568u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 6;
L_00161400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161408u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00161408u) [[unlikely]] return; }
L_00161408:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 21320u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161420u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x00161420u) [[unlikely]] return; }
L_00161420:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 13128u);
    set32(c.r[2], c.r[2].w[0] + 21520u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161440u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00161440u) [[unlikely]] return; }
L_00161440:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 21336u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161458u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x00161458u) [[unlikely]] return; }
L_00161458:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00161470:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00161480:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00161488:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00161490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 21568u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001614B8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001614B8u) [[unlikely]] return; }
L_001614B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 21320u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001614D0u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001614D0u) [[unlikely]] return; }
L_001614D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001614E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001614F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 21520u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161520u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00161520u) [[unlikely]] return; }
L_00161520:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 21336u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161538u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x00161538u) [[unlikely]] return; }
L_00161538:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00161550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161574u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x00161574u) [[unlikely]] return; }
L_00161574:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161584u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x00161584u) [[unlikely]] return; }
L_00161584:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001615AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161594u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x00161594u) [[unlikely]] return; }
L_00161594:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001615A4u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x001615A4u) [[unlikely]] return; }
L_001615A4:
    c.r[3].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    st32((c.r[2].w[0] + 652u), c.r[3].w[0]);
    c.budget -= 2;
L_001615AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001615C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001615E0u);  if (depth < kMaxDepth) unit_0018(c, 134u, depth + 1u); else { c.pc = 0x001613C8u; return; } if (c.pc != 0x001615E0u) [[unlikely]] return; }
L_001615E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001615F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001616A8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00161680; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[3].w[0] + 14208u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 20942u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00161668; } }
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1422u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00161668; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 23772u), c.r[2].w[0]);
    set32(c.r[17], 0u + 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00161690; } }
L_00161668:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[3].w[0] + 23772u), c.r[2].w[0]);
    set32(c.r[17], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00161690; } }
L_00161680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], ld32((c.r[2].w[0] + 23772u)));
    st32((c.r[2].w[0] + 23772u), 0u);
    c.budget -= 4;
L_00161690:
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], c.r[5].w[0] + 14208u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00161708; } }
L_001616A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + 27456u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[19], 0u + 1u);
    c.budget -= 6;
L_001616C0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_001616F0; } }
    set32(c.r[4], c.r[20].w[0] + 12320u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001616DCu);  if (depth < kMaxDepth) unit_006C(c, 274u, depth + 1u); else { c.pc = 0x002B2E30u; return; } if (c.pc != 0x001616DCu) [[unlikely]] return; }
L_001616DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001616F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12832u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_00161708; } }
L_001616F0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[17].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001616C0u | kUnwind; return; } goto L_001616C0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00161708:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00161730:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 27456u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[3].d[0] = c.r[3].d[0] | 54400ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[17].sd[0] < 68ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[17].sd[0] < 65ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    set32(c.r[22], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    set32(c.r[23], 0u + 195u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[30], c.r[16].w[0] + c.r[3].w[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00730000u);
    c.budget -= 24;
L_00161790:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 12224u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[23].d[0];  if (t) { goto L_001617CC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001617CC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001617CC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001617CC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001617D0; } }
L_001617CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001617D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_00161838; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00161844; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00161844; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00161844; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12832u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00161844; } }
    set32(c.r[4], c.r[21].w[0] - 27328u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161818u);  if (depth < kMaxDepth) unit_0048(c, 294u, depth + 1u); else { c.pc = 0x00223E70u; return; } if (c.pc != 0x00161818u) [[unlikely]] return; }
L_00161818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00161844; } }
    set32(c.r[4], c.r[20].w[0] + 24688u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161830u);  if (depth < kMaxDepth) unit_0097(c, 183u, depth + 1u); else { c.pc = 0x0035DBE0u; return; } if (c.pc != 0x00161830u) [[unlikely]] return; }
L_00161830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00161844; } }
L_00161838:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00161858; } }
    goto L_00161844;
L_00161840:
    c.budget -= 1;
L_00161844:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00161790u | kUnwind; return; } goto L_00161790; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00161858:
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
    c.budget -= 10;
L_00161880:
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00161890:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    set32(c.r[4], c.r[3].w[0] + 12320u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.budget -= 12;
L_001618C0:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001619B8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 296u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + 296u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001619B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[20] = 0u;
    set32(c.r[22], c.r[2].w[0] + 14208u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[20], 0u + 13248u);
    set32(c.r[19], 0u + 1u);
    set32(c.r[18], 0u - 1u);
    c.budget -= 9;
L_00161910:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161920u);  if (depth < kMaxDepth) unit_0018(c, 160u, depth + 1u); else { c.pc = 0x00161730u; return; } if (c.pc != 0x00161920u) [[unlikely]] return; }
L_00161920:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016199C; } }
    set32(c.r[5], c.r[16].w[0] << 24);
    st32((c.r[29].w[0] + 12u), c.f[20]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 24));
    st32((c.r[29].w[0] + 8u), c.f[20]);
    st32((c.r[29].w[0] + 4u), c.f[20]);
    set32(c.r[4], c.r[30].w[0] + 12320u);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161950u);  if (depth < kMaxDepth) unit_006C(c, 288u, depth + 1u); else { c.pc = 0x002B3088u; return; } if (c.pc != 0x00161950u) [[unlikely]] return; }
L_00161950:
    set32(c.r[4], c.r[23].w[0] + 9872u);
    st32((c.r[21].w[0] + 31392u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161970u);  if (depth < kMaxDepth) unit_0061(c, 359u, depth + 1u); else { c.pc = 0x00287B70u; return; } if (c.pc != 0x00161970u) [[unlikely]] return; }
L_00161970:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    st32((c.r[21].w[0] + 31392u), 0u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[20].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[22].w[0]);
    st32((c.r[3].w[0] + 12832u), c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);
    st32((c.r[4].w[0] + 12836u), c.r[18].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001619A8; } }
L_0016199C:
    set32(c.r[2], ld32((c.r[3].w[0] + 104u)));
    st32((c.r[3].w[0] + 12832u), c.r[19].w[0]);
    st32((c.r[3].w[0] + 12836u), c.r[2].w[0]);
    c.budget -= 3;
L_001619A8:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00161910u | kUnwind; return; } goto L_00161910; } }
L_001619B8:
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
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001619F0:
    set32(c.r[29], c.r[29].w[0] - 608u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 528u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161A1Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00161A1Cu) [[unlikely]] return; }
L_00161A1C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 268u);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161A60u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00161A60u) [[unlikely]] return; }
L_00161A60:
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[17], c.r[2].w[0] + 12320u);
    st32((c.r[16].w[0] + 12976u), c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[16].w[0] + 12980u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[16].w[0] + 12984u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161A8Cu);  if (depth < kMaxDepth) unit_006C(c, 195u, depth + 1u); else { c.pc = 0x002B22A0u; return; } if (c.pc != 0x00161A8Cu) [[unlikely]] return; }
L_00161A8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[4].w[0] - 29652u), 0u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00161ABC; } }
    set32(c.r[2], c.r[17].w[0] + 40u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0] - 29652u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00161B50; } }
L_00161ABC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161AC8u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x00161AC8u) [[unlikely]] return; }
L_00161AC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00161B50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[16], c.r[4].w[0] + 27456u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].d[0] = c.r[3].d[0] | 54400ull;
    set32(c.r[19], c.r[2].w[0] - 13032u);
    set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 8;
L_00161AF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00161B40; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161B08u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x00161B08u) [[unlikely]] return; }
L_00161B08:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 23776u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00161B40; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161B2Cu);  if (depth < kMaxDepth) unit_0089(c, 152u, depth + 1u); else { c.pc = 0x00325BD0u; return; } if (c.pc != 0x00161B2Cu) [[unlikely]] return; }
L_00161B2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 5;
L_00161B40:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00161AF0u | kUnwind; return; } goto L_00161AF0; } }
L_00161B50:
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 528u));
    set32(c.r[29], c.r[29].w[0] + 608u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00161B70:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 12320u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001621C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 10272u), c.r[4].w[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[2].w[0] + 23788u), c.r[4].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0] + 6672u), 0u);
    st32((c.r[6].w[0] + 23792u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161BECu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x00161BECu) [[unlikely]] return; }
L_00161BEC:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161C00u);  if (depth < kMaxDepth) unit_0066(c, 216u, depth + 1u); else { c.pc = 0x0029A278u; return; } if (c.pc != 0x00161C00u) [[unlikely]] return; }
L_00161C00:
    set32(c.r[17], 0u - 1u);
    c.budget -= 2;
L_00161C08:
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[18].w[0] - 14960u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161C20u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00161C20u) [[unlikely]] return; }
L_00161C20:
    c.r[3].d[0] = c.r[16].sd[0] < 14ll ? 1ull : 0ull;
    st32((c.r[2].w[0] + 12836u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 12828u), 0u);
    st32((c.r[2].w[0] + 12832u), 0u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00161C08u | kUnwind; return; } goto L_00161C08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[16], c.r[2].w[0] + 12320u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161C4Cu);  if (depth < kMaxDepth) unit_006C(c, 233u, depth + 1u); else { c.pc = 0x002B2818u; return; } if (c.pc != 0x00161C4Cu) [[unlikely]] return; }
L_00161C4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00161C68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161C60u);  if (depth < kMaxDepth) unit_006C(c, 236u, depth + 1u); else { c.pc = 0x002B28A8u; return; } if (c.pc != 0x00161C60u) [[unlikely]] return; }
L_00161C60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00162170; } }
L_00161C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161C70u);  if (depth < kMaxDepth) unit_0093(c, 84u, depth + 1u); else { c.pc = 0x0034D188u; return; } if (c.pc != 0x00161C70u) [[unlikely]] return; }
L_00161C70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00162170; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 23780u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161C88u);  if (depth < kMaxDepth) unit_0036(c, 453u, depth + 1u); else { c.pc = 0x001DB668u; return; } if (c.pc != 0x00161C88u) [[unlikely]] return; }
L_00161C88:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00161CCC; } }
L_00161C98:
    set32(c.r[4], c.r[18].w[0] + 24040u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161CA4u);  if (depth < kMaxDepth) unit_007D(c, 262u, depth + 1u); else { c.pc = 0x002F7A00u; return; } if (c.pc != 0x00161CA4u) [[unlikely]] return; }
L_00161CA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00161CCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161CB4u);  if (depth < kMaxDepth) unit_0053(c, 70u, depth + 1u); else { c.pc = 0x0024CDC0u; return; } if (c.pc != 0x00161CB4u) [[unlikely]] return; }
L_00161CB4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161CC0u);  if (depth < kMaxDepth) unit_007D(c, 21u, depth + 1u); else { c.pc = 0x002F4200u; return; } if (c.pc != 0x00161CC0u) [[unlikely]] return; }
L_00161CC0:
    c.r[2].d[0] = c.r[17].sd[0] < 121ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00161C98u | kUnwind; return; } goto L_00161C98; } }
L_00161CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161CD4u);  if (depth < kMaxDepth) unit_0036(c, 461u, depth + 1u); else { c.pc = 0x001DB708u; return; } if (c.pc != 0x00161CD4u) [[unlikely]] return; }
L_00161CD4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[16], c.r[3].w[0] + 12320u);
    set32(c.r[4], c.r[18].w[0] + 24040u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161CF0u);  if (depth < kMaxDepth) unit_007D(c, 266u, depth + 1u); else { c.pc = 0x002F7A58u; return; } if (c.pc != 0x00161CF0u) [[unlikely]] return; }
L_00161CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161CF8u);  if (depth < kMaxDepth) unit_0018(c, 166u, depth + 1u); else { c.pc = 0x00161890u; return; } if (c.pc != 0x00161CF8u) [[unlikely]] return; }
L_00161CF8:
    st32((c.r[19].w[0] + 23780u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161D10u);  if (depth < kMaxDepth) unit_006C(c, 282u, depth + 1u); else { c.pc = 0x002B2F88u; return; } if (c.pc != 0x00161D10u) [[unlikely]] return; }
L_00161D10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 8704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161D24u);  if (depth < kMaxDepth) unit_006C(c, 279u, depth + 1u); else { c.pc = 0x002B2F38u; return; } if (c.pc != 0x00161D24u) [[unlikely]] return; }
L_00161D24:
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00161D70; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[15] = 0u;
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 27456u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[14] = ld32((c.r[2].w[0] + 136u));
    c.f[12] = ld32((c.r[2].w[0] + 128u));
    c.f[13] = ld32((c.r[2].w[0] + 132u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161D68u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00161D68u) [[unlikely]] return; }
L_00161D68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00161DB8; } }
L_00161D70:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161D9Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00161D9Cu) [[unlikely]] return; }
L_00161D9C:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[15] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161DB8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00161DB8u) [[unlikely]] return; }
L_00161DB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + 12320u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161DD4u);  if (depth < kMaxDepth) unit_006C(c, 241u, depth + 1u); else { c.pc = 0x002B2990u; return; } if (c.pc != 0x00161DD4u) [[unlikely]] return; }
L_00161DD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42440000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161DE8u);  if (depth < kMaxDepth) unit_0049(c, 181u, depth + 1u); else { c.pc = 0x00226588u; return; } if (c.pc != 0x00161DE8u) [[unlikely]] return; }
L_00161DE8:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[20].w[0] + 23792u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161DFCu);  if (depth < kMaxDepth) unit_006C(c, 238u, depth + 1u); else { c.pc = 0x002B2958u; return; } if (c.pc != 0x00161DFCu) [[unlikely]] return; }
L_00161DFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161E08u);  if (depth < kMaxDepth) unit_006C(c, 290u, depth + 1u); else { c.pc = 0x002B30F0u; return; } if (c.pc != 0x00161E08u) [[unlikely]] return; }
L_00161E08:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161E1Cu);  if (depth < kMaxDepth) unit_006C(c, 254u, depth + 1u); else { c.pc = 0x002B2B38u; return; } if (c.pc != 0x00161E1Cu) [[unlikely]] return; }
L_00161E1C:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[30].sd[0] <= 0;  if (t) { goto L_00162154; } }
    c.f[20] = 0u;
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[22], c.r[29].w[0] + 16u);
    set32(c.r[21], 0u + 1u);
    c.budget -= 4;
L_00161E38:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161E50u);  if (depth < kMaxDepth) unit_006C(c, 267u, depth + 1u); else { c.pc = 0x002B2D00u; return; } if (c.pc != 0x00161E50u) [[unlikely]] return; }
L_00161E50:
    set32(c.r[2], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[16].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00161F68; } }
    set32(c.r[2], 0u + 92u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00161F08; } }
    c.r[2].d[0] = c.r[16].sd[0] < 93ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00161EA0; } }
    set32(c.r[2], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00161EC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00161FA0; } }
L_00161EA0:
    set32(c.r[2], 0u + 93u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00161F1C; } }
    set32(c.r[2], 0u + 94u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00161F3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00161FA0; } }
L_00161EC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[3].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161ED0u);  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x001255E0u; return; } if (c.pc != 0x00161ED0u) [[unlikely]] return; }
L_00161ED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00161EF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 8196u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    c.lo.d[0] = c.r[2].d[0];
    set32(c.r[2], 0u + 13248u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00161F30; } }
L_00161EF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], c.r[3].w[0] + 27456u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00161F10; } }
L_00161F08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[17], c.r[2].w[0] - 24832u);
    c.budget -= 2;
L_00161F10:
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00161FA0; } }
L_00161F1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 27456u);
    c.lo.d[0] = c.r[3].d[0];
    set32(c.r[3], 0u + 13248u);
    c.budget -= 5;
L_00161F30:
    mmi::madd(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00161F10u | kUnwind; return; } goto L_00161F10; } }
L_00161F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161F44u);  if (depth < kMaxDepth) unit_0007(c, 337u, depth + 1u); else { c.pc = 0x0011EC50u; return; } if (c.pc != 0x00161F44u) [[unlikely]] return; }
L_00161F44:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00161F5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00161F5Cu) [[unlikely]] return; }
L_00161F5C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00161F10u | kUnwind; return; } goto L_00161F10; } }
L_00161F68:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00161F90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    c.lo.d[0] = c.r[2].d[0];
    set32(c.r[2], 0u + 13248u);
    mmi::madd(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00161FA0; } }
L_00161F90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161F9Cu);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x001615F0u; return; } if (c.pc != 0x00161F9Cu) [[unlikely]] return; }
L_00161F9C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00161FA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161FACu);  if (depth < kMaxDepth) unit_006D(c, 163u, depth + 1u); else { c.pc = 0x002B7888u; return; } if (c.pc != 0x00161FACu) [[unlikely]] return; }
L_00161FAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161FC0u);  if (depth < kMaxDepth) unit_0089(c, 23u, depth + 1u); else { c.pc = 0x003245E8u; return; } if (c.pc != 0x00161FC0u) [[unlikely]] return; }
L_00161FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161FC8u);  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C86D0u; return; } if (c.pc != 0x00161FC8u) [[unlikely]] return; }
L_00161FC8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00161FE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00161FE4u) [[unlikely]] return; }
L_00161FE4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161FF8u);  if (depth < kMaxDepth) unit_006C(c, 270u, depth + 1u); else { c.pc = 0x002B2DB0u; return; } if (c.pc != 0x00161FF8u) [[unlikely]] return; }
L_00161FF8:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016200Cu);  if (depth < kMaxDepth) unit_006C(c, 272u, depth + 1u); else { c.pc = 0x002B2DF0u; return; } if (c.pc != 0x0016200Cu) [[unlikely]] return; }
L_0016200C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016201Cu);  if (depth < kMaxDepth) unit_006C(c, 243u, depth + 1u); else { c.pc = 0x002B29B8u; return; } if (c.pc != 0x0016201Cu) [[unlikely]] return; }
L_0016201C:
    set32(c.r[4], c.r[17].w[0] + 128u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016202Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0016202Cu) [[unlikely]] return; }
L_0016202C:
    set32(c.r[4], c.r[17].w[0] + 144u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162048u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00162048u) [[unlikely]] return; }
L_00162048:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00162094; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162068u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00162068u) [[unlikely]] return; }
L_00162068:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    st8((c.r[17].w[0] + 10090u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 12836u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016207Cu);  if (depth < kMaxDepth) unit_0018(c, 375u, depth + 1u); else { c.pc = 0x00163300u; return; } if (c.pc != 0x0016207Cu) [[unlikely]] return; }
L_0016207C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_00162090; } }
    st8((c.r[17].w[0] + 116u), static_cast<std::uint8_t>(c.r[21].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162094; } }
L_00162090:
    st8((c.r[17].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00162094:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[17].w[0] + 113u), static_cast<std::uint8_t>(0u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001620B0u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x001620B0u) [[unlikely]] return; }
L_001620B0:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 7700u), c.r[3].w[0]);
    c.f[12] = c.f[20];
    c.budget -= 4;
L_001620C0:
    st32((c.r[17].w[0] + 12828u), c.r[21].w[0]);
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    st64((c.r[17].w[0] + 560u), c.r[2].d[0]);
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001620E0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001620E0u) [[unlikely]] return; }
L_001620E0:
    set32(c.r[2], 0u - 1u);
    st16((c.r[17].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 10034u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 10077u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 648u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 8938u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
L_00162100:
    st16((c.r[17].w[0] + 9020u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 324u), 0u);
    st8((c.r[17].w[0] + 113u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162114u);  if (depth < kMaxDepth) unit_0079(c, 158u, depth + 1u); else { c.pc = 0x002E6568u; return; } if (c.pc != 0x00162114u) [[unlikely]] return; }
L_00162114:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[21].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162128u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x00162128u) [[unlikely]] return; }
L_00162128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 11808u);
    set32(c.r[4], c.r[3].w[0] + 12320u);
    c.r[18].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162148u);  if (depth < kMaxDepth) unit_006C(c, 276u, depth + 1u); else { c.pc = 0x002B2EB0u; return; } if (c.pc != 0x00162148u) [[unlikely]] return; }
L_00162148:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00161E38u | kUnwind; return; } goto L_00161E38; } }
L_00162154:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + 12320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162168u);  if (depth < kMaxDepth) unit_006C(c, 164u, depth + 1u); else { c.pc = 0x002B1C80u; return; } if (c.pc != 0x00162168u) [[unlikely]] return; }
L_00162168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001621C4; } }
L_00162170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162178u);  if (depth < kMaxDepth) unit_001F(c, 306u, depth + 1u); else { c.pc = 0x0017FC00u; return; } if (c.pc != 0x00162178u) [[unlikely]] return; }
L_00162178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162180u);  if (depth < kMaxDepth) unit_0036(c, 452u, depth + 1u); else { c.pc = 0x001DB650u; return; } if (c.pc != 0x00162180u) [[unlikely]] return; }
L_00162180:
    set32(c.r[2], ld32((c.r[19].w[0] + 23780u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001621C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[16], c.r[2].w[0] + 24040u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001621A0u);  if (depth < kMaxDepth) unit_007D(c, 262u, depth + 1u); else { c.pc = 0x002F7A00u; return; } if (c.pc != 0x001621A0u) [[unlikely]] return; }
L_001621A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001621C4; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[12] = c.r[1].w[0];
    st32((c.r[19].w[0] + 23780u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001621C4u);  if (depth < kMaxDepth) unit_007D(c, 267u, depth + 1u); else { c.pc = 0x002F7AB0u; return; } if (c.pc != 0x001621C4u) [[unlikely]] return; }
L_001621C4:
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
L_00162200:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162220u);  if (depth < kMaxDepth) unit_0091(c, 146u, depth + 1u); else { c.pc = 0x00345880u; return; } if (c.pc != 0x00162220u) [[unlikely]] return; }
L_00162220:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[17], c.r[2].w[0] + 12320u);
    st32((c.r[3].w[0] + 10272u), 0u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[4].w[0] + 6672u), c.r[16].w[0]);
    st32((c.r[5].w[0] + 23788u), 0u);
    st32((c.r[6].w[0] + 23792u), c.r[16].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162254u);  if (depth < kMaxDepth) unit_0018(c, 371u, depth + 1u); else { c.pc = 0x00163288u; return; } if (c.pc != 0x00162254u) [[unlikely]] return; }
L_00162254:
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162260u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x00162260u) [[unlikely]] return; }
L_00162260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0016229C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162274u);  if (depth < kMaxDepth) unit_0049(c, 144u, depth + 1u); else { c.pc = 0x00225FC0u; return; } if (c.pc != 0x00162274u) [[unlikely]] return; }
L_00162274:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 27456u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016228Cu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x0016228Cu) [[unlikely]] return; }
L_0016228C:
    set32(c.r[4], c.r[16].w[0] + 13248u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016229Cu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x0016229Cu) [[unlikely]] return; }
L_0016229C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xEA2D0000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] | 29098ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00162320; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 7074ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00162320; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x60F80000u);
    c.r[2].d[0] = c.r[2].d[0] | 60045ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00162320; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x19200000u);
    c.r[2].d[0] = c.r[2].d[0] | 46124ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00162320; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7DC70000u);
    c.r[2].d[0] = c.r[2].d[0] | 34186ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00162320; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xCD220000u);
    c.r[2].d[0] = c.r[2].d[0] | 42715ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00162320; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xAD7C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 56744ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00162320; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 36756ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016232C; } }
L_00162320:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162330; } }
L_0016232C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00162330:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001623E4; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[18].w[0] + 12320u);
    set32(c.r[3], ld32((c.r[16].w[0] + 23764u)));
    set32(c.r[17], c.r[2].w[0] + 360u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00162364; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162360u);  if (depth < kMaxDepth) unit_0039(c, 29u, depth + 1u); else { c.pc = 0x001E4440u; return; } if (c.pc != 0x00162360u) [[unlikely]] return; }
L_00162360:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00162364:
    st32((c.r[16].w[0] + 23764u), 0u);
    set32(c.r[18], 0u - 1u);
    set32(c.r[16], 0u + 3u);
    c.budget -= 3;
L_00162370:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[18].d[0];  if (t) { goto L_00162388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162384u);  if (depth < kMaxDepth) unit_0082(c, 325u, depth + 1u); else { c.pc = 0x0030BFE0u; return; } if (c.pc != 0x00162384u) [[unlikely]] return; }
L_00162384:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00162388:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00162370u | kUnwind; return; } goto L_00162370; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001623D4; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 24040u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001623BCu);  if (depth < kMaxDepth) unit_007D(c, 264u, depth + 1u); else { c.pc = 0x002F7A38u; return; } if (c.pc != 0x001623BCu) [[unlikely]] return; }
L_001623BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001623C4u);  if (depth < kMaxDepth) unit_0039(c, 152u, depth + 1u); else { c.pc = 0x001E5388u; return; } if (c.pc != 0x001623C4u) [[unlikely]] return; }
L_001623C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001623D4u);  if (depth < kMaxDepth) unit_007D(c, 264u, depth + 1u); else { c.pc = 0x002F7A38u; return; } if (c.pc != 0x001623D4u) [[unlikely]] return; }
L_001623D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 14016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001623E4u);  if (depth < kMaxDepth) unit_009A(c, 240u, depth + 1u); else { c.pc = 0x0036B380u; return; } if (c.pc != 0x001623E4u) [[unlikely]] return; }
L_001623E4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00162400:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st32((c.r[29].w[0] + 64u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[6].w[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    set32(c.r[6], 0u - 1u);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    set32(c.r[20], 0u + 15u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 20;
L_00162450:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[20], c.r[20].w[0] - 1u);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 11;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00162450u | kUnwind; return; } goto L_00162450; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[3].w[0] + 12320u);
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001627F0; } }
    set32(c.r[20], 0u + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001624F4; } }
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[20], c.r[8].w[0] - 1u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u - 1u);
    c.r[3].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
L_001624B8:
    set32(c.r[17], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[17].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001624E4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001624E4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[5].d[0];  if (t) { goto L_001624E4; } }
    st32((c.r[3].w[0]), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 3;
L_001624E4:
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001624B8u | kUnwind; return; } goto L_001624B8; } }
L_001624F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[17], 0u - 1u);
    st32((c.r[4].w[0] + 23764u), 0u);
    set32(c.r[18], 0u + 1u);
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162514; } }
L_00162510:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00162514:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[17].d[0];  if (t) { goto L_00162540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162528u);  if (depth < kMaxDepth) unit_0083(c, 33u, depth + 1u); else { c.pc = 0x0030C368u; return; } if (c.pc != 0x00162528u) [[unlikely]] return; }
L_00162528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00162510u | kUnwind; return; } goto L_00162510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162538u);  if (depth < kMaxDepth) unit_0039(c, 29u, depth + 1u); else { c.pc = 0x001E4440u; return; } if (c.pc != 0x00162538u) [[unlikely]] return; }
L_00162538:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] + 23764u), c.r[18].w[0]);
    c.budget -= 2;
L_00162540:
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_001627DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162558u);  if (depth < kMaxDepth) unit_0040(c, 44u, depth + 1u); else { c.pc = 0x00200880u; return; } if (c.pc != 0x00162558u) [[unlikely]] return; }
L_00162558:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162564u);  if (depth < kMaxDepth) unit_0039(c, 18u, depth + 1u); else { c.pc = 0x001E4280u; return; } if (c.pc != 0x00162564u) [[unlikely]] return; }
L_00162564:
    set32(c.r[4], c.r[16].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162570u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x00162570u) [[unlikely]] return; }
L_00162570:
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_001627DC; } }
    set32(c.r[23], 0u - 1u);
    set32(c.r[30], 0u + 1u);
    c.r[21].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
L_00162588:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + 14016u);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001625B8u);  if (depth < kMaxDepth) unit_009A(c, 235u, depth + 1u); else { c.pc = 0x0036B2F8u; return; } if (c.pc != 0x001625B8u) [[unlikely]] return; }
L_001625B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001625C4u);  if (depth < kMaxDepth) unit_0083(c, 33u, depth + 1u); else { c.pc = 0x0030C368u; return; } if (c.pc != 0x001625C4u) [[unlikely]] return; }
L_001625C4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[23].d[0];  if (t) { goto L_00162748; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] + 24040u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001625E8u);  if (depth < kMaxDepth) unit_007D(c, 264u, depth + 1u); else { c.pc = 0x002F7A38u; return; } if (c.pc != 0x001625E8u) [[unlikely]] return; }
L_001625E8:
    st32((c.r[19].w[0]), c.r[30].w[0]);
    set32(c.r[5], c.r[17].w[0] << 24);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 24));
    st32((c.r[21].w[0]), c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] + 12320u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162608u);  if (depth < kMaxDepth) unit_006C(c, 288u, depth + 1u); else { c.pc = 0x002B3088u; return; } if (c.pc != 0x00162608u) [[unlikely]] return; }
L_00162608:
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[21], c.r[21].w[0] + 4u);
    st32((c.r[16].w[0] + 31392u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162624u);  if (depth < kMaxDepth) unit_0082(c, 120u, depth + 1u); else { c.pc = 0x0030A7A0u; return; } if (c.pc != 0x00162624u) [[unlikely]] return; }
L_00162624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[23].d[0];  if (t) { goto L_00162684; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162638u);  if (depth < kMaxDepth) unit_0083(c, 42u, depth + 1u); else { c.pc = 0x0030C478u; return; } if (c.pc != 0x00162638u) [[unlikely]] return; }
L_00162638:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[23].d[0];  if (t) { goto L_00162684; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 5800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162658u);  if (depth < kMaxDepth) unit_0043(c, 198u, depth + 1u); else { c.pc = 0x0020EC70u; return; } if (c.pc != 0x00162658u) [[unlikely]] return; }
L_00162658:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016266Cu);  if (depth < kMaxDepth) unit_0061(c, 386u, depth + 1u); else { c.pc = 0x00287F48u; return; } if (c.pc != 0x0016266Cu) [[unlikely]] return; }
L_0016266C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162680u);  if (depth < kMaxDepth) unit_0082(c, 133u, depth + 1u); else { c.pc = 0x0030A950u; return; } if (c.pc != 0x00162680u) [[unlikely]] return; }
L_00162680:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00162684:
    st32((c.r[19].w[0] + 31392u), 0u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[30].d[0];  if (t) { goto L_00162724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001626A0u);  if (depth < kMaxDepth) unit_007E(c, 246u, depth + 1u); else { c.pc = 0x002FAB68u; return; } if (c.pc != 0x001626A0u) [[unlikely]] return; }
L_001626A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 19772u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 19776u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001626B8u);  if (depth < kMaxDepth) unit_0049(c, 221u, depth + 1u); else { c.pc = 0x00226BF8u; return; } if (c.pc != 0x001626B8u) [[unlikely]] return; }
L_001626B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001626C0u);  if (depth < kMaxDepth) unit_001F(c, 306u, depth + 1u); else { c.pc = 0x0017FC00u; return; } if (c.pc != 0x001626C0u) [[unlikely]] return; }
L_001626C0:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[16], c.r[17].w[0] << 16);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001626F8; } }
L_001626D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001626D8u);  if (depth < kMaxDepth) unit_0053(c, 70u, depth + 1u); else { c.pc = 0x0024CDC0u; return; } if (c.pc != 0x001626D8u) [[unlikely]] return; }
L_001626D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001626E0u);  if (depth < kMaxDepth) unit_007D(c, 21u, depth + 1u); else { c.pc = 0x002F4200u; return; } if (c.pc != 0x001626E0u) [[unlikely]] return; }
L_001626E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001626F0u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001626F0u) [[unlikely]] return; }
L_001626F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001626F8u);  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x001626F8u) [[unlikely]] return; }
L_001626F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162700u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x00162700u) [[unlikely]] return; }
L_00162700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[30].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001626D0u | kUnwind; return; } goto L_001626D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162710u);  if (depth < kMaxDepth) unit_007E(c, 237u, depth + 1u); else { c.pc = 0x002FAA60u; return; } if (c.pc != 0x00162710u) [[unlikely]] return; }
L_00162710:
    set32(c.r[2], c.r[19].w[0] + 14664u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 16));
    st32((c.r[2].w[0] + 228u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162724u);  if (depth < kMaxDepth) unit_007D(c, 228u, depth + 1u); else { c.pc = 0x002F7258u; return; } if (c.pc != 0x00162724u) [[unlikely]] return; }
L_00162724:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001627C8; } }
L_0016273C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001627A8; } }
L_00162748:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] + 24040u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162760u);  if (depth < kMaxDepth) unit_007D(c, 264u, depth + 1u); else { c.pc = 0x002F7A38u; return; } if (c.pc != 0x00162760u) [[unlikely]] return; }
L_00162760:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23764u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[30].d[0];  if (t) { goto L_001627C8; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[23].d[0];  if (t) { goto L_001627A4; } }
    set32(c.r[4], 0u - 1u);
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
L_00162788:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016273Cu | kUnwind; return; } goto L_0016273C; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00162788u | kUnwind; return; } goto L_00162788; } }
L_001627A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001627A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001627C8; } }
    st32((c.r[21].w[0]), c.r[17].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001627C8u);  if (depth < kMaxDepth) unit_0033(c, 257u, depth + 1u); else { c.pc = 0x001CF518u; return; } if (c.pc != 0x001627C8u) [[unlikely]] return; }
L_001627C8:
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[23].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00162588u | kUnwind; return; } goto L_00162588; } }
L_001627DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + 24040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001627F0u);  if (depth < kMaxDepth) unit_007D(c, 264u, depth + 1u); else { c.pc = 0x002F7A38u; return; } if (c.pc != 0x001627F0u) [[unlikely]] return; }
L_001627F0:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00162828:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00162960; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00162960; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 13112u);
    set32(c.r[2], c.r[2].w[0] + 22360u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162868u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00162868u) [[unlikely]] return; }
L_00162868:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22128u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162880u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x00162880u) [[unlikely]] return; }
L_00162880:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 13096u);
    set32(c.r[2], c.r[2].w[0] + 22312u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001628A0u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001628A0u) [[unlikely]] return; }
L_001628A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22144u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001628B8u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001628B8u) [[unlikely]] return; }
L_001628B8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 13080u);
    set32(c.r[2], c.r[2].w[0] + 22288u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001628D4u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001628D4u) [[unlikely]] return; }
L_001628D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22160u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001628ECu);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x001628ECu) [[unlikely]] return; }
L_001628EC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 13064u);
    set32(c.r[2], c.r[2].w[0] + 22264u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
L_00162900:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016290Cu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0016290Cu) [[unlikely]] return; }
L_0016290C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22176u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162924u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x00162924u) [[unlikely]] return; }
L_00162924:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 13048u);
    set32(c.r[2], c.r[2].w[0] + 22216u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162944u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00162944u) [[unlikely]] return; }
L_00162944:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22192u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016295Cu);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0016295Cu) [[unlikely]] return; }
L_0016295C:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_00162960:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00162978:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] + 10272u), 0u);
    st32((c.r[2].w[0] + 23792u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 6672u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 23788u), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001629A8:
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 6;
L_001629C0:
    st32((c.r[4].w[0] + 10272u), c.r[3].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[17], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[2].w[0] + 23788u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 6672u), 0u);
    st32((c.r[6].w[0] + 23792u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001629F8u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x001629F8u) [[unlikely]] return; }
L_001629F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162A04u);  if (depth < kMaxDepth) unit_0066(c, 216u, depth + 1u); else { c.pc = 0x0029A278u; return; } if (c.pc != 0x00162A04u) [[unlikely]] return; }
L_00162A04:
    c.budget -= 1;
L_00162A08:
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[18].w[0] - 14960u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162A20u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00162A20u) [[unlikely]] return; }
L_00162A20:
    c.r[3].d[0] = c.r[16].sd[0] < 14ll ? 1ull : 0ull;
    st32((c.r[2].w[0] + 12836u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 12828u), 0u);
    st32((c.r[2].w[0] + 12832u), 0u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00162A08u | kUnwind; return; } goto L_00162A08; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00162A58:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] + 12320u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_00162ABC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162A8Cu);  if (depth < kMaxDepth) unit_006C(c, 233u, depth + 1u); else { c.pc = 0x002B2818u; return; } if (c.pc != 0x00162A8Cu) [[unlikely]] return; }
L_00162A8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00162ABC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162AA0u);  if (depth < kMaxDepth) unit_006C(c, 236u, depth + 1u); else { c.pc = 0x002B28A8u; return; } if (c.pc != 0x00162AA0u) [[unlikely]] return; }
L_00162AA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00162ABC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23768u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_00162AC0; } }
L_00162ABC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00162AC0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00162AD8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162B00u);  if (depth < kMaxDepth) unit_0036(c, 453u, depth + 1u); else { c.pc = 0x001DB668u; return; } if (c.pc != 0x00162B00u) [[unlikely]] return; }
L_00162B00:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00162B44; } }
    c.budget -= 1;
L_00162B10:
    set32(c.r[4], c.r[18].w[0] + 24040u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162B1Cu);  if (depth < kMaxDepth) unit_007D(c, 262u, depth + 1u); else { c.pc = 0x002F7A00u; return; } if (c.pc != 0x00162B1Cu) [[unlikely]] return; }
L_00162B1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00162B44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162B2Cu);  if (depth < kMaxDepth) unit_0053(c, 70u, depth + 1u); else { c.pc = 0x0024CDC0u; return; } if (c.pc != 0x00162B2Cu) [[unlikely]] return; }
L_00162B2C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162B38u);  if (depth < kMaxDepth) unit_007D(c, 21u, depth + 1u); else { c.pc = 0x002F4200u; return; } if (c.pc != 0x00162B38u) [[unlikely]] return; }
L_00162B38:
    c.r[2].d[0] = c.r[17].sd[0] < 121ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00162B10u | kUnwind; return; } goto L_00162B10; } }
L_00162B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162B4Cu);  if (depth < kMaxDepth) unit_0036(c, 461u, depth + 1u); else { c.pc = 0x001DB708u; return; } if (c.pc != 0x00162B4Cu) [[unlikely]] return; }
L_00162B4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[18].w[0] + 24040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162B60u);  if (depth < kMaxDepth) unit_007D(c, 266u, depth + 1u); else { c.pc = 0x002F7A58u; return; } if (c.pc != 0x00162B60u) [[unlikely]] return; }
L_00162B60:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00162B80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12228u)));
    set32(c.r[2], 0u + 195u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00162BD0; } }
    c.r[2].d[0] = c.r[5].sd[0] < 68ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00162BC4; } }
    c.r[2].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00162BC4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00162BD0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00162BC4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00162BD0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00162BE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162C08u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x00162C08u) [[unlikely]] return; }
L_00162C08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00162C90; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[16], c.r[4].w[0] + 27456u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].d[0] = c.r[3].d[0] | 54400ull;
    set32(c.r[19], c.r[2].w[0] - 13032u);
    set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 8;
L_00162C30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00162C80; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162C48u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x00162C48u) [[unlikely]] return; }
L_00162C48:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 23776u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00162C80; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162C6Cu);  if (depth < kMaxDepth) unit_0089(c, 152u, depth + 1u); else { c.pc = 0x00325BD0u; return; } if (c.pc != 0x00162C6Cu) [[unlikely]] return; }
L_00162C6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 5;
L_00162C80:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00162C30u | kUnwind; return; } goto L_00162C30; } }
L_00162C90:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00162CB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 12320u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[17], c.r[2].w[0] + 360u);
    set32(c.r[3], ld32((c.r[16].w[0] + 23764u)));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00162CF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162CF0u);  if (depth < kMaxDepth) unit_0039(c, 29u, depth + 1u); else { c.pc = 0x001E4440u; return; } if (c.pc != 0x00162CF0u) [[unlikely]] return; }
L_00162CF0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00162CF4:
    st32((c.r[16].w[0] + 23764u), 0u);
    set32(c.r[18], 0u - 1u);
    set32(c.r[16], 0u + 3u);
    c.budget -= 3;
L_00162D00:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[18].d[0];  if (t) { goto L_00162D18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162D14u);  if (depth < kMaxDepth) unit_0082(c, 325u, depth + 1u); else { c.pc = 0x0030BFE0u; return; } if (c.pc != 0x00162D14u) [[unlikely]] return; }
L_00162D14:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00162D18:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00162D00u | kUnwind; return; } goto L_00162D00; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00162D64; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 24040u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162D4Cu);  if (depth < kMaxDepth) unit_007D(c, 264u, depth + 1u); else { c.pc = 0x002F7A38u; return; } if (c.pc != 0x00162D4Cu) [[unlikely]] return; }
L_00162D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162D54u);  if (depth < kMaxDepth) unit_0039(c, 152u, depth + 1u); else { c.pc = 0x001E5388u; return; } if (c.pc != 0x00162D54u) [[unlikely]] return; }
L_00162D54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162D64u);  if (depth < kMaxDepth) unit_007D(c, 264u, depth + 1u); else { c.pc = 0x002F7A38u; return; } if (c.pc != 0x00162D64u) [[unlikely]] return; }
L_00162D64:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00162D80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xEA2D0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 12356u)));
    c.r[2].d[0] = c.r[2].d[0] | 29098ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00162E08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 7074ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00162E08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x60F80000u);
    c.r[2].d[0] = c.r[2].d[0] | 60045ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00162E08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x19200000u);
    c.r[2].d[0] = c.r[2].d[0] | 46124ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00162E08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7DC70000u);
    c.r[2].d[0] = c.r[2].d[0] | 34186ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00162E08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xCD220000u);
    c.r[2].d[0] = c.r[2].d[0] | 42715ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00162E08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xAD7C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 56744ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00162E08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 36756ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00162E14; } }
L_00162E08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00162E14:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00162E20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00162F1C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12828u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00162F1C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    st8((c.r[16].w[0] + 9933u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162E60u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x00162E60u) [[unlikely]] return; }
L_00162E60:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] - 13032u);
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[4].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00162ED4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12836u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00162ED4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + 9872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162EB4u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00162EB4u) [[unlikely]] return; }
L_00162EB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00162F34; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162ECCu);  if (depth < kMaxDepth) unit_0062(c, 16u, depth + 1u); else { c.pc = 0x00288208u; return; } if (c.pc != 0x00162ECCu) [[unlikely]] return; }
L_00162ECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162F34; } }
L_00162ED4:
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162EECu);  if (depth < kMaxDepth) unit_008E(c, 289u, depth + 1u); else { c.pc = 0x0033B270u; return; } if (c.pc != 0x00162EECu) [[unlikely]] return; }
L_00162EEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162F00u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x00162F00u) [[unlikely]] return; }
L_00162F00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162F0Cu);  if (depth < kMaxDepth) unit_0019(c, 157u, depth + 1u); else { c.pc = 0x00165C70u; return; } if (c.pc != 0x00162F0Cu) [[unlikely]] return; }
L_00162F0C:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 12828u), 0u);
    st32((c.r[16].w[0] + 12836u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12832u), 0u);
    c.budget -= 4;
L_00162F1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162F28u);  if (depth < kMaxDepth) unit_0073(c, 185u, depth + 1u); else { c.pc = 0x002CEBD8u; return; } if (c.pc != 0x00162F28u) [[unlikely]] return; }
L_00162F28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162F34u);  if (depth < kMaxDepth) unit_0073(c, 183u, depth + 1u); else { c.pc = 0x002CEBA8u; return; } if (c.pc != 0x00162F34u) [[unlikely]] return; }
L_00162F34:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00162F48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162F5Cu);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x00162F5Cu) [[unlikely]] return; }
L_00162F5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00162F9C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162F78u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00162F78u) [[unlikely]] return; }
L_00162F78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162F8Cu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00162F8Cu) [[unlikely]] return; }
L_00162F8C:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    st8((c.r[16].w[0] + 10090u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 12836u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00162F9C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00162FB0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00162FF0; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_00162FC8:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00162FE0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00162FE0:
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00162FC8u | kUnwind; return; } goto L_00162FC8; } }
L_00162FF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00163000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 12320u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], c.r[2].w[0] + 424u);
    set32(c.r[3], c.r[2].w[0] + 296u);
    set32(c.r[2], c.r[2].w[0] + 360u);
    c.budget -= 8;
L_00163020:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00163020u | kUnwind; return; } goto L_00163020; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00163050:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 14016u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016306Cu);  if (depth < kMaxDepth) unit_009A(c, 235u, depth + 1u); else { c.pc = 0x0036B2F8u; return; } if (c.pc != 0x0016306Cu) [[unlikely]] return; }
L_0016306C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00163080:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], c.r[2].w[0] + 12320u);
    c.r[7].d[0] = c.r[29].d[0] | 4ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[8].d[0] = c.r[29].d[0] | 8ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001630C0u);  if (depth < kMaxDepth) unit_006C(c, 286u, depth + 1u); else { c.pc = 0x002B2FF8u; return; } if (c.pc != 0x001630C0u) [[unlikely]] return; }
L_001630C0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001630CCu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001630CCu) [[unlikely]] return; }
L_001630CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 18712u)));
    c.r[17].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001630DCu);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x001630DCu) [[unlikely]] return; }
L_001630DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001630E8u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x001630E8u) [[unlikely]] return; }
L_001630E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 18712u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001630F4u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x001630F4u) [[unlikely]] return; }
L_001630F4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163104u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x00163104u) [[unlikely]] return; }
    goto L_00163104;
L_00163100:
    c.budget -= 1;
L_00163104:
    set32(c.r[7], ld32((c.r[16].w[0] + 18712u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    if (c.r[2].d[0] == 0) c.r[7].d[0] = c.r[17].d[0];
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163128u);  if (depth < kMaxDepth) unit_006C(c, 208u, depth + 1u); else { c.pc = 0x002B24C8u; return; } if (c.pc != 0x00163128u) [[unlikely]] return; }
L_00163128:
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016313C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016313Cu);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x0016313Cu) [[unlikely]] return; }
L_0016313C:
    set32(c.r[16], 0u + 1u);
    st32((c.r[19].w[0] + 32u), c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016314Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0016314Cu) [[unlikely]] return; }
L_0016314C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00163160; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163160u);  if (depth < kMaxDepth) unit_0049(c, 144u, depth + 1u); else { c.pc = 0x00225FC0u; return; } if (c.pc != 0x00163160u) [[unlikely]] return; }
L_00163160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163168u);  if (depth < kMaxDepth) unit_0086(c, 70u, depth + 1u); else { c.pc = 0x00318A60u; return; } if (c.pc != 0x00163168u) [[unlikely]] return; }
L_00163168:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00163188:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] + 12320u);
    set32(c.r[3], c.r[2].w[0] + 40u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001631A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] + 12320u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[2].w[0] + 360u);
    set32(c.r[4], c.r[2].w[0] + 296u);
    set32(c.r[5], c.r[2].w[0] + 424u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001631CCu);  if (depth < kMaxDepth) unit_0018(c, 250u, depth + 1u); else { c.pc = 0x00162400u; return; } if (c.pc != 0x001631CCu) [[unlikely]] return; }
L_001631CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001631E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[2].w[0] + 12320u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] - 13064u);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016321C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00163228; } }
L_0016321C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163224u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x00163224u) [[unlikely]] return; }
L_00163224:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00163228:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00163260; } }
    set32(c.r[3], c.r[17].w[0] + 12320u);
    set32(c.r[2], ld32((c.r[3].w[0] + 488u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00163260; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00163260; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 488u), c.r[2].w[0]);
    c.budget -= 2;
L_00163260:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00163278:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[2].w[0] - 13052u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00163288:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[2].w[0] - 13036u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00163298:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001632B0u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001632B0u) [[unlikely]] return; }
L_001632B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001632E4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001632CCu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001632CCu) [[unlikely]] return; }
L_001632CC:
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st8((c.r[2].w[0] + 116u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] - 13036u), c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001632EC; } }
L_001632E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[2].w[0] - 13036u), 0u);
    c.budget -= 2;
L_001632EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00163300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163314u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x00163314u) [[unlikely]] return; }
L_00163314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00163378; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] - 13036u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0016333C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016337C; } }
L_0016333C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] + 27456u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016334Cu);  if (depth < kMaxDepth) unit_0007(c, 337u, depth + 1u); else { c.pc = 0x0011EC50u; return; } if (c.pc != 0x0016334Cu) [[unlikely]] return; }
L_0016334C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00163368u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00163368u) [[unlikely]] return; }
L_00163368:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016337C; } }
L_00163378:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016337C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00163390:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001633A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001633A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001633B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001633C0:
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 12356u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001633D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001633E8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[3].w[0] + 27456u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[2].d[0] | 54400ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    set32(c.r[22], c.r[29].w[0] + 4u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    set32(c.r[23], c.r[29].w[0] + 8u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 22;
L_00163440:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016344Cu);  if (depth < kMaxDepth) unit_0089(c, 168u, depth + 1u); else { c.pc = 0x00325DD8u; return; } if (c.pc != 0x0016344Cu) [[unlikely]] return; }
L_0016344C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00163460; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163460u);  if (depth < kMaxDepth) unit_006D(c, 163u, depth + 1u); else { c.pc = 0x002B7888u; return; } if (c.pc != 0x00163460u) [[unlikely]] return; }
L_00163460:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00163440u | kUnwind; return; } goto L_00163440; } }
    set32(c.r[16], c.r[30].w[0] + 12320u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], 0u - 1u);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[19], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[6], c.r[17].w[0] << 2);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001634A8u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001634A8u) [[unlikely]] return; }
L_001634A8:
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_001634F0; } }
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_001634C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001634C8u | kUnwind; return; } goto L_001634C8; } }
L_001634F0:
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00163528; } }
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], 0u + 92u);
    set32(c.r[4], c.r[19].w[0] + 4u);
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.budget -= 4;
L_00163510:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[2].sd[0] < 91ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00163510u | kUnwind; return; } goto L_00163510; } }
L_00163528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163530u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x00163530u) [[unlikely]] return; }
L_00163530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00163570; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016354Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0016354Cu) [[unlikely]] return; }
L_0016354C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163560u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00163560u) [[unlikely]] return; }
L_00163560:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    st8((c.r[16].w[0] + 10090u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 12836u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00163570:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[12] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[20], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[2].w[0] + 23780u), c.r[20].w[0]);
    set32(c.r[4], c.r[4].w[0] + 24040u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163594u);  if (depth < kMaxDepth) unit_007D(c, 267u, depth + 1u); else { c.pc = 0x002F7AB0u; return; } if (c.pc != 0x00163594u) [[unlikely]] return; }
L_00163594:
    set32(c.r[18], c.r[30].w[0] + 12320u);
    set32(c.r[16], ld32((c.r[18].w[0] + 36u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001635B8u);  if (depth < kMaxDepth) unit_006C(c, 286u, depth + 1u); else { c.pc = 0x002B2FF8u; return; } if (c.pc != 0x001635B8u) [[unlikely]] return; }
L_001635B8:
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 296u);
    set32(c.r[5], c.r[18].w[0] + 424u);
    set32(c.r[6], c.r[18].w[0] + 360u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001635D4u);  if (depth < kMaxDepth) unit_0018(c, 250u, depth + 1u); else { c.pc = 0x00162400u; return; } if (c.pc != 0x001635D4u) [[unlikely]] return; }
L_001635D4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001635F0u);  if (depth < kMaxDepth) unit_006C(c, 286u, depth + 1u); else { c.pc = 0x002B2FF8u; return; } if (c.pc != 0x001635F0u) [[unlikely]] return; }
L_001635F0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001635FCu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001635FCu) [[unlikely]] return; }
L_001635FC:
    set32(c.r[4], ld32((c.r[21].w[0] + 18712u)));
    c.r[16].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016360Cu);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x0016360Cu) [[unlikely]] return; }
L_0016360C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163618u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x00163618u) [[unlikely]] return; }
L_00163618:
    set32(c.r[4], ld32((c.r[21].w[0] + 18712u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163624u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x00163624u) [[unlikely]] return; }
L_00163624:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163634u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x00163634u) [[unlikely]] return; }
L_00163634:
    set32(c.r[7], ld32((c.r[21].w[0] + 18712u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    if (c.r[2].d[0] == 0) c.r[7].d[0] = c.r[16].d[0];
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163658u);  if (depth < kMaxDepth) unit_006C(c, 208u, depth + 1u); else { c.pc = 0x002B24C8u; return; } if (c.pc != 0x00163658u) [[unlikely]] return; }
L_00163658:
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016366C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016366Cu);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034CF98u; return; } if (c.pc != 0x0016366Cu) [[unlikely]] return; }
L_0016366C:
    st32((c.r[18].w[0] + 32u), c.r[20].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163678u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x00163678u) [[unlikely]] return; }
L_00163678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_0016368C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016368Cu);  if (depth < kMaxDepth) unit_0049(c, 144u, depth + 1u); else { c.pc = 0x00225FC0u; return; } if (c.pc != 0x0016368Cu) [[unlikely]] return; }
L_0016368C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163694u);  if (depth < kMaxDepth) unit_0086(c, 70u, depth + 1u); else { c.pc = 0x00318A60u; return; } if (c.pc != 0x00163694u) [[unlikely]] return; }
L_00163694:
    st32((c.r[18].w[0] + 16u), c.r[20].w[0]);
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001636D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001636E8u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x001636E8u) [[unlikely]] return; }
L_001636E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001636F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[2].w[0] + 12320u);
    set32(c.r[3], ld32((c.r[4].w[0] + 488u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00163740; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00163730; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016373C; } }
L_00163730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163738u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x00163738u) [[unlikely]] return; }
L_00163738:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0016373C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_00163740:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00163750:
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00163768:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163780u);  if (depth < kMaxDepth) unit_0018(c, 285u, depth + 1u); else { c.pc = 0x00162828u; return; } if (c.pc != 0x00163780u) [[unlikely]] return; }
L_00163780:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00163790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001637B4u);  if (depth < kMaxDepth) unit_0088(c, 314u, depth + 1u); else { c.pc = 0x00323930u; return; } if (c.pc != 0x001637B4u) [[unlikely]] return; }
L_001637B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001638E4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001637C8u);  if (depth < kMaxDepth) unit_0088(c, 244u, depth + 1u); else { c.pc = 0x00322B50u; return; } if (c.pc != 0x001637C8u) [[unlikely]] return; }
L_001637C8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001637EC; } }
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], 0u + 9u);
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 8940u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001638E4; } }
L_001637EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 13088u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001638DC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163804u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x00163804u) [[unlikely]] return; }
L_00163804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00163828; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 16760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163820u);  if (depth < kMaxDepth) unit_006E(c, 26u, depth + 1u); else { c.pc = 0x002B84C8u; return; } if (c.pc != 0x00163820u) [[unlikely]] return; }
L_00163820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001638E4; } }
L_00163828:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163838u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x00163838u) [[unlikely]] return; }
L_00163838:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[6], 0u + 8u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163864u);  if (depth < kMaxDepth) unit_001B(c, 200u, depth + 1u); else { c.pc = 0x0016EAF8u; return; } if (c.pc != 0x00163864u) [[unlikely]] return; }
L_00163864:
    c.f[2] = ld32((c.r[16].w[0] + 13024u));
    set32(c.r[2], 0u + 4u);
    c.f[0] = ld32((c.r[16].w[0] + 13032u));
    set32(c.r[8], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[7], 0u + 80u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[3], 0u - 3u);
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 13080u), 0u);
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 13032u), c.f[0]);
    st32((c.r[16].w[0] + 13024u), c.f[2]);
    st16((c.r[16].w[0] + 8940u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 9924u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st64((c.r[16].w[0] + 560u), c.r[6].d[0]);
    st16((c.r[16].w[0] + 9020u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[16].w[0] + 7676u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 208u), c.f[2]);
    st32((c.r[16].w[0] + 216u), c.f[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001638CCu);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x001638CCu) [[unlikely]] return; }
L_001638CC:
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 11352u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001638E4; } }
L_001638DC:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 13088u), c.r[2].w[0]);
    c.budget -= 2;
L_001638E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001638F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 211u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00163A04; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001639BC; } }
    set32(c.r[2], 0u + 160u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001639BC; } }
    set32(c.r[2], 0u + 161u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001639BC; } }
    set32(c.r[2], 0u + 162u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001639BC; } }
    set32(c.r[2], 0u + 163u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001639BC; } }
    set32(c.r[2], 0u + 159u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001639BC; } }
    set32(c.r[2], 0u + 173u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001639BC; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001639BC; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001639BC; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001639BC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016399Cu);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x0016399Cu) [[unlikely]] return; }
L_0016399C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001639BC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001639B4u);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x001639B4u) [[unlikely]] return; }
L_001639B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00163A04; } }
L_001639BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001639D0u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001639D0u) [[unlikely]] return; }
L_001639D0:
    set32(c.r[3], ld32((c.r[2].w[0] + 392u)));
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001639F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 12ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00163A08; } }
L_001639F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00163A08; } }
L_00163A04:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00163A08:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00163A20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 72u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.f[21] = c.f[12];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = c.f[14];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 11264u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00163AC4; } }
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00163AC4; } }
    set32(c.r[2], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00163AC4; } }
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00163AC4; } }
    set32(c.r[2], 0u + 167u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00163AC4; } }
    set32(c.r[2], 0u + 199u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00163AC4; } }
    set32(c.r[2], 0u + 198u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00163AC4; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00163AC4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00163AD0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00163AD0; } }
L_00163AC4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00163AD4; } }
L_00163AD0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00163AD4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00163C90; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163AECu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x00163AECu) [[unlikely]] return; }
L_00163AEC:
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00163C90; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[21] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163B20u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x00163B20u) [[unlikely]] return; }
L_00163B20:
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00163C60; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00163BE0; } }
    c.f[0] = ld32((c.r[16].w[0] + 11556u));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[1] = ld32((c.r[17].w[0] + 25456u));
    c.r[18].d[0] = 0ull + 0ull;
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00163B9C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163B78u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x00163B78u) [[unlikely]] return; }
L_00163B78:
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = ld32((c.r[17].w[0] + 25456u));
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00163B9C; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_00163B9C:
    c.r[2].d[0] = c.r[18].sd[0] < 1ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00163C10; } }
    set32(c.r[2], 0u + 6u);
    set32(c.r[4], ld32((c.r[16].w[0] + 7700u)));
    st32((c.r[16].w[0] + 13088u), c.r[2].w[0]);
    set32(c.r[3], 0u + 9u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00163C90; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[12] = ld32((c.r[5].w[0] + 11556u));
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163BD8u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x00163BD8u) [[unlikely]] return; }
L_00163BD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00163C90; } }
L_00163BE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163BECu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x00163BECu) [[unlikely]] return; }
L_00163BEC:
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[1] = ld32((c.r[2].w[0] + 25456u));
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00163C24; } }
L_00163C10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163C1Cu);  if (depth < kMaxDepth) unit_0018(c, 416u, depth + 1u); else { c.pc = 0x00163790u; return; } if (c.pc != 0x00163C1Cu) [[unlikely]] return; }
L_00163C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00163C90; } }
L_00163C24:
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00163C90; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163C40u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x00163C40u) [[unlikely]] return; }
L_00163C40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.f[12] = c.f[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163C58u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x00163C58u) [[unlikely]] return; }
L_00163C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00163C90; } }
L_00163C60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163C6Cu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x00163C6Cu) [[unlikely]] return; }
L_00163C6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163C84u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x00163C84u) [[unlikely]] return; }
L_00163C84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 25460u)));
    st32((c.r[16].w[0] + 13088u), c.r[3].w[0]);
    c.budget -= 3;
L_00163C90:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 72u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00163CB8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 211u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00163DF8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] + 11104u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163D04u);  if (depth < kMaxDepth) unit_0067(c, 150u, depth + 1u); else { c.pc = 0x0029D7A8u; return; } if (c.pc != 0x00163D04u) [[unlikely]] return; }
L_00163D04:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00163DF8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], 0u + 1536u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 6944u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] - 1392u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00163DFC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00163DF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 25932u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00163DF8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 172u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00163DF8; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00163DF8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 4984u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00163D94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163D8Cu);  if (depth < kMaxDepth) unit_0071(c, 327u, depth + 1u); else { c.pc = 0x002C7790u; return; } if (c.pc != 0x00163D8Cu) [[unlikely]] return; }
L_00163D8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00163DA4; } }
L_00163D94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 13360u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00163DA8; } }
L_00163DA4:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_00163DA8:
    set32(c.r[18], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[18].d[0];  if (t) { goto L_00163DF8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163DC4u);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x00163DC4u) [[unlikely]] return; }
L_00163DC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00163DF8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] + 24688u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00163DFC; } }
L_00163DF8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00163DFC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00163E18:
    set32(c.r[29], c.r[29].w[0] - 2272u);
    st128((c.r[29].w[0] + 2208u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 2224u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 2192u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    st128((c.r[29].w[0] + 2176u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 2160u) & ~15u, c.r[20]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 2144u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 2128u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 2256u), c.f[22]);
    st32((c.r[29].w[0] + 2248u), c.f[21]);
    st32((c.r[29].w[0] + 2240u), c.f[20]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163E5Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00163E5Cu) [[unlikely]] return; }
L_00163E5C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00163E78; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 392u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0019(c, 11u, depth); } }
L_00163E78:
    set32(c.r[3], ld32((c.r[4].w[0] + 392u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0019(c, 11u, depth); } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163E94u);  if (depth < kMaxDepth) unit_0018(c, 439u, depth + 1u); else { c.pc = 0x00163CB8u; return; } if (c.pc != 0x00163E94u) [[unlikely]] return; }
L_00163E94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0019(c, 11u, depth); } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[18], 0u + 268u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[16], c.r[3].w[0] - 14152u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163EE8u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00163EE8u) [[unlikely]] return; }
L_00163EE8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    set32(c.r[3], 0u + 50u);
    c.f[22] = ld32((c.r[29].w[0] + 132u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00163F48; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 1600u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163F30u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00163F30u) [[unlikely]] return; }
L_00163F30:
    c.f[0] = ld32((c.r[29].w[0] + 1732u));
    st32((c.r[19].w[0] + 25468u), c.f[0]);
    st32((c.r[20].w[0] + 25464u), c.f[0]);
    st32((c.r[29].w[0] + 532u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00163FDC; } }
L_00163F48:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], c.r[29].w[0] + 544u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163F7Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00163F7Cu) [[unlikely]] return; }
L_00163F7C:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 1072u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163FB0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00163FB0u) [[unlikely]] return; }
L_00163FB0:
    c.f[1] = ld32((c.r[29].w[0] + 1204u));
    c.f[0] = ld32((c.r[29].w[0] + 676u));
    st32((c.r[20].w[0] + 25464u), c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[19].w[0] + 25468u), c.f[0]);
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00163FD8; } }
    st32((c.r[29].w[0] + 532u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00163FDC; } }
L_00163FD8:
    st32((c.r[29].w[0] + 532u), c.f[1]);
    c.budget -= 1;
L_00163FDC:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], 0u + 268u);
    set32(c.r[6], c.r[21].w[0] - 14152u);
    c.f[21] = ld32((c.r[29].w[0] + 532u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    [[clang::musttail]] return unit_0019(c, 1u, depth);
}

}
