#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0063[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62,
    0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0,
    0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0,
    0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192,
    0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0,
    0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261,
    0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0,
    0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0,
    0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0,
    0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0,
    0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0,
    314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0,
    0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0,
    0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0,
    0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348,
    0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0,
    0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359,
    0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0063(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0028C000;
    case 2u: goto L_0028C01C;
    case 3u: goto L_0028C030;
    case 4u: goto L_0028C060;
    case 5u: goto L_0028C084;
    case 6u: goto L_0028C098;
    case 7u: goto L_0028C0B8;
    case 8u: goto L_0028C0DC;
    case 9u: goto L_0028C104;
    case 10u: goto L_0028C11C;
    case 11u: goto L_0028C12C;
    case 12u: goto L_0028C160;
    case 13u: goto L_0028C180;
    case 14u: goto L_0028C1A0;
    case 15u: goto L_0028C1B4;
    case 16u: goto L_0028C1C8;
    case 17u: goto L_0028C1EC;
    case 18u: goto L_0028C1FC;
    case 19u: goto L_0028C250;
    case 20u: goto L_0028C278;
    case 21u: goto L_0028C2A4;
    case 22u: goto L_0028C2C8;
    case 23u: goto L_0028C2E4;
    case 24u: goto L_0028C2F0;
    case 25u: goto L_0028C308;
    case 26u: goto L_0028C348;
    case 27u: goto L_0028C374;
    case 28u: goto L_0028C384;
    case 29u: goto L_0028C3A0;
    case 30u: goto L_0028C3B4;
    case 31u: goto L_0028C3C8;
    case 32u: goto L_0028C3E4;
    case 33u: goto L_0028C408;
    case 34u: goto L_0028C41C;
    case 35u: goto L_0028C43C;
    case 36u: goto L_0028C460;
    case 37u: goto L_0028C49C;
    case 38u: goto L_0028C4E8;
    case 39u: goto L_0028C528;
    case 40u: goto L_0028C548;
    case 41u: goto L_0028C56C;
    case 42u: goto L_0028C5A4;
    case 43u: goto L_0028C5B0;
    case 44u: goto L_0028C5D8;
    case 45u: goto L_0028C5E8;
    case 46u: goto L_0028C62C;
    case 47u: goto L_0028C660;
    case 48u: goto L_0028C66C;
    case 49u: goto L_0028C684;
    case 50u: goto L_0028C69C;
    case 51u: goto L_0028C6B8;
    case 52u: goto L_0028C6D0;
    case 53u: goto L_0028C6F0;
    case 54u: goto L_0028C710;
    case 55u: goto L_0028C720;
    case 56u: goto L_0028C73C;
    case 57u: goto L_0028C74C;
    case 58u: goto L_0028C798;
    case 59u: goto L_0028C7BC;
    case 60u: goto L_0028C7D4;
    case 61u: goto L_0028C7E4;
    case 62u: goto L_0028C7FC;
    case 63u: goto L_0028C808;
    case 64u: goto L_0028C81C;
    case 65u: goto L_0028C840;
    case 66u: goto L_0028C860;
    case 67u: goto L_0028C8BC;
    case 68u: goto L_0028C8E8;
    case 69u: goto L_0028C908;
    case 70u: goto L_0028C930;
    case 71u: goto L_0028C94C;
    case 72u: goto L_0028C95C;
    case 73u: goto L_0028C98C;
    case 74u: goto L_0028C9A0;
    case 75u: goto L_0028C9B0;
    case 76u: goto L_0028C9D8;
    case 77u: goto L_0028C9F4;
    case 78u: goto L_0028CA58;
    case 79u: goto L_0028CAF8;
    case 80u: goto L_0028CB10;
    case 81u: goto L_0028CB28;
    case 82u: goto L_0028CB3C;
    case 83u: goto L_0028CB70;
    case 84u: goto L_0028CB90;
    case 85u: goto L_0028CBAC;
    case 86u: goto L_0028CBDC;
    case 87u: goto L_0028CBF8;
    case 88u: goto L_0028CC10;
    case 89u: goto L_0028CC30;
    case 90u: goto L_0028CC54;
    case 91u: goto L_0028CC7C;
    case 92u: goto L_0028CC98;
    case 93u: goto L_0028CCAC;
    case 94u: goto L_0028CCC4;
    case 95u: goto L_0028CCE4;
    case 96u: goto L_0028CD38;
    case 97u: goto L_0028CD68;
    case 98u: goto L_0028CD90;
    case 99u: goto L_0028CDAC;
    case 100u: goto L_0028CDCC;
    case 101u: goto L_0028CDE0;
    case 102u: goto L_0028CE08;
    case 103u: goto L_0028CE24;
    case 104u: goto L_0028CE40;
    case 105u: goto L_0028CE70;
    case 106u: goto L_0028CE8C;
    case 107u: goto L_0028CEA4;
    case 108u: goto L_0028CEC4;
    case 109u: goto L_0028CEE4;
    case 110u: goto L_0028CEFC;
    case 111u: goto L_0028CF24;
    case 112u: goto L_0028CF40;
    case 113u: goto L_0028CF50;
    case 114u: goto L_0028CF78;
    case 115u: goto L_0028CFA0;
    case 116u: goto L_0028CFBC;
    case 117u: goto L_0028CFCC;
    case 118u: goto L_0028D004;
    case 119u: goto L_0028D024;
    case 120u: goto L_0028D03C;
    case 121u: goto L_0028D064;
    case 122u: goto L_0028D074;
    case 123u: goto L_0028D094;
    case 124u: goto L_0028D0C0;
    case 125u: goto L_0028D0D4;
    case 126u: goto L_0028D0E4;
    case 127u: goto L_0028D108;
    case 128u: goto L_0028D130;
    case 129u: goto L_0028D184;
    case 130u: goto L_0028D1A0;
    case 131u: goto L_0028D1D8;
    case 132u: goto L_0028D1EC;
    case 133u: goto L_0028D23C;
    case 134u: goto L_0028D24C;
    case 135u: goto L_0028D25C;
    case 136u: goto L_0028D26C;
    case 137u: goto L_0028D294;
    case 138u: goto L_0028D2C0;
    case 139u: goto L_0028D2D8;
    case 140u: goto L_0028D330;
    case 141u: goto L_0028D348;
    case 142u: goto L_0028D354;
    case 143u: goto L_0028D39C;
    case 144u: goto L_0028D3C0;
    case 145u: goto L_0028D3F0;
    case 146u: goto L_0028D418;
    case 147u: goto L_0028D440;
    case 148u: goto L_0028D45C;
    case 149u: goto L_0028D474;
    case 150u: goto L_0028D490;
    case 151u: goto L_0028D4BC;
    case 152u: goto L_0028D4D8;
    case 153u: goto L_0028D500;
    case 154u: goto L_0028D558;
    case 155u: goto L_0028D570;
    case 156u: goto L_0028D5E4;
    case 157u: goto L_0028D5F0;
    case 158u: goto L_0028D62C;
    case 159u: goto L_0028D66C;
    case 160u: goto L_0028D684;
    case 161u: goto L_0028D6A4;
    case 162u: goto L_0028D6C8;
    case 163u: goto L_0028D6E4;
    case 164u: goto L_0028D704;
    case 165u: goto L_0028D734;
    case 166u: goto L_0028D744;
    case 167u: goto L_0028D788;
    case 168u: goto L_0028D7EC;
    case 169u: goto L_0028D81C;
    case 170u: goto L_0028D830;
    case 171u: goto L_0028D860;
    case 172u: goto L_0028D888;
    case 173u: goto L_0028D8A4;
    case 174u: goto L_0028D8C4;
    case 175u: goto L_0028D8E8;
    case 176u: goto L_0028D910;
    case 177u: goto L_0028D92C;
    case 178u: goto L_0028D948;
    case 179u: goto L_0028D974;
    case 180u: goto L_0028D99C;
    case 181u: goto L_0028D9B8;
    case 182u: goto L_0028D9D8;
    case 183u: goto L_0028DA0C;
    case 184u: goto L_0028DA34;
    case 185u: goto L_0028DA50;
    case 186u: goto L_0028DA94;
    case 187u: goto L_0028DABC;
    case 188u: goto L_0028DAD8;
    case 189u: goto L_0028DAF4;
    case 190u: goto L_0028DB88;
    case 191u: goto L_0028DB98;
    case 192u: goto L_0028DBFC;
    case 193u: goto L_0028DC1C;
    case 194u: goto L_0028DC4C;
    case 195u: goto L_0028DC74;
    case 196u: goto L_0028DC90;
    case 197u: goto L_0028DCB0;
    case 198u: goto L_0028DCCC;
    case 199u: goto L_0028DD08;
    case 200u: goto L_0028DD18;
    case 201u: goto L_0028DD34;
    case 202u: goto L_0028DD64;
    case 203u: goto L_0028DD84;
    case 204u: goto L_0028DDA0;
    case 205u: goto L_0028DDB8;
    case 206u: goto L_0028DDCC;
    case 207u: goto L_0028DDF4;
    case 208u: goto L_0028DE10;
    case 209u: goto L_0028DE34;
    case 210u: goto L_0028DE54;
    case 211u: goto L_0028DE94;
    case 212u: goto L_0028DECC;
    case 213u: goto L_0028DEF4;
    case 214u: goto L_0028DF10;
    case 215u: goto L_0028DF24;
    case 216u: goto L_0028DF50;
    case 217u: goto L_0028DF84;
    case 218u: goto L_0028DFAC;
    case 219u: goto L_0028DFC8;
    case 220u: goto L_0028DFF0;
    case 221u: goto L_0028E010;
    case 222u: goto L_0028E050;
    case 223u: goto L_0028E06C;
    case 224u: goto L_0028E094;
    case 225u: goto L_0028E0B0;
    case 226u: goto L_0028E0D8;
    case 227u: goto L_0028E0F8;
    case 228u: goto L_0028E130;
    case 229u: goto L_0028E154;
    case 230u: goto L_0028E168;
    case 231u: goto L_0028E178;
    case 232u: goto L_0028E1B4;
    case 233u: goto L_0028E1C8;
    case 234u: goto L_0028E1D8;
    case 235u: goto L_0028E1F0;
    case 236u: goto L_0028E210;
    case 237u: goto L_0028E23C;
    case 238u: goto L_0028E254;
    case 239u: goto L_0028E264;
    case 240u: goto L_0028E2BC;
    case 241u: goto L_0028E304;
    case 242u: goto L_0028E31C;
    case 243u: goto L_0028E334;
    case 244u: goto L_0028E34C;
    case 245u: goto L_0028E364;
    case 246u: goto L_0028E374;
    case 247u: goto L_0028E384;
    case 248u: goto L_0028E3AC;
    case 249u: goto L_0028E3D4;
    case 250u: goto L_0028E3F0;
    case 251u: goto L_0028E40C;
    case 252u: goto L_0028E430;
    case 253u: goto L_0028E450;
    case 254u: goto L_0028E470;
    case 255u: goto L_0028E4AC;
    case 256u: goto L_0028E4D0;
    case 257u: goto L_0028E4E0;
    case 258u: goto L_0028E530;
    case 259u: goto L_0028E544;
    case 260u: goto L_0028E554;
    case 261u: goto L_0028E57C;
    case 262u: goto L_0028E590;
    case 263u: goto L_0028E59C;
    case 264u: goto L_0028E5D8;
    case 265u: goto L_0028E61C;
    case 266u: goto L_0028E65C;
    case 267u: goto L_0028E678;
    case 268u: goto L_0028E690;
    case 269u: goto L_0028E69C;
    case 270u: goto L_0028E6E8;
    case 271u: goto L_0028E704;
    case 272u: goto L_0028E720;
    case 273u: goto L_0028E728;
    case 274u: goto L_0028E730;
    case 275u: goto L_0028E750;
    case 276u: goto L_0028E780;
    case 277u: goto L_0028E7A0;
    case 278u: goto L_0028E7B8;
    case 279u: goto L_0028E7E4;
    case 280u: goto L_0028E810;
    case 281u: goto L_0028E840;
    case 282u: goto L_0028E854;
    case 283u: goto L_0028E888;
    case 284u: goto L_0028E8A8;
    case 285u: goto L_0028E8C8;
    case 286u: goto L_0028E8E8;
    case 287u: goto L_0028E8F8;
    case 288u: goto L_0028E914;
    case 289u: goto L_0028E924;
    case 290u: goto L_0028E974;
    case 291u: goto L_0028E9A8;
    case 292u: goto L_0028E9D4;
    case 293u: goto L_0028E9EC;
    case 294u: goto L_0028EA10;
    case 295u: goto L_0028EA9C;
    case 296u: goto L_0028EAE8;
    case 297u: goto L_0028EB08;
    case 298u: goto L_0028EB18;
    case 299u: goto L_0028EB34;
    case 300u: goto L_0028EB44;
    case 301u: goto L_0028EB70;
    case 302u: goto L_0028EB98;
    case 303u: goto L_0028EBA8;
    case 304u: goto L_0028EBC0;
    case 305u: goto L_0028EBF4;
    case 306u: goto L_0028EC00;
    case 307u: goto L_0028EC28;
    case 308u: goto L_0028EC60;
    case 309u: goto L_0028EC84;
    case 310u: goto L_0028EC94;
    case 311u: goto L_0028ECB0;
    case 312u: goto L_0028ECC8;
    case 313u: goto L_0028ECF4;
    case 314u: goto L_0028ED00;
    case 315u: goto L_0028ED38;
    case 316u: goto L_0028ED48;
    case 317u: goto L_0028ED58;
    case 318u: goto L_0028ED68;
    case 319u: goto L_0028ED88;
    case 320u: goto L_0028EDC0;
    case 321u: goto L_0028EDD4;
    case 322u: goto L_0028EDE4;
    case 323u: goto L_0028EE0C;
    case 324u: goto L_0028EE20;
    case 325u: goto L_0028EE38;
    case 326u: goto L_0028EE54;
    case 327u: goto L_0028EE64;
    case 328u: goto L_0028EE70;
    case 329u: goto L_0028EE8C;
    case 330u: goto L_0028EEA8;
    case 331u: goto L_0028EED0;
    case 332u: goto L_0028EEF4;
    case 333u: goto L_0028EF18;
    case 334u: goto L_0028EF58;
    case 335u: goto L_0028EF78;
    case 336u: goto L_0028EF88;
    case 337u: goto L_0028EFC0;
    case 338u: goto L_0028EFF0;
    case 339u: goto L_0028F010;
    case 340u: goto L_0028F020;
    case 341u: goto L_0028F058;
    case 342u: goto L_0028F070;
    case 343u: goto L_0028F08C;
    case 344u: goto L_0028F0A0;
    case 345u: goto L_0028F0B8;
    case 346u: goto L_0028F0D0;
    case 347u: goto L_0028F0E4;
    case 348u: goto L_0028F0FC;
    case 349u: goto L_0028F114;
    case 350u: goto L_0028F12C;
    case 351u: goto L_0028F140;
    case 352u: goto L_0028F158;
    case 353u: goto L_0028F178;
    case 354u: goto L_0028F184;
    case 355u: goto L_0028F198;
    case 356u: goto L_0028F1B0;
    case 357u: goto L_0028F1CC;
    case 358u: goto L_0028F1E0;
    case 359u: goto L_0028F1FC;
    case 360u: goto L_0028F210;
    case 361u: goto L_0028F220;
    case 362u: goto L_0028F238;
    case 363u: goto L_0028F278;
    case 364u: goto L_0028F2F8;
    case 365u: goto L_0028F3B0;
    case 366u: goto L_0028F678;
    case 367u: goto L_0028F6D8;
    case 368u: goto L_0028F740;
    case 369u: goto L_0028F7A0;
    case 370u: goto L_0028F7F8;
    case 371u: goto L_0028F830;
    case 372u: goto L_0028F8C0;
    case 373u: goto L_0028F920;
    case 374u: goto L_0028F980;
    case 375u: goto L_0028F9E0;
    case 376u: goto L_0028FA20;
    case 377u: goto L_0028FAE8;
    case 378u: goto L_0028FB30;
    case 379u: goto L_0028FB78;
    case 380u: goto L_0028FBD8;
    case 381u: goto L_0028FC24;
    case 382u: goto L_0028FC94;
    case 383u: goto L_0028FCC0;
    case 384u: goto L_0028FCDC;
    case 385u: goto L_0028FCE8;
    case 386u: goto L_0028FCF4;
    case 387u: goto L_0028FD58;
    case 388u: goto L_0028FD8C;
    case 389u: goto L_0028FD9C;
    case 390u: goto L_0028FDD0;
    case 391u: goto L_0028FE60;
    case 392u: goto L_0028FE94;
    case 393u: goto L_0028FEA0;
    case 394u: goto L_0028FEAC;
    case 395u: goto L_0028FEB4;
    case 396u: goto L_0028FEC4;
    case 397u: goto L_0028FF20;
    case 398u: goto L_0028FF60;
    case 399u: goto L_0028FF90;
    case 400u: goto L_0028FF9C;
    case 401u: goto L_0028FFA8;
    default: bad_entry(c, 0x0028C000u); return;
    }
L_0028C000:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C01Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028C01Cu) [[unlikely]] return; }
L_0028C01C:
    set32(c.r[4], 0u + 120u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C4C4; } }
L_0028C030:
    set32(c.r[3], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028C0E4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C060u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028C060u) [[unlikely]] return; }
L_0028C060:
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C084u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028C084u) [[unlikely]] return; }
L_0028C084:
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C098u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028C098u) [[unlikely]] return; }
L_0028C098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028C4AC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 204u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 196u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C0B8u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0028C0B8u) [[unlikely]] return; }
L_0028C0B8:
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[6], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 224u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 204u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 196u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C0DCu);  if (depth < kMaxDepth) unit_0061(c, 277u, depth + 1u); else { c.pc = 0x00286A58u; return; } if (c.pc != 0x0028C0DCu) [[unlikely]] return; }
L_0028C0DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C4AC; } }
L_0028C0E4:
    set32(c.r[3], ld32((c.r[6].w[0] + 212u)));
    set32(c.r[20], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028C104u) [[unlikely]] return; }
L_0028C104:
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 224u)));
    set32(c.r[5], c.r[5].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C11Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0028C11Cu) [[unlikely]] return; }
L_0028C11C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C12Cu);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0028C12Cu) [[unlikely]] return; }
L_0028C12C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 160u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028C2F8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C160u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0028C160u) [[unlikely]] return; }
L_0028C160:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028C180; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[6], 0u + 10u);
    set32(c.r[5], ld32((c.r[19].w[0] + 204u)));
    c.f[12] = ld32((c.r[19].w[0] + 548u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C180u);  if (depth < kMaxDepth) unit_0061(c, 277u, depth + 1u); else { c.pc = 0x00286A58u; return; } if (c.pc != 0x0028C180u) [[unlikely]] return; }
L_0028C180:
    set32(c.r[2], ld32((c.r[19].w[0] + 236u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], c.r[5].w[0] + 9920u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C1A0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0028C1A0u) [[unlikely]] return; }
L_0028C1A0:
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C1B4u);  if (depth < kMaxDepth) unit_0061(c, 271u, depth + 1u); else { c.pc = 0x002869A8u; return; } if (c.pc != 0x0028C1B4u) [[unlikely]] return; }
L_0028C1B4:
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C1C8u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0028C1C8u) [[unlikely]] return; }
L_0028C1C8:
    set32(c.r[6], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C1ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028C1ECu) [[unlikely]] return; }
L_0028C1EC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C1FCu);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0028C1FCu) [[unlikely]] return; }
L_0028C1FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 164u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028C2C8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 212u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], ld32((c.r[16].w[0] - 144u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 224u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] - 152u)));
    set32(c.r[9], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 96u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C250u);  if (depth < kMaxDepth) unit_0068(c, 216u, depth + 1u); else { c.pc = 0x002A2E70u; return; } if (c.pc != 0x0028C250u) [[unlikely]] return; }
L_0028C250:
    set32(c.r[4], ld32((c.r[19].w[0] + 212u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] - 144u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 224u)));
    set32(c.r[9], 0u + 1u);
    set32(c.r[7], ld32((c.r[17].w[0] - 152u)));
    set32(c.r[5], c.r[5].w[0] + 96u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C278u);  if (depth < kMaxDepth) unit_0068(c, 216u, depth + 1u); else { c.pc = 0x002A2E70u; return; } if (c.pc != 0x0028C278u) [[unlikely]] return; }
L_0028C278:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0028C288; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028C2D4; } }
L_0028C288:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C2A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028C2A4u) [[unlikely]] return; }
L_0028C2A4:
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C2C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028C2C8u) [[unlikely]] return; }
L_0028C2C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C4C4; } }
L_0028C2D4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C2E4u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0028C2E4u) [[unlikely]] return; }
L_0028C2E4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C2F0u);  if (depth < kMaxDepth) unit_0063(c, 52u, depth + 1u); else { c.pc = 0x0028C6D0u; return; } if (c.pc != 0x0028C2F0u) [[unlikely]] return; }
L_0028C2F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C2C8u | kUnwind; return; } goto L_0028C2C8; } }
L_0028C2F8:
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C308u);  if (depth < kMaxDepth) unit_0069(c, 69u, depth + 1u); else { c.pc = 0x002A4FC8u; return; } if (c.pc != 0x0028C308u) [[unlikely]] return; }
L_0028C308:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C2C8u | kUnwind; return; } goto L_0028C2C8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C2C8u | kUnwind; return; } goto L_0028C2C8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C348u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0028C348u) [[unlikely]] return; }
L_0028C348:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C2C8u | kUnwind; return; } goto L_0028C2C8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 838u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028C374; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 204u)));
    set32(c.r[6], 0u + 10u);
    c.f[12] = ld32((c.r[19].w[0] + 548u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C374u);  if (depth < kMaxDepth) unit_0061(c, 277u, depth + 1u); else { c.pc = 0x00286A58u; return; } if (c.pc != 0x0028C374u) [[unlikely]] return; }
L_0028C374:
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C384u);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0028C384u) [[unlikely]] return; }
L_0028C384:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[5], 0u + 149u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C3A0u);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0028C3A0u) [[unlikely]] return; }
L_0028C3A0:
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C3B4u);  if (depth < kMaxDepth) unit_0069(c, 81u, depth + 1u); else { c.pc = 0x002A56E8u; return; } if (c.pc != 0x0028C3B4u) [[unlikely]] return; }
L_0028C3B4:
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[5], 0u + 120u);
    set32(c.r[4], ld32((c.r[3].w[0] + 224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C3C8u);  if (depth < kMaxDepth) unit_0065(c, 292u, depth + 1u); else { c.pc = 0x002971E8u; return; } if (c.pc != 0x0028C3C8u) [[unlikely]] return; }
L_0028C3C8:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C3E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028C3E4u) [[unlikely]] return; }
L_0028C3E4:
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C408u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028C408u) [[unlikely]] return; }
L_0028C408:
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C41Cu);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028C41Cu) [[unlikely]] return; }
L_0028C41C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028C460; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 204u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 196u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C43Cu);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0028C43Cu) [[unlikely]] return; }
L_0028C43C:
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[6], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 224u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 204u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 196u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C460u);  if (depth < kMaxDepth) unit_0061(c, 277u, depth + 1u); else { c.pc = 0x00286A58u; return; } if (c.pc != 0x0028C460u) [[unlikely]] return; }
L_0028C460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 10120u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0028C4AC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C49Cu);  if (depth < kMaxDepth) unit_007C(c, 132u, depth + 1u); else { c.pc = 0x002F25F8u; return; } if (c.pc != 0x0028C49Cu) [[unlikely]] return; }
L_0028C49C:
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    set32(c.r[4], 0u + 6u);
    set32(c.r[2], ld32((c.r[3].w[0] + 840u)));
    st32((c.r[2].w[0] + 7700u), c.r[4].w[0]);
    c.budget -= 4;
L_0028C4AC:
    set32(c.r[5], 0u + 120u);
    set32(c.r[4], ld32((c.r[19].w[0] + 212u)));
    st32((c.r[19].w[0] + 56u), c.r[5].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 224u)));
    st32((c.r[3].w[0] + 56u), c.r[5].w[0]);
    c.budget -= 6;
L_0028C4C4:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028C4E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028C53C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C528u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028C528u) [[unlikely]] return; }
L_0028C528:
    set32(c.r[2], 0u + 120u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C678; } }
L_0028C53C:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C548u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0028C548u) [[unlikely]] return; }
L_0028C548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028C580; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C56Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028C56Cu) [[unlikely]] return; }
L_0028C56C:
    set32(c.r[2], 0u + 120u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C678; } }
L_0028C580:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 838u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028C5A4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[6], 0u + 10u);
    c.f[12] = ld32((c.r[16].w[0] + 548u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C5A4u);  if (depth < kMaxDepth) unit_0061(c, 277u, depth + 1u); else { c.pc = 0x00286A58u; return; } if (c.pc != 0x0028C5A4u) [[unlikely]] return; }
L_0028C5A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C5B0u);  if (depth < kMaxDepth) unit_0065(c, 294u, depth + 1u); else { c.pc = 0x00297228u; return; } if (c.pc != 0x0028C5B0u) [[unlikely]] return; }
L_0028C5B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028C674; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 838u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028C660; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C5D8u);  if (depth < kMaxDepth) unit_0065(c, 228u, depth + 1u); else { c.pc = 0x002967F8u; return; } if (c.pc != 0x0028C5D8u) [[unlikely]] return; }
L_0028C5D8:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C5E8u);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0028C5E8u) [[unlikely]] return; }
L_0028C5E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.f[1] = c.f[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 356u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028C660; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028C634; } }
    st32((c.r[4].w[0] + 828u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C62Cu);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x0028C62Cu) [[unlikely]] return; }
L_0028C62C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C660; } }
L_0028C634:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x48740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028C660; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C660u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0028C660u) [[unlikely]] return; }
L_0028C660:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C66Cu);  if (depth < kMaxDepth) unit_0063(c, 52u, depth + 1u); else { c.pc = 0x0028C6D0u; return; } if (c.pc != 0x0028C66Cu) [[unlikely]] return; }
L_0028C66C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C6BC; } }
L_0028C674:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028C678:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C684u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028C684u) [[unlikely]] return; }
L_0028C684:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028C6B8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C69Cu);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0028C69Cu) [[unlikely]] return; }
L_0028C69C:
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[6], 0u + 10u);
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C6B8u);  if (depth < kMaxDepth) unit_0061(c, 277u, depth + 1u); else { c.pc = 0x00286A58u; return; } if (c.pc != 0x0028C6B8u) [[unlikely]] return; }
L_0028C6B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028C6BC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028C6D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C6F0u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0028C6F0u) [[unlikely]] return; }
L_0028C6F0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028C840; } }
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C710u);  if (depth < kMaxDepth) unit_0065(c, 228u, depth + 1u); else { c.pc = 0x002967F8u; return; } if (c.pc != 0x0028C710u) [[unlikely]] return; }
L_0028C710:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C720u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028C720u) [[unlikely]] return; }
L_0028C720:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028C754; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C73Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0028C73Cu) [[unlikely]] return; }
L_0028C73C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C74Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0028C74Cu) [[unlikely]] return; }
L_0028C74C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C798; } }
L_0028C754:
    set32(c.r[3], ld32((c.r[17].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 838u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028C770; } }
    c.f[12] = ld32((c.r[3].w[0] + 952u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C774; } }
L_0028C770:
    c.f[12] = ld32((c.r[3].w[0] + 948u));
    c.budget -= 1;
L_0028C774:
    set32(c.r[4], ld32((c.r[17].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0028C798; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[13] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[17].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C798u);  if (depth < kMaxDepth) unit_0067(c, 265u, depth + 1u); else { c.pc = 0x0029E890u; return; } if (c.pc != 0x0028C798u) [[unlikely]] return; }
L_0028C798:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00290000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[2], c.r[2].w[0] - 15128u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028C7FC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C7BCu);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028C7BCu) [[unlikely]] return; }
L_0028C7BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028C7D4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C7D4u);  if (depth < kMaxDepth) unit_0065(c, 178u, depth + 1u); else { c.pc = 0x002960E8u; return; } if (c.pc != 0x0028C7D4u) [[unlikely]] return; }
L_0028C7D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C7E4u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028C7E4u) [[unlikely]] return; }
L_0028C7E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028C7FC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C7FCu);  if (depth < kMaxDepth) unit_0065(c, 195u, depth + 1u); else { c.pc = 0x00296360u; return; } if (c.pc != 0x0028C7FCu) [[unlikely]] return; }
L_0028C7FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C808u);  if (depth < kMaxDepth) unit_0065(c, 294u, depth + 1u); else { c.pc = 0x00297228u; return; } if (c.pc != 0x0028C808u) [[unlikely]] return; }
L_0028C808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028C840; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C81Cu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0028C81Cu) [[unlikely]] return; }
L_0028C81C:
    set32(c.r[3], ld32((c.r[2].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0028C840; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C840u);  if (depth < kMaxDepth) unit_0061(c, 115u, depth + 1u); else { c.pc = 0x002853E0u; return; } if (c.pc != 0x0028C840u) [[unlikely]] return; }
L_0028C840:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028C860:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0028D110; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D10C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028C8C4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C8BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028C8BCu) [[unlikely]] return; }
L_0028C8BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D10C; } }
L_0028C8C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028C9BC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], 0u + 137u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C8E8u);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0028C8E8u) [[unlikely]] return; }
L_0028C8E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 44u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0028C968; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C908u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028C908u) [[unlikely]] return; }
L_0028C908:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028C91C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028C930; } }
L_0028C91C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 246u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C930u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028C930u) [[unlikely]] return; }
L_0028C930:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C94Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028C94Cu) [[unlikely]] return; }
L_0028C94C:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C95Cu);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0028C95Cu) [[unlikely]] return; }
L_0028C95C:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D10C; } }
L_0028C968:
    set32(c.r[2], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0028D10C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 140u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C98Cu);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0028C98Cu) [[unlikely]] return; }
L_0028C98C:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C9A0u);  if (depth < kMaxDepth) unit_0069(c, 81u, depth + 1u); else { c.pc = 0x002A56E8u; return; } if (c.pc != 0x0028C9A0u) [[unlikely]] return; }
L_0028C9A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C9B0u);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0028C9B0u) [[unlikely]] return; }
L_0028C9B0:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D108; } }
L_0028C9BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C9D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028C9D8u) [[unlikely]] return; }
L_0028C9D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 920u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0028CA60; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C9F4u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0028C9F4u) [[unlikely]] return; }
L_0028C9F4:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0028CA00u);  goto L_0028CA04; }
L_0028CA04:
    c.r[4].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[4].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0028D10C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], 0u + 13248u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[7], 0u + 880u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[6], c.r[6].w[0] + 14208u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 4440u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7694u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 284u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CA58u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0028CA58u) [[unlikely]] return; }
L_0028CA58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D10C; } }
L_0028CA60:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], 0u + 13248u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 11188u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0028CABC; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 7700u)));
    set32(c.r[2], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028D10C; } }
    set32(c.r[2], 0u + 212u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028D10C; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028D10C; } }
L_0028CABC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 228u)));
    set32(c.r[3], 0u + 13248u);
    set32(c.r[4], c.r[19].w[0] + 14208u);
    set32(c.r[5], 0u + 4u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 7700u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0028CAEC; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028CB00; } }
L_0028CAEC:
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CAF8u);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x0028CAF8u) [[unlikely]] return; }
L_0028CAF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D10C; } }
L_0028CB00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CB10u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028CB10u) [[unlikely]] return; }
L_0028CB10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028CB28; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CB28u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0028CB28u) [[unlikely]] return; }
L_0028CB28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CB3Cu);  if (depth < kMaxDepth) unit_0065(c, 244u, depth + 1u); else { c.pc = 0x00296A60u; return; } if (c.pc != 0x0028CB3Cu) [[unlikely]] return; }
L_0028CB3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D10C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CB78; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CB70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CB70u) [[unlikely]] return; }
L_0028CB70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D10C; } }
L_0028CB78:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 140u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CB90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CB90u) [[unlikely]] return; }
L_0028CB90:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CBACu);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0028CBACu) [[unlikely]] return; }
L_0028CBAC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 43u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0028CC38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 144u)));
    set32(c.r[7], ld32((c.r[3].w[0] - 148u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CBDCu);  if (depth < kMaxDepth) unit_0068(c, 229u, depth + 1u); else { c.pc = 0x002A30B8u; return; } if (c.pc != 0x0028CBDCu) [[unlikely]] return; }
L_0028CBDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028CCA0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 556u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CBF8u);  if (depth < kMaxDepth) unit_0066(c, 306u, depth + 1u); else { c.pc = 0x0029B1D8u; return; } if (c.pc != 0x0028CBF8u) [[unlikely]] return; }
L_0028CBF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CCA0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CC10u);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0028CC10u) [[unlikely]] return; }
L_0028CC10:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CC30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CC30u) [[unlikely]] return; }
L_0028CC30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D10C; } }
L_0028CC38:
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0028CCA0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CC54u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028CC54u) [[unlikely]] return; }
L_0028CC54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CC68; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CC7C; } }
L_0028CC68:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 246u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CC7Cu);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028CC7Cu) [[unlikely]] return; }
L_0028CC7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CC98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CC98u) [[unlikely]] return; }
L_0028CC98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D10C; } }
L_0028CCA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CCACu);  if (depth < kMaxDepth) unit_0065(c, 294u, depth + 1u); else { c.pc = 0x00297228u; return; } if (c.pc != 0x0028CCACu) [[unlikely]] return; }
L_0028CCAC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028CCE4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CCC4u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0028CCC4u) [[unlikely]] return; }
L_0028CCC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CCE4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[6], 0u + 10u);
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    c.f[12] = ld32((c.r[16].w[0] + 548u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CCE4u);  if (depth < kMaxDepth) unit_0061(c, 277u, depth + 1u); else { c.pc = 0x00286A58u; return; } if (c.pc != 0x0028CCE4u) [[unlikely]] return; }
L_0028CCE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D10C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[2], 0u + 13248u);
    set32(c.r[4], c.r[19].w[0] + 14208u);
    set32(c.r[5], 0u + 9u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 7700u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0028CD2C; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0028CDB4; } }
L_0028CD2C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CD38u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0028CD38u) [[unlikely]] return; }
L_0028CD38:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0028CD44u);  goto L_0028CD48; }
L_0028CD48:
    c.r[4].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[4].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0028D10C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CD68u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028CD68u) [[unlikely]] return; }
L_0028CD68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CD7C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CD90; } }
L_0028CD7C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 246u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CD90u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028CD90u) [[unlikely]] return; }
L_0028CD90:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CDACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CDACu) [[unlikely]] return; }
L_0028CDAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D10C; } }
L_0028CDB4:
    set32(c.r[19], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[19].d[0];  if (t) { goto L_0028CE2C; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CDCCu);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0028CDCCu) [[unlikely]] return; }
L_0028CDCC:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CDE0u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028CDE0u) [[unlikely]] return; }
L_0028CDE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CDF4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CE08; } }
L_0028CDF4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 246u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CE08u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028CE08u) [[unlikely]] return; }
L_0028CE08:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CE24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CE24u) [[unlikely]] return; }
L_0028CE24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D10C; } }
L_0028CE2C:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 137u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CE40u);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0028CE40u) [[unlikely]] return; }
L_0028CE40:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 43u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0028CF5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 144u)));
    set32(c.r[7], ld32((c.r[3].w[0] - 148u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CE70u);  if (depth < kMaxDepth) unit_0068(c, 229u, depth + 1u); else { c.pc = 0x002A30B8u; return; } if (c.pc != 0x0028CE70u) [[unlikely]] return; }
L_0028CE70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028CF5C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 192u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 556u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CE8Cu);  if (depth < kMaxDepth) unit_0066(c, 306u, depth + 1u); else { c.pc = 0x0029B1D8u; return; } if (c.pc != 0x0028CE8Cu) [[unlikely]] return; }
L_0028CE8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CECC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CEA4u);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0028CEA4u) [[unlikely]] return; }
L_0028CEA4:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CEC4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CEC4u) [[unlikely]] return; }
L_0028CEC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D10C; } }
L_0028CECC:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], 0u + 145u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CEE4u);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0028CEE4u) [[unlikely]] return; }
L_0028CEE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0028D10C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CEFCu);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028CEFCu) [[unlikely]] return; }
L_0028CEFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CF10; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CF24; } }
L_0028CF10:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 246u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CF24u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028CF24u) [[unlikely]] return; }
L_0028CF24:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CF40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CF40u) [[unlikely]] return; }
L_0028CF40:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CF50u);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0028CF50u) [[unlikely]] return; }
L_0028CF50:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D10C; } }
L_0028CF5C:
    set32(c.r[18], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { goto L_0028CFD8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CF78u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028CF78u) [[unlikely]] return; }
L_0028CF78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CF8C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CFA0; } }
L_0028CF8C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 246u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CFA0u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028CFA0u) [[unlikely]] return; }
L_0028CFA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CFBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CFBCu) [[unlikely]] return; }
L_0028CFBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CFCCu);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0028CFCCu) [[unlikely]] return; }
L_0028CFCC:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D10C; } }
L_0028CFD8:
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0028D09C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 144u)));
    set32(c.r[7], ld32((c.r[3].w[0] - 148u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D004u);  if (depth < kMaxDepth) unit_0068(c, 229u, depth + 1u); else { c.pc = 0x002A30B8u; return; } if (c.pc != 0x0028D004u) [[unlikely]] return; }
L_0028D004:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D108; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], 0u + 143u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D024u);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0028D024u) [[unlikely]] return; }
L_0028D024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0028D108; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D03Cu);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028D03Cu) [[unlikely]] return; }
L_0028D03C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D050; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D064; } }
L_0028D050:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 246u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D064u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028D064u) [[unlikely]] return; }
L_0028D064:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D074u);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0028D074u) [[unlikely]] return; }
L_0028D074:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D094u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D094u) [[unlikely]] return; }
L_0028D094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D108; } }
L_0028D09C:
    set32(c.r[2], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0028D0F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 140u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D0C0u);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0028D0C0u) [[unlikely]] return; }
L_0028D0C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D0D4u);  if (depth < kMaxDepth) unit_0069(c, 81u, depth + 1u); else { c.pc = 0x002A56E8u; return; } if (c.pc != 0x0028D0D4u) [[unlikely]] return; }
L_0028D0D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D0E4u);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0028D0E4u) [[unlikely]] return; }
L_0028D0E4:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D108; } }
L_0028D0F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D108u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D108u) [[unlikely]] return; }
L_0028D108:
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 1;
L_0028D10C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028D110:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028D130:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[5], 0u + 13248u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 160u), c.f[22]);
    st32((c.r[29].w[0] + 152u), c.f[21]);
    st32((c.r[29].w[0] + 144u), c.f[20]);
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D184u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0028D184u) [[unlikely]] return; }
L_0028D184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D6A4; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0028D6A4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D1A0u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0028D1A0u) [[unlikely]] return; }
L_0028D1A0:
    set32(c.r[3], ld32((c.r[2].w[0] + 824u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0028D754; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D6A4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 128u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D1D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D1D8u) [[unlikely]] return; }
L_0028D1D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D1ECu);  if (depth < kMaxDepth) unit_0065(c, 244u, depth + 1u); else { c.pc = 0x00296A60u; return; } if (c.pc != 0x0028D1ECu) [[unlikely]] return; }
L_0028D1EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D6A4; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 11188u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028D22C; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 7700u)));
    set32(c.r[2], 0u + 212u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028D6A4; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028D6A4; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028D6A4; } }
L_0028D22C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D23Cu);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x0028D23Cu) [[unlikely]] return; }
L_0028D23C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D24Cu);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0028D24Cu) [[unlikely]] return; }
L_0028D24C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D25Cu);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0028D25Cu) [[unlikely]] return; }
L_0028D25C:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D26Cu);  if (depth < kMaxDepth) unit_0065(c, 228u, depth + 1u); else { c.pc = 0x002967F8u; return; } if (c.pc != 0x0028D26Cu) [[unlikely]] return; }
L_0028D26C:
    c.f[0] = ld32((c.r[20].w[0] + 80u));
    c.f[1] = ld32((c.r[20].w[0] + 88u));
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 204u)));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 20u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D294u);  if (depth < kMaxDepth) unit_0061(c, 253u, depth + 1u); else { c.pc = 0x002867B8u; return; } if (c.pc != 0x0028D294u) [[unlikely]] return; }
L_0028D294:
    set32(c.r[3], ld32((c.r[20].w[0] + 196u)));
    c.f[21] = c.f[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 392u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D2C8; } }
    set32(c.r[4], c.r[20].w[0] + 80u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D2C0u);  if (depth < kMaxDepth) unit_008A(c, 166u, depth + 1u); else { c.pc = 0x0032A5B0u; return; } if (c.pc != 0x0028D2C0u) [[unlikely]] return; }
L_0028D2C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D2D8; } }
L_0028D2C8:
    set32(c.r[4], c.r[20].w[0] + 80u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D2D8u);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0028D2D8u) [[unlikely]] return; }
L_0028D2D8:
    c.f[20] = c.f[0];
    set32(c.r[2], 0u + 160u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.f[22] = c.f[0];
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028D330; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 180u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028D330; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 204u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D330u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0028D330u) [[unlikely]] return; }
L_0028D330:
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D348u);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x0028D348u) [[unlikely]] return; }
L_0028D348:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D354u);  if (depth < kMaxDepth) unit_0065(c, 294u, depth + 1u); else { c.pc = 0x00297228u; return; } if (c.pc != 0x0028D354u) [[unlikely]] return; }
L_0028D354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D408; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D45C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[18], c.r[20].w[0] + 96u);
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[6], ld32((c.r[16].w[0] - 144u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] - 152u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D39Cu);  if (depth < kMaxDepth) unit_0068(c, 216u, depth + 1u); else { c.pc = 0x002A2E70u; return; } if (c.pc != 0x0028D39Cu) [[unlikely]] return; }
L_0028D39C:
    set32(c.r[6], ld32((c.r[16].w[0] - 144u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] - 152u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D3C0u);  if (depth < kMaxDepth) unit_0068(c, 216u, depth + 1u); else { c.pc = 0x002A2E70u; return; } if (c.pc != 0x0028D3C0u) [[unlikely]] return; }
L_0028D3C0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0028D3D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D750; } }
L_0028D3D0:
    set32(c.r[3], ld32((c.r[21].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028D6A4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D3F0u);  if (depth < kMaxDepth) unit_0062(c, 146u, depth + 1u); else { c.pc = 0x0028A308u; return; } if (c.pc != 0x0028D3F0u) [[unlikely]] return; }
L_0028D3F0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0028D754; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D750; } }
L_0028D408:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D418u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028D418u) [[unlikely]] return; }
L_0028D418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D42C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D440; } }
L_0028D42C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 246u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D440u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028D440u) [[unlikely]] return; }
L_0028D440:
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D45C; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D45Cu);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0028D45Cu) [[unlikely]] return; }
L_0028D45C:
    set32(c.r[3], ld32((c.r[20].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 140u)));
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D474u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D474u) [[unlikely]] return; }
L_0028D474:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D490u);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0028D490u) [[unlikely]] return; }
L_0028D490:
    set32(c.r[3], 0u + 43u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028D4E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 144u)));
    set32(c.r[7], ld32((c.r[3].w[0] - 148u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 204u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D4BCu);  if (depth < kMaxDepth) unit_0068(c, 229u, depth + 1u); else { c.pc = 0x002A30B8u; return; } if (c.pc != 0x0028D4BCu) [[unlikely]] return; }
L_0028D4BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D4E0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 192u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 556u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D4D8u);  if (depth < kMaxDepth) unit_0066(c, 306u, depth + 1u); else { c.pc = 0x0029B1D8u; return; } if (c.pc != 0x0028D4D8u) [[unlikely]] return; }
L_0028D4D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D674; } }
L_0028D4E0:
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D5E4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D500u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0028D500u) [[unlikely]] return; }
L_0028D500:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0028D50Cu);  goto L_0028D510; }
L_0028D510:
    set32(c.r[3], ld32((c.r[20].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 838u)));
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D5E4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 352u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D5E4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 392u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D560; } }
    set32(c.r[4], c.r[20].w[0] + 96u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D558u);  if (depth < kMaxDepth) unit_008A(c, 166u, depth + 1u); else { c.pc = 0x0032A5B0u; return; } if (c.pc != 0x0028D558u) [[unlikely]] return; }
L_0028D558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D570; } }
L_0028D560:
    set32(c.r[4], c.r[20].w[0] + 96u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D570u);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0028D570u) [[unlikely]] return; }
L_0028D570:
    c.f[1] = c.f[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[3], ld32((c.r[4].w[0] - 156u)));
    c.r[2].d[0] = c.r[2].d[0] | 53392ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028D5E4; } }
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028D5E4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 180u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028D5E4; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D5E4u);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x0028D5E4u) [[unlikely]] return; }
L_0028D5E4:
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D5F0u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0028D5F0u) [[unlikely]] return; }
L_0028D5F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D6A4; } }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0028D750; } }
    set32(c.r[2], c.r[16].w[0] - 147u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D750; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[5], 0u + 138u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D62Cu);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0028D62Cu) [[unlikely]] return; }
L_0028D62C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028D64C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 128u)));
    set32(c.r[5], 0u + 21u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D690; } }
L_0028D64C:
    set32(c.r[2], 0u + 43u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028D70C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 192u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 556u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D66Cu);  if (depth < kMaxDepth) unit_0066(c, 306u, depth + 1u); else { c.pc = 0x0029B1D8u; return; } if (c.pc != 0x0028D66Cu) [[unlikely]] return; }
L_0028D66C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D6B0; } }
L_0028D674:
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D684u);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0028D684u) [[unlikely]] return; }
L_0028D684:
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], ld32((c.r[20].w[0] + 128u)));
    c.budget -= 3;
L_0028D690:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D6A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D6A4u) [[unlikely]] return; }
L_0028D6A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D754; } }
L_0028D6B0:
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[5], 0u + 145u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D6C8u);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0028D6C8u) [[unlikely]] return; }
L_0028D6C8:
    set32(c.r[3], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0028D750; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D6E4u);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0028D6E4u) [[unlikely]] return; }
L_0028D6E4:
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[20].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D704u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D704u) [[unlikely]] return; }
L_0028D704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D750; } }
L_0028D70C:
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028D750; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D734u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D734u) [[unlikely]] return; }
L_0028D734:
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D744u);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0028D744u) [[unlikely]] return; }
L_0028D744:
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D6A4u | kUnwind; return; } goto L_0028D6A4; } }
L_0028D750:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028D754:
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
L_0028D788:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    c.budget -= 12;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0028D7D0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D7D0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D7F4; } }
L_0028D7D0:
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D7ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D7ECu) [[unlikely]] return; }
L_0028D7EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A4; } }
L_0028D7F4:
    set32(c.r[2], ld32((c.r[19].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D824; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D81Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D81Cu) [[unlikely]] return; }
L_0028D81C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A4; } }
L_0028D824:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D830u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0028D830u) [[unlikely]] return; }
L_0028D830:
    set32(c.r[3], ld32((c.r[2].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028D8AC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], ld32((c.r[2].w[0] + 392u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0028E5A4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D860u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028D860u) [[unlikely]] return; }
L_0028D860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D874; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D888; } }
L_0028D874:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 246u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D888u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028D888u) [[unlikely]] return; }
L_0028D888:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D8A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D8A4u) [[unlikely]] return; }
L_0028D8A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A4; } }
L_0028D8AC:
    set32(c.r[2], ld32((c.r[19].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E5A4; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D8C4u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0028D8C4u) [[unlikely]] return; }
L_0028D8C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E5A4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D934; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D8E8u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028D8E8u) [[unlikely]] return; }
L_0028D8E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D8FC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D910; } }
L_0028D8FC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 246u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D910u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028D910u) [[unlikely]] return; }
L_0028D910:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D92Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D92Cu) [[unlikely]] return; }
L_0028D92C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A4; } }
L_0028D934:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D948u);  if (depth < kMaxDepth) unit_0065(c, 244u, depth + 1u); else { c.pc = 0x00296A60u; return; } if (c.pc != 0x0028D948u) [[unlikely]] return; }
L_0028D948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D9C0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], ld32((c.r[2].w[0] + 392u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0028E5A4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D974u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028D974u) [[unlikely]] return; }
L_0028D974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D988; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D99C; } }
L_0028D988:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 246u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D99Cu);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028D99Cu) [[unlikely]] return; }
L_0028D99C:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D9B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D9B8u) [[unlikely]] return; }
L_0028D9B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A4; } }
L_0028D9C0:
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D9D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D9D8u) [[unlikely]] return; }
L_0028D9D8:
    c.r[2].d[0] = c.r[2].d[0] & 26ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 26ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DA58; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], ld32((c.r[2].w[0] + 392u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0028E5A4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DA0Cu);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028DA0Cu) [[unlikely]] return; }
L_0028DA0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DA20; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DA34; } }
L_0028DA20:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 246u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DA34u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028DA34u) [[unlikely]] return; }
L_0028DA34:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DA50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DA50u) [[unlikely]] return; }
L_0028DA50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A4; } }
L_0028DA58:
    set32(c.r[4], ld32((c.r[19].w[0] + 204u)));
    set32(c.r[7], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    set32(c.r[6], c.r[3].w[0] + 14208u);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10079u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028DAFC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DA94u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028DA94u) [[unlikely]] return; }
L_0028DA94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DAA8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DABC; } }
L_0028DAA8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 246u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DABCu);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028DABCu) [[unlikely]] return; }
L_0028DABC:
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DAD8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DAD8u) [[unlikely]] return; }
L_0028DAD8:
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DAF4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DAF4u) [[unlikely]] return; }
L_0028DAF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A4; } }
L_0028DAFC:
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 11188u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0028DB48; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 7700u)));
    set32(c.r[2], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028E5A4; } }
    set32(c.r[2], 0u + 212u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028E5A4; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028E5A4; } }
L_0028DB48:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 228u)));
    set32(c.r[3], 0u + 13248u);
    set32(c.r[4], c.r[17].w[0] + 14208u);
    set32(c.r[5], 0u + 101u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0028E5A4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DB88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DB88u) [[unlikely]] return; }
L_0028DB88:
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DB98u);  if (depth < kMaxDepth) unit_0069(c, 69u, depth + 1u); else { c.pc = 0x002A4FC8u; return; } if (c.pc != 0x0028DB98u) [[unlikely]] return; }
L_0028DB98:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0028DBCC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028DC04; } }
L_0028DBCC:
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], ld32((c.r[2].w[0] + 392u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0028E5A4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DBFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DBFCu) [[unlikely]] return; }
L_0028DBFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A4; } }
L_0028DC04:
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DC1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DC1Cu) [[unlikely]] return; }
L_0028DC1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DC98; } }
    st16((c.r[19].w[0] + 594u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 392u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0028E5A4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DC4Cu);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028DC4Cu) [[unlikely]] return; }
L_0028DC4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DC60; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DC74; } }
L_0028DC60:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 246u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DC74u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028DC74u) [[unlikely]] return; }
L_0028DC74:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DC90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DC90u) [[unlikely]] return; }
L_0028DC90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A4; } }
L_0028DC98:
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 140u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DCB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DCB0u) [[unlikely]] return; }
L_0028DCB0:
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DCCCu);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0028DCCCu) [[unlikely]] return; }
L_0028DCCC:
    set32(c.r[3], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0028DD3C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DD18; } }
    set32(c.r[6], ld32((c.r[19].w[0] + 204u)));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DD08u) [[unlikely]] return; }
L_0028DD08:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD18u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0028DD18u) [[unlikely]] return; }
L_0028DD18:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DD34u) [[unlikely]] return; }
L_0028DD34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A4; } }
L_0028DD3C:
    set32(c.r[5], ld32((c.r[19].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0028DE5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 144u)));
    set32(c.r[7], ld32((c.r[3].w[0] - 148u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD64u);  if (depth < kMaxDepth) unit_0068(c, 229u, depth + 1u); else { c.pc = 0x002A30B8u; return; } if (c.pc != 0x0028DD64u) [[unlikely]] return; }
L_0028DD64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DE5C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[5], 0u + 143u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD84u);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0028DD84u) [[unlikely]] return; }
L_0028DD84:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 44u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0028DE18; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DDA0u);  if (depth < kMaxDepth) unit_0065(c, 294u, depth + 1u); else { c.pc = 0x00297228u; return; } if (c.pc != 0x0028DDA0u) [[unlikely]] return; }
L_0028DDA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E5A0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DDB8u);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0028DDB8u) [[unlikely]] return; }
L_0028DDB8:
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DDCCu);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028DDCCu) [[unlikely]] return; }
L_0028DDCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DDE0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DDF4; } }
L_0028DDE0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 246u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DDF4u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028DDF4u) [[unlikely]] return; }
L_0028DDF4:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DE10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DE10u) [[unlikely]] return; }
L_0028DE10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A4; } }
L_0028DE18:
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0028E5A4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DE34u);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0028DE34u) [[unlikely]] return; }
L_0028DE34:
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DE54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DE54u) [[unlikely]] return; }
L_0028DE54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A4; } }
L_0028DE5C:
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E324; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DF18; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DF18; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DE94u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0028DE94u) [[unlikely]] return; }
L_0028DE94:
    set32(c.r[4], ld32((c.r[19].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 784u)));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 192u));
    c.r[3].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028DF18; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028DF18; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DECCu);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028DECCu) [[unlikely]] return; }
L_0028DECC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DEE0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DEF4; } }
L_0028DEE0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 246u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DEF4u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028DEF4u) [[unlikely]] return; }
L_0028DEF4:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DF10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DF10u) [[unlikely]] return; }
L_0028DF10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A4; } }
L_0028DF18:
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DF24u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0028DF24u) [[unlikely]] return; }
L_0028DF24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DF50; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 838u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DF50; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 204u)));
    set32(c.r[6], 0u + 10u);
    c.f[12] = ld32((c.r[19].w[0] + 548u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DF50u);  if (depth < kMaxDepth) unit_0061(c, 277u, depth + 1u); else { c.pc = 0x00286A58u; return; } if (c.pc != 0x0028DF50u) [[unlikely]] return; }
L_0028DF50:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 594u)));
    c.r[5].d[0] = ld16((c.r[19].w[0] + 594u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0028DFE4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], ld32((c.r[2].w[0] + 392u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0028DFD0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DF84u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028DF84u) [[unlikely]] return; }
L_0028DF84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DF98; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DFAC; } }
L_0028DF98:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 246u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DFACu);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028DFACu) [[unlikely]] return; }
L_0028DFAC:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DFC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DFC8u) [[unlikely]] return; }
L_0028DFC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A4; } }
L_0028DFD0:
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    st16((c.r[19].w[0] + 594u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A8; } }
L_0028DFE4:
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DFF0u);  if (depth < kMaxDepth) unit_0061(c, 227u, depth + 1u); else { c.pc = 0x00286450u; return; } if (c.pc != 0x0028DFF0u) [[unlikely]] return; }
L_0028DFF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E5A4; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 204u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E010u);  if (depth < kMaxDepth) unit_0061(c, 253u, depth + 1u); else { c.pc = 0x002867B8u; return; } if (c.pc != 0x0028E010u) [[unlikely]] return; }
L_0028E010:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028E038; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 120u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E10C; } }
L_0028E038:
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 148u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E050u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E050u) [[unlikely]] return; }
L_0028E050:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0028E0C4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E06Cu);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028E06Cu) [[unlikely]] return; }
L_0028E06C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E080; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E094; } }
L_0028E080:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 246u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E094u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028E094u) [[unlikely]] return; }
L_0028E094:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E0B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E0B0u) [[unlikely]] return; }
L_0028E0B0:
    set32(c.r[4], 0u + 60u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A8; } }
L_0028E0C4:
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E0D8u);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0028E0D8u) [[unlikely]] return; }
L_0028E0D8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0028E5A4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E0F8u);  if (depth < kMaxDepth) unit_0069(c, 81u, depth + 1u); else { c.pc = 0x002A56E8u; return; } if (c.pc != 0x0028E0F8u) [[unlikely]] return; }
L_0028E0F8:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 592u));
    c.r[4].d[0] = 0ull + 0ull;
    st16((c.r[19].w[0] + 594u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E594; } }
L_0028E10C:
    set32(c.r[6], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[21], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E130u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E130u) [[unlikely]] return; }
L_0028E130:
    set32(c.r[6], ld32((c.r[19].w[0] + 204u)));
    set32(c.r[20], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E154u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E154u) [[unlikely]] return; }
L_0028E154:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E168u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0028E168u) [[unlikely]] return; }
L_0028E168:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E178u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0028E178u) [[unlikely]] return; }
L_0028E178:
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E244; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    set32(c.r[18], 0u + 13248u);
    set32(c.r[17], c.r[17].w[0] + 14208u);
    set32(c.r[16], c.r[29].w[0] + 64u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[20] = ld32((c.r[2].w[0] + 148u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E1B4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0028E1B4u) [[unlikely]] return; }
L_0028E1B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E1C8u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0028E1C8u) [[unlikely]] return; }
L_0028E1C8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E1D8u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x0028E1D8u) [[unlikely]] return; }
L_0028E1D8:
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = ld32((c.r[19].w[0] + 220u));
    set32(c.r[6], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E1F0u);  if (depth < kMaxDepth) unit_0061(c, 281u, depth + 1u); else { c.pc = 0x00286B08u; return; } if (c.pc != 0x0028E1F0u) [[unlikely]] return; }
L_0028E1F0:
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 148u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E210u);  if (depth < kMaxDepth) unit_008A(c, 142u, depth + 1u); else { c.pc = 0x0032A178u; return; } if (c.pc != 0x0028E210u) [[unlikely]] return; }
L_0028E210:
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 148u), c.f[20]);
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E23Cu);  if (depth < kMaxDepth) unit_0061(c, 115u, depth + 1u); else { c.pc = 0x002853E0u; return; } if (c.pc != 0x0028E23Cu) [[unlikely]] return; }
L_0028E23C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A4; } }
L_0028E244:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E254u);  if (depth < kMaxDepth) unit_0061(c, 251u, depth + 1u); else { c.pc = 0x00286780u; return; } if (c.pc != 0x0028E254u) [[unlikely]] return; }
L_0028E254:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E264u);  if (depth < kMaxDepth) unit_008A(c, 173u, depth + 1u); else { c.pc = 0x0032A6D8u; return; } if (c.pc != 0x0028E264u) [[unlikely]] return; }
L_0028E264:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028E2C4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 234u)));
    set32(c.r[4], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 872u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0028E304; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E2BCu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0028E2BCu) [[unlikely]] return; }
L_0028E2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E304; } }
L_0028E2C4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 234u)));
    set32(c.r[4], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 876u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0028E304; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E304u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0028E304u) [[unlikely]] return; }
L_0028E304:
    c.f[12] = ld32((c.r[19].w[0] + 548u));
    set32(c.r[6], 0u + 10u);
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 204u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E31Cu);  if (depth < kMaxDepth) unit_0061(c, 277u, depth + 1u); else { c.pc = 0x00286A58u; return; } if (c.pc != 0x0028E31Cu) [[unlikely]] return; }
L_0028E31C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A4; } }
L_0028E324:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E334u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028E334u) [[unlikely]] return; }
L_0028E334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E34C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 204u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E34Cu);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0028E34Cu) [[unlikely]] return; }
L_0028E34C:
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[5], 0u + 139u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E364u);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0028E364u) [[unlikely]] return; }
L_0028E364:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 43u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0028E390; } }
L_0028E374:
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E384u);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0028E384u) [[unlikely]] return; }
L_0028E384:
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A0; } }
L_0028E390:
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0028E414; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E3ACu);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028E3ACu) [[unlikely]] return; }
L_0028E3AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E3C0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E3D4; } }
L_0028E3C0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 246u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 248u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E3D4u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x00295DE8u; return; } if (c.pc != 0x0028E3D4u) [[unlikely]] return; }
L_0028E3D4:
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E3F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E3F0u) [[unlikely]] return; }
L_0028E3F0:
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E40Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E40Cu) [[unlikely]] return; }
L_0028E40C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E374u | kUnwind; return; } goto L_0028E374; } }
L_0028E414:
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0028E458; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E430u);  if (depth < kMaxDepth) unit_0069(c, 86u, depth + 1u); else { c.pc = 0x002A5910u; return; } if (c.pc != 0x0028E430u) [[unlikely]] return; }
L_0028E430:
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E450u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E450u) [[unlikely]] return; }
L_0028E450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E5A0; } }
L_0028E458:
    set32(c.r[2], 0u + 54u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0028E5A0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E470u);  if (depth < kMaxDepth) unit_0062(c, 288u, depth + 1u); else { c.pc = 0x0028BE38u; return; } if (c.pc != 0x0028E470u) [[unlikely]] return; }
L_0028E470:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0028E5A0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E5A0; } }
    set32(c.r[6], ld32((c.r[19].w[0] + 204u)));
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E4ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E4ACu) [[unlikely]] return; }
L_0028E4AC:
    set32(c.r[6], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E4D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E4D0u) [[unlikely]] return; }
L_0028E4D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E4E0u);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0028E4E0u) [[unlikely]] return; }
L_0028E4E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x48740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028E5A4; } }
    st32((c.r[19].w[0] + 212u), c.r[18].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[6], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[5], c.r[5].w[0] + 9920u);
    set32(c.r[16], ld32((c.r[18].w[0] + 224u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[6].w[0] + 400u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    st32((c.r[19].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E530u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0028E530u) [[unlikely]] return; }
L_0028E530:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], ld32((c.r[19].w[0] + 196u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E544u);  if (depth < kMaxDepth) unit_0061(c, 271u, depth + 1u); else { c.pc = 0x002869A8u; return; } if (c.pc != 0x0028E544u) [[unlikely]] return; }
L_0028E544:
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E554u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0028E554u) [[unlikely]] return; }
L_0028E554:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], 0u + 12u);
    c.r[2].d[0] = ld16((c.r[3].w[0] - 160u));
    st16((c.r[16].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E57Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E57Cu) [[unlikely]] return; }
L_0028E57C:
    set32(c.r[3], 0u + 460u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E590u);  if (depth < kMaxDepth) unit_0063(c, 325u, depth + 1u); else { c.pc = 0x0028EE38u; return; } if (c.pc != 0x0028E590u) [[unlikely]] return; }
L_0028E590:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028E594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E59Cu);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0028E59Cu) [[unlikely]] return; }
L_0028E59C:
    st32((c.r[2].w[0] + 784u), 0u);
    c.budget -= 1;
L_0028E5A0:
    st32((c.r[19].w[0] + 52u), 0u);
    c.budget -= 1;
L_0028E5A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028E5A8:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028E5D8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 19u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028EB78; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028EB78; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E61Cu);  if (depth < kMaxDepth) unit_0065(c, 9u, depth + 1u); else { c.pc = 0x002940B0u; return; } if (c.pc != 0x0028E61Cu) [[unlikely]] return; }
L_0028E61C:
    set32(c.r[3], ld32((c.r[17].w[0] + 480u)));
    st32((c.r[17].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0028EB78; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0028E6BC; } }
    set32(c.r[6], ld32((c.r[7].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 36u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E65Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E65Cu) [[unlikely]] return; }
L_0028E65C:
    set32(c.r[2], ld32((c.r[17].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E680; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E678u);  if (depth < kMaxDepth) unit_0045(c, 16u, depth + 1u); else { c.pc = 0x00214208u; return; } if (c.pc != 0x0028E678u) [[unlikely]] return; }
L_0028E678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E690; } }
L_0028E680:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E690u);  if (depth < kMaxDepth) unit_0045(c, 16u, depth + 1u); else { c.pc = 0x00214208u; return; } if (c.pc != 0x0028E690u) [[unlikely]] return; }
L_0028E690:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E69Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0028E69Cu) [[unlikely]] return; }
L_0028E69C:
    c.f[1] = ld32((c.r[17].w[0] + 564u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028E6BC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 920u)));
    c.r[18].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0028E6BC:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028E9F4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0028E73C; } }
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E6E8u);  if (depth < kMaxDepth) unit_0065(c, 228u, depth + 1u); else { c.pc = 0x002967F8u; return; } if (c.pc != 0x0028E6E8u) [[unlikely]] return; }
L_0028E6E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E704u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E704u) [[unlikely]] return; }
L_0028E704:
    set32(c.r[6], ld32((c.r[17].w[0] + 128u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 108u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E720u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E720u) [[unlikely]] return; }
L_0028E720:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0028E728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E730u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0028E730u) [[unlikely]] return; }
L_0028E730:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028EB7C; } }
L_0028E73C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E750u);  if (depth < kMaxDepth) unit_0065(c, 244u, depth + 1u); else { c.pc = 0x00296A60u; return; } if (c.pc != 0x0028E750u) [[unlikely]] return; }
L_0028E750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E7EC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E800; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 568u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E7C8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 204u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E780u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0028E780u) [[unlikely]] return; }
L_0028E780:
    set32(c.r[3], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0] + 832u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E7A0u);  if (depth < kMaxDepth) unit_0065(c, 244u, depth + 1u); else { c.pc = 0x00296A60u; return; } if (c.pc != 0x0028E7A0u) [[unlikely]] return; }
L_0028E7A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E800; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E7B8u);  if (depth < kMaxDepth) unit_0062(c, 146u, depth + 1u); else { c.pc = 0x0028A308u; return; } if (c.pc != 0x0028E7B8u) [[unlikely]] return; }
L_0028E7B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E730u | kUnwind; return; } goto L_0028E730; } }
L_0028E7C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E7E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E7E4u) [[unlikely]] return; }
L_0028E7E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E730u | kUnwind; return; } goto L_0028E730; } }
L_0028E7EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 568u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E800; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    st32((c.r[2].w[0] + 832u), 0u);
    c.budget -= 2;
L_0028E800:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E810u);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x0028E810u) [[unlikely]] return; }
L_0028E810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E848; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 244u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[17].w[0] + 244u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E730u | kUnwind; return; } goto L_0028E730; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E840u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0028E840u) [[unlikely]] return; }
L_0028E840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E730u | kUnwind; return; } goto L_0028E730; } }
L_0028E848:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E854u);  if (depth < kMaxDepth) unit_0065(c, 294u, depth + 1u); else { c.pc = 0x00297228u; return; } if (c.pc != 0x0028E854u) [[unlikely]] return; }
L_0028E854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E8BC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0028E890; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E888u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E888u) [[unlikely]] return; }
L_0028E888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E8A8; } }
L_0028E890:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E8A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E8A8u) [[unlikely]] return; }
L_0028E8A8:
    set32(c.r[3], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 832u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028EB7C; } }
L_0028E8BC:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E8C8u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0028E8C8u) [[unlikely]] return; }
L_0028E8C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E730u | kUnwind; return; } goto L_0028E730; } }
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E8E8u);  if (depth < kMaxDepth) unit_0065(c, 228u, depth + 1u); else { c.pc = 0x002967F8u; return; } if (c.pc != 0x0028E8E8u) [[unlikely]] return; }
L_0028E8E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E8F8u);  if (depth < kMaxDepth) unit_0066(c, 97u, depth + 1u); else { c.pc = 0x00298D90u; return; } if (c.pc != 0x0028E8F8u) [[unlikely]] return; }
L_0028E8F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E92C; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 96u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E914u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0028E914u) [[unlikely]] return; }
L_0028E914:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E924u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0028E924u) [[unlikely]] return; }
L_0028E924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E9BC; } }
L_0028E92C:
    set32(c.r[3], ld32((c.r[17].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 838u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E948; } }
    c.f[12] = ld32((c.r[3].w[0] + 952u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E94C; } }
L_0028E948:
    c.f[12] = ld32((c.r[3].w[0] + 948u));
    c.budget -= 1;
L_0028E94C:
    set32(c.r[4], ld32((c.r[17].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0028E9BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[13] = c.r[1].w[0];
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[17].w[0] + 96u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E974u);  if (depth < kMaxDepth) unit_0067(c, 265u, depth + 1u); else { c.pc = 0x0029E890u; return; } if (c.pc != 0x0028E974u) [[unlikely]] return; }
L_0028E974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E9BC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0028E9B0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E9A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E9A8u) [[unlikely]] return; }
L_0028E9A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028EB78; } }
L_0028E9B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028EAD4; } }
L_0028E9BC:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 832u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E9D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E9D4u);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x0028E9D4u) [[unlikely]] return; }
L_0028E9D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E9ECu);  if (depth < kMaxDepth) unit_0061(c, 115u, depth + 1u); else { c.pc = 0x002853E0u; return; } if (c.pc != 0x0028E9ECu) [[unlikely]] return; }
L_0028E9EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E730u | kUnwind; return; } goto L_0028E730; } }
L_0028E9F4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0028EB78; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EA10u);  if (depth < kMaxDepth) unit_0065(c, 244u, depth + 1u); else { c.pc = 0x00296A60u; return; } if (c.pc != 0x0028EA10u) [[unlikely]] return; }
L_0028EA10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028EA24; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 568u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028EB78; } }
L_0028EA24:
    c.f[1] = ld32((c.r[17].w[0] + 564u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028EB78; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[6], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[7], 0u + 880u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[5], c.r[5].w[0] + 14208u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 4440u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7694u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 36u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 284u)));
    c.budget -= 17;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0028EB78; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028EAF0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EA9Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0028EA9Cu) [[unlikely]] return; }
L_0028EA9C:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0028EAA8u);  goto L_0028EAAC; }
L_0028EAAC:
    c.r[4].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[4].sd[0] < 51ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0028EAF0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[2].d[0] = c.r[2].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028EB78; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.budget -= 2;
L_0028EAD4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EAE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028EAE8u) [[unlikely]] return; }
L_0028EAE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028EB78; } }
L_0028EAF0:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[17].w[0] + 400u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB08u);  if (depth < kMaxDepth) unit_0065(c, 228u, depth + 1u); else { c.pc = 0x002967F8u; return; } if (c.pc != 0x0028EB08u) [[unlikely]] return; }
L_0028EB08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB18u);  if (depth < kMaxDepth) unit_0045(c, 16u, depth + 1u); else { c.pc = 0x00214208u; return; } if (c.pc != 0x0028EB18u) [[unlikely]] return; }
L_0028EB18:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028EB34u) [[unlikely]] return; }
L_0028EB34:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB44u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0028EB44u) [[unlikely]] return; }
L_0028EB44:
    set32(c.r[2], ld32((c.r[17].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028EB60; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] + 464u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E728u | kUnwind; return; } goto L_0028E728; } }
L_0028EB60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB70u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0028EB70u) [[unlikely]] return; }
L_0028EB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E730u | kUnwind; return; } goto L_0028E730; } }
L_0028EB78:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028EB7C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028EB98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028EBA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EBC0u);  if (depth < kMaxDepth) unit_0062(c, 288u, depth + 1u); else { c.pc = 0x0028BE38u; return; } if (c.pc != 0x0028EBC0u) [[unlikely]] return; }
L_0028EBC0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028EC10; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028EC10; } }
    st32((c.r[16].w[0] + 212u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 224u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 400u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EBF4u);  if (depth < kMaxDepth) unit_0063(c, 319u, depth + 1u); else { c.pc = 0x0028ED88u; return; } if (c.pc != 0x0028EBF4u) [[unlikely]] return; }
L_0028EBF4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EC00u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0028EC00u) [[unlikely]] return; }
L_0028EC00:
    st32((c.r[2].w[0] + 784u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028EC14; } }
L_0028EC10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028EC14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028EC28:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0028EC68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EC60u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0028EC60u) [[unlikely]] return; }
L_0028EC60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028EC94; } }
L_0028EC68:
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EC84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028EC84u) [[unlikely]] return; }
L_0028EC84:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EC94u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0028EC94u) [[unlikely]] return; }
L_0028EC94:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], 0u + 14u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ECB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028ECB0u) [[unlikely]] return; }
L_0028ECB0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028ECC8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[20] = c.f[12];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ECF4u);  if (depth < kMaxDepth) unit_0065(c, 228u, depth + 1u); else { c.pc = 0x002967F8u; return; } if (c.pc != 0x0028ECF4u) [[unlikely]] return; }
L_0028ECF4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ED00u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0028ED00u) [[unlikely]] return; }
L_0028ED00:
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[2].w[0] + 7u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00680000u);
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    set32(c.r[6], c.r[6].w[0] + 13040u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ED38u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0028ED38u) [[unlikely]] return; }
L_0028ED38:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ED48u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0028ED48u) [[unlikely]] return; }
L_0028ED48:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ED58u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x0028ED58u) [[unlikely]] return; }
L_0028ED58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ED68u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0028ED68u) [[unlikely]] return; }
L_0028ED68:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028ED88:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 9920u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[6].w[0] << 4);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 236u), c.r[6].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EDC0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0028EDC0u) [[unlikely]] return; }
L_0028EDC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EDD4u);  if (depth < kMaxDepth) unit_0061(c, 271u, depth + 1u); else { c.pc = 0x002869A8u; return; } if (c.pc != 0x0028EDD4u) [[unlikely]] return; }
L_0028EDD4:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EDE4u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0028EDE4u) [[unlikely]] return; }
L_0028EDE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], 0u + 12u);
    c.r[2].d[0] = ld16((c.r[3].w[0] - 160u));
    st16((c.r[17].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EE0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028EE0Cu) [[unlikely]] return; }
L_0028EE0C:
    set32(c.r[3], 0u + 460u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EE20u);  if (depth < kMaxDepth) unit_0063(c, 325u, depth + 1u); else { c.pc = 0x0028EE38u; return; } if (c.pc != 0x0028EE20u) [[unlikely]] return; }
L_0028EE20:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028EE38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EE54u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0028EE54u) [[unlikely]] return; }
L_0028EE54:
    set32(c.r[5], 0u + 64u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EE64u);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x0028EE64u) [[unlikely]] return; }
L_0028EE64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EE70u);  if (depth < kMaxDepth) unit_0065(c, 287u, depth + 1u); else { c.pc = 0x00297148u; return; } if (c.pc != 0x0028EE70u) [[unlikely]] return; }
L_0028EE70:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], 0u + 13u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EE8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028EE8Cu) [[unlikely]] return; }
L_0028EE8C:
    set32(c.r[2], 0u + 460u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028EEA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EED0u);  if (depth < kMaxDepth) unit_0069(c, 71u, depth + 1u); else { c.pc = 0x002A51B8u; return; } if (c.pc != 0x0028EED0u) [[unlikely]] return; }
L_0028EED0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0028EEFC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EEF4u);  if (depth < kMaxDepth) unit_0069(c, 81u, depth + 1u); else { c.pc = 0x002A56E8u; return; } if (c.pc != 0x0028EEF4u) [[unlikely]] return; }
L_0028EEF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[3].w[0] + 10280u), c.r[2].w[0]);
    c.budget -= 2;
L_0028EEFC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028EF18:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[20]);
    set32(c.r[17], c.r[29].w[0] + 16u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[20] = c.f[12];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EF58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028EF58u) [[unlikely]] return; }
L_0028EF58:
    set32(c.r[6], ld32((c.r[16].w[0] + 204u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EF78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028EF78u) [[unlikely]] return; }
L_0028EF78:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EF88u);  if (depth < kMaxDepth) unit_008B(c, 100u, depth + 1u); else { c.pc = 0x0032CC60u; return; } if (c.pc != 0x0028EF88u) [[unlikely]] return; }
L_0028EF88:
    c.f[20] = fp::mul(c.f[20], c.f[20]);
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028EFA4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028EFA4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028EFC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EFF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028EFF0u) [[unlikely]] return; }
L_0028EFF0:
    set32(c.r[6], ld32((c.r[16].w[0] + 204u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F010u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028F010u) [[unlikely]] return; }
L_0028F010:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F020u);  if (depth < kMaxDepth) unit_008B(c, 100u, depth + 1u); else { c.pc = 0x0032CC60u; return; } if (c.pc != 0x0028F020u) [[unlikely]] return; }
L_0028F020:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x49450000u);
    c.r[1].d[0] = c.r[1].d[0] | 49408ull;
    c.f[1] = c.r[1].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028F044; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028F044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F058; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F058u);  if (depth < kMaxDepth) unit_0063(c, 352u, depth + 1u); else { c.pc = 0x0028F158u; return; } if (c.pc != 0x0028F058u) [[unlikely]] return; }
L_0028F058:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028F070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F08Cu);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x0028F08Cu) [[unlikely]] return; }
L_0028F08C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F0A8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F0A0u);  if (depth < kMaxDepth) unit_0063(c, 66u, depth + 1u); else { c.pc = 0x0028C860u; return; } if (c.pc != 0x0028F0A0u) [[unlikely]] return; }
L_0028F0A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F140; } }
L_0028F0A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F0B8u);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x0028F0B8u) [[unlikely]] return; }
L_0028F0B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028F0D8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F0D0u);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x0028F0D0u) [[unlikely]] return; }
L_0028F0D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F0EC; } }
L_0028F0D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F0E4u);  if (depth < kMaxDepth) unit_0063(c, 128u, depth + 1u); else { c.pc = 0x0028D130u; return; } if (c.pc != 0x0028F0E4u) [[unlikely]] return; }
L_0028F0E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F140; } }
L_0028F0EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F0FCu);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x0028F0FCu) [[unlikely]] return; }
L_0028F0FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028F134; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F114u);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x0028F114u) [[unlikely]] return; }
L_0028F114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028F134; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F12Cu);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x0028F12Cu) [[unlikely]] return; }
L_0028F12C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F140; } }
L_0028F134:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F140u);  if (depth < kMaxDepth) unit_0063(c, 167u, depth + 1u); else { c.pc = 0x0028D788u; return; } if (c.pc != 0x0028F140u) [[unlikely]] return; }
L_0028F140:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028F158:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F178u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0028F178u) [[unlikely]] return; }
L_0028F178:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F184u);  if (depth < kMaxDepth) unit_0061(c, 248u, depth + 1u); else { c.pc = 0x00286728u; return; } if (c.pc != 0x0028F184u) [[unlikely]] return; }
L_0028F184:
    st64((c.r[16].w[0] + 16u), 0ull);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F198u);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x0028F198u) [[unlikely]] return; }
L_0028F198:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028F1B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 1024u);
    st64((c.r[2].w[0] + 16u), 0ull);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F1CCu);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x0028F1CCu) [[unlikely]] return; }
L_0028F1CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028F1E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    st64((c.r[2].w[0] + 16u), 0ull);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F1FCu);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x0028F1FCu) [[unlikely]] return; }
L_0028F1FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028F210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F220u);  if (depth < kMaxDepth) unit_0063(c, 264u, depth + 1u); else { c.pc = 0x0028E5D8u; return; } if (c.pc != 0x0028F220u) [[unlikely]] return; }
L_0028F220:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028F238:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 27200u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[5], 0u - 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[19]);
    st32((c.r[4].w[0] + 596u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 592u), c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + 588u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 16;
L_0028F278:
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F278u | kUnwind; return; } goto L_0028F278; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 248u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[19], 0u - 1u);
    st32((c.r[4].w[0] + 284u), 0u);
    set32(c.r[17], c.r[4].w[0] + 452u);
    st32((c.r[4].w[0] + 516u), 0u);
    set32(c.r[16], c.r[4].w[0] + 420u);
    st32((c.r[4].w[0] + 416u), 0u);
    set32(c.r[25], c.r[4].w[0] + 384u);
    st32((c.r[4].w[0] + 16u), 0u);
    set32(c.r[24], c.r[4].w[0] + 352u);
    set32(c.r[15], c.r[4].w[0] + 320u);
    set32(c.r[14], c.r[4].w[0] + 288u);
    set32(c.r[13], c.r[4].w[0] + 120u);
    set32(c.r[12], c.r[4].w[0] + 216u);
    set32(c.r[11], c.r[4].w[0] + 184u);
    set32(c.r[10], c.r[4].w[0] + 152u);
    set32(c.r[9], c.r[4].w[0] + 56u);
    set32(c.r[8], c.r[4].w[0] + 88u);
    set32(c.r[7], c.r[4].w[0] + 24u);
    set32(c.r[6], c.r[4].w[0] + 252u);
    set32(c.r[5], c.r[4].w[0] + 552u);
    set32(c.r[3], c.r[4].w[0] + 520u);
    set32(c.r[2], c.r[4].w[0] + 484u);
    set32(c.r[18], 0u + 7u);
    c.budget -= 26;
L_0028F2F8:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[5].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[6].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    st32((c.r[7].w[0]), 0u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    st32((c.r[8].w[0]), 0u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    st32((c.r[9].w[0]), 0u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    st32((c.r[10].w[0]), 0u);
    set32(c.r[9], c.r[9].w[0] + 4u);
    st32((c.r[11].w[0]), 0u);
    set32(c.r[10], c.r[10].w[0] + 4u);
    st32((c.r[12].w[0]), 0u);
    set32(c.r[11], c.r[11].w[0] + 4u);
    st32((c.r[13].w[0]), c.r[19].w[0]);
    set32(c.r[12], c.r[12].w[0] + 4u);
    st32((c.r[14].w[0]), 0u);
    set32(c.r[13], c.r[13].w[0] + 4u);
    st32((c.r[15].w[0]), 0u);
    set32(c.r[14], c.r[14].w[0] + 4u);
    st32((c.r[24].w[0]), 0u);
    set32(c.r[15], c.r[15].w[0] + 4u);
    st32((c.r[25].w[0]), 0u);
    set32(c.r[24], c.r[24].w[0] + 4u);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[25], c.r[25].w[0] + 4u);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 37;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F2F8u | kUnwind; return; } goto L_0028F2F8; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0]) & ~15u, c.r[19]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028F3B0:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0028FA18; } }
    set32(c.r[10], ld32((c.r[7].w[0])));
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    c.r[9].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != c.r[2].d[0];  if (t) { goto L_0028F3E8; } }
    set32(c.r[2], c.r[10].w[0] << 2);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 120u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0028FA18; } }
L_0028F3E8:
    set32(c.r[6], c.r[10].w[0] << 2);
    set32(c.r[3], 0u + 16u);
    set32(c.r[2], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0028F5C4; } }
    c.r[2].d[0] = c.r[4].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F460; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0028F4E0; } }
    c.r[2].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F43C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0028F4BC; } }
    set32(c.r[11], c.r[7].w[0] + 56u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F85C; } }
L_0028F43C:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0028F52C; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0028F578; } }
    set32(c.r[11], c.r[7].w[0] + 56u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F85C; } }
L_0028F460:
    set32(c.r[2], 0u + 128u);
    set32(c.r[11], c.r[7].w[0] + 56u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0028F85C; } }
    c.r[2].d[0] = c.r[4].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F49C; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0028F608; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0028F708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F85C; } }
L_0028F49C:
    set32(c.r[2], 0u + 192u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0028F7D0; } }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0028F640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F85C; } }
L_0028F4BC:
    set32(c.r[3], ld32((c.r[5].w[0] + 196u)));
    set32(c.r[11], c.r[7].w[0] + 56u);
    set32(c.r[2], ld32((c.r[3].w[0] + 920u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F85C; } }
    set32(c.r[2], c.r[10].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F858; } }
L_0028F4E0:
    set32(c.r[2], ld32((c.r[5].w[0] + 196u)));
    set32(c.r[11], c.r[7].w[0] + 56u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = ld32((c.r[2].w[0] + 928u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] + 920u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028F85C; } }
    set32(c.r[2], c.r[10].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F858; } }
L_0028F52C:
    set32(c.r[2], ld32((c.r[5].w[0] + 196u)));
    set32(c.r[11], c.r[7].w[0] + 56u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = ld32((c.r[2].w[0] + 928u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] + 920u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028F85C; } }
    set32(c.r[2], c.r[10].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F858; } }
L_0028F578:
    set32(c.r[2], ld32((c.r[5].w[0] + 196u)));
    set32(c.r[11], c.r[7].w[0] + 56u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = ld32((c.r[2].w[0] + 928u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42960000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] + 920u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028F85C; } }
    set32(c.r[2], c.r[10].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F858; } }
L_0028F5C4:
    set32(c.r[2], ld32((c.r[5].w[0] + 196u)));
    set32(c.r[11], c.r[7].w[0] + 56u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = ld32((c.r[2].w[0] + 928u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 920u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028F85C; } }
    set32(c.r[2], c.r[10].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F858; } }
L_0028F608:
    set32(c.r[3], ld32((c.r[5].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 13248u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    set32(c.r[6], 0u + 12u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 7700u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0028F85C; } }
    set32(c.r[2], c.r[10].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F858; } }
L_0028F640:
    set32(c.r[2], c.r[7].w[0] + 520u);
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 484u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0028F6B0; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F6AC; } }
    c.budget -= 1;
L_0028F678:
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F6B0; } }
    set32(c.r[2], 0u + 28u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F678u | kUnwind; return; } goto L_0028F678; } }
L_0028F6AC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F6B0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0028F85C; } }
    set32(c.r[2], c.r[9].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0028F850; } }
    set32(c.r[4], c.r[6].w[0] + 8u);
    c.budget -= 2;
L_0028F6D8:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 28u);
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F6D8u | kUnwind; return; } goto L_0028F6D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F850; } }
L_0028F708:
    set32(c.r[2], c.r[7].w[0] + 184u);
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0028F778; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F774; } }
    c.budget -= 1;
L_0028F740:
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F778; } }
    set32(c.r[2], 0u + 20u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F740u | kUnwind; return; } goto L_0028F740; } }
L_0028F774:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F778:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0028F85C; } }
    set32(c.r[2], c.r[9].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0028F850; } }
    set32(c.r[4], c.r[6].w[0] + 8u);
    c.budget -= 2;
L_0028F7A0:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 20u);
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F7A0u | kUnwind; return; } goto L_0028F7A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F850; } }
L_0028F7D0:
    set32(c.r[2], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[7].w[0] + 288u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 152u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[7].w[0] + 320u);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0028F810; } }
    set32(c.r[5], c.r[2].w[0] + 8u);
    c.budget -= 1;
L_0028F7F8:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 20u);
    if (c.r[2].d[0] == 0) c.r[6].d[0] = 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F7F8u | kUnwind; return; } goto L_0028F7F8; } }
L_0028F810:
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0028F848; } }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0028F830:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    if (c.r[2].d[0] == 0) c.r[6].d[0] = 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F830u | kUnwind; return; } goto L_0028F830; } }
L_0028F848:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0028F85C; } }
L_0028F850:
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_0028F858:
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0028F85C:
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[11].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    st32((c.r[7].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[10].d[0] == c.r[2].d[0];  if (t) { goto L_0028FA18; } }
    set32(c.r[3], c.r[7].w[0] + 24u);
    set32(c.r[9], c.r[10].w[0] << 2);
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[11], c.r[7].w[0] + 120u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F8E4; } }
    set32(c.r[8], c.r[7].w[0] + 320u);
    set32(c.r[2], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 288u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0028F8E4; } }
    c.budget -= 1;
L_0028F8C0:
    st32((c.r[5].w[0] + 8u), 0u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[5].w[0] + 16u), 0u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F8C0u | kUnwind; return; } goto L_0028F8C0; } }
L_0028F8E4:
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028F93C; } }
    set32(c.r[2], c.r[7].w[0] + 184u);
    set32(c.r[3], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0028F93C; } }
L_0028F920:
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 20u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F920u | kUnwind; return; } goto L_0028F920; } }
L_0028F93C:
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028F9A4; } }
    set32(c.r[2], c.r[7].w[0] + 420u);
    set32(c.r[3], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 384u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0028F9A4; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 2;
L_0028F980:
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 28u), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F980u | kUnwind; return; } goto L_0028F980; } }
L_0028F9A4:
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028FA00; } }
    set32(c.r[2], c.r[7].w[0] + 520u);
    set32(c.r[3], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 484u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0028FA00; } }
L_0028F9E0:
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 12u), 0u);
    set32(c.r[3], c.r[3].w[0] + 28u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F9E0u | kUnwind; return; } goto L_0028F9E0; } }
L_0028FA00:
    set32(c.r[2], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0028FA18; } }
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0028FA18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028FA20:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[20].w[0] + 320u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 20;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 2u, depth); } }
    set32(c.r[2], c.r[20].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 2u, depth); } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028FAC0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028FAAC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028FDA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 2u, depth); } }
L_0028FAAC:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028FBA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 2u, depth); } }
L_0028FAC0:
    set32(c.r[2], c.r[20].w[0] + 288u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_0028FB1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028FB0C; } }
L_0028FAE8:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 320u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028FB1C; } }
L_0028FB0C:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FAE8u | kUnwind; return; } goto L_0028FAE8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0028FB1C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 2u, depth); } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FB30u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0028FB30u) [[unlikely]] return; }
L_0028FB30:
    set32(c.r[6], ld32((c.r[20].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[19], c.r[3].w[0] + 26848u);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], c.r[20].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 320u)));
    set32(c.r[6], c.r[22].w[0] + c.r[6].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0028FB58u);  goto L_0028FB5C; }
L_0028FB5C:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[16], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FB78u);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0028FB78u) [[unlikely]] return; }
L_0028FB78:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 2u, depth); } }
    set32(c.r[18], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0028FD8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028FE84; } }
L_0028FBA4:
    set32(c.r[2], c.r[20].w[0] + 288u);
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_0028FD2C; } }
    st32((c.r[29].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[30], 0u - 1u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0028FBD8:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[5], c.r[23].w[0] << 5);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FD04; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[18], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FC48; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[21], c.r[2].w[0] + 26848u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[16], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FC24u);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0028FC24u) [[unlikely]] return; }
L_0028FC24:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0028FD04; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[30].d[0];  if (t) { goto L_0028FCB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028FCCC; } }
L_0028FC48:
    set32(c.r[3], 0u + 4096u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028FD04; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FCFC; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[21], c.r[2].w[0] + 26848u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[16], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FC94u);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0028FC94u) [[unlikely]] return; }
L_0028FC94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0028FD04; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[30].d[0];  if (t) { goto L_0028FCCC; } }
L_0028FCB0:
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FCC0u);  if (depth < kMaxDepth) unit_0093(c, 349u, depth + 1u); else { c.pc = 0x0034F550u; return; } if (c.pc != 0x0028FCC0u) [[unlikely]] return; }
L_0028FCC0:
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028FD04; } }
L_0028FCCC:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FCDCu);  if (depth < kMaxDepth) unit_0093(c, 269u, depth + 1u); else { c.pc = 0x0034EB90u; return; } if (c.pc != 0x0028FCDCu) [[unlikely]] return; }
L_0028FCDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FCE8u);  if (depth < kMaxDepth) unit_0093(c, 345u, depth + 1u); else { c.pc = 0x0034F4C8u; return; } if (c.pc != 0x0028FCE8u) [[unlikely]] return; }
L_0028FCE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FCF4u);  if (depth < kMaxDepth) unit_0093(c, 338u, depth + 1u); else { c.pc = 0x0034F398u; return; } if (c.pc != 0x0028FCF4u) [[unlikely]] return; }
L_0028FCF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028FD04; } }
L_0028FCFC:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 2;
L_0028FD04:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[23], c.r[23].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[19], c.r[19].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FBD8u | kUnwind; return; } goto L_0028FBD8; } }
L_0028FD2C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 2u, depth); } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[6], c.r[20].w[0] + 320u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_0064(c, 2u, depth); } }
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_0028FD58:
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 16u), 0u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FD58u | kUnwind; return; } goto L_0028FD58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 2u, depth); } }
L_0028FD8C:
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FD9Cu);  if (depth < kMaxDepth) unit_0093(c, 349u, depth + 1u); else { c.pc = 0x0034F550u; return; } if (c.pc != 0x0028FD9Cu) [[unlikely]] return; }
L_0028FD9C:
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 2u, depth); } }
L_0028FDA8:
    set32(c.r[2], c.r[20].w[0] + 288u);
    st32((c.r[29].w[0] + 12u), 0u);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_0064(c, 2u, depth); } }
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0028FDD0:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FFD4; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028FE34; } }
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028FED0; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[3] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 196u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42960000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = ld32((c.r[2].w[0] + 928u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 920u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028FED0; } }
L_0028FE34:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[19], c.r[2].w[0] + 26848u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[16], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FE60u);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0028FE60u) [[unlikely]] return; }
L_0028FE60:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 2u, depth); } }
    set32(c.r[18], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FD8Cu | kUnwind; return; } goto L_0028FD8C; } }
L_0028FE84:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FE94u);  if (depth < kMaxDepth) unit_0093(c, 269u, depth + 1u); else { c.pc = 0x0034EB90u; return; } if (c.pc != 0x0028FE94u) [[unlikely]] return; }
L_0028FE94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FEA0u);  if (depth < kMaxDepth) unit_0093(c, 345u, depth + 1u); else { c.pc = 0x0034F4C8u; return; } if (c.pc != 0x0028FEA0u) [[unlikely]] return; }
L_0028FEA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FEACu);  if (depth < kMaxDepth) unit_0093(c, 338u, depth + 1u); else { c.pc = 0x0034F398u; return; } if (c.pc != 0x0028FEACu) [[unlikely]] return; }
L_0028FEAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 2u, depth); } }
L_0028FEB4:
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FEC4u);  if (depth < kMaxDepth) unit_0093(c, 349u, depth + 1u); else { c.pc = 0x0034F550u; return; } if (c.pc != 0x0028FEC4u) [[unlikely]] return; }
L_0028FEC4:
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028FFD4; } }
L_0028FED0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028FFD4; } }
    set32(c.r[6], ld32((c.r[20].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[10], c.r[20].w[0] + 320u);
    set32(c.r[2], c.r[6].w[0] << 2);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0028FFD4; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[30], 0u - 1u);
    c.budget -= 4;
L_0028FF20:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[8].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028FFB0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028FFB0; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[19], c.r[4].w[0] + 26848u);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[16], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FF60u);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0028FF60u) [[unlikely]] return; }
L_0028FF60:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0028FFD4; } }
    set32(c.r[18], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[30].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FEB4u | kUnwind; return; } goto L_0028FEB4; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FF90u);  if (depth < kMaxDepth) unit_0093(c, 269u, depth + 1u); else { c.pc = 0x0034EB90u; return; } if (c.pc != 0x0028FF90u) [[unlikely]] return; }
L_0028FF90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FF9Cu);  if (depth < kMaxDepth) unit_0093(c, 345u, depth + 1u); else { c.pc = 0x0034F4C8u; return; } if (c.pc != 0x0028FF9Cu) [[unlikely]] return; }
L_0028FF9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FFA8u);  if (depth < kMaxDepth) unit_0093(c, 338u, depth + 1u); else { c.pc = 0x0034F398u; return; } if (c.pc != 0x0028FFA8u) [[unlikely]] return; }
L_0028FFA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028FFD4; } }
L_0028FFB0:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 32u);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FF20u | kUnwind; return; } goto L_0028FF20; } }
L_0028FFD4:
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[23], c.r[23].w[0] + 32u);
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[21], c.r[21].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 11;
    [[clang::musttail]] return unit_0064(c, 1u, depth);
}

}
