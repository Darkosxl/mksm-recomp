#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00D3[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 20,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0,
    0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0,
    0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0,
    159, 0, 160, 0, 161, 0, 162, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0,
    0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0,
    202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 210, 0,
    0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0,
    0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0,
    0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225,
    0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0,
    0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0,
    0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0,
    0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0,
    0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 286, 0, 287, 0,
    0, 0, 288, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 301, 0, 0, 0, 0, 302, 0,
    0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 319, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336,
    0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0,
    0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363,
    0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0,
    368, 0, 0, 369, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0,
    0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0,
    0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0,
    0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0,
    0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0,
    0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0,
    0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0,
    401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0,
    0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0,
    0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0,
    0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0,
    0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0,
    0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0,
    0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00D3(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0044C000;
    case 2u: goto L_0044C008;
    case 3u: goto L_0044C028;
    case 4u: goto L_0044C058;
    case 5u: goto L_0044C078;
    case 6u: goto L_0044C098;
    case 7u: goto L_0044C0C0;
    case 8u: goto L_0044C0D8;
    case 9u: goto L_0044C110;
    case 10u: goto L_0044C124;
    case 11u: goto L_0044C138;
    case 12u: goto L_0044C158;
    case 13u: goto L_0044C208;
    case 14u: goto L_0044C218;
    case 15u: goto L_0044C244;
    case 16u: goto L_0044C29C;
    case 17u: goto L_0044C2A4;
    case 18u: goto L_0044C2D8;
    case 19u: goto L_0044C2F0;
    case 20u: goto L_0044C2FC;
    case 21u: goto L_0044C348;
    case 22u: goto L_0044C36C;
    case 23u: goto L_0044C3C4;
    case 24u: goto L_0044C3D8;
    case 25u: goto L_0044C408;
    case 26u: goto L_0044C504;
    case 27u: goto L_0044C514;
    case 28u: goto L_0044C618;
    case 29u: goto L_0044C620;
    case 30u: goto L_0044C650;
    case 31u: goto L_0044C6A0;
    case 32u: goto L_0044C6C0;
    case 33u: goto L_0044C6F0;
    case 34u: goto L_0044C708;
    case 35u: goto L_0044C734;
    case 36u: goto L_0044C748;
    case 37u: goto L_0044C760;
    case 38u: goto L_0044C798;
    case 39u: goto L_0044C7A8;
    case 40u: goto L_0044C7B8;
    case 41u: goto L_0044C7D4;
    case 42u: goto L_0044C800;
    case 43u: goto L_0044C808;
    case 44u: goto L_0044C8F8;
    case 45u: goto L_0044C910;
    case 46u: goto L_0044C928;
    case 47u: goto L_0044C940;
    case 48u: goto L_0044C958;
    case 49u: goto L_0044C970;
    case 50u: goto L_0044C980;
    case 51u: goto L_0044C9A0;
    case 52u: goto L_0044C9A8;
    case 53u: goto L_0044C9B0;
    case 54u: goto L_0044CA20;
    case 55u: goto L_0044CA30;
    case 56u: goto L_0044CA84;
    case 57u: goto L_0044CA98;
    case 58u: goto L_0044CACC;
    case 59u: goto L_0044CB0C;
    case 60u: goto L_0044CB1C;
    case 61u: goto L_0044CB38;
    case 62u: goto L_0044CB70;
    case 63u: goto L_0044CB80;
    case 64u: goto L_0044CBB0;
    case 65u: goto L_0044CBC0;
    case 66u: goto L_0044CBE0;
    case 67u: goto L_0044CBF4;
    case 68u: goto L_0044CC08;
    case 69u: goto L_0044CC1C;
    case 70u: goto L_0044CC30;
    case 71u: goto L_0044CC48;
    case 72u: goto L_0044CC5C;
    case 73u: goto L_0044CC64;
    case 74u: goto L_0044CC90;
    case 75u: goto L_0044CCB8;
    case 76u: goto L_0044CCE0;
    case 77u: goto L_0044CD08;
    case 78u: goto L_0044CD2C;
    case 79u: goto L_0044CD58;
    case 80u: goto L_0044CD78;
    case 81u: goto L_0044CD94;
    case 82u: goto L_0044CDB8;
    case 83u: goto L_0044CDD8;
    case 84u: goto L_0044CE10;
    case 85u: goto L_0044CE30;
    case 86u: goto L_0044CEA4;
    case 87u: goto L_0044CEB4;
    case 88u: goto L_0044CEC8;
    case 89u: goto L_0044CEE4;
    case 90u: goto L_0044CEF4;
    case 91u: goto L_0044CF08;
    case 92u: goto L_0044CF18;
    case 93u: goto L_0044CF28;
    case 94u: goto L_0044CF60;
    case 95u: goto L_0044CF9C;
    case 96u: goto L_0044CFE0;
    case 97u: goto L_0044CFF8;
    case 98u: goto L_0044D000;
    case 99u: goto L_0044D04C;
    case 100u: goto L_0044D060;
    case 101u: goto L_0044D06C;
    case 102u: goto L_0044D074;
    case 103u: goto L_0044D0A8;
    case 104u: goto L_0044D0B8;
    case 105u: goto L_0044D148;
    case 106u: goto L_0044D1B0;
    case 107u: goto L_0044D218;
    case 108u: goto L_0044D220;
    case 109u: goto L_0044D264;
    case 110u: goto L_0044D284;
    case 111u: goto L_0044D294;
    case 112u: goto L_0044D2A8;
    case 113u: goto L_0044D2D0;
    case 114u: goto L_0044D2E8;
    case 115u: goto L_0044D2FC;
    case 116u: goto L_0044D340;
    case 117u: goto L_0044D350;
    case 118u: goto L_0044D358;
    case 119u: goto L_0044D374;
    case 120u: goto L_0044D3C8;
    case 121u: goto L_0044D3E8;
    case 122u: goto L_0044D460;
    case 123u: goto L_0044D478;
    case 124u: goto L_0044D4AC;
    case 125u: goto L_0044D4E0;
    case 126u: goto L_0044D4FC;
    case 127u: goto L_0044D508;
    case 128u: goto L_0044D51C;
    case 129u: goto L_0044D550;
    case 130u: goto L_0044D560;
    case 131u: goto L_0044D57C;
    case 132u: goto L_0044D5AC;
    case 133u: goto L_0044D5B8;
    case 134u: goto L_0044D5D0;
    case 135u: goto L_0044D5EC;
    case 136u: goto L_0044D624;
    case 137u: goto L_0044D640;
    case 138u: goto L_0044D648;
    case 139u: goto L_0044D658;
    case 140u: goto L_0044D670;
    case 141u: goto L_0044D6B8;
    case 142u: goto L_0044D6D0;
    case 143u: goto L_0044D6F8;
    case 144u: goto L_0044D720;
    case 145u: goto L_0044D72C;
    case 146u: goto L_0044D73C;
    case 147u: goto L_0044D770;
    case 148u: goto L_0044D784;
    case 149u: goto L_0044D7B0;
    case 150u: goto L_0044D7C8;
    case 151u: goto L_0044D80C;
    case 152u: goto L_0044D828;
    case 153u: goto L_0044D850;
    case 154u: goto L_0044D858;
    case 155u: goto L_0044D860;
    case 156u: goto L_0044D868;
    case 157u: goto L_0044D870;
    case 158u: goto L_0044D878;
    case 159u: goto L_0044D880;
    case 160u: goto L_0044D888;
    case 161u: goto L_0044D890;
    case 162u: goto L_0044D898;
    case 163u: goto L_0044D89C;
    case 164u: goto L_0044D8A8;
    case 165u: goto L_0044D8E0;
    case 166u: goto L_0044D8F4;
    case 167u: goto L_0044D908;
    case 168u: goto L_0044D920;
    case 169u: goto L_0044D950;
    case 170u: goto L_0044D974;
    case 171u: goto L_0044D984;
    case 172u: goto L_0044D9D8;
    case 173u: goto L_0044D9E8;
    case 174u: goto L_0044DA10;
    case 175u: goto L_0044DA34;
    case 176u: goto L_0044DA48;
    case 177u: goto L_0044DA58;
    case 178u: goto L_0044DA68;
    case 179u: goto L_0044DA80;
    case 180u: goto L_0044DA90;
    case 181u: goto L_0044DAC0;
    case 182u: goto L_0044DAD4;
    case 183u: goto L_0044DADC;
    case 184u: goto L_0044DAF0;
    case 185u: goto L_0044DB20;
    case 186u: goto L_0044DB34;
    case 187u: goto L_0044DB58;
    case 188u: goto L_0044DB6C;
    case 189u: goto L_0044DB98;
    case 190u: goto L_0044DBD8;
    case 191u: goto L_0044DC20;
    case 192u: goto L_0044DC90;
    case 193u: goto L_0044DCA4;
    case 194u: goto L_0044DCB8;
    case 195u: goto L_0044DCE8;
    case 196u: goto L_0044DD60;
    case 197u: goto L_0044DD70;
    case 198u: goto L_0044DD88;
    case 199u: goto L_0044DD9C;
    case 200u: goto L_0044DDAC;
    case 201u: goto L_0044DDF8;
    case 202u: goto L_0044DE00;
    case 203u: goto L_0044DE54;
    case 204u: goto L_0044DE68;
    case 205u: goto L_0044DE8C;
    case 206u: goto L_0044DEA4;
    case 207u: goto L_0044DEC8;
    case 208u: goto L_0044DED8;
    case 209u: goto L_0044DEEC;
    case 210u: goto L_0044DEF8;
    case 211u: goto L_0044DF18;
    case 212u: goto L_0044DF38;
    case 213u: goto L_0044DF48;
    case 214u: goto L_0044DF74;
    case 215u: goto L_0044DF88;
    case 216u: goto L_0044DFAC;
    case 217u: goto L_0044DFC0;
    case 218u: goto L_0044DFD4;
    case 219u: goto L_0044DFE4;
    case 220u: goto L_0044DFF8;
    case 221u: goto L_0044E00C;
    case 222u: goto L_0044E024;
    case 223u: goto L_0044E03C;
    case 224u: goto L_0044E050;
    case 225u: goto L_0044E07C;
    case 226u: goto L_0044E098;
    case 227u: goto L_0044E0B0;
    case 228u: goto L_0044E0C4;
    case 229u: goto L_0044E0D8;
    case 230u: goto L_0044E0EC;
    case 231u: goto L_0044E100;
    case 232u: goto L_0044E120;
    case 233u: goto L_0044E138;
    case 234u: goto L_0044E14C;
    case 235u: goto L_0044E160;
    case 236u: goto L_0044E178;
    case 237u: goto L_0044E194;
    case 238u: goto L_0044E1A4;
    case 239u: goto L_0044E1B8;
    case 240u: goto L_0044E1CC;
    case 241u: goto L_0044E1D4;
    case 242u: goto L_0044E1E4;
    case 243u: goto L_0044E1F0;
    case 244u: goto L_0044E218;
    case 245u: goto L_0044E264;
    case 246u: goto L_0044E2A8;
    case 247u: goto L_0044E2D0;
    case 248u: goto L_0044E314;
    case 249u: goto L_0044E350;
    case 250u: goto L_0044E364;
    case 251u: goto L_0044E374;
    case 252u: goto L_0044E384;
    case 253u: goto L_0044E394;
    case 254u: goto L_0044E3C0;
    case 255u: goto L_0044E3F4;
    case 256u: goto L_0044E414;
    case 257u: goto L_0044E430;
    case 258u: goto L_0044E470;
    case 259u: goto L_0044E480;
    case 260u: goto L_0044E490;
    case 261u: goto L_0044E4F8;
    case 262u: goto L_0044E540;
    case 263u: goto L_0044E550;
    case 264u: goto L_0044E594;
    case 265u: goto L_0044E5B8;
    case 266u: goto L_0044E5CC;
    case 267u: goto L_0044E5E0;
    case 268u: goto L_0044E5F4;
    case 269u: goto L_0044E608;
    case 270u: goto L_0044E620;
    case 271u: goto L_0044E628;
    case 272u: goto L_0044E654;
    case 273u: goto L_0044E664;
    case 274u: goto L_0044E684;
    case 275u: goto L_0044E698;
    case 276u: goto L_0044E6C0;
    case 277u: goto L_0044E728;
    case 278u: goto L_0044E738;
    case 279u: goto L_0044E768;
    case 280u: goto L_0044E7D8;
    case 281u: goto L_0044E810;
    case 282u: goto L_0044E874;
    case 283u: goto L_0044E8D8;
    case 284u: goto L_0044E8E0;
    case 285u: goto L_0044E8E8;
    case 286u: goto L_0044E8F0;
    case 287u: goto L_0044E8F8;
    case 288u: goto L_0044E908;
    case 289u: goto L_0044E918;
    case 290u: goto L_0044E924;
    case 291u: goto L_0044E934;
    case 292u: goto L_0044E950;
    case 293u: goto L_0044E958;
    case 294u: goto L_0044E960;
    case 295u: goto L_0044E998;
    case 296u: goto L_0044E9B4;
    case 297u: goto L_0044EA00;
    case 298u: goto L_0044EA1C;
    case 299u: goto L_0044EA54;
    case 300u: goto L_0044EA5C;
    case 301u: goto L_0044EA64;
    case 302u: goto L_0044EA78;
    case 303u: goto L_0044EA88;
    case 304u: goto L_0044EAB0;
    case 305u: goto L_0044EAB8;
    case 306u: goto L_0044EAC4;
    case 307u: goto L_0044EAD4;
    case 308u: goto L_0044EB00;
    case 309u: goto L_0044EB34;
    case 310u: goto L_0044EB4C;
    case 311u: goto L_0044EB68;
    case 312u: goto L_0044EB9C;
    case 313u: goto L_0044EBB4;
    case 314u: goto L_0044EBD0;
    case 315u: goto L_0044EBE8;
    case 316u: goto L_0044EBFC;
    case 317u: goto L_0044EC28;
    case 318u: goto L_0044EC30;
    case 319u: goto L_0044EC38;
    case 320u: goto L_0044EC40;
    case 321u: goto L_0044EC50;
    case 322u: goto L_0044EC88;
    case 323u: goto L_0044ECB0;
    case 324u: goto L_0044ECC4;
    case 325u: goto L_0044ECF0;
    case 326u: goto L_0044ED04;
    case 327u: goto L_0044ED18;
    case 328u: goto L_0044ED30;
    case 329u: goto L_0044ED40;
    case 330u: goto L_0044ED5C;
    case 331u: goto L_0044ED68;
    case 332u: goto L_0044ED7C;
    case 333u: goto L_0044EDA8;
    case 334u: goto L_0044EDC0;
    case 335u: goto L_0044EDE8;
    case 336u: goto L_0044EDFC;
    case 337u: goto L_0044EE04;
    case 338u: goto L_0044EE10;
    case 339u: goto L_0044EE28;
    case 340u: goto L_0044EE38;
    case 341u: goto L_0044EE48;
    case 342u: goto L_0044EE7C;
    case 343u: goto L_0044EEA8;
    case 344u: goto L_0044EEF0;
    case 345u: goto L_0044EF54;
    case 346u: goto L_0044EFA8;
    case 347u: goto L_0044EFB8;
    case 348u: goto L_0044EFC0;
    case 349u: goto L_0044F018;
    case 350u: goto L_0044F080;
    case 351u: goto L_0044F08C;
    case 352u: goto L_0044F0A8;
    case 353u: goto L_0044F0B4;
    case 354u: goto L_0044F0D0;
    case 355u: goto L_0044F0E4;
    case 356u: goto L_0044F0F4;
    case 357u: goto L_0044F104;
    case 358u: goto L_0044F118;
    case 359u: goto L_0044F130;
    case 360u: goto L_0044F140;
    case 361u: goto L_0044F154;
    case 362u: goto L_0044F164;
    case 363u: goto L_0044F17C;
    case 364u: goto L_0044F190;
    case 365u: goto L_0044F1A8;
    case 366u: goto L_0044F1E0;
    case 367u: goto L_0044F1F4;
    case 368u: goto L_0044F200;
    case 369u: goto L_0044F20C;
    case 370u: goto L_0044F21C;
    case 371u: goto L_0044F228;
    case 372u: goto L_0044F240;
    case 373u: goto L_0044F278;
    case 374u: goto L_0044F294;
    case 375u: goto L_0044F2E8;
    case 376u: goto L_0044F30C;
    case 377u: goto L_0044F368;
    case 378u: goto L_0044F384;
    case 379u: goto L_0044F3C0;
    case 380u: goto L_0044F3D8;
    case 381u: goto L_0044F3F8;
    case 382u: goto L_0044F414;
    case 383u: goto L_0044F41C;
    case 384u: goto L_0044F444;
    case 385u: goto L_0044F44C;
    case 386u: goto L_0044F458;
    case 387u: goto L_0044F480;
    case 388u: goto L_0044F490;
    case 389u: goto L_0044F4B4;
    case 390u: goto L_0044F4EC;
    case 391u: goto L_0044F50C;
    case 392u: goto L_0044F53C;
    case 393u: goto L_0044F568;
    case 394u: goto L_0044F588;
    case 395u: goto L_0044F5A4;
    case 396u: goto L_0044F5D4;
    case 397u: goto L_0044F630;
    case 398u: goto L_0044F688;
    case 399u: goto L_0044F6A4;
    case 400u: goto L_0044F6E8;
    case 401u: goto L_0044F700;
    case 402u: goto L_0044F734;
    case 403u: goto L_0044F76C;
    case 404u: goto L_0044F788;
    case 405u: goto L_0044F7C8;
    case 406u: goto L_0044F808;
    case 407u: goto L_0044F85C;
    case 408u: goto L_0044F898;
    case 409u: goto L_0044F8C0;
    case 410u: goto L_0044F930;
    case 411u: goto L_0044F994;
    case 412u: goto L_0044F9A8;
    case 413u: goto L_0044F9D8;
    case 414u: goto L_0044FA40;
    case 415u: goto L_0044FA70;
    case 416u: goto L_0044FAA4;
    case 417u: goto L_0044FAB0;
    case 418u: goto L_0044FB08;
    case 419u: goto L_0044FB48;
    case 420u: goto L_0044FB68;
    case 421u: goto L_0044FB70;
    case 422u: goto L_0044FB8C;
    case 423u: goto L_0044FBC8;
    case 424u: goto L_0044FC18;
    case 425u: goto L_0044FC3C;
    case 426u: goto L_0044FC60;
    case 427u: goto L_0044FCAC;
    case 428u: goto L_0044FCC4;
    case 429u: goto L_0044FCD4;
    case 430u: goto L_0044FD14;
    case 431u: goto L_0044FD28;
    case 432u: goto L_0044FDA0;
    case 433u: goto L_0044FDC8;
    case 434u: goto L_0044FDF0;
    case 435u: goto L_0044FE04;
    case 436u: goto L_0044FE48;
    case 437u: goto L_0044FE70;
    case 438u: goto L_0044FE84;
    case 439u: goto L_0044FEC8;
    case 440u: goto L_0044FED8;
    case 441u: goto L_0044FEE8;
    case 442u: goto L_0044FF08;
    case 443u: goto L_0044FF24;
    case 444u: goto L_0044FF60;
    case 445u: goto L_0044FF78;
    case 446u: goto L_0044FF9C;
    case 447u: goto L_0044FFE0;
    default: bad_entry(c, 0x0044C000u); return;
    }
L_0044C000:
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 1;
    c.pc = 0x0044C004u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_0044C008:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C028u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00DF(c, 401u, depth + 1u); else { c.pc = 0x0047FEA0u; return; } if (c.pc != 0x0044C028u) [[unlikely]] return; }
L_0044C028:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = ld64((c.r[16].w[0] + 72u));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[2].d[0] = c.r[17].d[0] + c.r[2].d[0];
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st64((c.r[16].w[0] + 72u), c.r[2].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00DF(c, 397u, depth); }
L_0044C058:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C078u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00DF(c, 401u, depth + 1u); else { c.pc = 0x0047FEA0u; return; } if (c.pc != 0x0044C078u) [[unlikely]] return; }
L_0044C078:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = ld64((c.r[16].w[0] + 72u));
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] - c.r[17].d[0];
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; st64((c.r[16].w[0] + 72u), c.r[2].d[0]);  if (t) { goto L_0044C0B8; } }
    c.budget -= 1;
L_0044C098:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044C098u | kUnwind; return; } goto L_0044C098; } }
    c.budget -= 1;
L_0044C0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C0C0u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00DF(c, 397u, depth + 1u); else { c.pc = 0x0047FE80u; return; } if (c.pc != 0x0044C0C0u) [[unlikely]] return; }
L_0044C0C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044C0D8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[23].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C110u); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_00DF(c, 401u, depth + 1u); else { c.pc = 0x0047FEA0u; return; } if (c.pc != 0x0044C110u) [[unlikely]] return; }
L_0044C110:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0044C130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C124u); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_00DF(c, 397u, depth + 1u); else { c.pc = 0x0047FE80u; return; } if (c.pc != 0x0044C124u) [[unlikely]] return; }
L_0044C124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044C2A8; } }
    c.budget -= 1;
L_0044C130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C138u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00D2(c, 306u, depth + 1u); else { c.pc = 0x0044BCD0u; return; } if (c.pc != 0x0044C138u) [[unlikely]] return; }
L_0044C138:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46080ull;
    c.r[3].d[0] = c.r[3].d[0] | 46096ull;
    set32(c.r[21], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C158u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 303u, depth + 1u); else { c.pc = 0x0044BC18u; return; } if (c.pc != 0x0044C158u) [[unlikely]] return; }
L_0044C158:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0044C168u);  goto L_0044C16C; }
L_0044C16C:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[6].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[7], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[5].w[0]);
    mmi::div(c, 0, c.r[7].w[0], c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[4].w[0] + 2047u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    set32(c.r[3], c.r[19].w[0] << 11);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 23;
    { const bool t = c.r[19].sd[0] <= 0; st32((c.r[17].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_0044C208; } }
    set32(c.r[2], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[7], 0u + 128u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0044C1D8u);  goto L_0044C1DC; }
L_0044C1DC:
    mmi::div(c, 0, c.r[2].w[0], c.r[6].w[0]);
    set32(c.r[6], 0u + 3u);
    set32(c.r[8], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[23], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[4].w[0] << 11);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C208u); set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_00D2(c, 308u, depth + 1u); else { c.pc = 0x0044BD38u; return; } if (c.pc != 0x0044C208u) [[unlikely]] return; }
L_0044C208:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0044C26C; } }
    set32(c.r[20], c.r[19].w[0] - 1u);
    set32(c.r[22], 0u + 3u);
    c.budget -= 2;
L_0044C218:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[7].d[0] = c.r[18].d[0] ^ c.r[20].d[0];
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[16].w[0] << 4);
    set32(c.r[5], c.r[16].w[0] << 11);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    if (c.r[7].d[0] != 0) c.r[6].d[0] = c.r[22].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C244u); set32(c.r[7], 0u + 128u);  if (depth < kMaxDepth) unit_00D2(c, 308u, depth + 1u); else { c.pc = 0x0044BD38u; return; } if (c.pc != 0x0044C244u) [[unlikely]] return; }
L_0044C244:
    set32(c.r[3], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[5].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0044C25Cu);  goto L_0044C260; }
L_0044C260:
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044C218u | kUnwind; return; } goto L_0044C218; } }
L_0044C26C:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0044C29C; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_0044C294; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[21].d[0] & c.r[2].d[0];
    c.r[21].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 4;
L_0044C294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C29Cu); c.r[4].d[0] = c.r[21].d[0] | 256ull;  if (depth < kMaxDepth) unit_00D2(c, 306u, depth + 1u); else { c.pc = 0x0044BCD0u; return; } if (c.pc != 0x0044C29Cu) [[unlikely]] return; }
L_0044C29C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C2A4u); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_00DF(c, 397u, depth + 1u); else { c.pc = 0x0047FE80u; return; } if (c.pc != 0x0044C2A4u) [[unlikely]] return; }
L_0044C2A4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0044C2A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0044C2D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C2F0u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00DF(c, 401u, depth + 1u); else { c.pc = 0x0047FEA0u; return; } if (c.pc != 0x0044C2F0u) [[unlikely]] return; }
L_0044C2F0:
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C2FCu); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00D2(c, 306u, depth + 1u); else { c.pc = 0x0044BCD0u; return; } if (c.pc != 0x0044C2FCu) [[unlikely]] return; }
L_0044C2FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46096ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | 46128ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 46112ull;
    c.r[6].d[0] = c.r[6].d[0] | 46080ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | 8208ull;
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 19;
L_0044C348:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044C348u | kUnwind; return; } goto L_0044C348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C36Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 304u, depth + 1u); else { c.pc = 0x0044BC68u; return; } if (c.pc != 0x0044C36Cu) [[unlikely]] return; }
L_0044C36C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45072ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 45088ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0] + 44u), c.r[4].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 45056ull;
    c.r[7].d[0] = c.r[7].d[0] | 8224ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[8], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[5].d[0] | 8208ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[16].w[0] + 48u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C3C4u); st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DF(c, 397u, depth + 1u); else { c.pc = 0x0047FE80u; return; } if (c.pc != 0x0044C3C4u) [[unlikely]] return; }
L_0044C3C4:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044C3D8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C408u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00DF(c, 401u, depth + 1u); else { c.pc = 0x0047FEA0u; return; } if (c.pc != 0x0044C408u) [[unlikely]] return; }
L_0044C408:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[4].w[0] >> 8);
    set32(c.r[3], c.r[4].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[18], c.r[9].w[0] - c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    set32(c.r[21], c.r[5].w[0] + c.r[3].w[0]);
    c.r[22].d[0] = c.r[4].d[0] & 127ull;
    set32(c.r[20], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[10].d[0] | 256ull;  if (t) { goto L_0044C4F8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[7].w[0] - c.r[18].w[0]);
    set32(c.r[8], c.r[6].w[0] << 11);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[20].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[21], c.r[4].w[0] >> 4);
    c.budget -= 10;
    { const bool t = c.r[9].d[0] == c.r[7].d[0]; set32(c.r[18], c.r[18].w[0] + c.r[8].w[0]);  if (t) { goto L_0044C484; } }
    set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_0044C488; } }
L_0044C484:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044C488:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], c.r[4].w[0] << 28);
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[19].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 11;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0044C4B0u);  goto L_0044C4B4; }
L_0044C4B4:
    c.r[5].d[0] = c.hi.d[0];
    c.budget -= 3;
    if (c.r[5].sd[0] < 0) { set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  goto L_0044C4E0; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0044C4C4u);  goto L_0044C4C8; }
L_0044C4C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_0044C5E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] - 1u);  if (t) { goto L_0044C4E4; } }
L_0044C4E0:
    set32(c.r[2], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_0044C4E4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0044C5DC; } }
    c.budget -= 1;
L_0044C4F8:
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C504u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 303u, depth + 1u); else { c.pc = 0x0044BC18u; return; } if (c.pc != 0x0044C504u) [[unlikely]] return; }
L_0044C504:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C514u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 303u, depth + 1u); else { c.pc = 0x0044BC18u; return; } if (c.pc != 0x0044C514u) [[unlikely]] return; }
L_0044C514:
    c.r[14].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[14].d[0]; c.r[9].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_0044C5DC; } }
    set32(c.r[12], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[16].w[0])));
    set32(c.r[11], 0u + 3u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[12].w[0] << 11);
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0044C538u);  goto L_0044C53C; }
L_0044C53C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[13], ld32((c.r[16].w[0] + 16u)));
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    set32(c.r[3], c.r[17].w[0] << 11);
    set32(c.r[2], c.r[4].w[0] + c.r[13].w[0]);
    set32(c.r[5], c.r[14].w[0] + c.r[12].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[10], ld32((c.r[16].w[0] + 4u)));
    c.r[9].d[0] = c.r[9].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[9].d[0];
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[21], c.r[3].w[0] >> 4);
    c.r[6].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[12].w[0]);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    c.r[20].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[7].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[5].w[0], c.r[12].w[0]);
    set32(c.r[7], c.r[7].w[0] << 11);
    set32(c.r[8], c.r[8].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = c.r[6].d[0] ^ c.r[8].d[0];
    if (c.r[6].d[0] == 0) c.r[11].d[0] = 0ull;
    set32(c.r[11], c.r[11].w[0] << 28);
    c.r[4].d[0] = c.r[4].d[0] | c.r[11].d[0];
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 32;
    { const bool t = c.r[2].sd[0] < 0; c.r[19].d[0] = c.r[4].d[0] | 256ull;  if (t) { goto L_0044C5D0; } }
    c.r[2].d[0] = c.r[2].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[12].d[0] == 0ull) { breakpoint(c, 0x0044C5C4u);  goto L_0044C5C8; }
L_0044C5C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  goto L_0044C5E0; }
L_0044C5D0:
    set32(c.r[2], c.r[13].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_0044C5DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_0044C5E0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  goto L_0044C61C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0044C618; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45072ull;
    c.r[4].d[0] = c.r[4].d[0] | 45088ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C618u); c.r[4].d[0] = c.r[4].d[0] | 256ull;  if (depth < kMaxDepth) unit_00D2(c, 304u, depth + 1u); else { c.pc = 0x0044BC68u; return; } if (c.pc != 0x0044C618u) [[unlikely]] return; }
L_0044C618:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_0044C61C:
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    c.budget -= 1;
L_0044C620:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044C620u | kUnwind; return; } goto L_0044C620; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    st32((c.r[2].w[0]), c.r[22].w[0]);
    c.budget -= 5;
L_0044C650:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044C650u | kUnwind; return; } goto L_0044C650; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46096ull;
    c.r[3].d[0] = c.r[3].d[0] | 46128ull;
    c.r[4].d[0] = c.r[4].d[0] | 46112ull;
    st32((c.r[2].w[0]), c.r[18].w[0]);
    st32((c.r[3].w[0]), c.r[20].w[0]);
    st32((c.r[4].w[0]), c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_0044C6A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C6A0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 306u, depth + 1u); else { c.pc = 0x0044BCD0u; return; } if (c.pc != 0x0044C6A0u) [[unlikely]] return; }
L_0044C6A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_0044C6A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C6C0u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00DF(c, 397u, depth + 1u); else { c.pc = 0x0047FE80u; return; } if (c.pc != 0x0044C6C0u) [[unlikely]] return; }
L_0044C6C0:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0044C6F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C708u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00D2(c, 306u, depth + 1u); else { c.pc = 0x0044BCD0u; return; } if (c.pc != 0x0044C708u) [[unlikely]] return; }
L_0044C708:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 46096ull;
    c.r[2].d[0] = c.r[2].d[0] | 46112ull;
    c.r[4].d[0] = c.r[4].d[0] | 46128ull;
    st32((c.r[2].w[0]), 0u);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C734u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00DF(c, 395u, depth + 1u); else { c.pc = 0x0047FE70u; return; } if (c.pc != 0x0044C734u) [[unlikely]] return; }
L_0044C734:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044C748:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C760u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00DF(c, 401u, depth + 1u); else { c.pc = 0x0047FEA0u; return; } if (c.pc != 0x0044C760u) [[unlikely]] return; }
L_0044C760:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], c.r[3].w[0] + 2051u);
    set32(c.r[3], c.r[3].w[0] + 4098u);
    c.r[5].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    set32(c.r[2], c.r[2].w[0] << 11);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DF(c, 397u, depth); }
L_0044C798:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 1476u), c.r[4].w[0]);  c.pc = t; return; }
L_0044C7A8:
    set32(c.r[3], ld32((c.r[4].w[0] + 8128u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4392u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0044C7B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 1476u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0044C7F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C7D4u);  if (depth < kMaxDepth) unit_00DA(c, 35u, depth + 1u); else { c.pc = 0x004687F0u; return; } if (c.pc != 0x0044C7D4u) [[unlikely]] return; }
L_0044C7D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00770000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 12632u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 72u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D5(c, 256u, depth); }
L_0044C7F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044C800:
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0044C808:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 1476u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 8128u)));
    set32(c.r[6], c.r[5].w[0] + 4u);
    set32(c.r[17], c.r[5].w[0] + 4392u);
    set32(c.r[19], c.r[5].w[0] + 4432u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[30], c.r[5].w[0] + 4600u);  if (t) { goto L_0044C860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_0044C9EC; } }
L_0044C860:
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 40u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 11;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[20], c.r[2].w[0] + 10240u);  if (t) { goto L_0044C8B0; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[4], 0u - 64u);
    set32(c.r[2], c.r[2].w[0] + 63u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[5].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 63u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & c.r[4].d[0];  if (t) { goto L_0044C8CC; } }
L_0044C8B0:
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    set32(c.r[4], 0u - 64u);
    set32(c.r[3], c.r[7].w[0] + 63u);
    set32(c.r[2], c.r[2].w[0] + 63u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[5].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 7;
L_0044C8CC:
    st32((c.r[5].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[22], ld32((c.r[5].w[0] + 44u)));
    set32(c.r[4], 0u - 64u);
    set32(c.r[16], ld32((c.r[5].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[2].d[0] | 63ull;
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.r[21].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[3], c.r[21].w[0] + 4175u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C8F8u); c.r[23].d[0] = c.r[3].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_00D3(c, 340u, depth + 1u); else { c.pc = 0x0044EE38u; return; } if (c.pc != 0x0044C8F8u) [[unlikely]] return; }
L_0044C8F8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044C978; } }
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C910u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 192u, depth + 1u); else { c.pc = 0x00467D48u; return; } if (c.pc != 0x0044C910u) [[unlikely]] return; }
L_0044C910:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], c.r[6].w[0] - 13776u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C928u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 49u, depth + 1u); else { c.pc = 0x004689E0u; return; } if (c.pc != 0x0044C928u) [[unlikely]] return; }
L_0044C928:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], c.r[6].w[0] - 13512u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C940u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 49u, depth + 1u); else { c.pc = 0x004689E0u; return; } if (c.pc != 0x0044C940u) [[unlikely]] return; }
L_0044C940:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], c.r[6].w[0] - 13344u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C958u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 49u, depth + 1u); else { c.pc = 0x004689E0u; return; } if (c.pc != 0x0044C958u) [[unlikely]] return; }
L_0044C958:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 13304u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C970u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00DA(c, 49u, depth + 1u); else { c.pc = 0x004689E0u; return; } if (c.pc != 0x0044C970u) [[unlikely]] return; }
L_0044C970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + 112u);  if (t) { goto L_0044C984; } }
L_0044C978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C980u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 76u, depth + 1u); else { c.pc = 0x0044CCE0u; return; } if (c.pc != 0x0044C980u) [[unlikely]] return; }
L_0044C980:
    set32(c.r[16], c.r[17].w[0] + 112u);
    c.budget -= 1;
L_0044C984:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[7], 0u + 256u);
    set32(c.r[9], 0u + 512u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C9A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 309u, depth + 1u); else { c.pc = 0x0044BD60u; return; } if (c.pc != 0x0044C9A0u) [[unlikely]] return; }
L_0044C9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C9A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 8u, depth + 1u); else { c.pc = 0x0044C0D8u; return; } if (c.pc != 0x0044C9A8u) [[unlikely]] return; }
L_0044C9A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C9B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 18u, depth + 1u); else { c.pc = 0x0044C2D8u; return; } if (c.pc != 0x0044C9B0u) [[unlikely]] return; }
L_0044C9B0:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    st32((c.r[30].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 15;
L_0044C9EC:
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
L_0044CA20:
    set32(c.r[3], ld32((c.r[4].w[0] + 8128u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 4604u)));  c.pc = t; return; }
L_0044CA30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00770000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[3].w[0] - 12560u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00770000u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], c.r[2].w[0] - 12552u);
    ldl(c.r[3], (c.r[7].w[0] + 7u));
    ldr(c.r[3], (c.r[7].w[0]));
    sdl(c.r[3], (c.r[8].w[0] + 7u));
    sdr(c.r[3], (c.r[8].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 8128u)));
    ldl(c.r[9], (c.r[7].w[0] + 7u));
    ldr(c.r[9], (c.r[7].w[0]));
    sdl(c.r[9], (c.r[2].w[0] + 4607u));
    sdr(c.r[9], (c.r[2].w[0] + 4600u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CA84u); c.r[5].d[0] = c.r[5].d[0] | 3904ull;  if (depth < kMaxDepth) unit_00D1(c, 19u, depth + 1u); else { c.pc = 0x00444148u; return; } if (c.pc != 0x0044CA84u) [[unlikely]] return; }
L_0044CA84:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044CA98:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    set32(c.r[7], c.r[29].w[0] + 8u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 12u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CACCu); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 318u, depth + 1u); else { c.pc = 0x0044BF18u; return; } if (c.pc != 0x0044CACCu) [[unlikely]] return; }
L_0044CACC:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 12u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CB0Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 85u, depth + 1u); else { c.pc = 0x0044CE30u; return; } if (c.pc != 0x0044CB0Cu) [[unlikely]] return; }
L_0044CB0C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CB1Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 2u, depth + 1u); else { c.pc = 0x0044C008u; return; } if (c.pc != 0x0044CB1Cu) [[unlikely]] return; }
L_0044CB1C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0044CB38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 8128u)));
    set32(c.r[17], c.r[2].w[0] + 4392u);
    set32(c.r[4], c.r[2].w[0] + 4432u);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[18].d[0]; set32(c.r[16], c.r[2].w[0] + 4504u);  if (t) { goto L_0044CB78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CB70u);  if (depth < kMaxDepth) unit_00DA(c, 45u, depth + 1u); else { c.pc = 0x00468940u; return; } if (c.pc != 0x0044CB70u) [[unlikely]] return; }
L_0044CB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044CBC4; } }
L_0044CB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CB80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 8u, depth + 1u); else { c.pc = 0x0044C0D8u; return; } if (c.pc != 0x0044CB80u) [[unlikely]] return; }
L_0044CB80:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044CBC4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044CBC4; } }
    st32((c.r[17].w[0] + 24u), c.r[18].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 11400u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CBB0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00D3(c, 57u, depth + 1u); else { c.pc = 0x0044CA98u; return; } if (c.pc != 0x0044CBB0u) [[unlikely]] return; }
L_0044CBB0:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CBC0u); st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00D3(c, 8u, depth + 1u); else { c.pc = 0x0044C0D8u; return; } if (c.pc != 0x0044CBC0u) [[unlikely]] return; }
L_0044CBC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0044CBC4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044CBE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 8128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CBF4u); set32(c.r[4], c.r[4].w[0] + 4504u);  if (depth < kMaxDepth) unit_00D3(c, 18u, depth + 1u); else { c.pc = 0x0044C2D8u; return; } if (c.pc != 0x0044CBF4u) [[unlikely]] return; }
L_0044CBF4:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044CC08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 8128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CC1Cu); set32(c.r[4], c.r[4].w[0] + 4504u);  if (depth < kMaxDepth) unit_00D3(c, 24u, depth + 1u); else { c.pc = 0x0044C3D8u; return; } if (c.pc != 0x0044CC1Cu) [[unlikely]] return; }
L_0044CC1C:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044CC30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CC48u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 39u, depth + 1u); else { c.pc = 0x0044C7A8u; return; } if (c.pc != 0x0044CC48u) [[unlikely]] return; }
L_0044CC48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0044CCA8; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 8128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CC5Cu); set32(c.r[4], c.r[16].w[0] + 4504u);  if (depth < kMaxDepth) unit_00D3(c, 33u, depth + 1u); else { c.pc = 0x0044C6F0u; return; } if (c.pc != 0x0044CC5Cu) [[unlikely]] return; }
L_0044CC5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CC64u);  if (depth < kMaxDepth) unit_00D3(c, 340u, depth + 1u); else { c.pc = 0x0044EE38u; return; } if (c.pc != 0x0044CC64u) [[unlikely]] return; }
L_0044CC64:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 4432u);  if (t) { goto L_0044CC88; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00DA(c, 39u, depth); }
L_0044CC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CC90u);  if (depth < kMaxDepth) unit_00DA(c, 46u, depth + 1u); else { c.pc = 0x00468950u; return; } if (c.pc != 0x0044CC90u) [[unlikely]] return; }
L_0044CC90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0044CCB8; }
L_0044CCA8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044CCB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 72u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8128u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00770000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 12632u);
    set32(c.r[5], c.r[5].w[0] + 4432u);
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D5(c, 253u, depth); }
L_0044CCE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00770000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 12632u);
    set32(c.r[6], 0u + 72u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8128u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4432u);
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D5(c, 253u, depth); }
L_0044CD08:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CD2Cu); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 39u, depth + 1u); else { c.pc = 0x0044C7A8u; return; } if (c.pc != 0x0044CD2Cu) [[unlikely]] return; }
L_0044CD2C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0044CD58; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044CD58:
    set32(c.r[4], ld32((c.r[18].w[0] + 8128u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 4504u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044CA98u | kUnwind; return; } goto L_0044CA98; }
L_0044CD78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CD94u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 39u, depth + 1u); else { c.pc = 0x0044C7A8u; return; } if (c.pc != 0x0044CD94u) [[unlikely]] return; }
L_0044CD94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044CDB8; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044CDB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 8128u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 4504u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044C058u | kUnwind; return; } goto L_0044C058; }
L_0044CDD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8128u)));
    set32(c.r[16], c.r[4].w[0] + 4392u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; set32(c.r[4], c.r[4].w[0] + 4504u);  if (t) { goto L_0044CE18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CE10u);  if (depth < kMaxDepth) unit_00D3(c, 36u, depth + 1u); else { c.pc = 0x0044C748u; return; } if (c.pc != 0x0044CE10u) [[unlikely]] return; }
L_0044CE10:
    st32((c.r[16].w[0] + 32u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    c.budget -= 2;
L_0044CE18:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044CE30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    set32(c.r[30], c.r[16].w[0] + c.r[21].w[0]);
    set32(c.r[7], c.r[17].w[0] + c.r[7].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[7].d[0] = c.r[7].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 24;
    { const bool t = c.r[7].d[0] != 0ull; c.r[20].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0044CF2C; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], c.r[17].w[0] - c.r[16].w[0]);  goto L_0044CED0; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CEA4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0044CEA4u) [[unlikely]] return; }
L_0044CEA4:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CEB4u); set32(c.r[6], c.r[16].w[0] - c.r[17].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0044CEB4u) [[unlikely]] return; }
L_0044CEB4:
    set32(c.r[4], c.r[22].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[17].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CEC8u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0044CEC8u) [[unlikely]] return; }
L_0044CEC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_0044CF2C; } }
L_0044CED0:
    c.r[2].d[0] = c.r[21].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0044CF10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CEE4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0044CEE4u) [[unlikely]] return; }
L_0044CEE4:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CEF4u); set32(c.r[4], c.r[23].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0044CEF4u) [[unlikely]] return; }
L_0044CEF4:
    set32(c.r[5], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[16].w[0]);
    set32(c.r[6], c.r[21].w[0] - c.r[19].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CF08u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0044CF08u) [[unlikely]] return; }
L_0044CF08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_0044CF2C; } }
L_0044CF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CF18u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0044CF18u) [[unlikely]] return; }
L_0044CF18:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CF28u); set32(c.r[4], c.r[23].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0044CF28u) [[unlikely]] return; }
L_0044CF28:
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 1;
L_0044CF2C:
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
L_0044CF60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CF9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 39u, depth + 1u); else { c.pc = 0x0044C7A8u; return; } if (c.pc != 0x0044CF9Cu) [[unlikely]] return; }
L_0044CF9C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0044CFD8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_00D6(c, 93u, depth); }
L_0044CFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CFE0u); set32(c.r[18], ld32((c.r[21].w[0] + 8128u)));  if (depth < kMaxDepth) unit_00D6(c, 94u, depth + 1u); else { c.pc = 0x00459BF8u; return; } if (c.pc != 0x0044CFE0u) [[unlikely]] return; }
L_0044CFE0:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] + 4504u);
    set32(c.r[19], c.r[18].w[0] + 4392u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CFF8u); set32(c.r[17], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_00D3(c, 24u, depth + 1u); else { c.pc = 0x0044C3D8u; return; } if (c.pc != 0x0044CFF8u) [[unlikely]] return; }
L_0044CFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D000u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 8u, depth + 1u); else { c.pc = 0x0044C0D8u; return; } if (c.pc != 0x0044D000u) [[unlikely]] return; }
L_0044D000:
    set32(c.r[4], c.r[18].w[0] + 4432u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[10], ld32((c.r[21].w[0] + 56u)));
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[9], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[8], c.r[3].w[0] + 15u);
    c.r[7].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[6], c.r[2].w[0] + 15u);
    c.r[5].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    if (c.r[7].d[0] != 0) c.r[3].d[0] = c.r[8].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 17;
    { const bool t = c.r[10].d[0] != c.r[9].d[0]; mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]); c.r[6].d[0] = c.lo.d[0];  if (t) { goto L_0044D058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D04Cu); set32(c.r[5], ld32((c.r[20].w[0] + 32u)));  if (depth < kMaxDepth) unit_00DA(c, 41u, depth + 1u); else { c.pc = 0x004688B0u; return; } if (c.pc != 0x0044D04Cu) [[unlikely]] return; }
L_0044D04C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 20u), 0u);  if (t) { goto L_0044D064; } }
    c.budget -= 1;
L_0044D058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D060u); set32(c.r[5], ld32((c.r[20].w[0] + 32u)));  if (depth < kMaxDepth) unit_00DA(c, 43u, depth + 1u); else { c.pc = 0x004688F8u; return; } if (c.pc != 0x0044D060u) [[unlikely]] return; }
L_0044D060:
    st32((c.r[19].w[0] + 20u), 0u);
    c.budget -= 1;
L_0044D064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D06Cu); set32(c.r[4], c.r[19].w[0] + 112u);  if (depth < kMaxDepth) unit_00D3(c, 18u, depth + 1u); else { c.pc = 0x0044C2D8u; return; } if (c.pc != 0x0044D06Cu) [[unlikely]] return; }
L_0044D06C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D074u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 113u, depth + 1u); else { c.pc = 0x0044D2D0u; return; } if (c.pc != 0x0044D074u) [[unlikely]] return; }
L_0044D074:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], 0u - 3u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[22].d[0];
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0044D0A8:
    set32(c.r[3], ld32((c.r[4].w[0] + 8128u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 4440u)));  c.pc = t; return; }
L_0044D0B8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8128u)));
    set32(c.r[17], c.r[3].w[0] + 4392u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 17u));
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 18u));
    st8((c.r[29].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    st8((c.r[29].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1u));
    st8((c.r[29].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 2u));
    st8((c.r[29].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 36;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_0044D19C; } }
L_0044D148:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { goto L_0044D198; } }
    set32(c.r[2], c.r[29].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = c.r[5].d[0] + 0ull;  goto L_0044D19C; }
    set32(c.r[2], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[6].d[0] = c.r[5].d[0] + 0ull;  goto L_0044D19C; }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 183u);  if (t) { goto L_0044D1E8; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = c.r[5].d[0] + 0ull;  goto L_0044D19C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], 0u + 1u);  if (t) { goto L_0044D1B0; } }
    c.budget -= 1;
L_0044D198:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0044D19C:
    set32(c.r[2], 0u + 3u);
    if (c.r[7].d[0] != 0) c.r[2].d[0] = c.r[18].d[0];
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[29].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044D148u | kUnwind; return; } goto L_0044D148; } }
L_0044D1B0:
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[19].w[0] + c.r[18].w[0]);  if (t) { goto L_0044D1F8; } }
    set32(c.r[2], c.r[29].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[18].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0044D24C; } }
    c.budget -= 1;
L_0044D1E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044D1B0u | kUnwind; return; } goto L_0044D1B0; } }
L_0044D1F8:
    c.r[2].d[0] = ld8((c.r[4].w[0] - 3u));
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] - 2u));
    st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] - 1u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0044D24C; } }
    c.budget -= 1;
L_0044D218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D220u);  if (depth < kMaxDepth) unit_00D6(c, 64u, depth + 1u); else { c.pc = 0x00458E28u; return; } if (c.pc != 0x0044D220u) [[unlikely]] return; }
L_0044D220:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[21], 0u + 1u);  goto L_0044D238; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_0044D238:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[16].w[0] - c.r[19].w[0]);
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - c.r[2].w[0]);
    c.r[7].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
L_0044D24C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044D274; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D264u); set32(c.r[6], 0u + 132u);  if (depth < kMaxDepth) unit_00D6(c, 68u, depth + 1u); else { c.pc = 0x00458FC0u; return; } if (c.pc != 0x0044D264u) [[unlikely]] return; }
L_0044D264:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044D218u | kUnwind; return; } goto L_0044D218; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0044D274:
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0044D2AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D284u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 369u, depth + 1u); else { c.pc = 0x00443120u; return; } if (c.pc != 0x0044D284u) [[unlikely]] return; }
L_0044D284:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0044D2AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D294u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 374u, depth + 1u); else { c.pc = 0x00443188u; return; } if (c.pc != 0x0044D294u) [[unlikely]] return; }
L_0044D294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0044D2AC; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D2A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D3(c, 83u, depth + 1u); else { c.pc = 0x0044CDD8u; return; } if (c.pc != 0x0044D2A8u) [[unlikely]] return; }
L_0044D2A8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0044D2AC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0044D2D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8128u)));
    set32(c.r[3], c.r[3].w[0] + 4392u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  c.pc = t; return; }
L_0044D2E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D2FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 39u, depth + 1u); else { c.pc = 0x0044C7A8u; return; } if (c.pc != 0x0044D2FCu) [[unlikely]] return; }
L_0044D2FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0044D310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044D330; } }
    c.budget -= 1;
L_0044D310:
    set32(c.r[4], ld32((c.r[16].w[0] + 8128u)));
    set32(c.r[4], c.r[4].w[0] + 4392u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044D330; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0044D330:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044D340:
    set32(c.r[2], ld32((c.r[4].w[0] + 8128u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 4432u);  c.pc = t; return; }
L_0044D350:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_0044D358:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D374u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044D374u) [[unlikely]] return; }
L_0044D374:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 322ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0044D3A0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044D3A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; if (c.r[4].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];  if (t) { goto L_0044D3B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0044D3D0; } }
L_0044D3B8:
    st32((c.r[16].w[0] + 80u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D3C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 121u, depth + 1u); else { c.pc = 0x0044D3E8u; return; } if (c.pc != 0x0044D3C8u) [[unlikely]] return; }
L_0044D3C8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 2;
L_0044D3D0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044D3E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0044D430; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 84u)));  goto L_0044D448; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0044D468; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0044D46C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0044D458; } }
L_0044D430:
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; st32((c.r[3].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_0044D464; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0044D458; } }
L_0044D448:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_0044D464; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044D458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D460u);  if (depth < kMaxDepth) unit_00D3(c, 123u, depth + 1u); else { c.pc = 0x0044D478u; return; } if (c.pc != 0x0044D460u) [[unlikely]] return; }
L_0044D460:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0044D464:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0044D468:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_0044D46C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044D478:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] - 3u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0044D4C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D4ACu);  if (depth < kMaxDepth) unit_00D4(c, 160u, depth + 1u); else { c.pc = 0x00451848u; return; } if (c.pc != 0x0044D4ACu) [[unlikely]] return; }
L_0044D4AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0044D4E0; }
L_0044D4C8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044D4E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D4FCu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00D4(c, 258u, depth + 1u); else { c.pc = 0x00452678u; return; } if (c.pc != 0x0044D4FCu) [[unlikely]] return; }
L_0044D4FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044D508:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D51Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044D51Cu) [[unlikely]] return; }
L_0044D51C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 323ull;  if (t) { goto L_0044D540; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044D540:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0044D550; }
L_0044D550:
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  c.pc = t; return; }
L_0044D560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D57Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044D57Cu) [[unlikely]] return; }
L_0044D57C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0044D5A0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 324ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044D5A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D5ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 193u, depth + 1u); else { c.pc = 0x00451DF0u; return; } if (c.pc != 0x0044D5ACu) [[unlikely]] return; }
L_0044D5AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D5B8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 205u, depth + 1u); else { c.pc = 0x00441AD0u; return; } if (c.pc != 0x0044D5B8u) [[unlikely]] return; }
L_0044D5B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044D5D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D5ECu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044D5ECu) [[unlikely]] return; }
L_0044D5EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 325ull;  if (t) { goto L_0044D618; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044D618:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D624u); set32(c.r[5], 0u + 30u);  if (depth < kMaxDepth) unit_00D4(c, 18u, depth + 1u); else { c.pc = 0x004502D8u; return; } if (c.pc != 0x0044D624u) [[unlikely]] return; }
L_0044D624:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044D640:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_0044D648:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D658u);  if (depth < kMaxDepth) unit_00D3(c, 140u, depth + 1u); else { c.pc = 0x0044D670u; return; } if (c.pc != 0x0044D658u) [[unlikely]] return; }
L_0044D658:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] - 1460u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044D670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x5A5A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 10992u)));
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[3].d[0] | 23130ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0044D6A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 513ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044D6A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044D6B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D4(c, 70u, depth); }
L_0044D6D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044D6EC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0044D6EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0044D6F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] - 1524u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 10;
L_0044D720:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D72Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044D72Cu) [[unlikely]] return; }
L_0044D72C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044D744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D73Cu);  if (depth < kMaxDepth) unit_00D3(c, 142u, depth + 1u); else { c.pc = 0x0044D6D0u; return; } if (c.pc != 0x0044D73Cu) [[unlikely]] return; }
L_0044D73C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0044D75C; } }
L_0044D744:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044D720u | kUnwind; return; } goto L_0044D720; }
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0044D75C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044D770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D784u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044D784u) [[unlikely]] return; }
L_0044D784:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 312ull;  if (t) { goto L_0044D7A8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044D7A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D7B0u);  if (depth < kMaxDepth) unit_00D3(c, 150u, depth + 1u); else { c.pc = 0x0044D7C8u; return; } if (c.pc != 0x0044D7B0u) [[unlikely]] return; }
L_0044D7B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044D7C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0044D8C8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0044D8C8; }
    st32((c.r[17].w[0] + 68u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D80Cu);  if (depth < kMaxDepth) unit_00D4(c, 195u, depth + 1u); else { c.pc = 0x00451E00u; return; } if (c.pc != 0x0044D80Cu) [[unlikely]] return; }
L_0044D80C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 72u)));  goto L_0044D82C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D828u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 165u, depth + 1u); else { c.pc = 0x0044D8E0u; return; } if (c.pc != 0x0044D828u) [[unlikely]] return; }
L_0044D828:
    set32(c.r[16], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_0044D82C:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 72u), c.r[16].w[0]);  goto L_0044D8A0; }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 10960u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0044C000u < 16384u) { entry = entries_00D3[(t - 0x0044C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0044D850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D858u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 168u, depth + 1u); else { c.pc = 0x0044D920u; return; } if (c.pc != 0x0044D858u) [[unlikely]] return; }
L_0044D858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0044D89C; } }
L_0044D860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D868u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 169u, depth + 1u); else { c.pc = 0x0044D950u; return; } if (c.pc != 0x0044D868u) [[unlikely]] return; }
L_0044D868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0044D89C; } }
L_0044D870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D878u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 195u, depth + 1u); else { c.pc = 0x0044DCE8u; return; } if (c.pc != 0x0044D878u) [[unlikely]] return; }
L_0044D878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0044D89C; } }
L_0044D880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D888u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 198u, depth + 1u); else { c.pc = 0x0044DD88u; return; } if (c.pc != 0x0044D888u) [[unlikely]] return; }
L_0044D888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0044D89C; } }
L_0044D890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D898u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 201u, depth + 1u); else { c.pc = 0x0044DDF8u; return; } if (c.pc != 0x0044D898u) [[unlikely]] return; }
L_0044D898:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0044D89C:
    st32((c.r[17].w[0] + 72u), c.r[16].w[0]);
    c.budget -= 1;
L_0044D8A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D8A8u); set32(c.r[16], c.r[17].w[0] + 14176u);  if (depth < kMaxDepth) unit_00D4(c, 195u, depth + 1u); else { c.pc = 0x00451E00u; return; } if (c.pc != 0x0044D8A8u) [[unlikely]] return; }
L_0044D8A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] - c.r[18].d[0];
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00D4(c, 203u, depth); }
L_0044D8C8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044D8E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D8F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 167u, depth + 1u); else { c.pc = 0x0044D908u; return; } if (c.pc != 0x0044D8F4u) [[unlikely]] return; }
L_0044D8F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0044FC18; }
L_0044D908:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D4(c, 254u, depth); }
L_0044D920:
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_0044D948; } }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], 0u + 2u);  goto L_0044D948; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], 0u + 2u);  goto L_0044D948; }
L_0044D948:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_0044D950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D974u); set32(c.r[16], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_00D3(c, 174u, depth + 1u); else { c.pc = 0x0044DA10u; return; } if (c.pc != 0x0044D974u) [[unlikely]] return; }
L_0044D974:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0044D9F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D984u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 181u, depth + 1u); else { c.pc = 0x0044DAC0u; return; } if (c.pc != 0x0044D984u) [[unlikely]] return; }
L_0044D984:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_0044D9F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0044D9B0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0044D9C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0044D9FC; } }
    c.budget -= 1;
L_0044D9B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_0044D9D0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0044D9D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0044D9FC; } }
L_0044D9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 2u);  if (t) { goto L_0044D9F4; } }
L_0044D9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D9D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 202u, depth + 1u); else { c.pc = 0x0044DE00u; return; } if (c.pc != 0x0044D9D8u) [[unlikely]] return; }
L_0044D9D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0044D9F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D9E8u); set32(c.r[18], 0u + 4u);  if (depth < kMaxDepth) unit_00D3(c, 329u, depth + 1u); else { c.pc = 0x0044ED40u; return; } if (c.pc != 0x0044D9E8u) [[unlikely]] return; }
L_0044D9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0044D9F8; } }
L_0044D9F0:
    set32(c.r[18], 0u + 3u);
    c.budget -= 1;
L_0044D9F4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0044D9F8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0044D9FC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044DA10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DA34u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044DA34u) [[unlikely]] return; }
L_0044DA34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_0044DA60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DA48u);  if (depth < kMaxDepth) unit_00D4(c, 261u, depth + 1u); else { c.pc = 0x004526E0u; return; } if (c.pc != 0x0044DA48u) [[unlikely]] return; }
L_0044DA48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DA58u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 263u, depth + 1u); else { c.pc = 0x00452710u; return; } if (c.pc != 0x0044DA58u) [[unlikely]] return; }
L_0044DA58:
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0044DA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DA68u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044DA68u) [[unlikely]] return; }
L_0044DA68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0044DA94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DA80u);  if (depth < kMaxDepth) unit_00D4(c, 261u, depth + 1u); else { c.pc = 0x004526E0u; return; } if (c.pc != 0x0044DA80u) [[unlikely]] return; }
L_0044DA80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DA90u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 263u, depth + 1u); else { c.pc = 0x00452710u; return; } if (c.pc != 0x0044DA90u) [[unlikely]] return; }
L_0044DA90:
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_0044DA94:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044DAA8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044DAA8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044DAA8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044DAC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DAD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 184u, depth + 1u); else { c.pc = 0x0044DAF0u; return; } if (c.pc != 0x0044DAD4u) [[unlikely]] return; }
L_0044DAD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DADCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 189u, depth + 1u); else { c.pc = 0x0044DB98u; return; } if (c.pc != 0x0044DADCu) [[unlikely]] return; }
L_0044DADC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0044DC20; }
L_0044DAF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 2572u);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 10;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 24u)));  goto L_0044DB40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DB20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D0(c, 330u, depth + 1u); else { c.pc = 0x00442C18u; return; } if (c.pc != 0x0044DB20u) [[unlikely]] return; }
L_0044DB20:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 24u)));  goto L_0044DB40; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DB34u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D0(c, 329u, depth + 1u); else { c.pc = 0x00442BF8u; return; } if (c.pc != 0x0044DB34u) [[unlikely]] return; }
L_0044DB34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 20u), 0u);  goto L_0044DB3C; }
L_0044DB3C:
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_0044DB40:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  goto L_0044DB80; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DB58u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00D0(c, 330u, depth + 1u); else { c.pc = 0x00442C18u; return; } if (c.pc != 0x0044DB58u) [[unlikely]] return; }
L_0044DB58:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 24u)));  goto L_0044DB7C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DB6Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00D0(c, 329u, depth + 1u); else { c.pc = 0x00442BF8u; return; } if (c.pc != 0x0044DB6Cu) [[unlikely]] return; }
L_0044DB6C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 24u)));  goto L_0044DB7C; }
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0044DB7C:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_0044DB80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0044FBE8; }
L_0044DB98:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 2572u);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_0044DBDC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_0044DBDC; }
    set32(c.r[5], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DBD8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D4(c, 27u, depth + 1u); else { c.pc = 0x00450418u; return; } if (c.pc != 0x0044DBD8u) [[unlikely]] return; }
L_0044DBD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_0044DBDC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0044DC10; }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0044DC10; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 15u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[6], 0u + 2u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00D4(c, 27u, depth); }
L_0044DC10:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044DC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[17].w[0] + 2572u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[7].d[0];
    c.r[5].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[7].d[0];
    c.r[2].d[0] = c.r[5].d[0] | 2ull;
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    c.budget -= 17;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[16], 0u + 2u);  if (t) { goto L_0044DCC4; } }
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_0044DC80; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[16], 0u + 1u);  if (t) { goto L_0044DCC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_0044DCC4; } }
L_0044DC80:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[16], 0u + 3u);  if (t) { goto L_0044DCC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DC90u); set32(c.r[5], 0u + 25u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044DC90u) [[unlikely]] return; }
L_0044DC90:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0044DCC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DCA4u);  if (depth < kMaxDepth) unit_00D5(c, 237u, depth + 1u); else { c.pc = 0x00456450u; return; } if (c.pc != 0x0044DCA4u) [[unlikely]] return; }
L_0044DCA4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u + 3u);  goto L_0044DCC4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DCB8u); set32(c.r[5], 0u + 72u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044DCB8u) [[unlikely]] return; }
L_0044DCB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0044DCC8; } }
    set32(c.r[16], 0u + 3u);
    c.budget -= 1;
L_0044DCC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0044DCC8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 25u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00D4(c, 27u, depth); }
L_0044DCE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], ld32((c.r[16].w[0] + 72u)));  if (t) { goto L_0044DD50; } }
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0044DD30; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0044DD48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0044DD78; } }
    c.budget -= 1;
L_0044DD30:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_0044DD58; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0044DD58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0044DD78; } }
L_0044DD48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_0044DD70; } }
L_0044DD50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_0044DD70; } }
L_0044DD58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DD60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 202u, depth + 1u); else { c.pc = 0x0044DE00u; return; } if (c.pc != 0x0044DD60u) [[unlikely]] return; }
L_0044DD60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044DD70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DD70u); set32(c.r[17], 0u + 4u);  if (depth < kMaxDepth) unit_00D3(c, 329u, depth + 1u); else { c.pc = 0x0044ED40u; return; } if (c.pc != 0x0044DD70u) [[unlikely]] return; }
L_0044DD70:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0044DD78:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044DD88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DD9Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 249u, depth + 1u); else { c.pc = 0x0044E350u; return; } if (c.pc != 0x0044DD9Cu) [[unlikely]] return; }
L_0044DD9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044DDB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DDACu);  if (depth < kMaxDepth) unit_00D3(c, 204u, depth + 1u); else { c.pc = 0x0044DE68u; return; } if (c.pc != 0x0044DDACu) [[unlikely]] return; }
L_0044DDAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 76u)));  goto L_0044DDC0; }
L_0044DDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 72u)));  if (t) { goto L_0044DDE8; } }
    c.budget -= 1;
L_0044DDC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_0044DDE4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0044DDE8; } }
    set32(c.r[3], 0u + 6u);
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[3].d[0];
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_0044DDE4:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0044DDE8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044DDF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 72u)));  c.pc = t; return; }
L_0044DE00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[5].w[0] + 2572u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[6].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 3376u);  if (t) { goto L_0044DE58; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0044DE5C; }
    set32(c.r[3], ld32((c.r[5].w[0] + 688u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0044DE5C; }
    set32(c.r[3], ld32((c.r[5].w[0] + 716u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 180u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0044DE5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DE54u);  if (depth < kMaxDepth) unit_00D3(c, 257u, depth + 1u); else { c.pc = 0x0044E430u; return; } if (c.pc != 0x0044DE54u) [[unlikely]] return; }
L_0044DE54:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0044DE58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0044DE5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044DE68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 2384u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DE8Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 37u, depth + 1u); else { c.pc = 0x00444340u; return; } if (c.pc != 0x0044DE8Cu) [[unlikely]] return; }
L_0044DE8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044DED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DEA4u);  if (depth < kMaxDepth) unit_00D3(c, 211u, depth + 1u); else { c.pc = 0x0044DF18u; return; } if (c.pc != 0x0044DEA4u) [[unlikely]] return; }
L_0044DEA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0044DEF0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DEC8u); st32((c.r[17].w[0] + 36u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00D3(c, 121u, depth + 1u); else { c.pc = 0x0044D3E8u; return; } if (c.pc != 0x0044DEC8u) [[unlikely]] return; }
L_0044DEC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0044DEF0; } }
L_0044DED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DED8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 226u, depth + 1u); else { c.pc = 0x0044E098u; return; } if (c.pc != 0x0044DED8u) [[unlikely]] return; }
L_0044DED8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0044DEF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DEECu); st32((c.r[17].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_00D3(c, 121u, depth + 1u); else { c.pc = 0x0044D3E8u; return; } if (c.pc != 0x0044DEECu) [[unlikely]] return; }
L_0044DEEC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0044DEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DEF8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 38u, depth + 1u); else { c.pc = 0x00444358u; return; } if (c.pc != 0x0044DEF8u) [[unlikely]] return; }
L_0044DEF8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0044DF18:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 67u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DF38u); set32(c.r[17], c.r[16].w[0] + 2384u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044DF38u) [[unlikely]] return; }
L_0044DF38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044E080; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DF48u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044DF48u) [[unlikely]] return; }
L_0044DF48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0044E084; }
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044E080; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0044E084; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DF74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 236u, depth + 1u); else { c.pc = 0x0044E178u; return; } if (c.pc != 0x0044DF74u) [[unlikely]] return; }
L_0044DF74:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0044E080; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DF88u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044DF88u) [[unlikely]] return; }
L_0044DF88:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044DFA4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044E080; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0044DFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DFACu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044DFACu) [[unlikely]] return; }
L_0044DFAC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044DFCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DFC0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00D0(c, 344u, depth + 1u); else { c.pc = 0x00442EA8u; return; } if (c.pc != 0x0044DFC0u) [[unlikely]] return; }
L_0044DFC0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044E080; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0044DFCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DFD4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D4(c, 264u, depth + 1u); else { c.pc = 0x00452728u; return; } if (c.pc != 0x0044DFD4u) [[unlikely]] return; }
L_0044DFD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044DFEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DFE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 344u, depth + 1u); else { c.pc = 0x00442EA8u; return; } if (c.pc != 0x0044DFE4u) [[unlikely]] return; }
L_0044DFE4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044E080; } }
L_0044DFEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DFF8u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044DFF8u) [[unlikely]] return; }
L_0044DFF8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[5].d[0] = c.r[29].d[0] + 0ull;  goto L_0044E018; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E00Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 244u, depth + 1u); else { c.pc = 0x0044E218u; return; } if (c.pc != 0x0044E00Cu) [[unlikely]] return; }
L_0044E00C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044E080; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_0044E018:
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E024u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 105u, depth + 1u); else { c.pc = 0x00450F40u; return; } if (c.pc != 0x0044E024u) [[unlikely]] return; }
L_0044E024:
    set32(c.r[3], c.r[16].w[0] + 3376u);
    set32(c.r[17], ld32((c.r[3].w[0] + 648u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 68u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E03Cu); set32(c.r[16], ld32((c.r[3].w[0] + 644u)));  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044E03Cu) [[unlikely]] return; }
L_0044E03C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E050u); c.r[6].d[0] = c.r[6].d[0] | 16960ull;  if (depth < kMaxDepth) unit_00D7(c, 36u, depth + 1u); else { c.pc = 0x0045C4A0u; return; } if (c.pc != 0x0044E050u) [[unlikely]] return; }
L_0044E050:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);  if (t) { goto L_0044E064; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0; set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_0044E070; } }
L_0044E064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044E080; } }
    c.budget -= 1;
L_0044E070:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E07Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 130u, depth + 1u); else { c.pc = 0x00451270u; return; } if (c.pc != 0x0044E07Cu) [[unlikely]] return; }
L_0044E07C:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0044E080:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0044E084:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0044E098:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E0B0u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 236u, depth + 1u); else { c.pc = 0x0044E178u; return; } if (c.pc != 0x0044E0B0u) [[unlikely]] return; }
L_0044E0B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_0044E108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E0C4u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044E0C4u) [[unlikely]] return; }
L_0044E0C4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0044E0E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E0D8u);  if (depth < kMaxDepth) unit_00D3(c, 244u, depth + 1u); else { c.pc = 0x0044E218u; return; } if (c.pc != 0x0044E0D8u) [[unlikely]] return; }
L_0044E0D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044E164; } }
L_0044E0E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E0ECu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044E0ECu) [[unlikely]] return; }
L_0044E0EC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0044E110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E100u);  if (depth < kMaxDepth) unit_00D3(c, 247u, depth + 1u); else { c.pc = 0x0044E2D0u; return; } if (c.pc != 0x0044E100u) [[unlikely]] return; }
L_0044E100:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[29].d[0] + 0ull;  goto L_0044E114; }
L_0044E108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044E164; } }
L_0044E110:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_0044E114:
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E120u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 105u, depth + 1u); else { c.pc = 0x00450F40u; return; } if (c.pc != 0x0044E120u) [[unlikely]] return; }
L_0044E120:
    set32(c.r[3], c.r[17].w[0] + 3376u);
    set32(c.r[16], ld32((c.r[3].w[0] + 648u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 69u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E138u); set32(c.r[17], ld32((c.r[3].w[0] + 644u)));  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044E138u) [[unlikely]] return; }
L_0044E138:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E14Cu); c.r[6].d[0] = c.r[6].d[0] | 16960ull;  if (depth < kMaxDepth) unit_00D7(c, 36u, depth + 1u); else { c.pc = 0x0045C4A0u; return; } if (c.pc != 0x0044E14Cu) [[unlikely]] return; }
L_0044E14C:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[6], c.r[17].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E160u); set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00D4(c, 130u, depth + 1u); else { c.pc = 0x00451270u; return; } if (c.pc != 0x0044E160u) [[unlikely]] return; }
L_0044E160:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0044E164:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0044E178:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E194u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044E194u) [[unlikely]] return; }
L_0044E194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0044E1AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E1A4u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00D4(c, 263u, depth + 1u); else { c.pc = 0x00452710u; return; } if (c.pc != 0x0044E1A4u) [[unlikely]] return; }
L_0044E1A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044E200; } }
L_0044E1AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E1B8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044E1B8u) [[unlikely]] return; }
L_0044E1B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0044E1E0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E1CCu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00D4(c, 263u, depth + 1u); else { c.pc = 0x00452710u; return; } if (c.pc != 0x0044E1CCu) [[unlikely]] return; }
L_0044E1CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0044E1E0; } }
L_0044E1D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044E200; } }
    c.budget -= 1;
L_0044E1E0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0044E1E4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E1F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 343u, depth + 1u); else { c.pc = 0x00442E88u; return; } if (c.pc != 0x0044E1F0u) [[unlikely]] return; }
L_0044E1F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044E1D4u | kUnwind; return; } goto L_0044E1D4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044E1E4u | kUnwind; return; } goto L_0044E1E4; } }
L_0044E200:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044E218:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8136u)));
    set32(c.r[16], c.r[2].w[0] << 3);
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4896u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E264u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044E264u) [[unlikely]] return; }
L_0044E264:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 100u);
    set32(c.r[5], 0u + 70u);
    set32(c.r[2], c.r[6].w[0] << 2);
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0044E280u);  goto L_0044E284; }
L_0044E284:
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0044E2B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E2A8u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044E2A8u) [[unlikely]] return; }
L_0044E2A8:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044E2B8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0044E2B8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044E2D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8204u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4896u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E314u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044E314u) [[unlikely]] return; }
L_0044E314:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { breakpoint(c, 0x0044E324u);  goto L_0044E328; }
L_0044E328:
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044E350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E364u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 254u, depth + 1u); else { c.pc = 0x0044E3C0u; return; } if (c.pc != 0x0044E364u) [[unlikely]] return; }
L_0044E364:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044E39C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E374u);  if (depth < kMaxDepth) unit_00D3(c, 257u, depth + 1u); else { c.pc = 0x0044E430u; return; } if (c.pc != 0x0044E374u) [[unlikely]] return; }
L_0044E374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044E39C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E384u);  if (depth < kMaxDepth) unit_00D3(c, 261u, depth + 1u); else { c.pc = 0x0044E4F8u; return; } if (c.pc != 0x0044E384u) [[unlikely]] return; }
L_0044E384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044E39C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E394u);  if (depth < kMaxDepth) unit_00D3(c, 263u, depth + 1u); else { c.pc = 0x0044E550u; return; } if (c.pc != 0x0044E394u) [[unlikely]] return; }
L_0044E394:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0044E3B0; }
L_0044E39C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0044E5E0; }
L_0044E3B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044E3C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[4].w[0] + 2572u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[5], 0u - 4u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == c.r[5].d[0]; set32(c.r[17], ld32((c.r[3].w[0] + 84u)));  if (t) { goto L_0044E418; } }
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E3F4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 105u, depth + 1u); else { c.pc = 0x00450F40u; return; } if (c.pc != 0x0044E3F4u) [[unlikely]] return; }
L_0044E3F4:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0044E418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E414u); set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00D5(c, 251u, depth + 1u); else { c.pc = 0x00456568u; return; } if (c.pc != 0x0044E414u) [[unlikely]] return; }
L_0044E414:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0044E418:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0044E430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[3], c.r[16].w[0] + 2572u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_0044E468; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044E4E0; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 1;
L_0044E468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E470u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 263u, depth + 1u); else { c.pc = 0x00452710u; return; } if (c.pc != 0x0044E470u) [[unlikely]] return; }
L_0044E470:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E480u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 263u, depth + 1u); else { c.pc = 0x00452710u; return; } if (c.pc != 0x0044E480u) [[unlikely]] return; }
L_0044E480:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 25u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E490u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044E490u) [[unlikely]] return; }
L_0044E490:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0044E4C8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] & c.r[18].d[0];  goto L_0044E4DC; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0044E4D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0044E4D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0044E4E4; } }
    c.budget -= 1;
L_0044E4C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0044E4DC; } }
L_0044E4D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0044E4DC; } }
L_0044E4D8:
    c.r[4].d[0] = c.r[17].d[0] | c.r[18].d[0];
    c.budget -= 1;
L_0044E4DC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0044E4E0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0044E4E4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044E4F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], ld32((c.r[5].w[0] + 72u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2384u);  if (t) { goto L_0044E530; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044E544; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0044E538; } }
L_0044E530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044E544; } }
L_0044E538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E540u);  if (depth < kMaxDepth) unit_00D4(c, 86u, depth + 1u); else { c.pc = 0x00450CC0u; return; } if (c.pc != 0x0044E540u) [[unlikely]] return; }
L_0044E540:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0044E544:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044E550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[16].w[0] + 2384u);  if (t) { goto L_0044E59C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044E5D0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0044E59C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E594u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00D4(c, 100u, depth + 1u); else { c.pc = 0x00450E70u; return; } if (c.pc != 0x0044E594u) [[unlikely]] return; }
L_0044E594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_0044E5A8; } }
L_0044E59C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044E5D0; } }
    c.budget -= 1;
L_0044E5A8:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044E5D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E5B8u); set32(c.r[5], 0u + 54u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044E5B8u) [[unlikely]] return; }
L_0044E5B8:
    set32(c.r[5], 0u + 1000u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E5CCu); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00D4(c, 130u, depth + 1u); else { c.pc = 0x00451270u; return; } if (c.pc != 0x0044E5CCu) [[unlikely]] return; }
L_0044E5CC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0044E5D0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044E5E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E5F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 341u, depth + 1u); else { c.pc = 0x0044EE48u; return; } if (c.pc != 0x0044E5F4u) [[unlikely]] return; }
L_0044E5F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044E60C; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E608u); st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D3(c, 381u, depth + 1u); else { c.pc = 0x0044F3F8u; return; } if (c.pc != 0x0044E608u) [[unlikely]] return; }
L_0044E608:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044E60C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044E620:
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 2;
L_0044E628:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E654u); set32(c.r[19], c.r[2].w[0] - 1524u);  if (depth < kMaxDepth) unit_00D3(c, 276u, depth + 1u); else { c.pc = 0x0044E6C0u; return; } if (c.pc != 0x0044E654u) [[unlikely]] return; }
L_0044E654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044E6A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E664u);  if (depth < kMaxDepth) unit_00D3(c, 277u, depth + 1u); else { c.pc = 0x0044E728u; return; } if (c.pc != 0x0044E664u) [[unlikely]] return; }
L_0044E664:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0044E690; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E684u); c.r[5].d[0] = c.r[5].d[0] | 518ull;  if (depth < kMaxDepth) unit_00D1(c, 19u, depth + 1u); else { c.pc = 0x00444148u; return; } if (c.pc != 0x0044E684u) [[unlikely]] return; }
L_0044E684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044E6A4; } }
    c.budget -= 1;
L_0044E690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E698u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 279u, depth + 1u); else { c.pc = 0x0044E768u; return; } if (c.pc != 0x0044E698u) [[unlikely]] return; }
L_0044E698:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0044E6A4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0044E6C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0044E6F0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 516ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044E6F0:
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(14288ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0044E718; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 517ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044E718:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044E728:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[2].w[0] - 1524u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 4;
L_0044E738:
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_0044E760; } }
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044E738u | kUnwind; return; } goto L_0044E738; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0044E760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0044E768:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 14;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] >> 2);  if (t) { goto L_0044E974; } }
    set32(c.r[3], c.r[7].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(28576ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0044E978; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[8].w[0] - 1464u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044E7CC; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[7].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0044E978; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0044E7CC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E7D8u); st32((c.r[8].w[0] - 1464u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_00D5(c, 259u, depth + 1u); else { c.pc = 0x004568A0u; return; } if (c.pc != 0x0044E7D8u) [[unlikely]] return; }
L_0044E7D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[16].w[0] + 31u);
    set32(c.r[4], 0u - 32u);
    c.r[5].d[0] = c.r[18].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] + 31u);
    c.r[17].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 72u), 0u);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0044E870; } }
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.budget -= 1;
L_0044E810:
    ldl(c.r[5], (c.r[2].w[0] + 7u));
    ldr(c.r[5], (c.r[2].w[0]));
    ldl(c.r[6], (c.r[2].w[0] + 15u));
    ldr(c.r[6], (c.r[2].w[0] + 8u));
    ldl(c.r[7], (c.r[2].w[0] + 23u));
    ldr(c.r[7], (c.r[2].w[0] + 16u));
    ldl(c.r[8], (c.r[2].w[0] + 31u));
    ldr(c.r[8], (c.r[2].w[0] + 24u));
    sdl(c.r[5], (c.r[3].w[0] + 7u));
    sdr(c.r[5], (c.r[3].w[0]));
    sdl(c.r[6], (c.r[3].w[0] + 15u));
    sdr(c.r[6], (c.r[3].w[0] + 8u));
    sdl(c.r[7], (c.r[3].w[0] + 23u));
    sdr(c.r[7], (c.r[3].w[0] + 16u));
    sdl(c.r[8], (c.r[3].w[0] + 31u));
    sdr(c.r[8], (c.r[3].w[0] + 24u));
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044E810u | kUnwind; return; } goto L_0044E810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0044E8A8; } }
    c.budget -= 1;
L_0044E870:
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.budget -= 1;
L_0044E874:
    c.r[5].d[0] = ld64((c.r[2].w[0]));
    c.r[6].d[0] = ld64((c.r[2].w[0] + 8u));
    c.r[7].d[0] = ld64((c.r[2].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[2].w[0] + 24u));
    st64((c.r[3].w[0]), c.r[5].d[0]);
    st64((c.r[3].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[3].w[0] + 16u), c.r[7].d[0]);
    st64((c.r[3].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044E874u | kUnwind; return; } goto L_0044E874; } }
L_0044E8A8:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[19], 0u + 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[17].w[0] + 120u);
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[16], c.r[16].w[0] - 2040u);
    st32((c.r[17].w[0] + 68u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E8D8u); st32((c.r[17].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_00D0(c, 389u, depth + 1u); else { c.pc = 0x00443458u; return; } if (c.pc != 0x0044E8D8u) [[unlikely]] return; }
L_0044E8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E8E0u); set32(c.r[4], c.r[17].w[0] + 2316u);  if (depth < kMaxDepth) unit_00D3(c, 295u, depth + 1u); else { c.pc = 0x0044E998u; return; } if (c.pc != 0x0044E8E0u) [[unlikely]] return; }
L_0044E8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E8E8u); set32(c.r[4], c.r[17].w[0] + 2384u);  if (depth < kMaxDepth) unit_00D3(c, 297u, depth + 1u); else { c.pc = 0x0044EA00u; return; } if (c.pc != 0x0044E8E8u) [[unlikely]] return; }
L_0044E8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E8F0u); set32(c.r[4], c.r[17].w[0] + 14016u);  if (depth < kMaxDepth) unit_00D3(c, 303u, depth + 1u); else { c.pc = 0x0044EA88u; return; } if (c.pc != 0x0044E8F0u) [[unlikely]] return; }
L_0044E8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E8F8u); set32(c.r[4], c.r[17].w[0] + 2552u);  if (depth < kMaxDepth) unit_00D1(c, 18u, depth + 1u); else { c.pc = 0x00444130u; return; } if (c.pc != 0x0044E8F8u) [[unlikely]] return; }
L_0044E8F8:
    set32(c.r[4], c.r[17].w[0] + 2572u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E908u); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_00D5(c, 252u, depth + 1u); else { c.pc = 0x004565B0u; return; } if (c.pc != 0x0044E908u) [[unlikely]] return; }
L_0044E908:
    set32(c.r[4], c.r[17].w[0] + 2972u);
    set32(c.r[6], 0u + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E918u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 252u, depth + 1u); else { c.pc = 0x004565B0u; return; } if (c.pc != 0x0044E918u) [[unlikely]] return; }
L_0044E918:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E924u); set32(c.r[5], c.r[17].w[0] + 3376u);  if (depth < kMaxDepth) unit_00D4(c, 47u, depth + 1u); else { c.pc = 0x004506C8u; return; } if (c.pc != 0x0044E924u) [[unlikely]] return; }
L_0044E924:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 4880u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E934u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 245u, depth + 1u); else { c.pc = 0x00441EB0u; return; } if (c.pc != 0x0044E934u) [[unlikely]] return; }
L_0044E934:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0044E974; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E950u); set32(c.r[5], c.r[17].w[0] + 7984u);  if (depth < kMaxDepth) unit_00D4(c, 210u, depth + 1u); else { c.pc = 0x00452078u; return; } if (c.pc != 0x0044E950u) [[unlikely]] return; }
L_0044E950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E958u); set32(c.r[4], c.r[17].w[0] + 14000u);  if (depth < kMaxDepth) unit_00D3(c, 419u, depth + 1u); else { c.pc = 0x0044FB48u; return; } if (c.pc != 0x0044E958u) [[unlikely]] return; }
L_0044E958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E960u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 314u, depth + 1u); else { c.pc = 0x0044EBD0u; return; } if (c.pc != 0x0044E960u) [[unlikely]] return; }
L_0044E960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044E974; } }
    st32((c.r[17].w[0] + 72u), c.r[19].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 76u), c.r[19].w[0]);
    c.budget -= 3;
L_0044E974:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0044E978:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0044E998:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E9B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 259u, depth + 1u); else { c.pc = 0x004568A0u; return; } if (c.pc != 0x0044E9B4u) [[unlikely]] return; }
L_0044E9B4:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044EA00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EA1Cu); set32(c.r[6], 0u + 42u);  if (depth < kMaxDepth) unit_00D5(c, 259u, depth + 1u); else { c.pc = 0x004568A0u; return; } if (c.pc != 0x0044EA1Cu) [[unlikely]] return; }
L_0044EA1C:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[4], c.r[16].w[0] + 56u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EA54u); st32((c.r[16].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_00D3(c, 302u, depth + 1u); else { c.pc = 0x0044EA78u; return; } if (c.pc != 0x0044EA54u) [[unlikely]] return; }
L_0044EA54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EA5Cu); set32(c.r[4], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_00D3(c, 302u, depth + 1u); else { c.pc = 0x0044EA78u; return; } if (c.pc != 0x0044EA5Cu) [[unlikely]] return; }
L_0044EA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EA64u); set32(c.r[4], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_00D3(c, 302u, depth + 1u); else { c.pc = 0x0044EA78u; return; } if (c.pc != 0x0044EA64u) [[unlikely]] return; }
L_0044EA64:
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0044EA78; }
L_0044EA78:
    st64((c.r[4].w[0] + 16u), 0ull);
    st64((c.r[4].w[0]), 0ull);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 8u), 0ull);  c.pc = t; return; }
L_0044EA88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u + 56u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EAB0u); set32(c.r[18], 0u + 4u);  if (depth < kMaxDepth) unit_00D5(c, 259u, depth + 1u); else { c.pc = 0x004568A0u; return; } if (c.pc != 0x0044EAB0u) [[unlikely]] return; }
L_0044EAB0:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0044EAB8:
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EAC4u); set32(c.r[18], c.r[18].w[0] - 1u);  if (depth < kMaxDepth) unit_00D4(c, 202u, depth + 1u); else { c.pc = 0x00451EE8u; return; } if (c.pc != 0x0044EAC4u) [[unlikely]] return; }
L_0044EAC4:
    c.budget -= 2;
    if (c.r[18].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044EAB8u | kUnwind; return; } goto L_0044EAB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EAD4u); set32(c.r[4], c.r[17].w[0] + 160u);  if (depth < kMaxDepth) unit_00D4(c, 202u, depth + 1u); else { c.pc = 0x00451EE8u; return; } if (c.pc != 0x0044EAD4u) [[unlikely]] return; }
L_0044EAD4:
    st64((c.r[17].w[0] + 192u), 0ull);
    st32((c.r[17].w[0] + 220u), 0u);
    st64((c.r[17].w[0] + 200u), 0ull);
    st64((c.r[17].w[0] + 208u), 0ull);
    st32((c.r[17].w[0] + 216u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044EB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 2384u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], 0u + 36u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EB34u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044EB34u) [[unlikely]] return; }
L_0044EB34:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044EB4C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EB4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044EB4Cu) [[unlikely]] return; }
L_0044EB4C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044EB68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 2384u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], 0u + 37u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EB9Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044EB9Cu) [[unlikely]] return; }
L_0044EB9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044EBB4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EBB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044EBB4u) [[unlikely]] return; }
L_0044EBB4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044EBD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D4(c, 254u, depth); }
L_0044EBE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EBFCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044EBFCu) [[unlikely]] return; }
L_0044EBFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));  if (t) { goto L_0044EC20; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 305ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044EC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EC28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 334u, depth + 1u); else { c.pc = 0x0044EDC0u; return; } if (c.pc != 0x0044EC28u) [[unlikely]] return; }
L_0044EC28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EC30u); set32(c.r[4], c.r[16].w[0] + 120u);  if (depth < kMaxDepth) unit_00D0(c, 390u, depth + 1u); else { c.pc = 0x00443470u; return; } if (c.pc != 0x0044EC30u) [[unlikely]] return; }
L_0044EC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EC38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 267u, depth + 1u); else { c.pc = 0x00442180u; return; } if (c.pc != 0x0044EC38u) [[unlikely]] return; }
L_0044EC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EC40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 322u, depth + 1u); else { c.pc = 0x0044EC88u; return; } if (c.pc != 0x0044EC40u) [[unlikely]] return; }
L_0044EC40:
    set32(c.r[4], 0u + 7u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[2].w[0] - 1524u);
    c.budget -= 4;
L_0044EC50:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { st32((c.r[3].w[0]), 0u);  goto L_0044EC5C; }
L_0044EC5C:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044EC50u | kUnwind; return; } goto L_0044EC50; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044EC88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 4u);
    st32((c.r[2].w[0] + 76u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 72u), 0u);
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D4(c, 254u, depth); }
L_0044ECB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044ECC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044ECC4u) [[unlikely]] return; }
L_0044ECC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 306ull;  if (t) { goto L_0044ECE8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044ECE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044ECF0u); set32(c.r[5], 0u + 47u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044ECF0u) [[unlikely]] return; }
L_0044ECF0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044ED10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044ED04u);  if (depth < kMaxDepth) unit_00D3(c, 129u, depth + 1u); else { c.pc = 0x0044D550u; return; } if (c.pc != 0x0044ED04u) [[unlikely]] return; }
L_0044ED04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0044ED1C; } }
    c.budget -= 1;
L_0044ED10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044ED18u);  if (depth < kMaxDepth) unit_00D3(c, 328u, depth + 1u); else { c.pc = 0x0044ED30u; return; } if (c.pc != 0x0044ED18u) [[unlikely]] return; }
L_0044ED18:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0044ED1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044ED30:
    set32(c.r[3], 0u + 4u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  c.pc = t; return; }
L_0044ED40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 6u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044ED5Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 258u, depth + 1u); else { c.pc = 0x00452678u; return; } if (c.pc != 0x0044ED5Cu) [[unlikely]] return; }
L_0044ED5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044ED68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044ED7Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044ED7Cu) [[unlikely]] return; }
L_0044ED7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 307ull;  if (t) { goto L_0044EDA0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044EDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EDA8u);  if (depth < kMaxDepth) unit_00D3(c, 334u, depth + 1u); else { c.pc = 0x0044EDC0u; return; } if (c.pc != 0x0044EDA8u) [[unlikely]] return; }
L_0044EDA8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044EDC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044EE14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EDE8u);  if (depth < kMaxDepth) unit_00D3(c, 341u, depth + 1u); else { c.pc = 0x0044EE48u; return; } if (c.pc != 0x0044EDE8u) [[unlikely]] return; }
L_0044EDE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0044EE14; } }
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EDFCu); st32((c.r[16].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_00D3(c, 339u, depth + 1u); else { c.pc = 0x0044EE28u; return; } if (c.pc != 0x0044EDFCu) [[unlikely]] return; }
L_0044EDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EE04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 343u, depth + 1u); else { c.pc = 0x0044EEA8u; return; } if (c.pc != 0x0044EE04u) [[unlikely]] return; }
L_0044EE04:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EE10u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 339u, depth + 1u); else { c.pc = 0x0044EE28u; return; } if (c.pc != 0x0044EE10u) [[unlikely]] return; }
L_0044EE10:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0044EE14:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044EE28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 1532u), c.r[4].w[0]);  c.pc = t; return; }
L_0044EE38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] - 1532u)));  c.pc = t; return; }
L_0044EE48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 8;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_0044EE88; }
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 7u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EE7Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 258u, depth + 1u); else { c.pc = 0x00452678u; return; } if (c.pc != 0x0044EE7Cu) [[unlikely]] return; }
L_0044EE7C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0044EE98; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0044EE88:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_0044EE98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044EEA8:
    set32(c.r[29], c.r[29].w[0] - 736u);
    st64((c.r[29].w[0] + 656u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] & 7ull;
    st64((c.r[29].w[0] + 664u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 672u), c.r[18].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 680u), c.r[19].d[0]);
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 688u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 696u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 704u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 712u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 720u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 728u), c.r[31].d[0]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 592u), 0u);  if (t) { goto L_0044EF50; } }
    set32(c.r[2], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_0044EEF0:
    ldl(c.r[5], (c.r[3].w[0] + 7u));
    ldr(c.r[5], (c.r[3].w[0]));
    ldl(c.r[6], (c.r[3].w[0] + 15u));
    ldr(c.r[6], (c.r[3].w[0] + 8u));
    ldl(c.r[7], (c.r[3].w[0] + 23u));
    ldr(c.r[7], (c.r[3].w[0] + 16u));
    ldl(c.r[8], (c.r[3].w[0] + 31u));
    ldr(c.r[8], (c.r[3].w[0] + 24u));
    sdl(c.r[5], (c.r[4].w[0] + 7u));
    sdr(c.r[5], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    sdl(c.r[7], (c.r[4].w[0] + 23u));
    sdr(c.r[7], (c.r[4].w[0] + 16u));
    sdl(c.r[8], (c.r[4].w[0] + 31u));
    sdr(c.r[8], (c.r[4].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044EEF0u | kUnwind; return; } goto L_0044EEF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0044EF88; } }
    c.budget -= 1;
L_0044EF50:
    set32(c.r[2], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_0044EF54:
    c.r[5].d[0] = ld64((c.r[3].w[0]));
    c.r[6].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[7].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[5].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[7].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044EF54u | kUnwind; return; } goto L_0044EF54; } }
L_0044EF88:
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[16].w[0] + 2604u)));
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0044EFB0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EFA8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00D3(c, 373u, depth + 1u); else { c.pc = 0x0044F278u; return; } if (c.pc != 0x0044EFA8u) [[unlikely]] return; }
L_0044EFA8:
    set32(c.r[8], ld32((c.r[29].w[0] + 100u)));
    st32((c.r[29].w[0] + 592u), c.r[8].w[0]);
    c.budget -= 2;
L_0044EFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EFB8u); set32(c.r[4], c.r[16].w[0] + 120u);  if (depth < kMaxDepth) unit_00D0(c, 390u, depth + 1u); else { c.pc = 0x00443470u; return; } if (c.pc != 0x0044EFB8u) [[unlikely]] return; }
L_0044EFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EFC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 267u, depth + 1u); else { c.pc = 0x00442180u; return; } if (c.pc != 0x0044EFC0u) [[unlikely]] return; }
L_0044EFC0:
    set32(c.r[22], ld32((c.r[16].w[0] + 2552u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 2556u)));
    ldl(c.r[2], (c.r[16].w[0] + 4839u));
    ldr(c.r[2], (c.r[16].w[0] + 4832u));
    set32(c.r[3], ld32((c.r[16].w[0] + 4840u)));
    sdl(c.r[2], (c.r[29].w[0] + 583u));
    sdr(c.r[2], (c.r[29].w[0] + 576u));
    st32((c.r[29].w[0] + 584u), c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 14000u)));
    st32((c.r[29].w[0] + 596u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 4116u)));
    set32(c.r[23], ld32((c.r[16].w[0] + 3392u)));
    set32(c.r[30], ld32((c.r[16].w[0] + 4100u)));
    st32((c.r[29].w[0] + 600u), c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 4120u)));
    st32((c.r[29].w[0] + 604u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 3400u)));
    st32((c.r[29].w[0] + 608u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4060u)));
    c.budget -= 21;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 612u), c.r[3].w[0]);  if (t) { goto L_0044F040; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 3536u)));
    c.budget -= 1;
L_0044F018:
    st32((c.r[29].w[0] + 616u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 3524u)));
    st32((c.r[29].w[0] + 620u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 3528u)));
    st32((c.r[29].w[0] + 624u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[18].w[0] + 3532u)));
    st32((c.r[29].w[0] + 628u), c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[18].w[0] + 3540u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 632u), c.r[8].w[0]);  if (t) { goto L_0044F054; } }
L_0044F040:
    st32((c.r[29].w[0] + 632u), 0u);
    st32((c.r[29].w[0] + 628u), 0u);
    st32((c.r[29].w[0] + 624u), 0u);
    st32((c.r[29].w[0] + 620u), 0u);
    st32((c.r[29].w[0] + 616u), 0u);
    c.budget -= 5;
L_0044F054:
    set32(c.r[3], c.r[16].w[0] + 5052u);
    set32(c.r[20], c.r[29].w[0] + 512u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[29].w[0] + 640u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F080u); st32((c.r[29].w[0] + 636u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00D1(c, 275u, depth + 1u); else { c.pc = 0x00446610u; return; } if (c.pc != 0x0044F080u) [[unlikely]] return; }
L_0044F080:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F08Cu); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 322u, depth + 1u); else { c.pc = 0x0044EC88u; return; } if (c.pc != 0x0044F08Cu) [[unlikely]] return; }
L_0044F08C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 656u));  goto L_0044F248; }
    set32(c.r[17], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[16].w[0] + 2972u);
    set32(c.r[6], 0u + 400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F0A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 252u, depth + 1u); else { c.pc = 0x004565B0u; return; } if (c.pc != 0x0044F0A8u) [[unlikely]] return; }
L_0044F0A8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F0B4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 279u, depth + 1u); else { c.pc = 0x0044E768u; return; } if (c.pc != 0x0044F0B4u) [[unlikely]] return; }
L_0044F0B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 2572u);  if (t) { goto L_0044F0D8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F0D0u); c.r[5].d[0] = c.r[5].d[0] | 514ull;  if (depth < kMaxDepth) unit_00D1(c, 19u, depth + 1u); else { c.pc = 0x00444148u; return; } if (c.pc != 0x0044F0D0u) [[unlikely]] return; }
L_0044F0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 656u));  if (t) { goto L_0044F248; } }
L_0044F0D8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F0E4u); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_00D5(c, 252u, depth + 1u); else { c.pc = 0x004565B0u; return; } if (c.pc != 0x0044F0E4u) [[unlikely]] return; }
L_0044F0E4:
    set32(c.r[4], c.r[16].w[0] + 2972u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F0F4u); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_00D5(c, 252u, depth + 1u); else { c.pc = 0x004565B0u; return; } if (c.pc != 0x0044F0F4u) [[unlikely]] return; }
L_0044F0F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F104u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 278u, depth + 1u); else { c.pc = 0x00446698u; return; } if (c.pc != 0x0044F104u) [[unlikely]] return; }
L_0044F104:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0044F140; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F118u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00D3(c, 373u, depth + 1u); else { c.pc = 0x0044F278u; return; } if (c.pc != 0x0044F118u) [[unlikely]] return; }
L_0044F118:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 656u));  goto L_0044F248; }
    set32(c.r[6], ld32((c.r[29].w[0] + 100u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F130u); set32(c.r[5], ld32((c.r[29].w[0] + 592u)));  if (depth < kMaxDepth) unit_00D3(c, 375u, depth + 1u); else { c.pc = 0x0044F2E8u; return; } if (c.pc != 0x0044F130u) [[unlikely]] return; }
L_0044F130:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 656u));  goto L_0044F248; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F140u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 377u, depth + 1u); else { c.pc = 0x0044F368u; return; } if (c.pc != 0x0044F140u) [[unlikely]] return; }
L_0044F140:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 596u)));  if (t) { goto L_0044F154; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F154u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 24u, depth + 1u); else { c.pc = 0x004441F8u; return; } if (c.pc != 0x0044F154u) [[unlikely]] return; }
L_0044F154:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_0044F164; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F164u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 131u, depth + 1u); else { c.pc = 0x00451288u; return; } if (c.pc != 0x0044F164u) [[unlikely]] return; }
L_0044F164:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 600u)));  if (t) { goto L_0044F17C; } }
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 604u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F17Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 135u, depth + 1u); else { c.pc = 0x00451310u; return; } if (c.pc != 0x0044F17Cu) [[unlikely]] return; }
L_0044F17C:
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0044F190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F190u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 128u, depth + 1u); else { c.pc = 0x00451218u; return; } if (c.pc != 0x0044F190u) [[unlikely]] return; }
L_0044F190:
    set32(c.r[3], ld32((c.r[29].w[0] + 612u)));
    set32(c.r[2], 0u + 1000u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0044F1A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F1A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 130u, depth + 1u); else { c.pc = 0x0044D560u; return; } if (c.pc != 0x0044F1A8u) [[unlikely]] return; }
L_0044F1A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0044F1E0; } }
    ldl(c.r[4], (c.r[29].w[0] + 583u));
    ldr(c.r[4], (c.r[29].w[0] + 576u));
    set32(c.r[5], ld32((c.r[29].w[0] + 584u)));
    sdl(c.r[4], (c.r[16].w[0] + 4839u));
    sdr(c.r[4], (c.r[16].w[0] + 4832u));
    st32((c.r[16].w[0] + 4840u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 1472u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], c.r[29].w[0] + 576u);  if (t) { goto L_0044F1E0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F1E0u); c.r[4].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044F1E0u) [[unlikely]] return; }
L_0044F1E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 636u)));  if (t) { goto L_0044F22C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F1F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 421u, depth + 1u); else { c.pc = 0x0044FB70u; return; } if (c.pc != 0x0044F1F4u) [[unlikely]] return; }
L_0044F1F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F200u); set32(c.r[5], ld32((c.r[29].w[0] + 616u)));  if (depth < kMaxDepth) unit_00D4(c, 1u, depth + 1u); else { c.pc = 0x00450000u; return; } if (c.pc != 0x0044F200u) [[unlikely]] return; }
L_0044F200:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F20Cu); set32(c.r[5], ld32((c.r[29].w[0] + 620u)));  if (depth < kMaxDepth) unit_00D3(c, 442u, depth + 1u); else { c.pc = 0x0044FF08u; return; } if (c.pc != 0x0044F20Cu) [[unlikely]] return; }
L_0044F20C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 624u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F21Cu); set32(c.r[6], ld32((c.r[29].w[0] + 628u)));  if (depth < kMaxDepth) unit_00D3(c, 445u, depth + 1u); else { c.pc = 0x0044FF78u; return; } if (c.pc != 0x0044F21Cu) [[unlikely]] return; }
L_0044F21C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F228u); set32(c.r[5], ld32((c.r[29].w[0] + 632u)));  if (depth < kMaxDepth) unit_00D4(c, 6u, depth + 1u); else { c.pc = 0x00450070u; return; } if (c.pc != 0x0044F228u) [[unlikely]] return; }
L_0044F228:
    set32(c.r[2], ld32((c.r[29].w[0] + 636u)));
    c.budget -= 1;
L_0044F22C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 640u)));  if (t) { goto L_0044F240; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F240u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 401u, depth + 1u); else { c.pc = 0x0044F700u; return; } if (c.pc != 0x0044F240u) [[unlikely]] return; }
L_0044F240:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 656u));
    c.budget -= 2;
L_0044F248:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 664u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 672u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 680u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 688u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 696u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 704u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 712u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 720u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 728u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 736u);  c.pc = t; return; }
L_0044F278:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F294u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044F294u) [[unlikely]] return; }
L_0044F294:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 308ull;
    set32(c.r[6], 0u + 9u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0044F2C8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044F2C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00D4(c, 258u, depth); }
L_0044F2E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F30Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044F30Cu) [[unlikely]] return; }
L_0044F30C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 309ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 10u);  if (t) { goto L_0044F348; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044F348:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00D4(c, 258u, depth); }
L_0044F368:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F384u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044F384u) [[unlikely]] return; }
L_0044F384:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 309ull;  if (t) { goto L_0044F3B0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044F3B0:
    set32(c.r[16], ld32((c.r[17].w[0] + 8004u)));
    set32(c.r[18], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F3C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 343u, depth + 1u); else { c.pc = 0x00442E88u; return; } if (c.pc != 0x0044F3C0u) [[unlikely]] return; }
L_0044F3C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_0044F3DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F3D8u);  if (depth < kMaxDepth) unit_00D0(c, 342u, depth + 1u); else { c.pc = 0x00442E68u; return; } if (c.pc != 0x0044F3D8u) [[unlikely]] return; }
L_0044F3D8:
    st32((c.r[17].w[0] + 68u), c.r[18].w[0]);
    c.budget -= 1;
L_0044F3DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044F3F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F414u); st32((c.r[29].w[0] + 24u), c.f[20]);  if (depth < kMaxDepth) unit_00D4(c, 195u, depth + 1u); else { c.pc = 0x00451E00u; return; } if (c.pc != 0x0044F414u) [[unlikely]] return; }
L_0044F414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F41Cu); st64((c.r[16].w[0] + 14216u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00D4(c, 200u, depth + 1u); else { c.pc = 0x00451EB0u; return; } if (c.pc != 0x0044F41Cu) [[unlikely]] return; }
L_0044F41C:
    set32(c.r[6], ld32((c.r[16].w[0] + 2408u)));
    c.r[4].d[0] = ld64((c.r[16].w[0] + 14216u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[16].w[0] + 14208u));
    st32((c.r[16].w[0] + 14232u), c.r[6].w[0]);
    c.r[17].d[0] = c.r[4].d[0] - c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[16].w[0] + 14224u), c.r[2].d[0]);  if (t) { goto L_0044F468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F444u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 245u, depth + 1u); else { c.pc = 0x00205F20u; return; } if (c.pc != 0x0044F444u) [[unlikely]] return; }
L_0044F444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F44Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x0044F44Cu) [[unlikely]] return; }
L_0044F44C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F458u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x0044F458u) [[unlikely]] return; }
L_0044F458:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[16].w[0] + 14236u), c.f[20]);
    c.budget -= 4;
L_0044F468:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044F480:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
L_0044F490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F4B4u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044F4B4u) [[unlikely]] return; }
L_0044F4B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0044F4E0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[5].d[0] | 310ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044F4E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F4ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D3(c, 397u, depth + 1u); else { c.pc = 0x0044F630u; return; } if (c.pc != 0x0044F4ECu) [[unlikely]] return; }
L_0044F4EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0044F570; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 11u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F50Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 258u, depth + 1u); else { c.pc = 0x00452678u; return; } if (c.pc != 0x0044F50Cu) [[unlikely]] return; }
L_0044F50C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0044F550; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 2408u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 2412u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_0044F550; }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_0044F548; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F53Cu);  if (depth < kMaxDepth) unit_00D4(c, 195u, depth + 1u); else { c.pc = 0x00451E00u; return; } if (c.pc != 0x0044F53Cu) [[unlikely]] return; }
L_0044F53C:
    set32(c.r[3], ld32((c.r[16].w[0] + 2408u)));
    st64((c.r[16].w[0] + 14208u), c.r[2].d[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
L_0044F548:
    st32((c.r[16].w[0] + 2408u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 2;
L_0044F550:
    set32(c.r[2], ld32((c.r[2].w[0] - 1460u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0044F56C; }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F568u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044F568u) [[unlikely]] return; }
L_0044F568:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0044F56C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0044F570:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044F588:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F5A4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044F5A4u) [[unlikely]] return; }
L_0044F5A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0044F5C8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 311ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044F5C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F5D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D3(c, 397u, depth + 1u); else { c.pc = 0x0044F630u; return; } if (c.pc != 0x0044F5D4u) [[unlikely]] return; }
L_0044F5D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 12u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0044F618; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2412u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 2408u)));
    set32(c.r[9], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 2412u), c.r[9].w[0]);  goto L_0044F604; }
L_0044F604:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00D4(c, 258u, depth); }
L_0044F618:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044F630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0044F658; } }
    st32((c.r[2].w[0] + 88u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044F678; } }
    c.budget -= 1;
L_0044F658:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044F678; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 519ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044F678:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044F688:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F6A4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044F6A4u) [[unlikely]] return; }
L_0044F6A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0044F6C8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 313ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044F6C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00442420u | kUnwind; return; } [[clang::musttail]] return unit_00D0(c, 282u, depth); }
L_0044F6E8:
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_0044F700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_0044F76C; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044F770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F734u);  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044F734u) [[unlikely]] return; }
L_0044F734:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 357ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044F760; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044F760:
    set32(c.r[4], c.r[18].w[0] + 5052u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F76Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 404u, depth + 1u); else { c.pc = 0x0044F788u; return; } if (c.pc != 0x0044F76Cu) [[unlikely]] return; }
L_0044F76C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044F770:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044F788:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[3].w[0] + 7u);
    set32(c.r[2], 0u - 8u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[3], c.r[17].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[6].w[0] - c.r[3].w[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F7C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0044F7C8u) [[unlikely]] return; }
L_0044F7C8:
    set32(c.r[3], c.r[16].w[0] + 15u);
    c.r[2].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    st32((c.r[18].w[0]), c.r[17].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 4));
    st32((c.r[18].w[0] + 16u), 0u);
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 8u), 0u);
    st32((c.r[18].w[0] + 12u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044F808:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[7].w[0]), 0u);
    c.r[6].d[0] = ld64((c.r[8].w[0]));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0044F884; } }
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4936u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0044F884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F85Cu); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 408u, depth + 1u); else { c.pc = 0x0044F898u; return; } if (c.pc != 0x0044F85Cu) [[unlikely]] return; }
L_0044F85C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].d[0] = c.r[5].d[0] | 1057ull;  if (t) { goto L_0044F880; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044F880:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044F884:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044F898:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0044F8C0; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[9].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0044F8C0:
    set32(c.r[5], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[6].d[0] = ld64((c.r[8].w[0]));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[5].w[0] + 1u);
    st64((c.r[3].w[0]), c.r[6].d[0]);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[8].w[0] + 8u));
    st64((c.r[3].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);  if (t) { goto L_0044F8FC; } }
    set32(c.r[6], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0044F8FC:
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    st32((c.r[7].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[7].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0044F920; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0]), c.r[2].w[0]);  if (t) { goto L_0044F924; } }
L_0044F920:
    st32((c.r[9].w[0]), 0u);
    c.budget -= 1;
L_0044F924:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0044F930:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + 4880u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[7].w[0]), c.r[4].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + 56u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 12u)));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 20;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0044F998; } }
    set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[9].w[0] - c.r[8].w[0]);
    c.r[2].d[0] = c.r[9].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F994u); if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[9].d[0];  if (depth < kMaxDepth) unit_00D3(c, 412u, depth + 1u); else { c.pc = 0x0044F9A8u; return; } if (c.pc != 0x0044F994u) [[unlikely]] return; }
L_0044F994:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044F998:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044F9A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0044FA2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F9D8u);  if (depth < kMaxDepth) unit_00D3(c, 414u, depth + 1u); else { c.pc = 0x0044FA40u; return; } if (c.pc != 0x0044F9D8u) [[unlikely]] return; }
L_0044F9D8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0044FA30; }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[2].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    st64((c.r[17].w[0]), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 8u));
    st64((c.r[17].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 17;
L_0044FA2C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0044FA30:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044FA40:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[12], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 4u)));
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[9], ld32((c.r[4].w[0] + 16u)));  if (t) { goto L_0044FB00; } }
    set32(c.r[15], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.r[14].d[0] = c.r[2].d[0] + 0ull;
    c.r[13].d[0] = c.r[5].d[0] < c.r[12].d[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[9].w[0] << 4);
    c.budget -= 6;
L_0044FA70:
    set32(c.r[2], c.r[15].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.r[8].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[12].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0044FAB0; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] + 1u);  if (t) { goto L_0044FADC; } }
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[9].w[0] + 1u);  goto L_0044FADC; }
L_0044FAA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[10].d[0] + 0ull;  c.pc = t; return; }
L_0044FAB0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0044FAC0; } }
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044FAA4u | kUnwind; return; } goto L_0044FAA4; } }
L_0044FAC0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] + 1u);  if (t) { goto L_0044FADC; } }
    set32(c.r[2], c.r[4].w[0] - c.r[7].w[0]);
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044FAA4u | kUnwind; return; } goto L_0044FAA4; } }
    set32(c.r[2], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0044FADC:
    c.r[3].d[0] = c.r[2].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { goto L_0044FAF0; } }
    set32(c.r[2], c.r[9].w[0] - c.r[11].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_0044FAF0:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[10].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[9].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044FA70u | kUnwind; return; } goto L_0044FA70; }
L_0044FB00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_0044FB08:
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4936u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044FB40; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_0044FB40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0044FB48:
    set32(c.r[3], c.r[4].w[0] + 4u);
    set32(c.r[5], 0u - 3u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), 0u);  c.pc = t; return; }
L_0044FB68:
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 2;
L_0044FB70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FB8Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044FB8Cu) [[unlikely]] return; }
L_0044FB8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0044FBB0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 337ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044FBB0:
    st32((c.r[16].w[0] + 14000u), c.r[17].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044FBC8:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 8;
L_0044FBE8:
    set32(c.r[3], ld32((c.r[4].w[0] + 14000u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0044FC0C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 3512u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { st32((c.r[3].w[0] + 3512u), c.r[5].w[0]);  goto L_0044FC00; }
L_0044FC00:
    set32(c.r[2], ld32((c.r[3].w[0] + 3516u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { st32((c.r[3].w[0] + 3516u), c.r[6].w[0]);  goto L_0044FC0C; }
L_0044FC0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0044FC18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 14000u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0044FC50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FC3Cu);  if (depth < kMaxDepth) unit_00D3(c, 426u, depth + 1u); else { c.pc = 0x0044FC60u; return; } if (c.pc != 0x0044FC3Cu) [[unlikely]] return; }
L_0044FC3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D4(c, 8u, depth); }
L_0044FC50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044FC60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[21].w[0] + 14000u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[19], c.r[16].w[0] + 12u);
    set32(c.r[20], c.r[16].w[0] + 2208u);
    set32(c.r[17], c.r[16].w[0] + 2768u);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[16].w[0] + 3340u);  if (t) { goto L_0044FDA0; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FCACu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 433u, depth + 1u); else { c.pc = 0x0044FDC8u; return; } if (c.pc != 0x0044FCACu) [[unlikely]] return; }
L_0044FCAC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0044FDA4; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FCC4u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00D3(c, 436u, depth + 1u); else { c.pc = 0x0044FE48u; return; } if (c.pc != 0x0044FCC4u) [[unlikely]] return; }
L_0044FCC4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0044FDA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FCD4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 439u, depth + 1u); else { c.pc = 0x0044FEC8u; return; } if (c.pc != 0x0044FCD4u) [[unlikely]] return; }
L_0044FCD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044FD60; } }
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 4u)));  goto L_0044FD54; }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0044FD20; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 3524u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[6], ld32((c.r[19].w[0] + 52u)));  if (t) { goto L_0044FD14; } }
    c.budget -= 2;
    if (c.r[6].sd[0] <= 0) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_0044FD54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FD14u); set32(c.r[5], 0u + 1000u);  if (depth < kMaxDepth) unit_00D7(c, 36u, depth + 1u); else { c.pc = 0x0045C4A0u; return; } if (c.pc != 0x0044FD14u) [[unlikely]] return; }
L_0044FD14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0044FD54; } }
    c.budget -= 1;
L_0044FD20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FD28u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 477u, depth + 1u); else { c.pc = 0x00443EC0u; return; } if (c.pc != 0x0044FD28u) [[unlikely]] return; }
L_0044FD28:
    c.r[2].d[0] = c.r[2].sd[0] < 108ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 4u)));  goto L_0044FD54; }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], 0u + 2018u);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0044FD40u);  goto L_0044FD44; }
L_0044FD44:
    set32(c.r[2], c.r[2].w[0] << 11);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_0044FD54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  if (t) { goto L_0044FD88; } }
    c.budget -= 1;
L_0044FD60:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_0044FD78; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_0044FD88; } }
L_0044FD78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0044FDA4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 2;
L_0044FD88:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FDA0u); st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00D4(c, 12u, depth + 1u); else { c.pc = 0x00450208u; return; } if (c.pc != 0x0044FDA0u) [[unlikely]] return; }
L_0044FDA0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0044FDA4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0044FDC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FDF0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 264u, depth + 1u); else { c.pc = 0x00452728u; return; } if (c.pc != 0x0044FDF0u) [[unlikely]] return; }
L_0044FDF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_0044FE28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FE04u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044FE04u) [[unlikely]] return; }
L_0044FE04:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[17].w[0]), 0u);  goto L_0044FE2C; }
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0044FE30; } }
    c.budget -= 1;
L_0044FE28:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0044FE2C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044FE30:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044FE48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FE70u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 264u, depth + 1u); else { c.pc = 0x00452728u; return; } if (c.pc != 0x0044FE70u) [[unlikely]] return; }
L_0044FE70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_0044FEA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FE84u);  if (depth < kMaxDepth) unit_00D4(c, 37u, depth + 1u); else { c.pc = 0x004505E0u; return; } if (c.pc != 0x0044FE84u) [[unlikely]] return; }
L_0044FE84:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[17].w[0]), 0u);  goto L_0044FEAC; }
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0044FEB0; } }
    c.budget -= 1;
L_0044FEA8:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0044FEAC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044FEB0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044FEC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FED8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D4(c, 264u, depth + 1u); else { c.pc = 0x00452728u; return; } if (c.pc != 0x0044FED8u) [[unlikely]] return; }
L_0044FED8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044FEE8:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
L_0044FF08:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FF24u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044FF24u) [[unlikely]] return; }
L_0044FF24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0044FF48; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 345ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044FF48:
    set32(c.r[3], ld32((c.r[16].w[0] + 14000u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0044FF68; }
    st32((c.r[3].w[0] + 3524u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FF60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 12u, depth + 1u); else { c.pc = 0x00450208u; return; } if (c.pc != 0x0044FF60u) [[unlikely]] return; }
L_0044FF60:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0044FF68:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044FF78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FF9Cu); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 29u, depth + 1u); else { c.pc = 0x004442A0u; return; } if (c.pc != 0x0044FF9Cu) [[unlikely]] return; }
L_0044FF9C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 346ull;  if (t) { goto L_0044FFC8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444148u | kUnwind; return; } [[clang::musttail]] return unit_00D1(c, 19u, depth); }
L_0044FFC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 14000u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044FFE4; } }
    st32((c.r[3].w[0] + 3532u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FFE0u); st32((c.r[3].w[0] + 3528u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00D4(c, 12u, depth + 1u); else { c.pc = 0x00450208u; return; } if (c.pc != 0x0044FFE0u) [[unlikely]] return; }
L_0044FFE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044FFE4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
}

}
