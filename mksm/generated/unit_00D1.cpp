#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00D1[4096] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 40, 0,
    41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0,
    0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0,
    0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0,
    0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0,
    0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0,
    0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0,
    0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0,
    0, 0, 288, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 297, 0, 0, 0,
    298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0,
    304, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335,
    0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0,
    0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0,
    0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0,
    0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0,
    0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0,
    0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    386, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 403, 0,
    0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0,
    0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0,
    0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 421,
    0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0,
    425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 431, 0,
    0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0,
    0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0,
    0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0,
};

void unit_00D1(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00444000;
    case 2u: goto L_00444008;
    case 3u: goto L_00444010;
    case 4u: goto L_00444018;
    case 5u: goto L_00444020;
    case 6u: goto L_0044404C;
    case 7u: goto L_00444060;
    case 8u: goto L_00444070;
    case 9u: goto L_00444098;
    case 10u: goto L_004440AC;
    case 11u: goto L_004440CC;
    case 12u: goto L_004440D4;
    case 13u: goto L_004440DC;
    case 14u: goto L_004440E4;
    case 15u: goto L_004440EC;
    case 16u: goto L_004440F4;
    case 17u: goto L_00444118;
    case 18u: goto L_00444130;
    case 19u: goto L_00444148;
    case 20u: goto L_0044417C;
    case 21u: goto L_00444190;
    case 22u: goto L_004441B8;
    case 23u: goto L_004441EC;
    case 24u: goto L_004441F8;
    case 25u: goto L_00444228;
    case 26u: goto L_00444238;
    case 27u: goto L_00444270;
    case 28u: goto L_00444290;
    case 29u: goto L_004442A0;
    case 30u: goto L_004442C8;
    case 31u: goto L_004442E0;
    case 32u: goto L_004442F8;
    case 33u: goto L_00444308;
    case 34u: goto L_00444318;
    case 35u: goto L_00444330;
    case 36u: goto L_00444338;
    case 37u: goto L_00444340;
    case 38u: goto L_00444358;
    case 39u: goto L_00444370;
    case 40u: goto L_00444378;
    case 41u: goto L_00444380;
    case 42u: goto L_00444394;
    case 43u: goto L_004443A8;
    case 44u: goto L_004443B0;
    case 45u: goto L_004443B8;
    case 46u: goto L_004443C0;
    case 47u: goto L_004443C8;
    case 48u: goto L_004443D0;
    case 49u: goto L_004443D8;
    case 50u: goto L_004443F8;
    case 51u: goto L_00444420;
    case 52u: goto L_00444440;
    case 53u: goto L_00444460;
    case 54u: goto L_00444468;
    case 55u: goto L_0044449C;
    case 56u: goto L_00444518;
    case 57u: goto L_00444528;
    case 58u: goto L_00444530;
    case 59u: goto L_0044455C;
    case 60u: goto L_00444588;
    case 61u: goto L_00444590;
    case 62u: goto L_004445A0;
    case 63u: goto L_004445B0;
    case 64u: goto L_004445C8;
    case 65u: goto L_004445E0;
    case 66u: goto L_00444600;
    case 67u: goto L_00444608;
    case 68u: goto L_00444624;
    case 69u: goto L_00444640;
    case 70u: goto L_00444668;
    case 71u: goto L_00444678;
    case 72u: goto L_004446A0;
    case 73u: goto L_004446E0;
    case 74u: goto L_004446E8;
    case 75u: goto L_00444724;
    case 76u: goto L_00444748;
    case 77u: goto L_00444770;
    case 78u: goto L_00444798;
    case 79u: goto L_004447CC;
    case 80u: goto L_00444830;
    case 81u: goto L_00444858;
    case 82u: goto L_0044487C;
    case 83u: goto L_004448A8;
    case 84u: goto L_00444904;
    case 85u: goto L_00444920;
    case 86u: goto L_00444930;
    case 87u: goto L_00444940;
    case 88u: goto L_00444950;
    case 89u: goto L_0044495C;
    case 90u: goto L_0044496C;
    case 91u: goto L_0044497C;
    case 92u: goto L_00444994;
    case 93u: goto L_004449A8;
    case 94u: goto L_004449D0;
    case 95u: goto L_004449E8;
    case 96u: goto L_004449F8;
    case 97u: goto L_00444A18;
    case 98u: goto L_00444A44;
    case 99u: goto L_00444ACC;
    case 100u: goto L_00444B18;
    case 101u: goto L_00444B78;
    case 102u: goto L_00444BC8;
    case 103u: goto L_00444BE0;
    case 104u: goto L_00444BEC;
    case 105u: goto L_00444C24;
    case 106u: goto L_00444C58;
    case 107u: goto L_00444C68;
    case 108u: goto L_00444C98;
    case 109u: goto L_00444CAC;
    case 110u: goto L_00444CF8;
    case 111u: goto L_00444D20;
    case 112u: goto L_00444D78;
    case 113u: goto L_00444D8C;
    case 114u: goto L_00444DB8;
    case 115u: goto L_00444DF4;
    case 116u: goto L_00444E24;
    case 117u: goto L_00444E4C;
    case 118u: goto L_00444E98;
    case 119u: goto L_00444EC8;
    case 120u: goto L_00444EE8;
    case 121u: goto L_00444F08;
    case 122u: goto L_00444F50;
    case 123u: goto L_00444F8C;
    case 124u: goto L_00444FA0;
    case 125u: goto L_00445018;
    case 126u: goto L_00445078;
    case 127u: goto L_004450C0;
    case 128u: goto L_004450F0;
    case 129u: goto L_0044510C;
    case 130u: goto L_00445120;
    case 131u: goto L_004451C8;
    case 132u: goto L_004451EC;
    case 133u: goto L_00445204;
    case 134u: goto L_0044521C;
    case 135u: goto L_00445250;
    case 136u: goto L_00445274;
    case 137u: goto L_004452AC;
    case 138u: goto L_004452D8;
    case 139u: goto L_00445308;
    case 140u: goto L_00445324;
    case 141u: goto L_00445344;
    case 142u: goto L_00445358;
    case 143u: goto L_00445378;
    case 144u: goto L_004453CC;
    case 145u: goto L_004453F8;
    case 146u: goto L_00445418;
    case 147u: goto L_00445428;
    case 148u: goto L_00445450;
    case 149u: goto L_00445480;
    case 150u: goto L_004454A0;
    case 151u: goto L_004454C4;
    case 152u: goto L_004454F8;
    case 153u: goto L_00445524;
    case 154u: goto L_00445534;
    case 155u: goto L_0044554C;
    case 156u: goto L_00445568;
    case 157u: goto L_00445570;
    case 158u: goto L_004455B8;
    case 159u: goto L_004455FC;
    case 160u: goto L_00445624;
    case 161u: goto L_00445660;
    case 162u: goto L_00445690;
    case 163u: goto L_004456A4;
    case 164u: goto L_004456B4;
    case 165u: goto L_004456C8;
    case 166u: goto L_00445700;
    case 167u: goto L_0044572C;
    case 168u: goto L_0044573C;
    case 169u: goto L_0044574C;
    case 170u: goto L_00445770;
    case 171u: goto L_00445798;
    case 172u: goto L_004457A8;
    case 173u: goto L_004457BC;
    case 174u: goto L_004457E0;
    case 175u: goto L_004457F8;
    case 176u: goto L_00445848;
    case 177u: goto L_00445870;
    case 178u: goto L_004458A8;
    case 179u: goto L_004458B8;
    case 180u: goto L_004458D8;
    case 181u: goto L_00445910;
    case 182u: goto L_00445940;
    case 183u: goto L_00445964;
    case 184u: goto L_00445974;
    case 185u: goto L_00445990;
    case 186u: goto L_004459BC;
    case 187u: goto L_004459D4;
    case 188u: goto L_004459F8;
    case 189u: goto L_00445A14;
    case 190u: goto L_00445A1C;
    case 191u: goto L_00445A24;
    case 192u: goto L_00445A2C;
    case 193u: goto L_00445A34;
    case 194u: goto L_00445A3C;
    case 195u: goto L_00445A50;
    case 196u: goto L_00445A70;
    case 197u: goto L_00445A84;
    case 198u: goto L_00445A98;
    case 199u: goto L_00445AD8;
    case 200u: goto L_00445B00;
    case 201u: goto L_00445B10;
    case 202u: goto L_00445B24;
    case 203u: goto L_00445B48;
    case 204u: goto L_00445B74;
    case 205u: goto L_00445B84;
    case 206u: goto L_00445BA8;
    case 207u: goto L_00445BBC;
    case 208u: goto L_00445BF0;
    case 209u: goto L_00445C08;
    case 210u: goto L_00445C28;
    case 211u: goto L_00445C38;
    case 212u: goto L_00445C48;
    case 213u: goto L_00445C64;
    case 214u: goto L_00445C78;
    case 215u: goto L_00445C84;
    case 216u: goto L_00445C94;
    case 217u: goto L_00445CA4;
    case 218u: goto L_00445CC4;
    case 219u: goto L_00445D00;
    case 220u: goto L_00445D40;
    case 221u: goto L_00445D54;
    case 222u: goto L_00445DB0;
    case 223u: goto L_00445DDC;
    case 224u: goto L_00445DFC;
    case 225u: goto L_00445E48;
    case 226u: goto L_00445E5C;
    case 227u: goto L_00445EF8;
    case 228u: goto L_00445F00;
    case 229u: goto L_00445F28;
    case 230u: goto L_00445F4C;
    case 231u: goto L_00445F9C;
    case 232u: goto L_00445FB8;
    case 233u: goto L_00445FF4;
    case 234u: goto L_00446000;
    case 235u: goto L_00446038;
    case 236u: goto L_00446060;
    case 237u: goto L_00446068;
    case 238u: goto L_004460AC;
    case 239u: goto L_004460BC;
    case 240u: goto L_00446100;
    case 241u: goto L_00446158;
    case 242u: goto L_00446188;
    case 243u: goto L_004461A0;
    case 244u: goto L_004461BC;
    case 245u: goto L_004461F0;
    case 246u: goto L_00446208;
    case 247u: goto L_00446210;
    case 248u: goto L_00446218;
    case 249u: goto L_00446220;
    case 250u: goto L_00446228;
    case 251u: goto L_00446248;
    case 252u: goto L_00446268;
    case 253u: goto L_00446288;
    case 254u: goto L_004462A8;
    case 255u: goto L_004462C8;
    case 256u: goto L_004462EC;
    case 257u: goto L_004462F4;
    case 258u: goto L_00446308;
    case 259u: goto L_00446350;
    case 260u: goto L_00446358;
    case 261u: goto L_0044639C;
    case 262u: goto L_004463B8;
    case 263u: goto L_004463D8;
    case 264u: goto L_004463F8;
    case 265u: goto L_0044641C;
    case 266u: goto L_00446448;
    case 267u: goto L_00446458;
    case 268u: goto L_00446460;
    case 269u: goto L_004464D0;
    case 270u: goto L_00446510;
    case 271u: goto L_00446550;
    case 272u: goto L_00446558;
    case 273u: goto L_00446588;
    case 274u: goto L_004465D0;
    case 275u: goto L_00446610;
    case 276u: goto L_00446658;
    case 277u: goto L_0044666C;
    case 278u: goto L_00446698;
    case 279u: goto L_004466D0;
    case 280u: goto L_004466E4;
    case 281u: goto L_00446710;
    case 282u: goto L_00446720;
    case 283u: goto L_0044674C;
    case 284u: goto L_004467A8;
    case 285u: goto L_004467D8;
    case 286u: goto L_00446838;
    case 287u: goto L_00446878;
    case 288u: goto L_00446888;
    case 289u: goto L_00446890;
    case 290u: goto L_00446898;
    case 291u: goto L_004468C4;
    case 292u: goto L_00446914;
    case 293u: goto L_00446928;
    case 294u: goto L_0044693C;
    case 295u: goto L_00446958;
    case 296u: goto L_00446960;
    case 297u: goto L_00446970;
    case 298u: goto L_00446980;
    case 299u: goto L_00446998;
    case 300u: goto L_004469B4;
    case 301u: goto L_004469C4;
    case 302u: goto L_004469E0;
    case 303u: goto L_004469F8;
    case 304u: goto L_00446A00;
    case 305u: goto L_00446A0C;
    case 306u: goto L_00446A14;
    case 307u: goto L_00446A30;
    case 308u: goto L_00446A48;
    case 309u: goto L_00446A58;
    case 310u: goto L_00446AA0;
    case 311u: goto L_00446AC8;
    case 312u: goto L_00446AD8;
    case 313u: goto L_00446B0C;
    case 314u: goto L_00446B40;
    case 315u: goto L_00446B58;
    case 316u: goto L_00446B8C;
    case 317u: goto L_00446BA0;
    case 318u: goto L_00446BB0;
    case 319u: goto L_00446BC4;
    case 320u: goto L_00446C08;
    case 321u: goto L_00446C1C;
    case 322u: goto L_00446C2C;
    case 323u: goto L_00446C3C;
    case 324u: goto L_00446C68;
    case 325u: goto L_00446C98;
    case 326u: goto L_00446CD0;
    case 327u: goto L_00446CFC;
    case 328u: goto L_00446D2C;
    case 329u: goto L_00446D50;
    case 330u: goto L_00446D70;
    case 331u: goto L_00446D80;
    case 332u: goto L_00446D90;
    case 333u: goto L_00446DB8;
    case 334u: goto L_00446DE0;
    case 335u: goto L_00446DFC;
    case 336u: goto L_00446E14;
    case 337u: goto L_00446E28;
    case 338u: goto L_00446E68;
    case 339u: goto L_00446E84;
    case 340u: goto L_00446ED8;
    case 341u: goto L_00446EF8;
    case 342u: goto L_00446F10;
    case 343u: goto L_00446F20;
    case 344u: goto L_00446F40;
    case 345u: goto L_00446F5C;
    case 346u: goto L_00446F78;
    case 347u: goto L_00446FC0;
    case 348u: goto L_00446FE0;
    case 349u: goto L_00447000;
    case 350u: goto L_00447064;
    case 351u: goto L_00447074;
    case 352u: goto L_004470BC;
    case 353u: goto L_004470D4;
    case 354u: goto L_004470E8;
    case 355u: goto L_00447154;
    case 356u: goto L_00447174;
    case 357u: goto L_00447190;
    case 358u: goto L_004471B8;
    case 359u: goto L_0044725C;
    case 360u: goto L_00447270;
    case 361u: goto L_004472C0;
    case 362u: goto L_0044733C;
    case 363u: goto L_00447378;
    case 364u: goto L_004473E0;
    case 365u: goto L_00447404;
    case 366u: goto L_00447414;
    case 367u: goto L_00447468;
    case 368u: goto L_004474AC;
    case 369u: goto L_004474C0;
    case 370u: goto L_00447518;
    case 371u: goto L_00447530;
    case 372u: goto L_00447540;
    case 373u: goto L_00447548;
    case 374u: goto L_00447578;
    case 375u: goto L_0044758C;
    case 376u: goto L_004475C0;
    case 377u: goto L_00447610;
    case 378u: goto L_00447628;
    case 379u: goto L_00447678;
    case 380u: goto L_00447690;
    case 381u: goto L_004476A0;
    case 382u: goto L_004476A8;
    case 383u: goto L_004476E0;
    case 384u: goto L_004476F4;
    case 385u: goto L_00447728;
    case 386u: goto L_00447780;
    case 387u: goto L_00447790;
    case 388u: goto L_004477A4;
    case 389u: goto L_004477B8;
    case 390u: goto L_004477EC;
    case 391u: goto L_0044781C;
    case 392u: goto L_00447830;
    case 393u: goto L_00447838;
    case 394u: goto L_00447848;
    case 395u: goto L_00447860;
    case 396u: goto L_00447870;
    case 397u: goto L_00447890;
    case 398u: goto L_004478A0;
    case 399u: goto L_004478D0;
    case 400u: goto L_004478E8;
    case 401u: goto L_0044795C;
    case 402u: goto L_00447968;
    case 403u: goto L_00447978;
    case 404u: goto L_00447998;
    case 405u: goto L_004479B8;
    case 406u: goto L_004479F8;
    case 407u: goto L_00447A14;
    case 408u: goto L_00447A48;
    case 409u: goto L_00447A7C;
    case 410u: goto L_00447B00;
    case 411u: goto L_00447B1C;
    case 412u: goto L_00447B34;
    case 413u: goto L_00447B50;
    case 414u: goto L_00447B78;
    case 415u: goto L_00447B88;
    case 416u: goto L_00447B98;
    case 417u: goto L_00447BB4;
    case 418u: goto L_00447BC8;
    case 419u: goto L_00447BD8;
    case 420u: goto L_00447BF0;
    case 421u: goto L_00447BFC;
    case 422u: goto L_00447C20;
    case 423u: goto L_00447C4C;
    case 424u: goto L_00447C60;
    case 425u: goto L_00447C80;
    case 426u: goto L_00447CCC;
    case 427u: goto L_00447D00;
    case 428u: goto L_00447D28;
    case 429u: goto L_00447D58;
    case 430u: goto L_00447D6C;
    case 431u: goto L_00447D78;
    case 432u: goto L_00447D94;
    case 433u: goto L_00447DA8;
    case 434u: goto L_00447DC8;
    case 435u: goto L_00447DE8;
    case 436u: goto L_00447E0C;
    case 437u: goto L_00447E30;
    case 438u: goto L_00447E58;
    case 439u: goto L_00447E78;
    case 440u: goto L_00447E90;
    case 441u: goto L_00447F28;
    case 442u: goto L_00447F90;
    case 443u: goto L_00447FA0;
    case 444u: goto L_00447FB0;
    case 445u: goto L_00447FC4;
    case 446u: goto L_00447FE0;
    case 447u: goto L_00447FF0;
    default: bad_entry(c, 0x00444000u); return;
    }
L_00444000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444008u); set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00D4(c, 45u, depth + 1u); else { c.pc = 0x004506B0u; return; } if (c.pc != 0x00444008u) [[unlikely]] return; }
L_00444008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444010u); set32(c.r[4], c.r[16].w[0] + 444u);  if (depth < kMaxDepth) unit_00D0(c, 243u, depth + 1u); else { c.pc = 0x00441E90u; return; } if (c.pc != 0x00444010u) [[unlikely]] return; }
L_00444010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444018u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 7u, depth + 1u); else { c.pc = 0x00444060u; return; } if (c.pc != 0x00444018u) [[unlikely]] return; }
L_00444018:
    set32(c.r[2], 0u + 7u);
    set32(c.r[16], c.r[16].w[0] + 544u);
    c.budget -= 2;
L_00444020:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00444020u | kUnwind; return; } goto L_00444020; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044404Cu); set32(c.r[4], c.r[4].w[0] - 1592u);  if (depth < kMaxDepth) unit_00D4(c, 204u, depth + 1u); else { c.pc = 0x00451F48u; return; } if (c.pc != 0x0044404Cu) [[unlikely]] return; }
L_0044404C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00444060:
    set32(c.r[4], c.r[4].w[0] + 508u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), 0u);  c.pc = t; return; }
L_00444070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], 0u + 7u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] - 1524u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 10;
L_00444098:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004440B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004440ACu);  if (depth < kMaxDepth) unit_00D3(c, 315u, depth + 1u); else { c.pc = 0x0044EBE8u; return; } if (c.pc != 0x004440ACu) [[unlikely]] return; }
L_004440AC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004440B0:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444098u | kUnwind; return; } goto L_00444098; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[16].w[0] - 1608u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004440CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 46u, depth + 1u); else { c.pc = 0x004506C0u; return; } if (c.pc != 0x004440CCu) [[unlikely]] return; }
L_004440CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004440D4u); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00D0(c, 244u, depth + 1u); else { c.pc = 0x00441EA8u; return; } if (c.pc != 0x004440D4u) [[unlikely]] return; }
L_004440D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004440DCu); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00D4(c, 205u, depth + 1u); else { c.pc = 0x00451FE0u; return; } if (c.pc != 0x004440DCu) [[unlikely]] return; }
L_004440DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004440E4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 36u, depth + 1u); else { c.pc = 0x00444338u; return; } if (c.pc != 0x004440E4u) [[unlikely]] return; }
L_004440E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004440ECu);  if (depth < kMaxDepth) unit_00D1(c, 34u, depth + 1u); else { c.pc = 0x00444318u; return; } if (c.pc != 0x004440ECu) [[unlikely]] return; }
L_004440EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004440F4u);  if (depth < kMaxDepth) unit_00D1(c, 31u, depth + 1u); else { c.pc = 0x004442E0u; return; } if (c.pc != 0x004440F4u) [[unlikely]] return; }
L_004440F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    if (c.r[16].d[0] == 0) c.r[2].d[0] = c.r[18].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00444118:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00444130; }
L_00444130:
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_00444148:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_004441A4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00444188; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044417Cu); set32(c.r[4], c.r[4].w[0] - 1628u);  if (depth < kMaxDepth) unit_00D1(c, 22u, depth + 1u); else { c.pc = 0x004441B8u; return; } if (c.pc != 0x0044417Cu) [[unlikely]] return; }
L_0044417C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004441A4; } }
    c.budget -= 1;
L_00444188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444190u); set32(c.r[4], c.r[16].w[0] + 2552u);  if (depth < kMaxDepth) unit_00D1(c, 22u, depth + 1u); else { c.pc = 0x004441B8u; return; } if (c.pc != 0x00444190u) [[unlikely]] return; }
L_00444190:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[3], 0u - c.r[2].w[0]);  if (t) { goto L_004441A0; } }
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 1;
L_004441A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004441A4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004441B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004441D0; } }
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_004441D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004441F0; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004441F0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004441ECu); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004441ECu) [[unlikely]] return; }
L_004441EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004441F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004441F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_00444230; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444228u); set32(c.r[4], c.r[4].w[0] - 1628u);  if (depth < kMaxDepth) unit_00D1(c, 28u, depth + 1u); else { c.pc = 0x00444290u; return; } if (c.pc != 0x00444228u) [[unlikely]] return; }
L_00444228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00444274; } }
L_00444230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444238u);  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x00444238u) [[unlikely]] return; }
L_00444238:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00444260; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 257ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_00444260:
    set32(c.r[4], c.r[16].w[0] + 2552u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444270u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 28u, depth + 1u); else { c.pc = 0x00444290u; return; } if (c.pc != 0x00444270u) [[unlikely]] return; }
L_00444270:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00444274:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00444290:
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_004442A0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004442BC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_004442BC; } }
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] - 2048u), c.r[4].w[0]);
    c.budget -= 2;
L_004442BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004442C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00424D78u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 93u, depth); }
L_004442E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00424DF8u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 99u, depth); }
L_004442F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444308u);  if (depth < kMaxDepth) unit_00D3(c, 138u, depth + 1u); else { c.pc = 0x0044D648u; return; } if (c.pc != 0x00444308u) [[unlikely]] return; }
L_00444308:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00443420u | kUnwind; return; } [[clang::musttail]] return unit_00D0(c, 387u, depth); }
L_00444318:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00443440u | kUnwind; return; } [[clang::musttail]] return unit_00D0(c, 388u, depth); }
L_00444330:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00444338:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00444340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00426EE0u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 292u, depth); }
L_00444358:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00426EF8u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 293u, depth); }
L_00444370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00444378:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00444380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444394u); set32(c.r[5], ld32((c.r[4].w[0] + 8004u)));  if (depth < kMaxDepth) unit_00D0(c, 340u, depth + 1u); else { c.pc = 0x00442E28u; return; } if (c.pc != 0x00444394u) [[unlikely]] return; }
L_00444394:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004443A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004443B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004443B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004443C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004443C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004443D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004443D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8004u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004426C8u | kUnwind; return; } [[clang::musttail]] return unit_00D0(c, 299u, depth); }
L_004443F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 8004u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004427A0u | kUnwind; return; } [[clang::musttail]] return unit_00D0(c, 302u, depth); }
L_00444420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 1281ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_00444440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 1281ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_00444460:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00444468:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044449Cu); c.r[20].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044449Cu) [[unlikely]] return; }
L_0044449C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[3], c.r[17].w[0] - 188u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 369ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(68ll) ? 1ull : 0ull;  if (t) { goto L_004444D8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_004444D8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_004444FC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8060u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 336u), c.r[19].w[0]);
    st32((c.r[3].w[0] - 688u), c.r[18].w[0]);
    st32((c.r[4].w[0] + 340u), c.r[20].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
L_004444FC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00444518:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444528u);  if (depth < kMaxDepth) unit_00D1(c, 60u, depth + 1u); else { c.pc = 0x00444588u; return; } if (c.pc != 0x00444528u) [[unlikely]] return; }
L_00444528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00770000u);  if (t) { goto L_00444550; } }
L_00444530:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00444530u | kUnwind; return; } goto L_00444530; } }
    c.budget -= 1;
L_00444550:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044455Cu); set32(c.r[5], c.r[5].w[0] - 31528u);  if (depth < kMaxDepth) unit_00D6(c, 19u, depth + 1u); else { c.pc = 0x00458938u; return; } if (c.pc != 0x0044455Cu) [[unlikely]] return; }
L_0044455C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00444578; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 3329ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_00444578:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[3].w[0] - 1488u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00444588:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00444590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004445A0u);  if (depth < kMaxDepth) unit_00D6(c, 29u, depth + 1u); else { c.pc = 0x00458A40u; return; } if (c.pc != 0x004445A0u) [[unlikely]] return; }
L_004445A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004445B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_004445C8; }
L_004445C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004445E0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 170u, depth + 1u); else { c.pc = 0x00445770u; return; } if (c.pc != 0x004445E0u) [[unlikely]] return; }
L_004445E0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004445F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00444628; } }
    c.budget -= 1;
L_004445F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444600u);  if (depth < kMaxDepth) unit_00D1(c, 69u, depth + 1u); else { c.pc = 0x00444640u; return; } if (c.pc != 0x00444600u) [[unlikely]] return; }
L_00444600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444608u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 72u, depth + 1u); else { c.pc = 0x004446A0u; return; } if (c.pc != 0x00444608u) [[unlikely]] return; }
L_00444608:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00444624; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444624u);  if (depth < kMaxDepth) unit_00D1(c, 188u, depth + 1u); else { c.pc = 0x004459F8u; return; } if (c.pc != 0x00444624u) [[unlikely]] return; }
L_00444624:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00444628:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00444640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 85u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8060u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444668u); set32(c.r[18], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00444668u) [[unlikely]] return; }
L_00444668:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 86u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444678u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00444678u) [[unlikely]] return; }
L_00444678:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00D5(c, 264u, depth); }
L_004446A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    c.r[20].d[0] = c.r[20].d[0] | 65534ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_00444704; } }
L_004446E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004446E8u);  if (depth < kMaxDepth) unit_00D1(c, 81u, depth + 1u); else { c.pc = 0x00444858u; return; } if (c.pc != 0x004446E8u) [[unlikely]] return; }
L_004446E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00444764; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00444704:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00444764; } }
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 8u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444724u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00D1(c, 78u, depth + 1u); else { c.pc = 0x00444798u; return; } if (c.pc != 0x00444724u) [[unlikely]] return; }
L_00444724:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 12u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[8], c.r[29].w[0] + 16u);  if (t) { goto L_00444764; } }
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444748u); set32(c.r[9], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_00D1(c, 83u, depth + 1u); else { c.pc = 0x004448A8u; return; } if (c.pc != 0x00444748u) [[unlikely]] return; }
L_00444748:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00444760; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004446E0u | kUnwind; return; } goto L_004446E0; } }
L_00444760:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00444764:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444770u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 232u, depth + 1u); else { c.pc = 0x00445FB8u; return; } if (c.pc != 0x00444770u) [[unlikely]] return; }
L_00444770:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00444798:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004447CCu); set32(c.r[5], ld32((c.r[16].w[0] + 8068u)));  if (depth < kMaxDepth) unit_00D0(c, 300u, depth + 1u); else { c.pc = 0x004426E0u; return; } if (c.pc != 0x004447CCu) [[unlikely]] return; }
L_004447CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00444840; }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0])));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0]), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044483C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 14252u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044483C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 14248u)));
    c.r[2].d[0] = c.r[2].d[0] & 2047ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044483C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 14240u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 14244u)));  if (t) { goto L_00444830; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00444830u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00444830u) [[unlikely]] return; }
L_00444830:
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[16].w[0] + 14252u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0044483C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00444840:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00444858:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044487Cu); set32(c.r[5], ld32((c.r[16].w[0] + 8068u)));  if (depth < kMaxDepth) unit_00D0(c, 303u, depth + 1u); else { c.pc = 0x004427B8u; return; } if (c.pc != 0x0044487Cu) [[unlikely]] return; }
L_0044487C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00444894; }
    set32(c.r[3], ld32((c.r[16].w[0] + 14248u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0] + 14248u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_00444894:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004448A8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[7].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    st32((c.r[21].w[0]), 0u);
    st32((c.r[18].w[0]), 0u);
    set32(c.r[19], ld32((c.r[17].w[0] + 8060u)));
    st32((c.r[29].w[0] + 20u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444904u); set32(c.r[20], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_00D1(c, 175u, depth + 1u); else { c.pc = 0x004457F8u; return; } if (c.pc != 0x00444904u) [[unlikely]] return; }
L_00444904:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00444B4C; }
    c.r[2].d[0] = c.r[22].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[30].d[0] = 0ull + 0ull;  goto L_00444924; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444920u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 6u, depth + 1u); else { c.pc = 0x00458678u; return; } if (c.pc != 0x00444920u) [[unlikely]] return; }
L_00444920:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00444924:
    set32(c.r[5], 0u + 87u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444930u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00444930u) [[unlikely]] return; }
L_00444930:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444940u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00444940u) [[unlikely]] return; }
L_00444940:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444950u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 266u, depth + 1u); else { c.pc = 0x004569C8u; return; } if (c.pc != 0x00444950u) [[unlikely]] return; }
L_00444950:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044495Cu); set32(c.r[5], 0u + 91u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044495Cu) [[unlikely]] return; }
L_0044495C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044496Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044496Cu) [[unlikely]] return; }
L_0044496C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044497Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 268u, depth + 1u); else { c.pc = 0x00456A18u; return; } if (c.pc != 0x0044497Cu) [[unlikely]] return; }
L_0044497C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444994u); set32(c.r[8], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00D5(c, 270u, depth + 1u); else { c.pc = 0x00456A68u; return; } if (c.pc != 0x00444994u) [[unlikely]] return; }
L_00444994:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004449AC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004449A8u); c.r[5].d[0] = c.r[5].d[0] | 3331ull;  if (depth < kMaxDepth) unit_00D1(c, 19u, depth + 1u); else { c.pc = 0x00444148u; return; } if (c.pc != 0x004449A8u) [[unlikely]] return; }
L_004449A8:
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_004449AC:
    set32(c.r[16], ld32((c.r[29].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_004449D4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004449D0u); c.r[7].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 228u, depth + 1u); else { c.pc = 0x00445F00u; return; } if (c.pc != 0x004449D0u) [[unlikely]] return; }
L_004449D0:
    set32(c.r[16], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_004449D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00444A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004449E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 369u, depth + 1u); else { c.pc = 0x00443120u; return; } if (c.pc != 0x004449E8u) [[unlikely]] return; }
L_004449E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  goto L_00444A08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004449F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 174u, depth + 1u); else { c.pc = 0x004457E0u; return; } if (c.pc != 0x004449F8u) [[unlikely]] return; }
L_004449F8:
    set32(c.r[2], 0u + 2048u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_00444B40; } }
    c.budget -= 1;
L_00444A08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00444A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444A18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 371u, depth + 1u); else { c.pc = 0x00443140u; return; } if (c.pc != 0x00444A18u) [[unlikely]] return; }
L_00444A18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_00444A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_00444B40; } }
L_00444A28:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_00444AB0; } }
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444A44u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 101u, depth + 1u); else { c.pc = 0x00444B78u; return; } if (c.pc != 0x00444A44u) [[unlikely]] return; }
L_00444A44:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[2], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_00444B48; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00444B4C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_00444A80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_00444B40; } }
    c.budget -= 1;
L_00444A80:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 344u), c.r[6].w[0]);  goto L_00444AA8; }
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00444B40; } }
    c.budget -= 1;
L_00444AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_00444B44; } }
L_00444AB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0])));  goto L_00444B00; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444ACCu); set32(c.r[5], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00D1(c, 185u, depth + 1u); else { c.pc = 0x00445990u; return; } if (c.pc != 0x00444ACCu) [[unlikely]] return; }
L_00444ACC:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_00444B48; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_00444B48; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], 0u + 1u);  goto L_00444AF4; }
L_00444AF4:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_00444B44; } }
L_00444B00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 12u);
    set32(c.r[8], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[22].w[0] - c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444B18u); set32(c.r[5], c.r[23].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_00D1(c, 111u, depth + 1u); else { c.pc = 0x00444D20u; return; } if (c.pc != 0x00444B18u) [[unlikely]] return; }
L_00444B18:
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_00444B40; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
L_00444B40:
    st32((c.r[19].w[0] + 344u), c.r[2].w[0]);
    c.budget -= 1;
L_00444B44:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 1;
L_00444B48:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00444B4C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00444B78:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[18], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[2], c.r[18].w[0] + 3u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00444BD0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444BC8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 106u, depth + 1u); else { c.pc = 0x00444C58u; return; } if (c.pc != 0x00444BC8u) [[unlikely]] return; }
L_00444BC8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0]), c.r[18].w[0]);  goto L_00444C30; }
L_00444BD0:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00444C08; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x000D0000u);
    c.budget -= 1;
L_00444BE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444BECu); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_00D6(c, 6u, depth + 1u); else { c.pc = 0x00458678u; return; } if (c.pc != 0x00444BECu) [[unlikely]] return; }
L_00444BEC:
    c.r[2].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0]), c.r[18].w[0]);  goto L_00444C30; }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00444BE0u | kUnwind; return; } goto L_00444BE0; } }
L_00444C08:
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), c.r[18].w[0]);  goto L_00444C30; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444C24u); set32(c.r[5], c.r[17].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00D1(c, 108u, depth + 1u); else { c.pc = 0x00444C98u; return; } if (c.pc != 0x00444C24u) [[unlikely]] return; }
L_00444C24:
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[3].d[0];
    st32((c.r[19].w[0]), c.r[18].w[0]);
    c.budget -= 3;
L_00444C30:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00444C58:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00444C8C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 2;
L_00444C68:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00444C90; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[4].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444C68u | kUnwind; return; } goto L_00444C68; }
L_00444C8C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00444C90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00444C98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444CACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 110u, depth + 1u); else { c.pc = 0x00444CF8u; return; } if (c.pc != 0x00444CACu) [[unlikely]] return; }
L_00444CAC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 12u)));  goto L_00444CD8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00444CE8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00444CE8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_00444CD8:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_00444CE8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00444CF8:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 8068u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 4896u);  c.pc = t; return; }
L_00444D20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st32((c.r[20].w[0]), 0u);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[17], ld32((c.r[18].w[0] + 8060u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444D78u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00D6(c, 16u, depth + 1u); else { c.pc = 0x004588B0u; return; } if (c.pc != 0x00444D78u) [[unlikely]] return; }
L_00444D78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00444D90; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444D8Cu); c.r[5].d[0] = c.r[5].d[0] | 3334ull;  if (depth < kMaxDepth) unit_00D1(c, 19u, depth + 1u); else { c.pc = 0x00444148u; return; } if (c.pc != 0x00444D8Cu) [[unlikely]] return; }
L_00444D8C:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00444D90:
    set32(c.r[16], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] >= 0; c.r[8].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00444DC0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444DB8u); c.r[5].d[0] = c.r[5].d[0] | 3342ull;  if (depth < kMaxDepth) unit_00D1(c, 19u, depth + 1u); else { c.pc = 0x00444148u; return; } if (c.pc != 0x00444DB8u) [[unlikely]] return; }
L_00444DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00444E70; } }
L_00444DC0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[2].d[0] = c.r[21].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  goto L_00444DE0; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0]), 0u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00444E6C; } }
    c.budget -= 1;
L_00444DE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[7].w[0] << 2);  goto L_00444E00; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444DF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 185u, depth + 1u); else { c.pc = 0x00445990u; return; } if (c.pc != 0x00444DF4u) [[unlikely]] return; }
L_00444DF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00444E6C; } }
    c.budget -= 1;
L_00444E00:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 688u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] << 2);  goto L_00444E30; }
    set32(c.r[6], ld32((c.r[17].w[0] + 340u)));
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 336u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444E24u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 118u, depth + 1u); else { c.pc = 0x00444E98u; return; } if (c.pc != 0x00444E24u) [[unlikely]] return; }
L_00444E24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_00444E50; } }
    c.budget -= 1;
L_00444E30:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 11600u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00444E4Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00444E4Cu) [[unlikely]] return; }
L_00444E4C:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00444E50:
    set32(c.r[8], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00444E68; } }
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[2].d[0]) { c.r[22].d[0] = c.r[8].d[0] + 0ull;  goto L_00444E68; }
    st32((c.r[20].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_00444E68:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_00444E6C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00444E70:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00444E98:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444EC8u); c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 148u, depth + 1u); else { c.pc = 0x00445450u; return; } if (c.pc != 0x00444EC8u) [[unlikely]] return; }
L_00444EC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00444EEC; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00444EE8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[18].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00444EE8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00444EE8u) [[unlikely]] return; }
L_00444EE8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00444EEC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00444F08:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444F50u); c.r[19].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00444F50u) [[unlikely]] return; }
L_00444F50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[21].w[0] + 8052u);  if (t) { goto L_00444F60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00445048; } }
L_00444F60:
    set32(c.r[18], 0u - 1u);
    set32(c.r[16], ld32((c.r[22].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[16].w[0] + 56u), c.r[17].w[0]);  goto L_00444F74; }
L_00444F74:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[16].w[0] + 48u), c.r[17].w[0]);  goto L_00444F80; }
L_00444F80:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444F8Cu); set32(c.r[5], 0u + 30u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00444F8Cu) [[unlikely]] return; }
L_00444F8C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[18].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00444FCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444FA0u); set32(c.r[5], 0u + 55u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00444FA0u) [[unlikely]] return; }
L_00444FA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 48u)));  goto L_00444FC0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 56u), c.r[20].w[0]);  goto L_00444FCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  if (t) { goto L_00444FD0; } }
L_00444FC0:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_00444FD0; }
    st32((c.r[16].w[0] + 56u), c.r[20].w[0]);
    c.budget -= 1;
L_00444FCC:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_00444FD0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0]; st32((c.r[16].w[0] + 40u), c.r[17].w[0]);  if (t) { goto L_00445048; } }
    c.budget -= 2;
    if (c.r[19].sd[0] < 0) { set32(c.r[5], ld32((c.r[22].w[0] + 24u)));  goto L_00445008; }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[4].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[19].d[0];
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[19].d[0];
    st64((c.r[16].w[0] + 16u), c.r[2].d[0]);
    st64((c.r[16].w[0] + 24u), c.r[3].d[0]);
    set32(c.r[5], ld32((c.r[22].w[0] + 24u)));
    c.budget -= 9;
L_00445008:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
L_00445018:
    c.r[30].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 80u);  goto L_00445570; }
L_00445048:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00445078:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004450C0u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x004450C0u) [[unlikely]] return; }
L_004450C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[17].w[0] + 8052u);  if (t) { goto L_004450D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00445220; } }
L_004450D0:
    set32(c.r[21], 0u - 1u);
    set32(c.r[16], ld32((c.r[23].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[21].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_004450F8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004450F0u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 135u, depth + 1u); else { c.pc = 0x00445250u; return; } if (c.pc != 0x004450F0u) [[unlikely]] return; }
L_004450F0:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 2;
L_004450F8:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[21].d[0]) { st32((c.r[16].w[0] + 44u), c.r[22].w[0]);  goto L_00445100; }
L_00445100:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044510Cu); set32(c.r[5], 0u + 29u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044510Cu) [[unlikely]] return; }
L_0044510C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[21].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004451A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445120u); set32(c.r[5], 0u + 55u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00445120u) [[unlikely]] return; }
L_00445120:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_00445140; }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (t) { goto L_00445148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[22].w[0]);  if (t) { goto L_004451B0; } }
L_00445140:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (t) { goto L_004451AC; } }
L_00445148:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[18].d[0]; c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_004451AC; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 36u), c.r[22].w[0]);  goto L_004451B0; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 36u), c.r[22].w[0]);  goto L_004451B0; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 36u), c.r[22].w[0]);  goto L_004451B0; }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 2u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 36u), c.r[22].w[0]);  goto L_004451B0; }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 3u));
    set32(c.r[2], 0u + 179u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 184u);  if (t) { goto L_00445198; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 36u), c.r[22].w[0]);  goto L_004451B0; }
L_00445198:
    st32((c.r[16].w[0] + 52u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004451AC; } }
    c.budget -= 1;
L_004451A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_004451AC:
    st32((c.r[16].w[0] + 36u), c.r[22].w[0]);
    c.budget -= 1;
L_004451B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[22].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00445220; } }
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004451C8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 77u, depth + 1u); else { c.pc = 0x0044CD08u; return; } if (c.pc != 0x004451C8u) [[unlikely]] return; }
L_004451C8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00445220; } }
    set32(c.r[5], ld32((c.r[23].w[0] + 20u)));
    c.r[8].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004451ECu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 157u, depth + 1u); else { c.pc = 0x00445570u; return; } if (c.pc != 0x004451ECu) [[unlikely]] return; }
L_004451EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00445210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445204u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 80u, depth + 1u); else { c.pc = 0x0044CD78u; return; } if (c.pc != 0x00445204u) [[unlikely]] return; }
L_00445204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00445220; } }
    c.budget -= 1;
L_00445210:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044521Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 104u, depth + 1u); else { c.pc = 0x0044D0B8u; return; } if (c.pc != 0x0044521Cu) [[unlikely]] return; }
L_0044521C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00445220:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00445250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 59u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445274u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00445274u) [[unlikely]] return; }
L_00445274:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_004452BC; } }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004452C0; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004452BC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004452ACu); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00D1(c, 219u, depth + 1u); else { c.pc = 0x00445D00u; return; } if (c.pc != 0x004452ACu) [[unlikely]] return; }
L_004452AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[17].d[0];
    c.budget -= 4;
L_004452BC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004452C0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004452D8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445308u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 391u, depth + 1u); else { c.pc = 0x00443480u; return; } if (c.pc != 0x00445308u) [[unlikely]] return; }
L_00445308:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00445350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445324u);  if (depth < kMaxDepth) unit_00D1(c, 259u, depth + 1u); else { c.pc = 0x00446350u; return; } if (c.pc != 0x00445324u) [[unlikely]] return; }
L_00445324:
    set32(c.r[6], c.r[18].w[0] - 18u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[19].w[0] + 18u);  if (t) { goto L_00445344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445344u);  if (depth < kMaxDepth) unit_00D1(c, 143u, depth + 1u); else { c.pc = 0x00445378u; return; } if (c.pc != 0x00445344u) [[unlikely]] return; }
L_00445344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00445358; } }
    c.budget -= 1;
L_00445350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445358u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 143u, depth + 1u); else { c.pc = 0x00445378u; return; } if (c.pc != 0x00445358u) [[unlikely]] return; }
L_00445358:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00445378:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[8], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[21].w[0] + 8080u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == c.r[8].d[0]; c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0044542C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004453CCu);  if (depth < kMaxDepth) unit_00D0(c, 297u, depth + 1u); else { c.pc = 0x00442678u; return; } if (c.pc != 0x004453CCu) [[unlikely]] return; }
L_004453CC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], ld32((c.r[29].w[0] + 12u)));  if (t) { goto L_0044542C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004453F8u);  if (depth < kMaxDepth) unit_00D1(c, 148u, depth + 1u); else { c.pc = 0x00445450u; return; } if (c.pc != 0x004453F8u) [[unlikely]] return; }
L_004453F8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0044542C; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00445418; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[18].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00445418u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00445418u) [[unlikely]] return; }
L_00445418:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00445428; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00445428u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00445428u) [[unlikely]] return; }
L_00445428:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0044542C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00445450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00445480u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00445480u) [[unlikely]] return; }
L_00445480:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004454E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004454A0u);  if (depth < kMaxDepth) unit_00D1(c, 152u, depth + 1u); else { c.pc = 0x004454F8u; return; } if (c.pc != 0x004454A0u) [[unlikely]] return; }
L_004454A0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);  if (t) { goto L_004454E0; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_004454DC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004454C4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 152u, depth + 1u); else { c.pc = 0x004454F8u; return; } if (c.pc != 0x004454C4u) [[unlikely]] return; }
L_004454C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; set32(c.r[3], c.r[3].w[0] - 1488u);  if (t) { goto L_004454DC; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004454DC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004454E0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004454F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00445524u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00445524u) [[unlikely]] return; }
L_00445524:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445534u); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00D5(c, 252u, depth + 1u); else { c.pc = 0x004565B0u; return; } if (c.pc != 0x00445534u) [[unlikely]] return; }
L_00445534:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044554Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044554Cu) [[unlikely]] return; }
L_0044554C:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00445568:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00445570:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 120u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004455B8u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 299u, depth + 1u); else { c.pc = 0x004426C8u; return; } if (c.pc != 0x004455B8u) [[unlikely]] return; }
L_004455B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_004456D4; }
    set32(c.r[17], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[19], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[23], ld32((c.r[29].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[30], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_004456D0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[22].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_00445638; }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00445678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004455FCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D3(c, 418u, depth + 1u); else { c.pc = 0x0044FB08u; return; } if (c.pc != 0x004455FCu) [[unlikely]] return; }
L_004455FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004456D0; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st32((c.r[29].w[0] + 40u), c.r[19].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445624u); st32((c.r[29].w[0] + 44u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00D3(c, 406u, depth + 1u); else { c.pc = 0x0044F808u; return; } if (c.pc != 0x00445624u) [[unlikely]] return; }
L_00445624:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  goto L_0044567C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_004456D4; } }
    c.budget -= 1;
L_00445638:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_0044567C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 1468u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + 4832u);  if (t) { goto L_00445678; } }
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st32((c.r[29].w[0] + 56u), c.r[16].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00445660u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00445660u) [[unlikely]] return; }
L_00445660:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  goto L_0044567C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004456D0; } }
    c.budget -= 1;
L_00445678:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0044567C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00445698; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445690u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 252u, depth + 1u); else { c.pc = 0x004565B0u; return; } if (c.pc != 0x00445690u) [[unlikely]] return; }
L_00445690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_004456B8; } }
L_00445698:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004456A4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 252u, depth + 1u); else { c.pc = 0x004565B0u; return; } if (c.pc != 0x004456A4u) [[unlikely]] return; }
L_004456A4:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004456B4u); set32(c.r[6], c.r[16].w[0] - c.r[17].w[0]);  if (depth < kMaxDepth) unit_00D5(c, 252u, depth + 1u); else { c.pc = 0x004565B0u; return; } if (c.pc != 0x004456B4u) [[unlikely]] return; }
L_004456B4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_004456B8:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004456C8u); c.r[7].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 302u, depth + 1u); else { c.pc = 0x004427A0u; return; } if (c.pc != 0x004456C8u) [[unlikely]] return; }
L_004456C8:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_004456D0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004456D4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 136u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 152u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00445700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 8052u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044572Cu); set32(c.r[5], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_00D0(c, 342u, depth + 1u); else { c.pc = 0x00442E68u; return; } if (c.pc != 0x0044572Cu) [[unlikely]] return; }
L_0044572C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044573Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D0(c, 342u, depth + 1u); else { c.pc = 0x00442E68u; return; } if (c.pc != 0x0044573Cu) [[unlikely]] return; }
L_0044573C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044574Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D0(c, 342u, depth + 1u); else { c.pc = 0x00442E68u; return; } if (c.pc != 0x0044574Cu) [[unlikely]] return; }
L_0044574C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00D3(c, 83u, depth); }
L_00445770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 8052u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445798u); set32(c.r[5], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_00D0(c, 343u, depth + 1u); else { c.pc = 0x00442E88u; return; } if (c.pc != 0x00445798u) [[unlikely]] return; }
L_00445798:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004457A8u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 343u, depth + 1u); else { c.pc = 0x00442E88u; return; } if (c.pc != 0x004457A8u) [[unlikely]] return; }
L_004457A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004457BCu); c.r[18].d[0] = c.r[18].d[0] & c.r[19].d[0];  if (depth < kMaxDepth) unit_00D0(c, 343u, depth + 1u); else { c.pc = 0x00442E88u; return; } if (c.pc != 0x004457BCu) [[unlikely]] return; }
L_004457BC:
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004457E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8060u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 32u), c.r[2].w[0]);  c.pc = t; return; }
L_004457F8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[16], c.r[18].w[0] + 8052u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[2].d[0] = c.r[21].sd[0] < 4ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[20], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_00445898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445848u);  if (depth < kMaxDepth) unit_00D6(c, 6u, depth + 1u); else { c.pc = 0x00458678u; return; } if (c.pc != 0x00445848u) [[unlikely]] return; }
L_00445848:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00445888; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], 0u + 1u);  goto L_0044587C; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445870u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 329u, depth + 1u); else { c.pc = 0x00442BF8u; return; } if (c.pc != 0x00445870u) [[unlikely]] return; }
L_00445870:
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_0044587C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0044589C; } }
    c.budget -= 1;
L_00445888:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { st32((c.r[20].w[0] + 60u), 0u);  goto L_0044589C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004458A0; } }
L_00445898:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044589C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004458A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004458A8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 182u, depth + 1u); else { c.pc = 0x00445940u; return; } if (c.pc != 0x004458A8u) [[unlikely]] return; }
L_004458A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004458C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004458B8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D1(c, 166u, depth + 1u); else { c.pc = 0x00445700u; return; } if (c.pc != 0x004458B8u) [[unlikely]] return; }
L_004458B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00445914; } }
L_004458C0:
    c.r[2].d[0] = c.r[22].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[21].sd[0] < 64ll ? 1ull : 0ull;  if (t) { goto L_004458E8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004458D8u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 185u, depth + 1u); else { c.pc = 0x00445990u; return; } if (c.pc != 0x004458D8u) [[unlikely]] return; }
L_004458D8:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00445914; } }
    c.r[3].d[0] = c.r[21].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 1;
L_004458E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00445914; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (t) { goto L_00445904; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00445914; } }
L_00445904:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445910u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 185u, depth + 1u); else { c.pc = 0x00445990u; return; } if (c.pc != 0x00445910u) [[unlikely]] return; }
L_00445910:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00445914:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00445940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00445980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445964u);  if (depth < kMaxDepth) unit_00D0(c, 369u, depth + 1u); else { c.pc = 0x00443120u; return; } if (c.pc != 0x00445964u) [[unlikely]] return; }
L_00445964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044597C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445974u);  if (depth < kMaxDepth) unit_00D0(c, 371u, depth + 1u); else { c.pc = 0x00443140u; return; } if (c.pc != 0x00445974u) [[unlikely]] return; }
L_00445974:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00445980; }
L_0044597C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00445980:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00445990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[2], c.r[16].w[0] + 8052u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004459BCu); set32(c.r[17], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_00D0(c, 343u, depth + 1u); else { c.pc = 0x00442E88u; return; } if (c.pc != 0x004459BCu) [[unlikely]] return; }
L_004459BC:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004459D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004459D4u); set32(c.r[5], ld32((c.r[17].w[0] + 60u)));  if (depth < kMaxDepth) unit_00D1(c, 166u, depth + 1u); else { c.pc = 0x00445700u; return; } if (c.pc != 0x004459D4u) [[unlikely]] return; }
L_004459D4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_004459D8:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { st32((c.r[18].w[0]), c.r[5].w[0]);  goto L_004459E0; }
L_004459E0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004459F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445A14u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00D1(c, 219u, depth + 1u); else { c.pc = 0x00445D00u; return; } if (c.pc != 0x00445A14u) [[unlikely]] return; }
L_00445A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445A1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 195u, depth + 1u); else { c.pc = 0x00445A50u; return; } if (c.pc != 0x00445A1Cu) [[unlikely]] return; }
L_00445A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445A24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 222u, depth + 1u); else { c.pc = 0x00445DB0u; return; } if (c.pc != 0x00445A24u) [[unlikely]] return; }
L_00445A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445A2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 209u, depth + 1u); else { c.pc = 0x00445C08u; return; } if (c.pc != 0x00445A2Cu) [[unlikely]] return; }
L_00445A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445A34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 225u, depth + 1u); else { c.pc = 0x00445E48u; return; } if (c.pc != 0x00445A34u) [[unlikely]] return; }
L_00445A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445A3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 227u, depth + 1u); else { c.pc = 0x00445EF8u; return; } if (c.pc != 0x00445A3Cu) [[unlikely]] return; }
L_00445A3C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00445A50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445A70u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_00D1(c, 199u, depth + 1u); else { c.pc = 0x00445AD8u; return; } if (c.pc != 0x00445A70u) [[unlikely]] return; }
L_00445A70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00445AC0; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 8068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445A84u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 341u, depth + 1u); else { c.pc = 0x00442E48u; return; } if (c.pc != 0x00445A84u) [[unlikely]] return; }
L_00445A84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00445AC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445A98u);  if (depth < kMaxDepth) unit_00D1(c, 206u, depth + 1u); else { c.pc = 0x00445BA8u; return; } if (c.pc != 0x00445A98u) [[unlikely]] return; }
L_00445A98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00445AC0; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00445B48; }
L_00445AC0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00445AD8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 8052u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445B00u); set32(c.r[5], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_00D0(c, 341u, depth + 1u); else { c.pc = 0x00442E48u; return; } if (c.pc != 0x00445B00u) [[unlikely]] return; }
L_00445B00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445B10u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 341u, depth + 1u); else { c.pc = 0x00442E48u; return; } if (c.pc != 0x00445B10u) [[unlikely]] return; }
L_00445B10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445B24u); c.r[18].d[0] = c.r[18].d[0] | c.r[19].d[0];  if (depth < kMaxDepth) unit_00D0(c, 341u, depth + 1u); else { c.pc = 0x00442E48u; return; } if (c.pc != 0x00445B24u) [[unlikely]] return; }
L_00445B24:
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00445B48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 8052u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445B74u); set32(c.r[5], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_00D0(c, 340u, depth + 1u); else { c.pc = 0x00442E28u; return; } if (c.pc != 0x00445B74u) [[unlikely]] return; }
L_00445B74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445B84u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 340u, depth + 1u); else { c.pc = 0x00442E28u; return; } if (c.pc != 0x00445B84u) [[unlikely]] return; }
L_00445B84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00442E28u | kUnwind; return; } [[clang::musttail]] return unit_00D0(c, 340u, depth); }
L_00445BA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445BBCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 110u, depth + 1u); else { c.pc = 0x00444CF8u; return; } if (c.pc != 0x00445BBCu) [[unlikely]] return; }
L_00445BBC:
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 2572u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], ld32((c.r[16].w[0] + 88u)));  if (t) { goto L_00445BD8; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_00445BD8:
    c.r[2].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[7].d[0];
    c.r[3].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445BF0u); if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[7].d[0];  if (depth < kMaxDepth) unit_00D0(c, 330u, depth + 1u); else { c.pc = 0x00442C18u; return; } if (c.pc != 0x00445BF0u) [[unlikely]] return; }
L_00445BF0:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00445C08:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445C28u); set32(c.r[17], ld32((c.r[16].w[0] + 8060u)));  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00445C28u) [[unlikely]] return; }
L_00445C28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00445C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445C38u); set32(c.r[5], 0u + 80u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00445C38u) [[unlikely]] return; }
L_00445C38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00445C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445C48u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00D0(c, 330u, depth + 1u); else { c.pc = 0x00442C18u; return; } if (c.pc != 0x00445C48u) [[unlikely]] return; }
L_00445C48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00445C7C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00445C7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445C64u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00D4(c, 261u, depth + 1u); else { c.pc = 0x004526E0u; return; } if (c.pc != 0x00445C64u) [[unlikely]] return; }
L_00445C64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00445C78; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445C78u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 27u, depth + 1u); else { c.pc = 0x00450418u; return; } if (c.pc != 0x00445C78u) [[unlikely]] return; }
L_00445C78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00445C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445C84u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00445C84u) [[unlikely]] return; }
L_00445C84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00445CE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445C94u); set32(c.r[5], 0u + 79u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00445C94u) [[unlikely]] return; }
L_00445C94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00445CE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445CA4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D0(c, 330u, depth + 1u); else { c.pc = 0x00442C18u; return; } if (c.pc != 0x00445CA4u) [[unlikely]] return; }
L_00445CA4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00445CEC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00445CEC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445CC4u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00D4(c, 261u, depth + 1u); else { c.pc = 0x004526E0u; return; } if (c.pc != 0x00445CC4u) [[unlikely]] return; }
L_00445CC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00445CE8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 5u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00D4(c, 27u, depth); }
L_00445CE8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00445CEC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00445D00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[4].w[0] + 8060u)));
    set32(c.r[20], ld32((c.r[19].w[0])));
    c.budget -= 16;
L_00445D40:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445D54u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 12u, depth + 1u); else { c.pc = 0x00458768u; return; } if (c.pc != 0x00445D54u) [[unlikely]] return; }
L_00445D54:
    c.r[6].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[18].d[0] = c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != 0ull; if (c.r[3].d[0] == 0) c.r[17].d[0] = c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00445D40u | kUnwind; return; } goto L_00445D40; } }
    st32((c.r[19].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[21].w[0]), c.r[18].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00445DB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[4].w[0] + 2316u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[4].w[0] + 8060u)));
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445DDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 10u, depth + 1u); else { c.pc = 0x00458700u; return; } if (c.pc != 0x00445DDCu) [[unlikely]] return; }
L_00445DDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[6], 0u + 1u);  if (t) { goto L_00445DF4; } }
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_00445DF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445DFCu);  if (depth < kMaxDepth) unit_00D6(c, 12u, depth + 1u); else { c.pc = 0x00458768u; return; } if (c.pc != 0x00445DFCu) [[unlikely]] return; }
L_00445DFC:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  goto L_00445E0C; }
L_00445E0C:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_00445E24; }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
L_00445E24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00445E34; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 2;
L_00445E34:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00445E48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445E5Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 264u, depth + 1u); else { c.pc = 0x004463F8u; return; } if (c.pc != 0x00445E5Cu) [[unlikely]] return; }
L_00445E5C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 1;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[7], c.r[16].w[0] + 3376u);  if (t) { goto L_00445EE8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 8060u)));
    c.r[4].d[0] = ld64((c.r[6].w[0] + 24u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[8], c.r[16].w[0] + 2316u);  if (t) { goto L_00445EE8; } }
    c.r[2].d[0] = ld64((c.r[5].w[0] + 32u));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] - c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[7].w[0] + 344u), c.r[2].d[0]);  if (t) { goto L_00445EE8; } }
    set32(c.r[3], ld32((c.r[8].w[0] + 24u)));
    c.r[4].d[0] = ld64((c.r[7].w[0] + 336u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st64((c.r[5].w[0] + 24u), c.r[4].d[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[6].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    st64((c.r[5].w[0] + 32u), c.r[3].d[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 28u)));
    st32((c.r[5].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 44u)));
    st32((c.r[5].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 48u)));
    st32((c.r[5].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 21;
L_00445EE8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00445EF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00445F00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445F28u); c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 264u, depth + 1u); else { c.pc = 0x004463F8u; return; } if (c.pc != 0x00445F28u) [[unlikely]] return; }
L_00445F28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00445FA0; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00445FA0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445F4Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 14u, depth + 1u); else { c.pc = 0x00458818u; return; } if (c.pc != 0x00445F4Cu) [[unlikely]] return; }
L_00445F4C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], 0u + 176u);
    c.r[3].d[0] = c.r[7].sd[0] < 177ll ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    if (c.r[3].d[0] == 0) c.r[7].d[0] = c.r[2].d[0];
    set32(c.r[3], c.r[16].w[0] + 48u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] <= 0; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00445F80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 352u), c.r[7].w[0]);  if (t) { goto L_00445F94; } }
    c.budget -= 1;
L_00445F80:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00445FA0; }
    st32((c.r[3].w[0] + 356u), c.r[7].w[0]);
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.budget -= 2;
L_00445F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445F9Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 252u, depth + 1u); else { c.pc = 0x004565B0u; return; } if (c.pc != 0x00445F9Cu) [[unlikely]] return; }
L_00445F9C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00445FA0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00445FB8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4900u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0044601C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445FF4u);  if (depth < kMaxDepth) unit_00D0(c, 346u, depth + 1u); else { c.pc = 0x00442ED0u; return; } if (c.pc != 0x00445FF4u) [[unlikely]] return; }
L_00445FF4:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 2440u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446000u); set32(c.r[5], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00D0(c, 365u, depth + 1u); else { c.pc = 0x00443088u; return; } if (c.pc != 0x00446000u) [[unlikely]] return; }
L_00446000:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 2448u));
    c.r[4].d[0] = ld64((c.r[16].w[0] + 2456u));
    c.r[3].d[0] = c.r[18].d[0] + c.r[3].d[0];
    st64((c.r[16].w[0] + 2440u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + c.r[4].d[0];
    st64((c.r[16].w[0] + 2448u), c.r[3].d[0]);
    st64((c.r[16].w[0] + 2456u), c.r[4].d[0]);
    c.budget -= 7;
L_0044601C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00446038:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 8600u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446060u); st32((c.r[16].w[0] + 8060u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00D1(c, 240u, depth + 1u); else { c.pc = 0x00446100u; return; } if (c.pc != 0x00446060u) [[unlikely]] return; }
L_00446060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446068u);  if (depth < kMaxDepth) unit_00D6(c, 46u, depth + 1u); else { c.pc = 0x00458C38u; return; } if (c.pc != 0x00446068u) [[unlikely]] return; }
L_00446068:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] | 3336ull;  if (t) { goto L_004460A0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_004460A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004460ACu); set32(c.r[5], c.r[5].w[0] + 24968u);  if (depth < kMaxDepth) unit_00D6(c, 40u, depth + 1u); else { c.pc = 0x00458B68u; return; } if (c.pc != 0x004460ACu) [[unlikely]] return; }
L_004460AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004460E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004460BCu);  if (depth < kMaxDepth) unit_00D1(c, 245u, depth + 1u); else { c.pc = 0x004461F0u; return; } if (c.pc != 0x004460BCu) [[unlikely]] return; }
L_004460BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 3337ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_004460E0:
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00446100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] >> 1;
    st32((c.r[5].w[0] + 40u), c.r[2].w[0]);
    st64((c.r[5].w[0] + 24u), c.r[4].d[0]);
    set32(c.r[7], 0u + 67u);
    st32((c.r[5].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[6], c.r[5].w[0] + 332u);
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[5].w[0] + 8u), 0u);
    st64((c.r[5].w[0] + 16u), c.r[4].d[0]);
    st32((c.r[5].w[0] + 32u), 0u);
    st32((c.r[5].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 60u), 0u);
    c.budget -= 22;
L_00446158:
    set32(c.r[7], c.r[7].w[0] - 1u);
    st32((c.r[6].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[6], c.r[6].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00446158u | kUnwind; return; } goto L_00446158; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[5].w[0] + 336u), 0u);
    st32((c.r[5].w[0] + 344u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 340u), 0u);  c.pc = t; return; }
L_00446188:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_004461A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8060u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004461BCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00D1(c, 245u, depth + 1u); else { c.pc = 0x004461F0u; return; } if (c.pc != 0x004461BCu) [[unlikely]] return; }
L_004461BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004461E0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 3338ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_004461E0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004461F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D6(c, 62u, depth); }
L_00446208:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00446210:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00446218:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00446220:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00446228:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3339ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_00446248:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3339ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_00446268:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3339ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_00446288:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3339ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_004462A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004462C8u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 264u, depth + 1u); else { c.pc = 0x004463F8u; return; } if (c.pc != 0x004462C8u) [[unlikely]] return; }
L_004462C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00446334; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00446330; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 8060u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004462ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 416u, depth + 1u); else { c.pc = 0x004437C0u; return; } if (c.pc != 0x004462ECu) [[unlikely]] return; }
L_004462EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004462F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 259u, depth + 1u); else { c.pc = 0x00446350u; return; } if (c.pc != 0x004462F4u) [[unlikely]] return; }
L_004462F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446308u); set32(c.r[19], c.r[17].w[0] + 3376u);  if (depth < kMaxDepth) unit_00D1(c, 260u, depth + 1u); else { c.pc = 0x00446358u; return; } if (c.pc != 0x00446308u) [[unlikely]] return; }
L_00446308:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00446334; }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    st32((c.r[18].w[0] + 44u), c.r[4].w[0]);
    st64((c.r[19].w[0] + 336u), c.r[3].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.r[3].d[0] = ld64((c.r[16].w[0] + 32u));
    st32((c.r[18].w[0] + 48u), c.r[4].w[0]);
    st64((c.r[18].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 8;
L_00446330:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00446334:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00446350:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00446358:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[16], c.r[18].w[0] + 48u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[8], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 352u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044639Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 270u, depth + 1u); else { c.pc = 0x00456A68u; return; } if (c.pc != 0x0044639Cu) [[unlikely]] return; }
L_0044639C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[5], c.r[18].w[0] + 224u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004463B8u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 270u, depth + 1u); else { c.pc = 0x00456A68u; return; } if (c.pc != 0x004463B8u) [[unlikely]] return; }
L_004463B8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_004463D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004463DC; } }
L_004463D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004463D8u); c.r[5].d[0] = c.r[5].d[0] | 3341ull;  if (depth < kMaxDepth) unit_00D1(c, 19u, depth + 1u); else { c.pc = 0x00444148u; return; } if (c.pc != 0x004463D8u) [[unlikely]] return; }
L_004463D8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004463DC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004463F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 14000u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00446434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044641Cu);  if (depth < kMaxDepth) unit_00D1(c, 266u, depth + 1u); else { c.pc = 0x00446448u; return; } if (c.pc != 0x0044641Cu) [[unlikely]] return; }
L_0044641C:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 14000u)));  goto L_00446430; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00446434; } }
    c.budget -= 1;
L_00446430:
    set32(c.r[2], c.r[2].w[0] + 2208u);
    c.budget -= 1;
L_00446434:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00446448:
    set32(c.r[3], ld32((c.r[4].w[0] + 8060u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 32u)));  c.pc = t; return; }
L_00446458:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_00446460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00770000u);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 12760u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00770000u);
    ldl(c.r[4], (c.r[9].w[0] + 7u));
    ldr(c.r[4], (c.r[9].w[0]));
    ldl(c.r[7], (c.r[9].w[0] + 15u));
    ldr(c.r[7], (c.r[9].w[0] + 8u));
    ldl(c.r[8], (c.r[9].w[0] + 23u));
    ldr(c.r[8], (c.r[9].w[0] + 16u));
    ldl(c.r[10], (c.r[9].w[0] + 31u));
    ldr(c.r[10], (c.r[9].w[0] + 24u));
    sdl(c.r[4], (c.r[2].w[0] + 7u));
    sdr(c.r[4], (c.r[2].w[0]));
    sdl(c.r[7], (c.r[2].w[0] + 15u));
    sdr(c.r[7], (c.r[2].w[0] + 8u));
    sdl(c.r[8], (c.r[2].w[0] + 23u));
    sdr(c.r[8], (c.r[2].w[0] + 16u));
    sdl(c.r[10], (c.r[2].w[0] + 31u));
    sdr(c.r[10], (c.r[2].w[0] + 24u));
    set32(c.r[4], ld32((c.r[9].w[0] + 32u)));
    set32(c.r[11], c.r[3].w[0] - 12720u);
    st32((c.r[2].w[0] + 32u), c.r[4].w[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[2].w[0] + 32u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[10], 0u - 64u);
    c.budget -= 28;
L_004464D0:
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 63u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004464D0u | kUnwind; return; } goto L_004464D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00770000u);
    set32(c.r[4], ld32((c.r[9].w[0] + 28u)));
    set32(c.r[5], c.r[2].w[0] - 12712u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u - 64u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_00446510:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_00446538; } }
    set32(c.r[3], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 63u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_0044653C; } }
L_00446538:
    st32((c.r[5].w[0]), 0u);
    c.budget -= 1;
L_0044653C:
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00446510u | kUnwind; return; } goto L_00446510; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00446550:
    st32((c.r[5].w[0] + 4u), c.r[9].w[0]);
    c.budget -= 2;
L_00446558:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_004465B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446588u);  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x00446588u) [[unlikely]] return; }
L_00446588:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004465B0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 385ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_004465B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8128u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_004465B8:
    c.r[2].d[0] = c.r[17].d[0] ^ 5ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004465D0u); if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[18].d[0];  if (depth < kMaxDepth) unit_00D7(c, 4u, depth + 1u); else { c.pc = 0x0045C018u; return; } if (c.pc != 0x004465D0u) [[unlikely]] return; }
L_004465D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004465F8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 3858ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_004465F8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00446610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8128u)));
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044667C; } }
    set32(c.r[16], c.r[6].w[0] >> 2);
    set32(c.r[3], 0u + 16u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00446678; } }
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_00446658:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044666Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 10u, depth + 1u); else { c.pc = 0x0045C130u; return; } if (c.pc != 0x0044666Cu) [[unlikely]] return; }
L_0044666C:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00446658u | kUnwind; return; } goto L_00446658; } }
L_00446678:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0044667C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00446698:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8128u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004466F0; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004466F0; } }
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_004466D0:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004466E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 4u, depth + 1u); else { c.pc = 0x0045C018u; return; } if (c.pc != 0x004466E4u) [[unlikely]] return; }
L_004466E4:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004466D0u | kUnwind; return; } goto L_004466D0; }
L_004466F0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00446710:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
L_00446720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044674Cu); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044674Cu) [[unlikely]] return; }
L_0044674C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 389ull;  if (t) { goto L_00446780; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_00446780:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_004467A8; }
L_004467A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[9].w[0] + 8128u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[8], c.r[2].w[0] + 4224u);  if (t) { goto L_004467D0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_004467D0; } }
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[2], ld32((c.r[9].w[0] + 44u)));  goto L_004467E0; }
L_004467D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004467D8u); c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 219u, depth + 1u); else { c.pc = 0x0044ADC0u; return; } if (c.pc != 0x004467D8u) [[unlikely]] return; }
L_004467D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044686C; } }
L_004467E0:
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[8].w[0]), c.r[5].w[0]);  goto L_00446808; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 3869ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_00446808:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[8].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[8].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] - 2u);
    st32((c.r[8].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[8].w[0] + 16u), 0u);
    st32((c.r[8].w[0] + 24u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[6].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_00446854; } }
L_00446838:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[3], c.r[8].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.budget -= 7;
L_00446854:
    set32(c.r[2], 0u + 16u);
    if (c.r[9].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00446838u | kUnwind; return; } goto L_00446838; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044686C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00446878:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446888u);  if (depth < kMaxDepth) unit_00D3(c, 40u, depth + 1u); else { c.pc = 0x0044C7B8u; return; } if (c.pc != 0x00446888u) [[unlikely]] return; }
L_00446888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446890u);  if (depth < kMaxDepth) unit_00D1(c, 295u, depth + 1u); else { c.pc = 0x00446958u; return; } if (c.pc != 0x00446890u) [[unlikely]] return; }
L_00446890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00770000u);  if (t) { goto L_004468B8; } }
L_00446898:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00446898u | kUnwind; return; } goto L_00446898; } }
    c.budget -= 1;
L_004468B8:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004468C4u); set32(c.r[5], c.r[5].w[0] - 29464u);  if (depth < kMaxDepth) unit_00D6(c, 218u, depth + 1u); else { c.pc = 0x0045B9C8u; return; } if (c.pc != 0x004468C4u) [[unlikely]] return; }
L_004468C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00446900; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF030000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65285ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[2].d[0];
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 3841ull;
    c.r[5].d[0] = c.r[5].d[0] | 3859ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_00446900:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00770000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 12760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446914u); set32(c.r[6], 0u + 36u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00446914u) [[unlikely]] return; }
L_00446914:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00770000u);
    set32(c.r[4], c.r[4].w[0] - 12720u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446928u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00446928u) [[unlikely]] return; }
L_00446928:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00770000u);
    set32(c.r[4], c.r[4].w[0] - 12712u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044693Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0044693Cu) [[unlikely]] return; }
L_0044693C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] - 1484u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00446958:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00446960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446970u);  if (depth < kMaxDepth) unit_00D6(c, 251u, depth + 1u); else { c.pc = 0x0045BDE8u; return; } if (c.pc != 0x00446970u) [[unlikely]] return; }
L_00446970:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00446980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00446998; }
L_00446998:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004469B4u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x004469B4u) [[unlikely]] return; }
L_004469B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00446A18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004469C4u);  if (depth < kMaxDepth) unit_00D1(c, 314u, depth + 1u); else { c.pc = 0x00446B40u; return; } if (c.pc != 0x004469C4u) [[unlikely]] return; }
L_004469C4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004469D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00446A18; } }
L_004469D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004469E0u);  if (depth < kMaxDepth) unit_00D1(c, 307u, depth + 1u); else { c.pc = 0x00446A30u; return; } if (c.pc != 0x004469E0u) [[unlikely]] return; }
L_004469E0:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004469F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004469F8u);  if (depth < kMaxDepth) unit_00D1(c, 310u, depth + 1u); else { c.pc = 0x00446AA0u; return; } if (c.pc != 0x004469F8u) [[unlikely]] return; }
L_004469F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446A00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 341u, depth + 1u); else { c.pc = 0x00446EF8u; return; } if (c.pc != 0x00446A00u) [[unlikely]] return; }
L_00446A00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446A0Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 315u, depth + 1u); else { c.pc = 0x00446B58u; return; } if (c.pc != 0x00446A0Cu) [[unlikely]] return; }
L_00446A0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446A14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 334u, depth + 1u); else { c.pc = 0x00446DE0u; return; } if (c.pc != 0x00446A14u) [[unlikely]] return; }
L_00446A14:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00446A18:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00446A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 28u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446A48u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00446A48u) [[unlikely]] return; }
L_00446A48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00446A90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446A58u);  if (depth < kMaxDepth) unit_00D0(c, 478u, depth + 1u); else { c.pc = 0x00443EF8u; return; } if (c.pc != 0x00446A58u) [[unlikely]] return; }
L_00446A58:
    set32(c.r[6], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_00446A80; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] > 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00446A80; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00446A94; } }
L_00446A80:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00446558u | kUnwind; return; } goto L_00446558; }
L_00446A90:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00446A94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00446AA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 93u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 8128u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446AC8u); set32(c.r[18], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00446AC8u) [[unlikely]] return; }
L_00446AC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 94u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446AD8u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00446AD8u) [[unlikely]] return; }
L_00446AD8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00446B24; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 192u);  if (t) { goto L_00446B24; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00446B28; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446B0Cu); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00D6(c, 135u, depth + 1u); else { c.pc = 0x0045A248u; return; } if (c.pc != 0x00446B0Cu) [[unlikely]] return; }
L_00446B0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00446B28; } }
    set32(c.r[2], 0u + 200u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[17].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 4;
L_00446B24:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00446B28:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00446B40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8140u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00442E88u | kUnwind; return; } [[clang::musttail]] return unit_00D0(c, 343u, depth); }
L_00446B58:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[17].w[0] + 8120u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446B8Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 341u, depth + 1u); else { c.pc = 0x00442E48u; return; } if (c.pc != 0x00446B8Cu) [[unlikely]] return; }
L_00446B8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00446BE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446BA0u);  if (depth < kMaxDepth) unit_00D0(c, 341u, depth + 1u); else { c.pc = 0x00442E48u; return; } if (c.pc != 0x00446BA0u) [[unlikely]] return; }
L_00446BA0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[19].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00446BEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446BB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 320u, depth + 1u); else { c.pc = 0x00446C08u; return; } if (c.pc != 0x00446BB0u) [[unlikely]] return; }
L_00446BB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00446BE8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446BC4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D0(c, 340u, depth + 1u); else { c.pc = 0x00442E28u; return; } if (c.pc != 0x00446BC4u) [[unlikely]] return; }
L_00446BC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_00446DB8; }
L_00446BE8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00446BEC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00446C08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446C1Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 266u, depth + 1u); else { c.pc = 0x0044B740u; return; } if (c.pc != 0x00446C1Cu) [[unlikely]] return; }
L_00446C1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00446C44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446C2Cu);  if (depth < kMaxDepth) unit_00D1(c, 324u, depth + 1u); else { c.pc = 0x00446C68u; return; } if (c.pc != 0x00446C2Cu) [[unlikely]] return; }
L_00446C2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00446C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446C3Cu);  if (depth < kMaxDepth) unit_00D1(c, 326u, depth + 1u); else { c.pc = 0x00446CD0u; return; } if (c.pc != 0x00446C3Cu) [[unlikely]] return; }
L_00446C3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00446C54; }
L_00446C44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00446C54; } }
    c.budget -= 1;
L_00446C50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00446C54:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00446C68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 2664u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[3].d[0] = ~(0ull | c.r[16].d[0]);
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    c.r[5].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446C98u); if (c.r[5].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_00D2(c, 268u, depth + 1u); else { c.pc = 0x0044B760u; return; } if (c.pc != 0x00446C98u) [[unlikely]] return; }
L_00446C98:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_00446CB8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 2408u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00446CB8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00446CD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[16], c.r[18].w[0] + 120u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[18].w[0] + 8128u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446CFCu); set32(c.r[17], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_00D1(c, 439u, depth + 1u); else { c.pc = 0x00447E78u; return; } if (c.pc != 0x00446CFCu) [[unlikely]] return; }
L_00446CFC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00446D9C; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00446D24; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00446D98; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00446D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446D2Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 103u, depth + 1u); else { c.pc = 0x00459DB8u; return; } if (c.pc != 0x00446D2Cu) [[unlikely]] return; }
L_00446D2C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00446D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446D50u);  if (depth < kMaxDepth) unit_00D0(c, 330u, depth + 1u); else { c.pc = 0x00442C18u; return; } if (c.pc != 0x00446D50u) [[unlikely]] return; }
L_00446D50:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 276u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00446D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446D70u);  if (depth < kMaxDepth) unit_00D4(c, 264u, depth + 1u); else { c.pc = 0x00452728u; return; } if (c.pc != 0x00446D70u) [[unlikely]] return; }
L_00446D70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446D80u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 330u, depth + 1u); else { c.pc = 0x00442C18u; return; } if (c.pc != 0x00446D80u) [[unlikely]] return; }
L_00446D80:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446D90u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 328u, depth + 1u); else { c.pc = 0x00442BD8u; return; } if (c.pc != 0x00446D90u) [[unlikely]] return; }
L_00446D90:
    c.r[16].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00446D98:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00446D9C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00446DB8:
    set32(c.r[4], c.r[4].w[0] + 3656u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00446DD4; } }
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00446DD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00446DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446DFCu); set32(c.r[17], c.r[16].w[0] + 2384u);  if (depth < kMaxDepth) unit_00D2(c, 268u, depth + 1u); else { c.pc = 0x0044B760u; return; } if (c.pc != 0x00446DFCu) [[unlikely]] return; }
L_00446DFC:
    set32(c.r[3], 0u - 1u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00446E1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446E14u);  if (depth < kMaxDepth) unit_00D1(c, 338u, depth + 1u); else { c.pc = 0x00446E68u; return; } if (c.pc != 0x00446E14u) [[unlikely]] return; }
L_00446E14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00446E54; }
L_00446E1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446E28u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D1(c, 340u, depth + 1u); else { c.pc = 0x00446ED8u; return; } if (c.pc != 0x00446E28u) [[unlikely]] return; }
L_00446E28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00446E50; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00D4(c, 27u, depth); }
L_00446E50:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00446E54:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00446E68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446E84u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 266u, depth + 1u); else { c.pc = 0x0044B740u; return; } if (c.pc != 0x00446E84u) [[unlikely]] return; }
L_00446E84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00446EC0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00446EC0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00446EC0; }
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00446EC0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 2412u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 2408u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00446EC4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00446EC0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00446EC4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00446ED8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8140u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00442E68u | kUnwind; return; } [[clang::musttail]] return unit_00D0(c, 342u, depth); }
L_00446EF8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
L_00446F10:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446F20u); set32(c.r[7], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00D1(c, 346u, depth + 1u); else { c.pc = 0x00446F78u; return; } if (c.pc != 0x00446F20u) [[unlikely]] return; }
L_00446F20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[8], c.r[29].w[0] + 12u);  if (t) { goto L_00446F54; } }
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446F40u); set32(c.r[7], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_00D1(c, 385u, depth + 1u); else { c.pc = 0x00447728u; return; } if (c.pc != 0x00446F40u) [[unlikely]] return; }
L_00446F40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 12u)));  if (t) { goto L_00446F54; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00446F10u | kUnwind; return; } goto L_00446F10; }
L_00446F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446F5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 184u, depth + 1u); else { c.pc = 0x0044A878u; return; } if (c.pc != 0x00446F5Cu) [[unlikely]] return; }
L_00446F5C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00446F78:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[16], ld32((c.r[17].w[0] + 8136u)));
    st32((c.r[18].w[0]), 0u);
    st32((c.r[20].w[0]), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446FC0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 300u, depth + 1u); else { c.pc = 0x004426E0u; return; } if (c.pc != 0x00446FC0u) [[unlikely]] return; }
L_00446FC0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0044719C; }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 206u);  if (t) { goto L_00447198; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446FE0u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00D1(c, 367u, depth + 1u); else { c.pc = 0x00447468u; return; } if (c.pc != 0x00446FE0u) [[unlikely]] return; }
L_00446FE0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[3], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_00447038; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 12u)));  if (t) { goto L_00447008; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447000u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 363u, depth + 1u); else { c.pc = 0x00447378u; return; } if (c.pc != 0x00447000u) [[unlikely]] return; }
L_00447000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_00447020; } }
L_00447008:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_00447020:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00447198; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_00447194; } }
L_00447038:
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_00447198; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 36u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447064u); set32(c.r[7], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_00D0(c, 322u, depth + 1u); else { c.pc = 0x00442B00u; return; } if (c.pc != 0x00447064u) [[unlikely]] return; }
L_00447064:
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447074u); set32(c.r[6], ld32((c.r[29].w[0] + 36u)));  if (depth < kMaxDepth) unit_00D1(c, 358u, depth + 1u); else { c.pc = 0x004471B8u; return; } if (c.pc != 0x00447074u) [[unlikely]] return; }
L_00447074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 12u)));  if (t) { goto L_004470D4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 36u), 0u);  if (t) { goto L_00447098; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_004470A0; } }
    c.budget -= 1;
L_00447098:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_004470A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_004470D4; } }
    set32(c.r[5], 0u + 204u);
    set32(c.r[6], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004470BCu); st32((c.r[29].w[0] + 40u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00D1(c, 376u, depth + 1u); else { c.pc = 0x004475C0u; return; } if (c.pc != 0x004470BCu) [[unlikely]] return; }
L_004470BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 40u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004470D4u); st32((c.r[29].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D0(c, 325u, depth + 1u); else { c.pc = 0x00442B70u; return; } if (c.pc != 0x004470D4u) [[unlikely]] return; }
L_004470D4:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0044716C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004470E8u);  if (depth < kMaxDepth) unit_00D6(c, 64u, depth + 1u); else { c.pc = 0x00458E28u; return; } if (c.pc != 0x004470E8u) [[unlikely]] return; }
L_004470E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 8u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 44u), c.r[4].w[0]);  if (t) { goto L_00447120; } }
    c.r[2].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 64u);  if (t) { goto L_00447180; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 36u)));  if (t) { goto L_00447138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00447188; } }
    c.budget -= 1;
L_00447120:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_00447180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0044714C; } }
L_00447138:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 72ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_00447180; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_0044714C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447154u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00D1(c, 367u, depth + 1u); else { c.pc = 0x00447468u; return; } if (c.pc != 0x00447154u) [[unlikely]] return; }
L_00447154:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0044716C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00447188; } }
L_0044716C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447174u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 364u, depth + 1u); else { c.pc = 0x004473E0u; return; } if (c.pc != 0x00447174u) [[unlikely]] return; }
L_00447174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0044719C; } }
    c.budget -= 1;
L_00447180:
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00447188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447190u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 363u, depth + 1u); else { c.pc = 0x00447378u; return; } if (c.pc != 0x00447190u) [[unlikely]] return; }
L_00447190:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00447194:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00447198:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0044719C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004471B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 16u), c.r[5].w[0]);  if (t) { goto L_0044735C; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[4].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00447360; }
    c.r[2].d[0] = c.r[4].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_0044720C; } }
    set32(c.r[3], c.r[17].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044735C; } }
    c.r[2].d[0] = c.r[17].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0044720C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  goto L_00447278; }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  goto L_00447278; }
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_004472A8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044735C; } }
    set32(c.r[6], 0u + 4u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044725Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0044725Cu) [[unlikely]] return; }
L_0044725C:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] - c.r[16].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447270u); set32(c.r[4], c.r[4].w[0] + 4u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x00447270u) [[unlikely]] return; }
L_00447270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004472B8; } }
L_00447278:
    c.r[2].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044735C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0044735C; }
    set32(c.r[3], c.r[17].w[0] - c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] > 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044735C; } }
L_004472A8:
    lwl(c.r[2], (c.r[17].w[0] + 3u));
    lwr(c.r[2], (c.r[17].w[0]));
    swl(c.r[2], (c.r[29].w[0] + 3u));
    swr(c.r[2], (c.r[29].w[0]));
    c.budget -= 4;
L_004472B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004472C0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 64u, depth + 1u); else { c.pc = 0x00458E28u; return; } if (c.pc != 0x004472C0u) [[unlikely]] return; }
L_004472C0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;  if (t) { goto L_00447308; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 64u);  if (t) { goto L_004472F0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00447320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00447360; } }
    c.budget -= 1;
L_004472F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 128u);  if (t) { goto L_00447358; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00447358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00447360; } }
L_00447308:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00447358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_00447334; } }
L_00447320:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 72ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00447358; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_00447334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044733Cu); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00D1(c, 367u, depth + 1u); else { c.pc = 0x00447468u; return; } if (c.pc != 0x0044733Cu) [[unlikely]] return; }
L_0044733C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0044735C; }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0044735C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044735C; } }
    c.budget -= 1;
L_00447358:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044735C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00447360:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00447378:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[6].w[0] - c.r[3].w[0]);  if (t) { goto L_004473A4; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004473D4; } }
L_004473A4:
    set32(c.r[5], ld32((c.r[7].w[0] + 8u)));
    c.r[2].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004473D4; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004473D4; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_004473D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004473E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 8136u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447404u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 328u, depth + 1u); else { c.pc = 0x00442BD8u; return; } if (c.pc != 0x00447404u) [[unlikely]] return; }
L_00447404:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447414u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 344u, depth + 1u); else { c.pc = 0x00442EA8u; return; } if (c.pc != 0x00447414u) [[unlikely]] return; }
L_00447414:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[17], c.r[17].w[0] - c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 3868ull;  if (t) { goto L_00447450; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_00447450:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00447468:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    st32((c.r[22].w[0]), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004474ACu); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_00D6(c, 68u, depth + 1u); else { c.pc = 0x00458FC0u; return; } if (c.pc != 0x004474ACu) [[unlikely]] return; }
L_004474AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[7], ld32((c.r[18].w[0] + 12u)));  goto L_004474D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00447584; } }
L_004474C0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[22].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);  if (t) { goto L_00447594; } }
L_004474D8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00447594; } }
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[7].d[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - c.r[19].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447518u); c.r[20].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x00447518u) [[unlikely]] return; }
L_00447518:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447530u); set32(c.r[16], c.r[16].w[0] - 3u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x00447530u) [[unlikely]] return; }
L_00447530:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 12u)));  goto L_0044756C; }
    c.budget -= 1;
L_00447540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447548u); set32(c.r[4], c.r[29].w[0] + c.r[20].w[0]);  if (depth < kMaxDepth) unit_00D6(c, 64u, depth + 1u); else { c.pc = 0x00458E28u; return; } if (c.pc != 0x00447548u) [[unlikely]] return; }
L_00447548:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[21].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004474C0u | kUnwind; return; } goto L_004474C0; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00447540u | kUnwind; return; } goto L_00447540; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_0044756C:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447578u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_00D6(c, 68u, depth + 1u); else { c.pc = 0x00458FC0u; return; } if (c.pc != 0x00447578u) [[unlikely]] return; }
L_00447578:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00447598; }
L_00447584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044758Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 64u, depth + 1u); else { c.pc = 0x00458E28u; return; } if (c.pc != 0x0044758Cu) [[unlikely]] return; }
L_0044758C:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00447594:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00447598:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004475C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    st32((c.r[22].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004476C8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447610u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D6(c, 65u, depth + 1u); else { c.pc = 0x00458EC0u; return; } if (c.pc != 0x00447610u) [[unlikely]] return; }
L_00447610:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[19], ld32((c.r[18].w[0] + 4u)));  goto L_00447640; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004476EC; } }
    c.budget -= 1;
L_00447628:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[22].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);  if (t) { goto L_004476FC; } }
L_00447640:
    set32(c.r[7], 0u + 3u);
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[7].d[0];
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[7].d[0];
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447678u); set32(c.r[5], c.r[5].w[0] - c.r[19].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x00447678u) [[unlikely]] return; }
L_00447678:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447690u); set32(c.r[16], c.r[16].w[0] - 3u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x00447690u) [[unlikely]] return; }
L_00447690:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  goto L_004476CC; }
    c.budget -= 1;
L_004476A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004476A8u); set32(c.r[4], c.r[29].w[0] + c.r[20].w[0]);  if (depth < kMaxDepth) unit_00D6(c, 64u, depth + 1u); else { c.pc = 0x00458E28u; return; } if (c.pc != 0x004476A8u) [[unlikely]] return; }
L_004476A8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[21].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00447628u | kUnwind; return; } goto L_00447628; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004476A0u | kUnwind; return; } goto L_004476A0; } }
L_004476C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004476CC:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004476E0u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D6(c, 65u, depth + 1u); else { c.pc = 0x00458EC0u; return; } if (c.pc != 0x004476E0u) [[unlikely]] return; }
L_004476E0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00447700; }
L_004476EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004476F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 64u, depth + 1u); else { c.pc = 0x00458E28u; return; } if (c.pc != 0x004476F4u) [[unlikely]] return; }
L_004476F4:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004476FC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00447700:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00447728:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[20], c.r[16].w[0] + 2384u);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], c.r[16].w[0] + 8120u);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[21].w[0]), 0u);
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447780u); st32((c.r[20].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_00D3(c, 114u, depth + 1u); else { c.pc = 0x0044D2E8u; return; } if (c.pc != 0x00447780u) [[unlikely]] return; }
L_00447780:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 120u)));  goto L_004477C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447790u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 439u, depth + 1u); else { c.pc = 0x00447E78u; return; } if (c.pc != 0x00447790u) [[unlikely]] return; }
L_00447790:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[20].w[0] + 40u), c.r[3].w[0]);  goto L_004477B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004477A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 265u, depth + 1u); else { c.pc = 0x0044B730u; return; } if (c.pc != 0x004477A4u) [[unlikely]] return; }
L_004477A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004479CC; } }
    c.budget -= 1;
L_004477B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004477B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 364u, depth + 1u); else { c.pc = 0x004473E0u; return; } if (c.pc != 0x004477B8u) [[unlikely]] return; }
L_004477B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004479D0; } }
L_004477C0:
    set32(c.r[2], 0u + 204u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[17].d[0] = c.r[17].d[0] & 204ull;  goto L_004477DC; }
    set32(c.r[2], ld32((c.r[19].w[0] + 368u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004477E0; } }
    c.r[17].d[0] = c.r[17].d[0] & 204ull;
    c.budget -= 1;
L_004477DC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004477E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004477ECu); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00D0(c, 334u, depth + 1u); else { c.pc = 0x00442CB8u; return; } if (c.pc != 0x004477ECu) [[unlikely]] return; }
L_004477EC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_00447800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004479CC; } }
L_00447800:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004479D0; }
    c.r[2].d[0] = c.r[17].d[0] & 200ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044781C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044781Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D2(c, 267u, depth + 1u); else { c.pc = 0x0044B750u; return; } if (c.pc != 0x0044781Cu) [[unlikely]] return; }
L_0044781C:
    set32(c.r[2], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00447878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447830u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 408u, depth + 1u); else { c.pc = 0x00447A48u; return; } if (c.pc != 0x00447830u) [[unlikely]] return; }
L_00447830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447838u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 369u, depth + 1u); else { c.pc = 0x00443120u; return; } if (c.pc != 0x00447838u) [[unlikely]] return; }
L_00447838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_00447858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447848u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 410u, depth + 1u); else { c.pc = 0x00447B00u; return; } if (c.pc != 0x00447848u) [[unlikely]] return; }
L_00447848:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_004479CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004479C4; } }
L_00447858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447860u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 374u, depth + 1u); else { c.pc = 0x00443188u; return; } if (c.pc != 0x00447860u) [[unlikely]] return; }
L_00447860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_00447878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447870u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 428u, depth + 1u); else { c.pc = 0x00447D28u; return; } if (c.pc != 0x00447870u) [[unlikely]] return; }
L_00447870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004479C4; } }
L_00447878:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] & 76ull;  if (t) { goto L_004478C0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447890u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 437u, depth + 1u); else { c.pc = 0x00447E30u; return; } if (c.pc != 0x00447890u) [[unlikely]] return; }
L_00447890:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[22].sd[0] < 5ll ? 1ull : 0ull;  goto L_004478A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004478A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 265u, depth + 1u); else { c.pc = 0x0044B730u; return; } if (c.pc != 0x004478A0u) [[unlikely]] return; }
L_004478A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004479CC; } }
L_004478A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 76ull;  if (t) { goto L_004478C0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_004479C8; } }
    c.budget -= 1;
L_004478C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00447948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004478D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 406u, depth + 1u); else { c.pc = 0x004479F8u; return; } if (c.pc != 0x004478D0u) [[unlikely]] return; }
L_004478D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004478E8u); set32(c.r[8], c.r[29].w[0] + 20u);  if (depth < kMaxDepth) unit_00D1(c, 441u, depth + 1u); else { c.pc = 0x00447F28u; return; } if (c.pc != 0x004478E8u) [[unlikely]] return; }
L_004478E8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004479D0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 64u);  if (t) { goto L_00447920; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 120u)));
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 204u);  if (t) { goto L_00447914; } }
    st32((c.r[19].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 1;
L_00447914:
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 368u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
L_00447920:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_004479C4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_004479C4; } }
    set32(c.r[2], 0u + 192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 120u), c.r[2].w[0]);  if (t) { goto L_004479C0; } }
    c.budget -= 1;
L_00447948:
    c.r[2].d[0] = c.r[17].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004479A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044795Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 406u, depth + 1u); else { c.pc = 0x004479F8u; return; } if (c.pc != 0x0044795Cu) [[unlikely]] return; }
L_0044795C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447968u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 76u, depth + 1u); else { c.pc = 0x004494C8u; return; } if (c.pc != 0x00447968u) [[unlikely]] return; }
L_00447968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_00447990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447978u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 108u, depth + 1u); else { c.pc = 0x00449A38u; return; } if (c.pc != 0x00447978u) [[unlikely]] return; }
L_00447978:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_004479CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004479C4; } }
    c.budget -= 1;
L_00447990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447998u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 117u, depth + 1u); else { c.pc = 0x00449BA0u; return; } if (c.pc != 0x00447998u) [[unlikely]] return; }
L_00447998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004479C8; } }
L_004479A0:
    set32(c.r[2], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[5], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_004479C8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004479B8u); set32(c.r[6], 0u + 204u);  if (depth < kMaxDepth) unit_00D2(c, 174u, depth + 1u); else { c.pc = 0x0044A6F8u; return; } if (c.pc != 0x004479B8u) [[unlikely]] return; }
L_004479B8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004479CC; } }
L_004479C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004479C4:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_004479C8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004479CC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004479D0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004479F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447A14u); set32(c.r[5], ld32((c.r[4].w[0] + 8136u)));  if (depth < kMaxDepth) unit_00D0(c, 300u, depth + 1u); else { c.pc = 0x004426E0u; return; } if (c.pc != 0x00447A14u) [[unlikely]] return; }
L_00447A14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_00447A28; } }
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_00447A34; } }
L_00447A28:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_00447A34:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00447A48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[17].w[0] + 3524u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 8120u);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_00447A84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447A7Cu);  if (depth < kMaxDepth) unit_00D0(c, 329u, depth + 1u); else { c.pc = 0x00442BF8u; return; } if (c.pc != 0x00447A7Cu) [[unlikely]] return; }
L_00447A7C:
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_00447A84:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00447AE8; } }
    ldl(c.r[2], (c.r[17].w[0] + 3487u));
    ldr(c.r[2], (c.r[17].w[0] + 3480u));
    ldl(c.r[3], (c.r[17].w[0] + 3495u));
    ldr(c.r[3], (c.r[17].w[0] + 3488u));
    ldl(c.r[4], (c.r[17].w[0] + 3503u));
    ldr(c.r[4], (c.r[17].w[0] + 3496u));
    ldl(c.r[5], (c.r[17].w[0] + 3511u));
    ldr(c.r[5], (c.r[17].w[0] + 3504u));
    sdl(c.r[2], (c.r[18].w[0] + 7u));
    sdr(c.r[2], (c.r[18].w[0]));
    sdl(c.r[3], (c.r[18].w[0] + 15u));
    sdr(c.r[3], (c.r[18].w[0] + 8u));
    sdl(c.r[4], (c.r[18].w[0] + 23u));
    sdr(c.r[4], (c.r[18].w[0] + 16u));
    sdl(c.r[5], (c.r[18].w[0] + 31u));
    sdr(c.r[5], (c.r[18].w[0] + 24u));
    ldl(c.r[2], (c.r[17].w[0] + 3519u));
    ldr(c.r[2], (c.r[17].w[0] + 3512u));
    set32(c.r[3], ld32((c.r[17].w[0] + 3520u)));
    sdl(c.r[2], (c.r[18].w[0] + 39u));
    sdr(c.r[2], (c.r[18].w[0] + 32u));
    st32((c.r[18].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 22;
L_00447AE8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00447B00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447B1Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 413u, depth + 1u); else { c.pc = 0x00447B50u; return; } if (c.pc != 0x00447B1Cu) [[unlikely]] return; }
L_00447B1C:
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00447B38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447B34u);  if (depth < kMaxDepth) unit_00D1(c, 428u, depth + 1u); else { c.pc = 0x00447D28u; return; } if (c.pc != 0x00447B34u) [[unlikely]] return; }
L_00447B34:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00447B38:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00447B50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 3376u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447B78u); set32(c.r[18], ld32((c.r[16].w[0] + 8128u)));  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x00447B78u) [[unlikely]] return; }
L_00447B78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00447B90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447B88u);  if (depth < kMaxDepth) unit_00D1(c, 422u, depth + 1u); else { c.pc = 0x00447C20u; return; } if (c.pc != 0x00447B88u) [[unlikely]] return; }
L_00447B88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00447BA4; } }
L_00447B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447B98u);  if (depth < kMaxDepth) unit_00D1(c, 425u, depth + 1u); else { c.pc = 0x00447C80u; return; } if (c.pc != 0x00447B98u) [[unlikely]] return; }
L_00447B98:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_00447C08; } }
L_00447BA4:
    c.budget -= 2;
    if (c.r[5].sd[0] <= 0) { c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  goto L_00447BE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447BB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 377u, depth + 1u); else { c.pc = 0x004431D0u; return; } if (c.pc != 0x00447BB4u) [[unlikely]] return; }
L_00447BB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447BC8u); st32((c.r[18].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D3(c, 39u, depth + 1u); else { c.pc = 0x0044C7A8u; return; } if (c.pc != 0x00447BC8u) [[unlikely]] return; }
L_00447BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00447BE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447BD8u);  if (depth < kMaxDepth) unit_00D3(c, 103u, depth + 1u); else { c.pc = 0x0044D0A8u; return; } if (c.pc != 0x00447BD8u) [[unlikely]] return; }
L_00447BD8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 2;
L_00447BE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 1;
L_00447BE4:
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447BF0u); c.r[5].d[0] = c.r[5].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00D4(c, 63u, depth + 1u); else { c.pc = 0x004508E8u; return; } if (c.pc != 0x00447BF0u) [[unlikely]] return; }
L_00447BF0:
    set32(c.r[4], c.r[17].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447BFCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00D4(c, 63u, depth + 1u); else { c.pc = 0x004508E8u; return; } if (c.pc != 0x00447BFCu) [[unlikely]] return; }
L_00447BFC:
    set32(c.r[2], 0u + 192u);
    st32((c.r[18].w[0] + 120u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00447C08:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00447C20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    set32(c.r[16], c.r[3].w[0] + 3436u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 3480u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 3484u);  if (t) { goto L_00447C6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447C4Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 52u, depth + 1u); else { c.pc = 0x00448D18u; return; } if (c.pc != 0x00447C4Cu) [[unlikely]] return; }
L_00447C4C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 36u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447C60u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00D4(c, 145u, depth + 1u); else { c.pc = 0x00451490u; return; } if (c.pc != 0x00447C60u) [[unlikely]] return; }
L_00447C60:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 3;
L_00447C6C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00447C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 12280u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], c.r[16].w[0] + 3376u);  if (t) { goto L_00447CC0; } }
    c.r[2].d[0] = 0ull | 44100ull;
    st32((c.r[29].w[0]), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00447CE0; } }
    c.budget -= 1;
L_00447CC0:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447CCCu); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00D0(c, 383u, depth + 1u); else { c.pc = 0x00443310u; return; } if (c.pc != 0x00447CCCu) [[unlikely]] return; }
L_00447CCC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 496u)));  goto L_00447CE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00447D10; } }
    c.budget -= 1;
L_00447CE0:
    set32(c.r[2], ld32((c.r[17].w[0] + 496u)));
    c.budget -= 1;
L_00447CE4:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 3476u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[17].w[0] + 496u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447D00u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 36u, depth + 1u); else { c.pc = 0x0045C4A0u; return; } if (c.pc != 0x00447D00u) [[unlikely]] return; }
L_00447D00:
    set32(c.r[3], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 4;
L_00447D10:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00447D28:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[18], 0u + 128u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[19], 0u + 4u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_00447D78; } }
    c.budget -= 1;
L_00447D58:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00447D6Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00447D6Cu) [[unlikely]] return; }
L_00447D6C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447D78u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00D1(c, 435u, depth + 1u); else { c.pc = 0x00447DE8u; return; } if (c.pc != 0x00447D78u) [[unlikely]] return; }
L_00447D78:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00447D94u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00447D94u) [[unlikely]] return; }
L_00447D94:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[19].d[0]) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_00447DB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447DA8u); set32(c.r[4], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00D6(c, 64u, depth + 1u); else { c.pc = 0x00458E28u; return; } if (c.pc != 0x00447DA8u) [[unlikely]] return; }
L_00447DA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00447D58u | kUnwind; return; } goto L_00447D58; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00447DB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00447DC8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00447DC8u) [[unlikely]] return; }
L_00447DC8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00447DE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447E0Cu); set32(c.r[5], ld32((c.r[16].w[0] + 8136u)));  if (depth < kMaxDepth) unit_00D0(c, 335u, depth + 1u); else { c.pc = 0x00442D18u; return; } if (c.pc != 0x00447E0Cu) [[unlikely]] return; }
L_00447E0C:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 2472u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[17].d[0] + c.r[2].d[0];
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    st64((c.r[16].w[0] + 2472u), c.r[2].d[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00447E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 128u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00447E68; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00447E68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447E58u);  if (depth < kMaxDepth) unit_00D1(c, 439u, depth + 1u); else { c.pc = 0x00447E78u; return; } if (c.pc != 0x00447E58u) [[unlikely]] return; }
L_00447E58:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00447E6C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00447E68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00447E6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00447E78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8136u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00442E88u | kUnwind; return; } [[clang::musttail]] return unit_00D0(c, 343u, depth); }
L_00447E90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], 0u - 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[8].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00447ED8; } }
    c.r[2].d[0] = c.r[3].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00447EC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00447EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00447F0C; } }
    c.budget -= 1;
L_00447EC8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00447F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00447F1C; } }
L_00447ED8:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] > 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00447F18; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_00447EF0:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] > 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00447F18; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_00447F08:
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00447F0C:
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } goto L_00444148; }
L_00447F18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00447F1C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00447F28:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[20].w[0] + 8128u)));
    st32((c.r[29].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[23], c.r[19].w[0] + 4224u);
    set32(c.r[21], c.r[19].w[0] + 140u);
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[23].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[23].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447F90u); set32(c.r[6], ld32((c.r[23].w[0] + 8u)));  if (depth < kMaxDepth) unit_00D6(c, 111u, depth + 1u); else { c.pc = 0x00459F88u; return; } if (c.pc != 0x00447F90u) [[unlikely]] return; }
L_00447F90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447FA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 153u, depth + 1u); else { c.pc = 0x004258E8u; return; } if (c.pc != 0x00447FA0u) [[unlikely]] return; }
L_00447FA0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447FB0u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 113u, depth + 1u); else { c.pc = 0x00459FC8u; return; } if (c.pc != 0x00447FB0u) [[unlikely]] return; }
L_00447FB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447FC4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C9(c, 153u, depth + 1u); else { c.pc = 0x004258E8u; return; } if (c.pc != 0x00447FC4u) [[unlikely]] return; }
L_00447FC4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[22].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447FE0u); c.r[7].d[0] = c.r[7].d[0] | 3844ull;  if (depth < kMaxDepth) unit_00D1(c, 440u, depth + 1u); else { c.pc = 0x00447E90u; return; } if (c.pc != 0x00447FE0u) [[unlikely]] return; }
L_00447FE0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447FF0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 435u, depth + 1u); else { c.pc = 0x00447DE8u; return; } if (c.pc != 0x00447FF0u) [[unlikely]] return; }
L_00447FF0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00D2(c, 19u, depth); } }
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[16], 0u - 2u);
    c.budget -= 2;
    [[clang::musttail]] return unit_00D2(c, 1u, depth);
}

}
