#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3,
    0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 44, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 65, 66, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0,
    0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0,
    0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216,
    0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0,
    240, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 258, 0, 0, 0, 0, 0, 259,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291,
    0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0,
    0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0,
    0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0,
    0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0,
    0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0,
    0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0,
    0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0,
    379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 383, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0,
    393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0,
    0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0,
    0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0,
    0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0,
    0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0,
};

void unit_002A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001A8000;
    case 2u: goto L_001A8028;
    case 3u: goto L_001A807C;
    case 4u: goto L_001A808C;
    case 5u: goto L_001A80CC;
    case 6u: goto L_001A80DC;
    case 7u: goto L_001A812C;
    case 8u: goto L_001A8148;
    case 9u: goto L_001A8150;
    case 10u: goto L_001A8168;
    case 11u: goto L_001A8188;
    case 12u: goto L_001A81AC;
    case 13u: goto L_001A81B4;
    case 14u: goto L_001A81DC;
    case 15u: goto L_001A81F0;
    case 16u: goto L_001A8204;
    case 17u: goto L_001A8238;
    case 18u: goto L_001A825C;
    case 19u: goto L_001A8270;
    case 20u: goto L_001A8284;
    case 21u: goto L_001A8290;
    case 22u: goto L_001A82A0;
    case 23u: goto L_001A82A8;
    case 24u: goto L_001A82C0;
    case 25u: goto L_001A82E8;
    case 26u: goto L_001A8340;
    case 27u: goto L_001A8354;
    case 28u: goto L_001A8398;
    case 29u: goto L_001A83AC;
    case 30u: goto L_001A83F8;
    case 31u: goto L_001A8414;
    case 32u: goto L_001A843C;
    case 33u: goto L_001A8470;
    case 34u: goto L_001A8484;
    case 35u: goto L_001A849C;
    case 36u: goto L_001A84BC;
    case 37u: goto L_001A84EC;
    case 38u: goto L_001A84FC;
    case 39u: goto L_001A8514;
    case 40u: goto L_001A8544;
    case 41u: goto L_001A8554;
    case 42u: goto L_001A8560;
    case 43u: goto L_001A856C;
    case 44u: goto L_001A8574;
    case 45u: goto L_001A8590;
    case 46u: goto L_001A85A4;
    case 47u: goto L_001A85B4;
    case 48u: goto L_001A85E0;
    case 49u: goto L_001A8624;
    case 50u: goto L_001A8648;
    case 51u: goto L_001A8658;
    case 52u: goto L_001A8660;
    case 53u: goto L_001A8674;
    case 54u: goto L_001A8694;
    case 55u: goto L_001A86B4;
    case 56u: goto L_001A86C4;
    case 57u: goto L_001A86CC;
    case 58u: goto L_001A86E0;
    case 59u: goto L_001A86F4;
    case 60u: goto L_001A8710;
    case 61u: goto L_001A871C;
    case 62u: goto L_001A8724;
    case 63u: goto L_001A8740;
    case 64u: goto L_001A8754;
    case 65u: goto L_001A8760;
    case 66u: goto L_001A8764;
    case 67u: goto L_001A8788;
    case 68u: goto L_001A87D4;
    case 69u: goto L_001A87E8;
    case 70u: goto L_001A8804;
    case 71u: goto L_001A8838;
    case 72u: goto L_001A8844;
    case 73u: goto L_001A888C;
    case 74u: goto L_001A88A4;
    case 75u: goto L_001A88D8;
    case 76u: goto L_001A892C;
    case 77u: goto L_001A893C;
    case 78u: goto L_001A897C;
    case 79u: goto L_001A898C;
    case 80u: goto L_001A89DC;
    case 81u: goto L_001A89F8;
    case 82u: goto L_001A8A00;
    case 83u: goto L_001A8A20;
    case 84u: goto L_001A8A34;
    case 85u: goto L_001A8A40;
    case 86u: goto L_001A8A60;
    case 87u: goto L_001A8AA0;
    case 88u: goto L_001A8ABC;
    case 89u: goto L_001A8AE8;
    case 90u: goto L_001A8B1C;
    case 91u: goto L_001A8B70;
    case 92u: goto L_001A8B90;
    case 93u: goto L_001A8BA4;
    case 94u: goto L_001A8BBC;
    case 95u: goto L_001A8C08;
    case 96u: goto L_001A8C28;
    case 97u: goto L_001A8C3C;
    case 98u: goto L_001A8C44;
    case 99u: goto L_001A8C74;
    case 100u: goto L_001A8C90;
    case 101u: goto L_001A8CA4;
    case 102u: goto L_001A8CC4;
    case 103u: goto L_001A8D18;
    case 104u: goto L_001A8D34;
    case 105u: goto L_001A8D60;
    case 106u: goto L_001A8D88;
    case 107u: goto L_001A8E7C;
    case 108u: goto L_001A8EA8;
    case 109u: goto L_001A8EF0;
    case 110u: goto L_001A8F00;
    case 111u: goto L_001A8F30;
    case 112u: goto L_001A8F94;
    case 113u: goto L_001A8FA8;
    case 114u: goto L_001A8FE8;
    case 115u: goto L_001A8FFC;
    case 116u: goto L_001A904C;
    case 117u: goto L_001A911C;
    case 118u: goto L_001A919C;
    case 119u: goto L_001A91BC;
    case 120u: goto L_001A9218;
    case 121u: goto L_001A926C;
    case 122u: goto L_001A9288;
    case 123u: goto L_001A92B0;
    case 124u: goto L_001A92D8;
    case 125u: goto L_001A92F8;
    case 126u: goto L_001A9310;
    case 127u: goto L_001A933C;
    case 128u: goto L_001A934C;
    case 129u: goto L_001A9380;
    case 130u: goto L_001A93A8;
    case 131u: goto L_001A93C4;
    case 132u: goto L_001A93E0;
    case 133u: goto L_001A940C;
    case 134u: goto L_001A941C;
    case 135u: goto L_001A943C;
    case 136u: goto L_001A9488;
    case 137u: goto L_001A94BC;
    case 138u: goto L_001A94C4;
    case 139u: goto L_001A94D8;
    case 140u: goto L_001A94F0;
    case 141u: goto L_001A9510;
    case 142u: goto L_001A952C;
    case 143u: goto L_001A956C;
    case 144u: goto L_001A958C;
    case 145u: goto L_001A9598;
    case 146u: goto L_001A95B0;
    case 147u: goto L_001A95C0;
    case 148u: goto L_001A95D0;
    case 149u: goto L_001A95E4;
    case 150u: goto L_001A9600;
    case 151u: goto L_001A9620;
    case 152u: goto L_001A9644;
    case 153u: goto L_001A9650;
    case 154u: goto L_001A9660;
    case 155u: goto L_001A966C;
    case 156u: goto L_001A9698;
    case 157u: goto L_001A96E4;
    case 158u: goto L_001A96EC;
    case 159u: goto L_001A9700;
    case 160u: goto L_001A9718;
    case 161u: goto L_001A9734;
    case 162u: goto L_001A9770;
    case 163u: goto L_001A9784;
    case 164u: goto L_001A97A0;
    case 165u: goto L_001A97F0;
    case 166u: goto L_001A9868;
    case 167u: goto L_001A9874;
    case 168u: goto L_001A9890;
    case 169u: goto L_001A98A0;
    case 170u: goto L_001A98AC;
    case 171u: goto L_001A98C4;
    case 172u: goto L_001A98F8;
    case 173u: goto L_001A990C;
    case 174u: goto L_001A991C;
    case 175u: goto L_001A9930;
    case 176u: goto L_001A994C;
    case 177u: goto L_001A996C;
    case 178u: goto L_001A9974;
    case 179u: goto L_001A999C;
    case 180u: goto L_001A99A8;
    case 181u: goto L_001A99B8;
    case 182u: goto L_001A99C4;
    case 183u: goto L_001A9A00;
    case 184u: goto L_001A9A38;
    case 185u: goto L_001A9A40;
    case 186u: goto L_001A9A54;
    case 187u: goto L_001A9A70;
    case 188u: goto L_001A9AA8;
    case 189u: goto L_001A9AB4;
    case 190u: goto L_001A9AD0;
    case 191u: goto L_001A9ADC;
    case 192u: goto L_001A9B0C;
    case 193u: goto L_001A9B1C;
    case 194u: goto L_001A9B48;
    case 195u: goto L_001A9B6C;
    case 196u: goto L_001A9B88;
    case 197u: goto L_001A9BA4;
    case 198u: goto L_001A9BE8;
    case 199u: goto L_001A9BF4;
    case 200u: goto L_001A9C10;
    case 201u: goto L_001A9C1C;
    case 202u: goto L_001A9C28;
    case 203u: goto L_001A9C58;
    case 204u: goto L_001A9C68;
    case 205u: goto L_001A9C88;
    case 206u: goto L_001A9CE4;
    case 207u: goto L_001A9D0C;
    case 208u: goto L_001A9D1C;
    case 209u: goto L_001A9D60;
    case 210u: goto L_001A9D6C;
    case 211u: goto L_001A9D8C;
    case 212u: goto L_001A9DAC;
    case 213u: goto L_001A9E38;
    case 214u: goto L_001A9E50;
    case 215u: goto L_001A9E70;
    case 216u: goto L_001A9E7C;
    case 217u: goto L_001A9E9C;
    case 218u: goto L_001A9EBC;
    case 219u: goto L_001A9F00;
    case 220u: goto L_001A9F10;
    case 221u: goto L_001A9F1C;
    case 222u: goto L_001A9F50;
    case 223u: goto L_001A9FA0;
    case 224u: goto L_001A9FAC;
    case 225u: goto L_001A9FC8;
    case 226u: goto L_001A9FE8;
    case 227u: goto L_001A9FF8;
    case 228u: goto L_001AA020;
    case 229u: goto L_001AA028;
    case 230u: goto L_001AA05C;
    case 231u: goto L_001AA084;
    case 232u: goto L_001AA0A4;
    case 233u: goto L_001AA0C0;
    case 234u: goto L_001AA0D0;
    case 235u: goto L_001AA110;
    case 236u: goto L_001AA118;
    case 237u: goto L_001AA138;
    case 238u: goto L_001AA158;
    case 239u: goto L_001AA16C;
    case 240u: goto L_001AA180;
    case 241u: goto L_001AA188;
    case 242u: goto L_001AA1B4;
    case 243u: goto L_001AA1E4;
    case 244u: goto L_001AA1EC;
    case 245u: goto L_001AA218;
    case 246u: goto L_001AA220;
    case 247u: goto L_001AA26C;
    case 248u: goto L_001AA280;
    case 249u: goto L_001AA294;
    case 250u: goto L_001AA29C;
    case 251u: goto L_001AA2AC;
    case 252u: goto L_001AA2BC;
    case 253u: goto L_001AA2EC;
    case 254u: goto L_001AA314;
    case 255u: goto L_001AA338;
    case 256u: goto L_001AA354;
    case 257u: goto L_001AA35C;
    case 258u: goto L_001AA364;
    case 259u: goto L_001AA37C;
    case 260u: goto L_001AA390;
    case 261u: goto L_001AA3C0;
    case 262u: goto L_001AA3D8;
    case 263u: goto L_001AA3E8;
    case 264u: goto L_001AA428;
    case 265u: goto L_001AA45C;
    case 266u: goto L_001AA480;
    case 267u: goto L_001AA494;
    case 268u: goto L_001AA4C0;
    case 269u: goto L_001AA4D4;
    case 270u: goto L_001AA500;
    case 271u: goto L_001AA518;
    case 272u: goto L_001AA538;
    case 273u: goto L_001AA558;
    case 274u: goto L_001AA5B8;
    case 275u: goto L_001AA630;
    case 276u: goto L_001AA668;
    case 277u: goto L_001AA678;
    case 278u: goto L_001AA698;
    case 279u: goto L_001AA6BC;
    case 280u: goto L_001AA6F0;
    case 281u: goto L_001AA708;
    case 282u: goto L_001AA730;
    case 283u: goto L_001AA74C;
    case 284u: goto L_001AA754;
    case 285u: goto L_001AA76C;
    case 286u: goto L_001AA774;
    case 287u: goto L_001AA780;
    case 288u: goto L_001AA7A0;
    case 289u: goto L_001AA7C4;
    case 290u: goto L_001AA7D0;
    case 291u: goto L_001AA7FC;
    case 292u: goto L_001AA810;
    case 293u: goto L_001AA850;
    case 294u: goto L_001AA85C;
    case 295u: goto L_001AA8C0;
    case 296u: goto L_001AA8D8;
    case 297u: goto L_001AA8EC;
    case 298u: goto L_001AA908;
    case 299u: goto L_001AA924;
    case 300u: goto L_001AA950;
    case 301u: goto L_001AA964;
    case 302u: goto L_001AA990;
    case 303u: goto L_001AA9A8;
    case 304u: goto L_001AA9E8;
    case 305u: goto L_001AA9F4;
    case 306u: goto L_001AAA58;
    case 307u: goto L_001AAA74;
    case 308u: goto L_001AAA90;
    case 309u: goto L_001AAAA4;
    case 310u: goto L_001AAAC0;
    case 311u: goto L_001AAAD8;
    case 312u: goto L_001AAB04;
    case 313u: goto L_001AAB18;
    case 314u: goto L_001AAB40;
    case 315u: goto L_001AAB54;
    case 316u: goto L_001AAB70;
    case 317u: goto L_001AAB84;
    case 318u: goto L_001AABA0;
    case 319u: goto L_001AABB4;
    case 320u: goto L_001AABD0;
    case 321u: goto L_001AABE4;
    case 322u: goto L_001AAC00;
    case 323u: goto L_001AAC2C;
    case 324u: goto L_001AAC40;
    case 325u: goto L_001AAC50;
    case 326u: goto L_001AAC70;
    case 327u: goto L_001AAC9C;
    case 328u: goto L_001AACB4;
    case 329u: goto L_001AACC4;
    case 330u: goto L_001AACD0;
    case 331u: goto L_001AACE8;
    case 332u: goto L_001AACF0;
    case 333u: goto L_001AAD18;
    case 334u: goto L_001AAD38;
    case 335u: goto L_001AAD4C;
    case 336u: goto L_001AAD64;
    case 337u: goto L_001AAD80;
    case 338u: goto L_001AADA8;
    case 339u: goto L_001AADC8;
    case 340u: goto L_001AADDC;
    case 341u: goto L_001AADF4;
    case 342u: goto L_001AAE10;
    case 343u: goto L_001AAE38;
    case 344u: goto L_001AAE80;
    case 345u: goto L_001AAEB8;
    case 346u: goto L_001AAECC;
    case 347u: goto L_001AAEE8;
    case 348u: goto L_001AAF08;
    case 349u: goto L_001AAF38;
    case 350u: goto L_001AAF84;
    case 351u: goto L_001AAFA8;
    case 352u: goto L_001AB00C;
    case 353u: goto L_001AB028;
    case 354u: goto L_001AB058;
    case 355u: goto L_001AB070;
    case 356u: goto L_001AB0C0;
    case 357u: goto L_001AB0F8;
    case 358u: goto L_001AB10C;
    case 359u: goto L_001AB128;
    case 360u: goto L_001AB174;
    case 361u: goto L_001AB1B0;
    case 362u: goto L_001AB1C8;
    case 363u: goto L_001AB1D4;
    case 364u: goto L_001AB1F0;
    case 365u: goto L_001AB208;
    case 366u: goto L_001AB230;
    case 367u: goto L_001AB24C;
    case 368u: goto L_001AB25C;
    case 369u: goto L_001AB26C;
    case 370u: goto L_001AB274;
    case 371u: goto L_001AB298;
    case 372u: goto L_001AB2D8;
    case 373u: goto L_001AB2F0;
    case 374u: goto L_001AB30C;
    case 375u: goto L_001AB324;
    case 376u: goto L_001AB340;
    case 377u: goto L_001AB358;
    case 378u: goto L_001AB370;
    case 379u: goto L_001AB380;
    case 380u: goto L_001AB388;
    case 381u: goto L_001AB3B0;
    case 382u: goto L_001AB3B8;
    case 383u: goto L_001AB3C8;
    case 384u: goto L_001AB3D0;
    case 385u: goto L_001AB3D8;
    case 386u: goto L_001AB40C;
    case 387u: goto L_001AB430;
    case 388u: goto L_001AB460;
    case 389u: goto L_001AB480;
    case 390u: goto L_001AB4B0;
    case 391u: goto L_001AB4D8;
    case 392u: goto L_001AB4F0;
    case 393u: goto L_001AB500;
    case 394u: goto L_001AB524;
    case 395u: goto L_001AB538;
    case 396u: goto L_001AB550;
    case 397u: goto L_001AB568;
    case 398u: goto L_001AB570;
    case 399u: goto L_001AB594;
    case 400u: goto L_001AB5A8;
    case 401u: goto L_001AB5C0;
    case 402u: goto L_001AB5D8;
    case 403u: goto L_001AB5E0;
    case 404u: goto L_001AB638;
    case 405u: goto L_001AB650;
    case 406u: goto L_001AB708;
    case 407u: goto L_001AB71C;
    case 408u: goto L_001AB738;
    case 409u: goto L_001AB748;
    case 410u: goto L_001AB768;
    case 411u: goto L_001AB7A0;
    case 412u: goto L_001AB808;
    case 413u: goto L_001AB83C;
    case 414u: goto L_001AB860;
    case 415u: goto L_001AB878;
    case 416u: goto L_001AB8C0;
    case 417u: goto L_001AB8F0;
    case 418u: goto L_001AB900;
    case 419u: goto L_001AB948;
    case 420u: goto L_001AB9B0;
    case 421u: goto L_001AB9F8;
    case 422u: goto L_001ABA60;
    case 423u: goto L_001ABA98;
    case 424u: goto L_001ABAA4;
    case 425u: goto L_001ABAD8;
    case 426u: goto L_001ABAF8;
    case 427u: goto L_001ABB28;
    case 428u: goto L_001ABB64;
    case 429u: goto L_001ABB88;
    case 430u: goto L_001ABBA0;
    case 431u: goto L_001ABBB8;
    case 432u: goto L_001ABBF4;
    case 433u: goto L_001ABC08;
    case 434u: goto L_001ABC24;
    case 435u: goto L_001ABC2C;
    case 436u: goto L_001ABC48;
    case 437u: goto L_001ABC50;
    case 438u: goto L_001ABC6C;
    case 439u: goto L_001ABC88;
    case 440u: goto L_001ABCA0;
    case 441u: goto L_001ABCB0;
    case 442u: goto L_001ABFF4;
    default: bad_entry(c, 0x001A8000u); return;
    }
L_001A8000:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A8028:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[6].w[0] + 100u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[6].w[0] + 84u)));
    set32(c.r[18], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8168; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 32224u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001A8000u < 16384u) { entry = entries_002A[(t - 0x001A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A807C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 7648u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A808Cu);  if (depth < kMaxDepth) unit_0026(c, 112u, depth + 1u); else { c.pc = 0x0019AA80u; return; } if (c.pc != 0x001A808Cu) [[unlikely]] return; }
L_001A808C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A80BC; } }
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A811C; } }
L_001A80BC:
    c.r[2].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A811C; } }
L_001A80CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 7648u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A80DCu);  if (depth < kMaxDepth) unit_0026(c, 112u, depth + 1u); else { c.pc = 0x0019AA80u; return; } if (c.pc != 0x001A80DCu) [[unlikely]] return; }
L_001A80DC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8110; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x001A80F8u);  goto L_001A80FC; }
L_001A80FC:
    mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A811C; } }
L_001A8110:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_001A811C:
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8168; } }
L_001A812C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8148u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A8148u) [[unlikely]] return; }
L_001A8148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8164; } }
L_001A8150:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[3].w[0] + 7756u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 23348u), c.r[2].w[0]);
    c.budget -= 5;
L_001A8164:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_001A8168:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A8188:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23080u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A81ACu);  if (depth < kMaxDepth) unit_009E(c, 5u, depth + 1u); else { c.pc = 0x00378088u; return; } if (c.pc != 0x001A81ACu) [[unlikely]] return; }
L_001A81AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A81B4u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001A81B4u) [[unlikely]] return; }
L_001A81B4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001A820C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[16], c.r[16].w[0] + 4040u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A81DCu);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001A81DCu) [[unlikely]] return; }
L_001A81DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A81F0u);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001A81F0u) [[unlikely]] return; }
L_001A81F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8204u);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001A8204u) [[unlikely]] return; }
L_001A8204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8284; } }
L_001A820C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] - 29816u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001A8240; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 4040u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8238u);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001A8238u) [[unlikely]] return; }
L_001A8238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8284; } }
L_001A8240:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[16], c.r[16].w[0] + 4040u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A825Cu);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001A825Cu) [[unlikely]] return; }
L_001A825C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8270u);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001A8270u) [[unlikely]] return; }
L_001A8270:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8284u);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001A8284u) [[unlikely]] return; }
L_001A8284:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A82B8; } }
L_001A8290:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A82A0u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001A82A0u) [[unlikely]] return; }
L_001A82A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A82A8u);  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378A30u; return; } if (c.pc != 0x001A82A8u) [[unlikely]] return; }
L_001A82A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 30588u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 30588u), c.r[2].w[0]);
    c.budget -= 4;
L_001A82B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A82C0u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x001A82C0u) [[unlikely]] return; }
L_001A82C0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A8290u | kUnwind; return; } goto L_001A8290; } }
    set32(c.r[2], c.r[16].w[0] + 7648u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[2].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A82E8:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 100u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A85B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 32624u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001A8000u < 16384u) { entry = entries_002A[(t - 0x001A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A8340:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 7648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8354u);  if (depth < kMaxDepth) unit_0026(c, 114u, depth + 1u); else { c.pc = 0x0019AAD0u; return; } if (c.pc != 0x001A8354u) [[unlikely]] return; }
L_001A8354:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8384; } }
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A838C; } }
L_001A8384:
    c.r[2].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_001A838C:
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A85B0; } }
L_001A8398:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 7648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A83ACu);  if (depth < kMaxDepth) unit_0026(c, 114u, depth + 1u); else { c.pc = 0x0019AAD0u; return; } if (c.pc != 0x001A83ACu) [[unlikely]] return; }
L_001A83AC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A83E0; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x001A83C8u);  goto L_001A83CC; }
L_001A83CC:
    mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A83EC; } }
L_001A83E0:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_001A83EC:
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A85B0; } }
L_001A83F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[20], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8414u);  if (depth < kMaxDepth) unit_0039(c, 232u, depth + 1u); else { c.pc = 0x001E5E30u; return; } if (c.pc != 0x001A8414u) [[unlikely]] return; }
L_001A8414:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_001A85B0; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[17], c.r[17].w[0] - 14960u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A843Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001A843Cu) [[unlikely]] return; }
L_001A843C:
    c.f[0] = ld32((c.r[29].w[0]));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[29].w[0] + 96u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 136u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8470u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001A8470u) [[unlikely]] return; }
L_001A8470:
    set32(c.r[19], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8484u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x001A8484u) [[unlikely]] return; }
L_001A8484:
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    c.f[13] = ld32((c.r[29].w[0] + 120u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A849Cu);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x001A849Cu) [[unlikely]] return; }
L_001A849C:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A84BCu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001A84BCu) [[unlikely]] return; }
L_001A84BC:
    c.f[0] = ld32((c.r[29].w[0]));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 136u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A84ECu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001A84ECu) [[unlikely]] return; }
L_001A84EC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A84FCu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x001A84FCu) [[unlikely]] return; }
L_001A84FC:
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    c.f[13] = ld32((c.r[29].w[0] + 120u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8514u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x001A8514u) [[unlikely]] return; }
L_001A8514:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 10024u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] + 7648u);
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 108u), c.r[21].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8544u);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x001A8544u) [[unlikely]] return; }
L_001A8544:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8554u);  if (depth < kMaxDepth) unit_008E(c, 286u, depth + 1u); else { c.pc = 0x0033B1D8u; return; } if (c.pc != 0x001A8554u) [[unlikely]] return; }
L_001A8554:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8560u);  if (depth < kMaxDepth) unit_0087(c, 127u, depth + 1u); else { c.pc = 0x0031DE38u; return; } if (c.pc != 0x001A8560u) [[unlikely]] return; }
L_001A8560:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A856Cu);  if (depth < kMaxDepth) unit_003A(c, 307u, depth + 1u); else { c.pc = 0x001EB378u; return; } if (c.pc != 0x001A856Cu) [[unlikely]] return; }
L_001A856C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A85B0; } }
L_001A8574:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] + 7648u);
    set32(c.r[5], ld32((c.r[2].w[0] + 10024u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8590u);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x001A8590u) [[unlikely]] return; }
L_001A8590:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 29120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A85A4u);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x001A85A4u) [[unlikely]] return; }
L_001A85A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 10020u), c.r[2].w[0]);
    c.budget -= 3;
L_001A85B0:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_001A85B4:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A85E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[18], c.r[4].w[0] + 100u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8764; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 32688u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001A8000u < 16384u) { entry = entries_002A[(t - 0x001A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A8624:
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_001A8668; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8648u);  if (depth < kMaxDepth) unit_0036(c, 245u, depth + 1u); else { c.pc = 0x001D9F38u; return; } if (c.pc != 0x001A8648u) [[unlikely]] return; }
L_001A8648:
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8658u);  if (depth < kMaxDepth) unit_001F(c, 311u, depth + 1u); else { c.pc = 0x0017FC78u; return; } if (c.pc != 0x001A8658u) [[unlikely]] return; }
L_001A8658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8660u);  if (depth < kMaxDepth) unit_001F(c, 306u, depth + 1u); else { c.pc = 0x0017FC00u; return; } if (c.pc != 0x001A8660u) [[unlikely]] return; }
L_001A8660:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[2].w[0] + 4580u), 0u);
    c.budget -= 2;
L_001A8668:
    st32((c.r[18].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8760; } }
L_001A8674:
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[17], c.r[29].w[0] + 4u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8694u);  if (depth < kMaxDepth) unit_0036(c, 245u, depth + 1u); else { c.pc = 0x001D9F38u; return; } if (c.pc != 0x001A8694u) [[unlikely]] return; }
L_001A8694:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001A8760; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A86B4u);  if (depth < kMaxDepth) unit_0036(c, 245u, depth + 1u); else { c.pc = 0x001D9F38u; return; } if (c.pc != 0x001A86B4u) [[unlikely]] return; }
L_001A86B4:
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A86C4u);  if (depth < kMaxDepth) unit_001F(c, 311u, depth + 1u); else { c.pc = 0x0017FC78u; return; } if (c.pc != 0x001A86C4u) [[unlikely]] return; }
L_001A86C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A86CCu);  if (depth < kMaxDepth) unit_001F(c, 306u, depth + 1u); else { c.pc = 0x0017FC00u; return; } if (c.pc != 0x001A86CCu) [[unlikely]] return; }
L_001A86CC:
    st32((c.r[18].w[0] + 8u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[2].w[0] + 4580u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8760; } }
L_001A86E0:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A86F4u);  if (depth < kMaxDepth) unit_0036(c, 245u, depth + 1u); else { c.pc = 0x001D9F38u; return; } if (c.pc != 0x001A86F4u) [[unlikely]] return; }
L_001A86F4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001A8710; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8710u);  if (depth < kMaxDepth) unit_001F(c, 311u, depth + 1u); else { c.pc = 0x0017FC78u; return; } if (c.pc != 0x001A8710u) [[unlikely]] return; }
L_001A8710:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A871Cu);  if (depth < kMaxDepth) unit_001F(c, 309u, depth + 1u); else { c.pc = 0x0017FC48u; return; } if (c.pc != 0x001A871Cu) [[unlikely]] return; }
L_001A871C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8724u);  if (depth < kMaxDepth) unit_001F(c, 306u, depth + 1u); else { c.pc = 0x0017FC00u; return; } if (c.pc != 0x001A8724u) [[unlikely]] return; }
L_001A8724:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] + 7648u);
    set32(c.r[5], ld32((c.r[2].w[0] + 10024u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8740u);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x001A8740u) [[unlikely]] return; }
L_001A8740:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 29120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8754u);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x001A8754u) [[unlikely]] return; }
L_001A8754:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 10020u), c.r[2].w[0]);
    c.budget -= 3;
L_001A8760:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_001A8764:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A8788:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[30].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 10020u)));
    set32(c.r[16], c.r[16].w[0] + 7648u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A87D4u);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x001A87D4u) [[unlikely]] return; }
L_001A87D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 31240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A87E8u);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x001A87E8u) [[unlikely]] return; }
L_001A87E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 10024u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 32576u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8804u);  if (depth < kMaxDepth) unit_0024(c, 175u, depth + 1u); else { c.pc = 0x00191BF0u; return; } if (c.pc != 0x001A8804u) [[unlikely]] return; }
L_001A8804:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001A8894; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[21], c.r[2].w[0] + 30656u);
    set32(c.r[18], c.r[3].w[0] + 30592u);
    st32((c.r[20].w[0] + 84u), c.r[21].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 1u);
    set32(c.r[23], c.r[20].w[0] + 100u);
    set32(c.r[22], 0u + 1u);
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 10;
L_001A8838:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8844u);  if (depth < kMaxDepth) unit_0039(c, 228u, depth + 1u); else { c.pc = 0x001E5DD8u; return; } if (c.pc != 0x001A8844u) [[unlikely]] return; }
L_001A8844:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_001A885C; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.budget -= 4;
L_001A885C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A8838u | kUnwind; return; } goto L_001A8838; } }
    set32(c.r[2], c.r[19].w[0] << 3);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], c.r[30].w[0] + 7648u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A888Cu);  if (depth < kMaxDepth) unit_0026(c, 114u, depth + 1u); else { c.pc = 0x0019AAD0u; return; } if (c.pc != 0x001A888Cu) [[unlikely]] return; }
L_001A888C:
    st32((c.r[20].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[23].w[0] + 8u), 0u);
    c.budget -= 2;
L_001A8894:
    set32(c.r[4], c.r[30].w[0] + 7648u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A88A4u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x001A88A4u) [[unlikely]] return; }
L_001A88A4:
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
L_001A88D8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[6].w[0] + 100u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[6].w[0] + 84u)));
    set32(c.r[18], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8A40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 32736u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001A8000u < 16384u) { entry = entries_002A[(t - 0x001A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A892C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 7648u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A893Cu);  if (depth < kMaxDepth) unit_0026(c, 112u, depth + 1u); else { c.pc = 0x0019AA80u; return; } if (c.pc != 0x001A893Cu) [[unlikely]] return; }
L_001A893C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A896C; } }
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A89CC; } }
L_001A896C:
    c.r[2].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A89CC; } }
L_001A897C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 7648u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A898Cu);  if (depth < kMaxDepth) unit_0026(c, 112u, depth + 1u); else { c.pc = 0x0019AA80u; return; } if (c.pc != 0x001A898Cu) [[unlikely]] return; }
L_001A898C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A89C0; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x001A89A8u);  goto L_001A89AC; }
L_001A89AC:
    mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A89CC; } }
L_001A89C0:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_001A89CC:
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8A40; } }
L_001A89DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A89F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A89F8u) [[unlikely]] return; }
L_001A89F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8A40; } }
L_001A8A00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] + 7648u);
    set32(c.r[5], ld32((c.r[2].w[0] + 10024u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8A20u);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x001A8A20u) [[unlikely]] return; }
L_001A8A20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 29120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8A34u);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x001A8A34u) [[unlikely]] return; }
L_001A8A34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 10020u), c.r[2].w[0]);
    c.budget -= 3;
L_001A8A40:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A8A60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[16], 0u + 370u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[12] = ld32((c.r[4].w[0] + 20u));
    c.f[13] = ld32((c.r[4].w[0] + 24u));
    set32(c.r[4], c.r[2].w[0] + 7648u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8AA0u);  if (depth < kMaxDepth) unit_0026(c, 8u, depth + 1u); else { c.pc = 0x00198220u; return; } if (c.pc != 0x001A8AA0u) [[unlikely]] return; }
L_001A8AA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 450u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    set32(c.r[4], 0u + 1425u);
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[5].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8ABCu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001A8ABCu) [[unlikely]] return; }
L_001A8ABC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[12] = c.r[1].w[0];
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 320u);
    set32(c.r[6], 0u + 127u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8AE8u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001A8AE8u) [[unlikely]] return; }
L_001A8AE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[19], ld32((c.r[2].w[0] + 31908u)));
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A8CC4; } }
    set32(c.r[3], c.r[19].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 32688u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001A8000u < 16384u) { entry = entries_002A[(t - 0x001A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A8B1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[3] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] - 23216u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.budget -= 18;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A8CC4; } }
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[17], 0u + 230u);
    c.budget -= 3;
L_001A8B70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 300u);
    set32(c.r[6], 0u + 127u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[8], c.r[18].w[0] - 32704u);
    set32(c.r[17], c.r[17].w[0] + 20u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B90u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x001A8B90u) [[unlikely]] return; }
L_001A8B90:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A8B70u | kUnwind; return; } goto L_001A8B70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8CC4; } }
L_001A8BA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = ld8((c.r[2].w[0] - 23200u));
    set32(c.r[4], c.r[4].w[0] + 1483u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8C6C; } }
L_001A8BBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DB80000u);
    c.r[1].d[0] = c.r[1].d[0] | 20972ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] - 23216u));
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.budget -= 15;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A8CC4; } }
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[17], 0u + 230u);
    c.budget -= 4;
L_001A8C08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 300u);
    set32(c.r[6], 0u + 127u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[8], c.r[18].w[0] - 32704u);
    set32(c.r[17], c.r[17].w[0] + 20u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C28u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x001A8C28u) [[unlikely]] return; }
L_001A8C28:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A8C08u | kUnwind; return; } goto L_001A8C08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8CC4; } }
L_001A8C3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C44u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001A8C44u) [[unlikely]] return; }
L_001A8C44:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001A8C98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].d[0] = ld8((c.r[2].w[0] - 23197u));
    set32(c.r[4], 0u + 1491u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8C68; } }
    set32(c.r[4], 0u + 1490u);
    c.budget -= 1;
L_001A8C68:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 1;
L_001A8C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C74u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001A8C74u) [[unlikely]] return; }
L_001A8C74:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 320u);
    set32(c.r[5], 0u + 300u);
    set32(c.r[6], 0u + 127u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C90u);  if (depth < kMaxDepth) unit_007D(c, 103u, depth + 1u); else { c.pc = 0x002F50D8u; return; } if (c.pc != 0x001A8C90u) [[unlikely]] return; }
L_001A8C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8CC4; } }
L_001A8C98:
    set32(c.r[4], 0u + 451u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8CA4u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001A8CA4u) [[unlikely]] return; }
L_001A8CA4:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 320u);
    set32(c.r[5], 0u + 300u);
    set32(c.r[6], 0u + 127u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8CC4u);  if (depth < kMaxDepth) unit_007D(c, 103u, depth + 1u); else { c.pc = 0x002F50D8u; return; } if (c.pc != 0x001A8CC4u) [[unlikely]] return; }
L_001A8CC4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001A8D44; } }
    set32(c.r[5], ld32((c.r[20].w[0] - 18044u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001A8D24; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x85A80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 48770ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8D18u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x001A8D18u) [[unlikely]] return; }
L_001A8D18:
    st32((c.r[20].w[0] - 18044u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8D64; } }
L_001A8D24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8D34u);  if (depth < kMaxDepth) unit_009E(c, 271u, depth + 1u); else { c.pc = 0x0037ADC0u; return; } if (c.pc != 0x001A8D34u) [[unlikely]] return; }
L_001A8D34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A8D64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8D60; } }
L_001A8D44:
    set32(c.r[5], ld32((c.r[20].w[0] - 18044u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A8D64; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8D60u);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037AE10u; return; } if (c.pc != 0x001A8D60u) [[unlikely]] return; }
L_001A8D60:
    st32((c.r[20].w[0] - 18044u), 0u);
    c.budget -= 1;
L_001A8D64:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A8D88:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[17].w[0] + 7648u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[5] = c.r[1].w[0];
    c.f[0] = ld32((c.r[20].w[0] + 68u));
    c.f[1] = ld32((c.r[20].w[0] + 76u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.f[6] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[7] = ld32((c.r[17].w[0] + 8u));
    c.f[2] = ld32((c.r[20].w[0] + 72u));
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[3] = ld32((c.r[20].w[0] + 80u));
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    set32(c.r[4], ld32((c.r[2].w[0] + 31908u)));
    c.f[2] = fp::add(c.f[2], c.f[4]);
    c.f[8] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    c.f[9] = ld32((c.r[17].w[0] + 12u));
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    set32(c.r[4], c.r[4].w[0] + 1427u);
    c.f[3] = fp::add(c.f[3], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[20] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[7]);
    c.f[1] = fp::add(c.f[1], c.f[7]);
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.f[4] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[4]);
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[8]);
    c.f[3] = fp::mul(c.f[3], c.f[8]);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] >> 31);
    c.f[2] = fp::add(c.f[2], c.f[9]);
    c.f[3] = fp::add(c.f[3], c.f[9]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[19], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[16], c.f[0]);
    c.budget -= 61;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E7Cu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001A8E7Cu) [[unlikely]] return; }
L_001A8E7C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 10u);
    c.r[9].d[0] = c.r[29].d[0] | 4ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    set32(c.r[6], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8EA8u);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x001A8EA8u) [[unlikely]] return; }
L_001A8EA8:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[16].w[0] >> 31);
    c.f[12] = c.f[20];
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] - 10u);
    set32(c.r[6], 0u + 127u);
    set32(c.r[7], 0u + 1u);
    c.f[13] = c.f[12];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8EF0u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001A8EF0u) [[unlikely]] return; }
L_001A8EF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8F00u);  if (depth < kMaxDepth) unit_0026(c, 48u, depth + 1u); else { c.pc = 0x001994D8u; return; } if (c.pc != 0x001A8F00u) [[unlikely]] return; }
L_001A8F00:
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
L_001A8F30:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    set32(c.r[20], c.r[4].w[0] + 100u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[30].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A943C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 32656u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001A8000u < 16384u) { entry = entries_002A[(t - 0x001A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A8F94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 7648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8FA8u);  if (depth < kMaxDepth) unit_0026(c, 112u, depth + 1u); else { c.pc = 0x0019AA80u; return; } if (c.pc != 0x001A8FA8u) [[unlikely]] return; }
L_001A8FA8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8FD8; } }
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A903C; } }
L_001A8FD8:
    c.r[2].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A903C; } }
L_001A8FE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 7648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8FFCu);  if (depth < kMaxDepth) unit_0026(c, 112u, depth + 1u); else { c.pc = 0x0019AA80u; return; } if (c.pc != 0x001A8FFCu) [[unlikely]] return; }
L_001A8FFC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9030; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x001A9018u);  goto L_001A901C; }
L_001A901C:
    mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A903C; } }
L_001A9030:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_001A903C:
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[30], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A943C; } }
L_001A904C:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A90A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 23216u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[17], c.r[2].w[0] + 4u);
    c.f[2] = 0u;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9174; } }
L_001A90A8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A90E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[2].w[0] - 23216u);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 16u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A90DC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9200; } }
L_001A90DC:
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9200; } }
L_001A90E8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A9274; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] - 23216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9250; } }
L_001A911C:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A91C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 23216u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[17], c.r[2].w[0] + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 18;
L_001A9174:
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A9184; } }
    st32((c.r[2].w[0]), c.f[2]);
    c.budget -= 1;
L_001A9184:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[16], c.r[16].w[0] - 22920u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A919Cu);  if (depth < kMaxDepth) unit_0087(c, 10u, depth + 1u); else { c.pc = 0x0031C180u; return; } if (c.pc != 0x001A919Cu) [[unlikely]] return; }
L_001A919C:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[12] = ld32((c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A91BCu);  if (depth < kMaxDepth) unit_0087(c, 6u, depth + 1u); else { c.pc = 0x0031C0B8u; return; } if (c.pc != 0x001A91BCu) [[unlikely]] return; }
L_001A91BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A943C; } }
L_001A91C4:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A9220; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[2].w[0] - 23216u);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A91FC; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9200; } }
L_001A91FC:
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001A9200:
    set32(c.r[2], c.r[23].w[0] - 23216u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[5].d[0] = ld8((c.r[2].w[0] + 16u));
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9218u);  if (depth < kMaxDepth) unit_009E(c, 340u, depth + 1u); else { c.pc = 0x0037B5B8u; return; } if (c.pc != 0x001A9218u) [[unlikely]] return; }
L_001A9218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A943C; } }
L_001A9220:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A9274; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] - 23216u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 9;
L_001A9250:
    st32((c.r[2].w[0] - 23216u), c.f[0]);
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A9260; } }
    st32((c.r[2].w[0] - 23216u), c.f[2]);
    c.budget -= 1;
L_001A9260:
    c.f[12] = ld32((c.r[2].w[0] - 23216u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A926Cu);  if (depth < kMaxDepth) unit_0049(c, 218u, depth + 1u); else { c.pc = 0x00226B70u; return; } if (c.pc != 0x001A926Cu) [[unlikely]] return; }
L_001A926C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A943C; } }
L_001A9274:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A943C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9288u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001A9288u) [[unlikely]] return; }
L_001A9288:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001A943C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] - 23216u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 19u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[3].w[0] + 19u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A943C; } }
L_001A92B0:
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[21].w[0] + 15488u);
    set32(c.r[3], c.r[23].w[0] - 23216u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[18], c.r[3].w[0] + 4u);
    set32(c.r[19], c.r[4].w[0] - 22920u);
    set32(c.r[17], c.r[2].w[0] + 4u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.budget -= 10;
L_001A92D8:
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[17].w[0]), c.f[0]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A92F8u);  if (depth < kMaxDepth) unit_0087(c, 10u, depth + 1u); else { c.pc = 0x0031C180u; return; } if (c.pc != 0x001A92F8u) [[unlikely]] return; }
L_001A92F8:
    c.f[12] = ld32((c.r[17].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9310u);  if (depth < kMaxDepth) unit_0087(c, 6u, depth + 1u); else { c.pc = 0x0031C0B8u; return; } if (c.pc != 0x001A9310u) [[unlikely]] return; }
L_001A9310:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A92D8u | kUnwind; return; } goto L_001A92D8; } }
    set32(c.r[17], c.r[23].w[0] - 23216u);
    set32(c.r[16], c.r[21].w[0] + 15488u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 16u));
    set32(c.r[4], c.r[22].w[0] + 29328u);
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A933Cu);  if (depth < kMaxDepth) unit_009E(c, 340u, depth + 1u); else { c.pc = 0x0037B5B8u; return; } if (c.pc != 0x001A933Cu) [[unlikely]] return; }
L_001A933C:
    c.f[12] = ld32((c.r[23].w[0] - 23216u));
    st32((c.r[21].w[0] + 15488u), c.f[12]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A934Cu);  if (depth < kMaxDepth) unit_0049(c, 218u, depth + 1u); else { c.pc = 0x00226B70u; return; } if (c.pc != 0x001A934Cu) [[unlikely]] return; }
L_001A934C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 19u));
    set32(c.r[4], c.r[3].w[0] + 7648u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[4].w[0] + 112u), 0u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0] + 108u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] + 8580u), c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9438; } }
L_001A9380:
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[23].w[0] - 23216u);
    set32(c.r[4], c.r[21].w[0] + 15488u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[18], c.r[2].w[0] + 4u);
    set32(c.r[19], c.r[3].w[0] - 22920u);
    set32(c.r[17], c.r[4].w[0] + 4u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.budget -= 10;
L_001A93A8:
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A93C4u);  if (depth < kMaxDepth) unit_0087(c, 10u, depth + 1u); else { c.pc = 0x0031C180u; return; } if (c.pc != 0x001A93C4u) [[unlikely]] return; }
L_001A93C4:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.f[12] = ld32((c.r[17].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A93E0u);  if (depth < kMaxDepth) unit_0087(c, 6u, depth + 1u); else { c.pc = 0x0031C0B8u; return; } if (c.pc != 0x001A93E0u) [[unlikely]] return; }
L_001A93E0:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A93A8u | kUnwind; return; } goto L_001A93A8; } }
    set32(c.r[16], c.r[21].w[0] + 15488u);
    set32(c.r[17], c.r[23].w[0] - 23216u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16u));
    set32(c.r[4], c.r[22].w[0] + 29328u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A940Cu);  if (depth < kMaxDepth) unit_009E(c, 340u, depth + 1u); else { c.pc = 0x0037B5B8u; return; } if (c.pc != 0x001A940Cu) [[unlikely]] return; }
L_001A940C:
    c.f[12] = ld32((c.r[21].w[0] + 15488u));
    st32((c.r[23].w[0] - 23216u), c.f[12]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A941Cu);  if (depth < kMaxDepth) unit_0049(c, 218u, depth + 1u); else { c.pc = 0x00226B70u; return; } if (c.pc != 0x001A941Cu) [[unlikely]] return; }
L_001A941C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 19u));
    set32(c.r[2], c.r[3].w[0] + 7648u);
    st32((c.r[2].w[0] + 112u), 0u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 19u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 7;
L_001A9438:
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 1;
L_001A943C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + 7648u);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 1752u), c.r[4].w[0]);
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A9488:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A94BCu);  if (depth < kMaxDepth) unit_0026(c, 86u, depth + 1u); else { c.pc = 0x0019A478u; return; } if (c.pc != 0x001A94BCu) [[unlikely]] return; }
L_001A94BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A94C4u);  if (depth < kMaxDepth) unit_001F(c, 306u, depth + 1u); else { c.pc = 0x0017FC00u; return; } if (c.pc != 0x001A94C4u) [[unlikely]] return; }
L_001A94C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 29120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A94D8u);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x001A94D8u) [[unlikely]] return; }
L_001A94D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 24184u);
    st32((c.r[19].w[0] + 10020u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A94F0u);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x001A94F0u) [[unlikely]] return; }
L_001A94F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[18], c.r[3].w[0] + 7648u);
    st32((c.r[20].w[0] + 10040u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 32056u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9510u);  if (depth < kMaxDepth) unit_0024(c, 175u, depth + 1u); else { c.pc = 0x00191BF0u; return; } if (c.pc != 0x001A9510u) [[unlikely]] return; }
L_001A9510:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A9530; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A952Cu);  if (depth < kMaxDepth) unit_0026(c, 112u, depth + 1u); else { c.pc = 0x0019AA80u; return; } if (c.pc != 0x001A952Cu) [[unlikely]] return; }
L_001A952C:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 1;
L_001A9530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 10020u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 19264u);
    set32(c.r[16], 0u + 1u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 1708u), 0u);
    st32((c.r[17].w[0] + 1712u), 0u);
    st32((c.r[17].w[0] + 1716u), 0u);
    st32((c.r[17].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 1720u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A956Cu);  if (depth < kMaxDepth) unit_0029(c, 462u, depth + 1u); else { c.pc = 0x001A7ED0u; return; } if (c.pc != 0x001A956Cu) [[unlikely]] return; }
L_001A956C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_001A9598; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] + 24040u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A958Cu);  if (depth < kMaxDepth) unit_007D(c, 267u, depth + 1u); else { c.pc = 0x002F7AB0u; return; } if (c.pc != 0x001A958Cu) [[unlikely]] return; }
L_001A958C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9598u);  if (depth < kMaxDepth) unit_002A(c, 11u, depth + 1u); else { c.pc = 0x001A8188u; return; } if (c.pc != 0x001A9598u) [[unlikely]] return; }
L_001A9598:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 10040u)));
    st32((c.r[2].w[0] + 28296u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A95B0u);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x001A95B0u) [[unlikely]] return; }
L_001A95B0:
    set32(c.r[5], ld32((c.r[19].w[0] + 10020u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A95C0u);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x001A95C0u) [[unlikely]] return; }
L_001A95C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A95D0u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x001A95D0u) [[unlikely]] return; }
L_001A95D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 1712u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_001A95EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A95E4u);  if (depth < kMaxDepth) unit_0029(c, 395u, depth + 1u); else { c.pc = 0x001A7658u; return; } if (c.pc != 0x001A95E4u) [[unlikely]] return; }
L_001A95E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9620; } }
L_001A95EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 1708u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_001A9608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9600u);  if (depth < kMaxDepth) unit_002A(c, 205u, depth + 1u); else { c.pc = 0x001A9C88u; return; } if (c.pc != 0x001A9600u) [[unlikely]] return; }
L_001A9600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9620; } }
L_001A9608:
    set32(c.r[2], ld32((c.r[17].w[0] + 1716u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_001A9620; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9620u);  if (depth < kMaxDepth) unit_002A(c, 194u, depth + 1u); else { c.pc = 0x001A9B48u; return; } if (c.pc != 0x001A9620u) [[unlikely]] return; }
L_001A9620:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[18].w[0] + 19264u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 40u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9644u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001A9644u) [[unlikely]] return; }
L_001A9644:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9650u);  if (depth < kMaxDepth) unit_001B(c, 255u, depth + 1u); else { c.pc = 0x0016F498u; return; } if (c.pc != 0x001A9650u) [[unlikely]] return; }
L_001A9650:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9660u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001A9660u) [[unlikely]] return; }
L_001A9660:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A966Cu);  if (depth < kMaxDepth) unit_001B(c, 255u, depth + 1u); else { c.pc = 0x0016F498u; return; } if (c.pc != 0x001A966Cu) [[unlikely]] return; }
L_001A966C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st32((c.r[2].w[0] + 23796u), c.r[17].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A9698:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[30], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A96E4u);  if (depth < kMaxDepth) unit_0026(c, 86u, depth + 1u); else { c.pc = 0x0019A478u; return; } if (c.pc != 0x001A96E4u) [[unlikely]] return; }
L_001A96E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A96ECu);  if (depth < kMaxDepth) unit_0020(c, 47u, depth + 1u); else { c.pc = 0x00180750u; return; } if (c.pc != 0x001A96ECu) [[unlikely]] return; }
L_001A96EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 29120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9700u);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x001A9700u) [[unlikely]] return; }
L_001A9700:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[17].w[0] + 10020u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 24184u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9718u);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x001A9718u) [[unlikely]] return; }
L_001A9718:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[18].w[0] + 10040u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 32056u);
    set32(c.r[4], c.r[16].w[0] + 7648u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9734u);  if (depth < kMaxDepth) unit_0024(c, 175u, depth + 1u); else { c.pc = 0x00191BF0u; return; } if (c.pc != 0x001A9734u) [[unlikely]] return; }
L_001A9734:
    set32(c.r[18], c.r[17].w[0] + 28632u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A97F8; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 100u);
    set32(c.r[3], ld32((c.r[17].w[0] + 28632u)));
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A97CC; } }
    set32(c.r[23], 0u + 419u);
    set32(c.r[22], 0u + 2u);
    set32(c.r[21], 0u + 1u);
    set32(c.r[20], 0u - 1u);
    c.budget -= 4;
L_001A9770:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[23].d[0];  if (t) { goto L_001A97A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9784u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001A9784u) [[unlikely]] return; }
L_001A9784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_001A97BC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A97A0u);  if (depth < kMaxDepth) unit_0036(c, 245u, depth + 1u); else { c.pc = 0x001D9F38u; return; } if (c.pc != 0x001A97A0u) [[unlikely]] return; }
L_001A97A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_001A97BC; } }
L_001A97A8:
    ldl(c.r[2], (c.r[18].w[0] + 7u));
    ldr(c.r[2], (c.r[18].w[0]));
    sdl(c.r[2], (c.r[17].w[0] + 7u));
    sdr(c.r[2], (c.r[17].w[0]));
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.budget -= 5;
L_001A97BC:
    set32(c.r[18], c.r[18].w[0] + 8u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9770u | kUnwind; return; } goto L_001A9770; } }
L_001A97CC:
    ldl(c.r[2], (c.r[18].w[0] + 7u));
    ldr(c.r[2], (c.r[18].w[0]));
    sdl(c.r[2], (c.r[17].w[0] + 7u));
    sdr(c.r[2], (c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 7648u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A97F0u);  if (depth < kMaxDepth) unit_0026(c, 112u, depth + 1u); else { c.pc = 0x0019AA80u; return; } if (c.pc != 0x001A97F0u) [[unlikely]] return; }
L_001A97F0:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_001A97F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[2], c.r[4].w[0] + 19264u);
    c.r[5].d[0] = c.r[5].d[0] | 65533ull;
    st32((c.r[2].w[0] + 40u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65534ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 1684u)));
    c.r[6].d[0] = c.r[6].d[0] | 65519ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 65503ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[7], ld32((c.r[5].w[0] + 10020u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[19].w[0] + 92u), c.r[7].w[0]);
    st32((c.r[19].w[0] + 1720u), c.r[4].w[0]);
    set32(c.r[17], c.r[3].w[0] + 12224u);
    st32((c.r[19].w[0] + 1684u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 108u), 0u);
    st32((c.r[19].w[0] + 1708u), 0u);
    st32((c.r[19].w[0] + 1712u), 0u);
    st32((c.r[19].w[0] + 1716u), 0u);
    c.budget -= 28;
L_001A9868:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9874u);  if (depth < kMaxDepth) unit_0024(c, 47u, depth + 1u); else { c.pc = 0x00190B38u; return; } if (c.pc != 0x001A9874u) [[unlikely]] return; }
L_001A9874:
    set32(c.r[2], ld32((c.r[19].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A9890; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9890u);  if (depth < kMaxDepth) unit_0026(c, 121u, depth + 1u); else { c.pc = 0x0019AC58u; return; } if (c.pc != 0x001A9890u) [[unlikely]] return; }
L_001A9890:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A98A0u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001A98A0u) [[unlikely]] return; }
L_001A98A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A98ACu);  if (depth < kMaxDepth) unit_0037(c, 462u, depth + 1u); else { c.pc = 0x001DF0F8u; return; } if (c.pc != 0x001A98ACu) [[unlikely]] return; }
L_001A98AC:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_001A98C4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A98C4u);  if (depth < kMaxDepth) unit_0024(c, 82u, depth + 1u); else { c.pc = 0x00190FD8u; return; } if (c.pc != 0x001A98C4u) [[unlikely]] return; }
L_001A98C4:
    set32(c.r[2], ld32((c.r[19].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9868u | kUnwind; return; } goto L_001A9868; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], 0u + 63u);
    set32(c.r[5], ld32((c.r[3].w[0] + 10040u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[19].w[0] + 1684u), c.r[2].w[0]);
    set32(c.r[17], 0u + 1u);
    st32((c.r[4].w[0] + 28296u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A98F8u);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x001A98F8u) [[unlikely]] return; }
L_001A98F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 10020u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A990Cu);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x001A990Cu) [[unlikely]] return; }
L_001A990C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A991Cu);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x001A991Cu) [[unlikely]] return; }
L_001A991C:
    set32(c.r[2], ld32((c.r[19].w[0] + 1712u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001A9938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9930u);  if (depth < kMaxDepth) unit_0029(c, 395u, depth + 1u); else { c.pc = 0x001A7658u; return; } if (c.pc != 0x001A9930u) [[unlikely]] return; }
L_001A9930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A996C; } }
L_001A9938:
    set32(c.r[2], ld32((c.r[19].w[0] + 1708u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001A9954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A994Cu);  if (depth < kMaxDepth) unit_002A(c, 205u, depth + 1u); else { c.pc = 0x001A9C88u; return; } if (c.pc != 0x001A994Cu) [[unlikely]] return; }
L_001A994C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A996C; } }
L_001A9954:
    set32(c.r[2], ld32((c.r[19].w[0] + 1716u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001A996C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A996Cu);  if (depth < kMaxDepth) unit_002A(c, 194u, depth + 1u); else { c.pc = 0x001A9B48u; return; } if (c.pc != 0x001A996Cu) [[unlikely]] return; }
L_001A996C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9974u);  if (depth < kMaxDepth) unit_001A(c, 225u, depth + 1u); else { c.pc = 0x0016A690u; return; } if (c.pc != 0x001A9974u) [[unlikely]] return; }
L_001A9974:
    set32(c.r[17], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[16], c.r[3].w[0] - 14960u);
    set32(c.r[2], c.r[4].w[0] + 19264u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 40u), c.r[17].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A999Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001A999Cu) [[unlikely]] return; }
L_001A999C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A99A8u);  if (depth < kMaxDepth) unit_001B(c, 255u, depth + 1u); else { c.pc = 0x0016F498u; return; } if (c.pc != 0x001A99A8u) [[unlikely]] return; }
L_001A99A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A99B8u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001A99B8u) [[unlikely]] return; }
L_001A99B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A99C4u);  if (depth < kMaxDepth) unit_001B(c, 255u, depth + 1u); else { c.pc = 0x0016F498u; return; } if (c.pc != 0x001A99C4u) [[unlikely]] return; }
L_001A99C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st32((c.r[5].w[0] + 23796u), c.r[17].w[0]);
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
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A9A00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9A38u);  if (depth < kMaxDepth) unit_0026(c, 86u, depth + 1u); else { c.pc = 0x0019A478u; return; } if (c.pc != 0x001A9A38u) [[unlikely]] return; }
L_001A9A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9A40u);  if (depth < kMaxDepth) unit_001F(c, 306u, depth + 1u); else { c.pc = 0x0017FC00u; return; } if (c.pc != 0x001A9A40u) [[unlikely]] return; }
L_001A9A40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 30496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9A54u);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x001A9A54u) [[unlikely]] return; }
L_001A9A54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 7648u);
    st32((c.r[16].w[0] + 10028u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9A70u);  if (depth < kMaxDepth) unit_0024(c, 169u, depth + 1u); else { c.pc = 0x00191B28u; return; } if (c.pc != 0x001A9A70u) [[unlikely]] return; }
L_001A9A70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 10028u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 19264u);
    st32((c.r[2].w[0] + 40u), 0u);
    set32(c.r[2], 0u + 12u);
    st32((c.r[17].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 1720u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 1684u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 1708u), 0u);
    st32((c.r[17].w[0] + 1712u), 0u);
    st32((c.r[17].w[0] + 1716u), 0u);
    c.budget -= 14;
L_001A9AA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9AB4u);  if (depth < kMaxDepth) unit_0024(c, 47u, depth + 1u); else { c.pc = 0x00190B38u; return; } if (c.pc != 0x001A9AB4u) [[unlikely]] return; }
L_001A9AB4:
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A9AD0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9AD0u);  if (depth < kMaxDepth) unit_0026(c, 121u, depth + 1u); else { c.pc = 0x0019AC58u; return; } if (c.pc != 0x001A9AD0u) [[unlikely]] return; }
L_001A9AD0:
    set32(c.r[4], c.r[18].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9ADCu);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001A9ADCu) [[unlikely]] return; }
L_001A9ADC:
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9AA8u | kUnwind; return; } goto L_001A9AA8; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 10028u)));
    set32(c.r[2], 0u + 63u);
    st32((c.r[17].w[0] + 1684u), c.r[2].w[0]);
    set32(c.r[16], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[2].w[0] + 28296u), c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9B0Cu);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x001A9B0Cu) [[unlikely]] return; }
L_001A9B0C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9B1Cu);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x001A9B1Cu) [[unlikely]] return; }
L_001A9B1C:
    set32(c.r[2], c.r[19].w[0] + 19264u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st32((c.r[2].w[0] + 40u), c.r[16].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A9B48:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9B6Cu);  if (depth < kMaxDepth) unit_002A(c, 361u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001A9B6Cu) [[unlikely]] return; }
L_001A9B6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[18], c.r[2].w[0] + 7648u);
    set32(c.r[5], c.r[5].w[0] - 32760u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9B88u);  if (depth < kMaxDepth) unit_0024(c, 175u, depth + 1u); else { c.pc = 0x00191BF0u; return; } if (c.pc != 0x001A9B88u) [[unlikely]] return; }
L_001A9B88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A9BA8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9BA4u);  if (depth < kMaxDepth) unit_0026(c, 112u, depth + 1u); else { c.pc = 0x0019AA80u; return; } if (c.pc != 0x001A9BA4u) [[unlikely]] return; }
L_001A9BA4:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 1;
L_001A9BA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 1684u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65519ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 65503ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    st32((c.r[17].w[0] + 1684u), c.r[4].w[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A9C34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], c.r[2].w[0] + 12224u);
    c.budget -= 4;
L_001A9BE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9BF4u);  if (depth < kMaxDepth) unit_0024(c, 47u, depth + 1u); else { c.pc = 0x00190B38u; return; } if (c.pc != 0x001A9BF4u) [[unlikely]] return; }
L_001A9BF4:
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A9C10; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C10u);  if (depth < kMaxDepth) unit_0026(c, 121u, depth + 1u); else { c.pc = 0x0019AC58u; return; } if (c.pc != 0x001A9C10u) [[unlikely]] return; }
L_001A9C10:
    set32(c.r[4], c.r[18].w[0] - 22920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C1Cu);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x001A9C1Cu) [[unlikely]] return; }
L_001A9C1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C28u);  if (depth < kMaxDepth) unit_0037(c, 462u, depth + 1u); else { c.pc = 0x001DF0F8u; return; } if (c.pc != 0x001A9C28u) [[unlikely]] return; }
L_001A9C28:
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9BE8u | kUnwind; return; } goto L_001A9BE8; } }
L_001A9C34:
    set32(c.r[2], 0u + 63u);
    set32(c.r[5], ld32((c.r[19].w[0] - 18044u)));
    st32((c.r[17].w[0] + 1684u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A9C5C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C58u);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037AE10u; return; } if (c.pc != 0x001A9C58u) [[unlikely]] return; }
L_001A9C58:
    st32((c.r[19].w[0] - 18044u), 0u);
    c.budget -= 1;
L_001A9C5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C68u);  if (depth < kMaxDepth) unit_002A(c, 366u, depth + 1u); else { c.pc = 0x001AB230u; return; } if (c.pc != 0x001A9C68u) [[unlikely]] return; }
L_001A9C68:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A9C88:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[17], c.r[17].w[0] - 29480u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[20], c.r[2].w[0] + 4040u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    set32(c.r[16], c.r[16].w[0] + 12224u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9CE4u);  if (depth < kMaxDepth) unit_0037(c, 161u, depth + 1u); else { c.pc = 0x001DD290u; return; } if (c.pc != 0x001A9CE4u) [[unlikely]] return; }
L_001A9CE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[30].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[2].w[0] - 29488u), c.r[17].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] - 29680u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9D0Cu);  if (depth < kMaxDepth) unit_0038(c, 546u, depth + 1u); else { c.pc = 0x001E3D98u; return; } if (c.pc != 0x001A9D0Cu) [[unlikely]] return; }
L_001A9D0C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9D1Cu);  if (depth < kMaxDepth) unit_0037(c, 161u, depth + 1u); else { c.pc = 0x001DD290u; return; } if (c.pc != 0x001A9D1Cu) [[unlikely]] return; }
L_001A9D1C:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[6].w[0] - 29676u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[5].w[0] + 31u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 12;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_001A9DDC; } }
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[21], 0u + 1u);
    set32(c.r[20], 0u + 3u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_001A9D60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9D6Cu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001A9D6Cu) [[unlikely]] return; }
L_001A9D6C:
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_001A9DC0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9D8Cu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001A9D8Cu) [[unlikely]] return; }
L_001A9D8C:
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_001A9DC0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9DACu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001A9DACu) [[unlikely]] return; }
L_001A9DAC:
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_001A9DDC; } }
L_001A9DC0:
    set32(c.r[2], ld32((c.r[22].w[0] - 29676u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 20u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9D60u | kUnwind; return; } goto L_001A9D60; } }
L_001A9DDC:
    set32(c.r[18], c.r[23].w[0] + 12224u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[20], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[22].w[0] - 29676u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    set32(c.r[16], c.r[20].w[0] + 31u);
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[20].d[0];
    set32(c.r[17], c.r[17].w[0] - 28200u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[30].w[0] - 29680u), c.r[5].w[0]);
    set32(c.r[21], c.r[2].w[0] + 4040u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 5));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[2].w[0] - 29808u), c.r[19].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] - 29804u), c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9E38u);  if (depth < kMaxDepth) unit_0037(c, 161u, depth + 1u); else { c.pc = 0x001DD290u; return; } if (c.pc != 0x001A9E38u) [[unlikely]] return; }
L_001A9E38:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9E50u);  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001A9E50u) [[unlikely]] return; }
L_001A9E50:
    set32(c.r[2], ld32((c.r[22].w[0] - 29676u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A9EEC; } }
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[21], 0u + 1u);
    c.budget -= 4;
L_001A9E70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9E7Cu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001A9E7Cu) [[unlikely]] return; }
L_001A9E7C:
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[21].d[0];  if (t) { goto L_001A9ED0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9E9Cu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001A9E9Cu) [[unlikely]] return; }
L_001A9E9C:
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_001A9ED0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9EBCu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001A9EBCu) [[unlikely]] return; }
L_001A9EBC:
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_001A9EEC; } }
L_001A9ED0:
    set32(c.r[2], ld32((c.r[22].w[0] - 29676u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 20u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9E70u | kUnwind; return; } goto L_001A9E70; } }
L_001A9EEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[2].w[0] + 4040u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9F00u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001A9F00u) [[unlikely]] return; }
L_001A9F00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9F10u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A958u; return; } if (c.pc != 0x001A9F10u) [[unlikely]] return; }
L_001A9F10:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9F1Cu);  if (depth < kMaxDepth) unit_002A(c, 222u, depth + 1u); else { c.pc = 0x001A9F50u; return; } if (c.pc != 0x001A9F1Cu) [[unlikely]] return; }
L_001A9F1C:
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
L_001A9F50:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[3].w[0] - 29812u), c.r[2].w[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9FB8; } }
    c.budget -= 1;
L_001A9FA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9FACu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001A9FACu) [[unlikely]] return; }
L_001A9FAC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_001A9FB8:
    set32(c.r[17], c.r[20].w[0] + 4040u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9FC8u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001A9FC8u) [[unlikely]] return; }
L_001A9FC8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[22].w[0] - 29676u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AA020; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9FE8u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001A9FE8u) [[unlikely]] return; }
L_001A9FE8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9FF8u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001A9FF8u) [[unlikely]] return; }
L_001A9FF8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u + 20u);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9FA0u | kUnwind; return; } goto L_001A9FA0; } }
    c.budget -= 1;
L_001AA020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA028u);  if (depth < kMaxDepth) unit_0035(c, 518u, depth + 1u); else { c.pc = 0x001D7758u; return; } if (c.pc != 0x001AA028u) [[unlikely]] return; }
L_001AA028:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AA04C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AA0B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA3D4; } }
L_001AA04C:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[17].w[0] - 29680u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001AA068; } }
L_001AA05C:
    set32(c.r[21], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA3D8; } }
L_001AA068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[16], c.r[20].w[0] + 4040u);
    set32(c.r[3], ld32((c.r[2].w[0] - 29804u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[22].w[0] - 29676u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA084u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001AA084u) [[unlikely]] return; }
L_001AA084:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], ld32((c.r[3].w[0] - 29808u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[6].w[0] - 29488u)));
    st32((c.r[2].w[0]), c.r[7].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA0A4u);  if (depth < kMaxDepth) unit_0037(c, 161u, depth + 1u); else { c.pc = 0x001DD290u; return; } if (c.pc != 0x001AA0A4u) [[unlikely]] return; }
L_001AA0A4:
    st32((c.r[17].w[0] - 29680u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA3D8; } }
L_001AA0B0:
    set32(c.r[16], c.r[20].w[0] + 4040u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA0C0u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001AA0C0u) [[unlikely]] return; }
L_001AA0C0:
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA0D0u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001AA0D0u) [[unlikely]] return; }
L_001AA0D0:
    set32(c.r[3], 0u + 20u);
    set32(c.r[4], ld32((c.r[2].w[0] + 148u)));
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AA3D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 32624u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001A8000u < 16384u) { entry = entries_002A[(t - 0x001A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001AA110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA118u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001AA118u) [[unlikely]] return; }
L_001AA118:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001AA140; } }
    set32(c.r[4], c.r[20].w[0] + 4040u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA138u);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001AA138u) [[unlikely]] return; }
L_001AA138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AA05Cu | kUnwind; return; } goto L_001AA05C; } }
L_001AA140:
    set32(c.r[16], c.r[20].w[0] + 4040u);
    set32(c.r[5], 0u + 6u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA158u);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001AA158u) [[unlikely]] return; }
L_001AA158:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA16Cu);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001AA16Cu) [[unlikely]] return; }
L_001AA16C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA180u);  if (depth < kMaxDepth) unit_009E(c, 218u, depth + 1u); else { c.pc = 0x0037A868u; return; } if (c.pc != 0x001AA180u) [[unlikely]] return; }
L_001AA180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AA05Cu | kUnwind; return; } goto L_001AA05C; } }
L_001AA188:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 27540u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001AA1A8; } }
    st32((c.r[3].w[0] + 27540u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA3D8; } }
L_001AA1A8:
    st32((c.r[3].w[0] + 27540u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA3D8; } }
L_001AA1B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[4].w[0] - 29796u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[4].w[0] - 29796u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AA1D8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] - 29796u), c.r[2].w[0]);
    c.budget -= 2;
L_001AA1D8:
    set32(c.r[4], ld32((c.r[4].w[0] - 29796u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA1E4u);  if (depth < kMaxDepth) unit_0036(c, 413u, depth + 1u); else { c.pc = 0x001DAF90u; return; } if (c.pc != 0x001AA1E4u) [[unlikely]] return; }
L_001AA1E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA3D8; } }
L_001AA1EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23344u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001AA20C; } }
    st32((c.r[3].w[0] + 23344u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA3D8; } }
L_001AA20C:
    st32((c.r[3].w[0] + 23344u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA3D8; } }
L_001AA218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA220u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001AA220u) [[unlikely]] return; }
L_001AA220:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AA274; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA24C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AA260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AA05Cu | kUnwind; return; } goto L_001AA05C; } }
L_001AA24C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AA288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AA05Cu | kUnwind; return; } goto L_001AA05C; } }
L_001AA260:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA26Cu);  if (depth < kMaxDepth) unit_0019(c, 203u, depth + 1u); else { c.pc = 0x001663E0u; return; } if (c.pc != 0x001AA26Cu) [[unlikely]] return; }
L_001AA26C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AA05Cu | kUnwind; return; } goto L_001AA05C; } }
L_001AA274:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA280u);  if (depth < kMaxDepth) unit_0019(c, 203u, depth + 1u); else { c.pc = 0x001663E0u; return; } if (c.pc != 0x001AA280u) [[unlikely]] return; }
L_001AA280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AA05Cu | kUnwind; return; } goto L_001AA05C; } }
L_001AA288:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA294u);  if (depth < kMaxDepth) unit_0019(c, 203u, depth + 1u); else { c.pc = 0x001663E0u; return; } if (c.pc != 0x001AA294u) [[unlikely]] return; }
L_001AA294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AA05Cu | kUnwind; return; } goto L_001AA05C; } }
L_001AA29C:
    set32(c.r[18], c.r[20].w[0] + 4040u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA2ACu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001AA2ACu) [[unlikely]] return; }
L_001AA2AC:
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA2BCu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001AA2BCu) [[unlikely]] return; }
L_001AA2BC:
    set32(c.r[4], 0u + 20u);
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    mmi::mult(c, 0, c.r[19].w[0], c.r[4].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001AA3D8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA2ECu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001AA2ECu) [[unlikely]] return; }
L_001AA2EC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[22].w[0] - 29676u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[16].w[0] - 29808u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[6].w[0] - 29804u), c.r[2].w[0]);
    st32((c.r[5].w[0] - 29680u), c.r[17].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA314u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001AA314u) [[unlikely]] return; }
L_001AA314:
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[16], c.r[16].w[0] - 28200u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA338u);  if (depth < kMaxDepth) unit_0037(c, 161u, depth + 1u); else { c.pc = 0x001DD290u; return; } if (c.pc != 0x001AA338u) [[unlikely]] return; }
L_001AA338:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12224u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA354u);  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001AA354u) [[unlikely]] return; }
L_001AA354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA35Cu);  if (depth < kMaxDepth) unit_0010(c, 174u, depth + 1u); else { c.pc = 0x00142460u; return; } if (c.pc != 0x001AA35Cu) [[unlikely]] return; }
L_001AA35C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA3D8; } }
L_001AA364:
    set32(c.r[16], c.r[20].w[0] + 4040u);
    set32(c.r[17], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA37Cu);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001AA37Cu) [[unlikely]] return; }
L_001AA37C:
    set32(c.r[21], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA390u);  if (depth < kMaxDepth) unit_0037(c, 159u, depth + 1u); else { c.pc = 0x001DD270u; return; } if (c.pc != 0x001AA390u) [[unlikely]] return; }
L_001AA390:
    set32(c.r[3], 0u + 20u);
    set32(c.r[5], ld32((c.r[2].w[0] + 148u)));
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 12224u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[2].w[0] - 29688u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 6664u), c.r[17].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA3C0u);  if (depth < kMaxDepth) unit_0038(c, 207u, depth + 1u); else { c.pc = 0x001E15A0u; return; } if (c.pc != 0x001AA3C0u) [[unlikely]] return; }
L_001AA3C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[18].w[0] + 6664u), 0u);
    st32((c.r[2].w[0] + 14888u), c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA3D8; } }
L_001AA3D4:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AA3D8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_001AA3F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA3E8u);  if (depth < kMaxDepth) unit_0037(c, 118u, depth + 1u); else { c.pc = 0x001DCE28u; return; } if (c.pc != 0x001AA3E8u) [[unlikely]] return; }
L_001AA3E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AA020u | kUnwind; return; } goto L_001AA020; } }
L_001AA3F0:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AA428:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 7648u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    set32(c.r[17], 0u + 420u);
    c.f[13] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA45Cu);  if (depth < kMaxDepth) unit_0026(c, 8u, depth + 1u); else { c.pc = 0x00198220u; return; } if (c.pc != 0x001AA45Cu) [[unlikely]] return; }
L_001AA45C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 23004u)));
    set32(c.r[6], 0u + 450u);
    set32(c.r[4], ld32((c.r[3].w[0] + 30176u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    if (c.r[7].d[0] != 0) c.r[17].d[0] = c.r[6].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA480u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x001AA480u) [[unlikely]] return; }
L_001AA480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AA4C8; } }
    set32(c.r[4], 0u + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA494u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001AA494u) [[unlikely]] return; }
L_001AA494:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 320u);
    set32(c.r[6], 0u + 127u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA4C0u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001AA4C0u) [[unlikely]] return; }
L_001AA4C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA500; } }
L_001AA4C8:
    set32(c.r[4], 0u + 1423u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA4D4u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001AA4D4u) [[unlikely]] return; }
L_001AA4D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 320u);
    set32(c.r[6], 0u + 127u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA500u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001AA500u) [[unlikely]] return; }
L_001AA500:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AA518:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 7648u);
    st32((c.r[2].w[0] + 1708u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AA538:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 7648u);
    st32((c.r[2].w[0] + 1712u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AA558:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 16076u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA59C; } }
    set32(c.r[3], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 14208u);
    set32(c.r[7], 0u + 1536u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] - 6944u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 104u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] - 1392u), c.r[6].w[0]);
    c.budget -= 13;
L_001AA59C:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[3].w[0] + 4984u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 7756u), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AA5B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 16076u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA5FC; } }
    set32(c.r[3], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 14208u);
    set32(c.r[7], 0u + 1536u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] - 6944u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 104u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] - 1392u), c.r[6].w[0]);
    c.budget -= 13;
L_001AA5FC:
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 4u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[5].w[0] + 4984u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 7756u), c.r[3].w[0]);
    st32((c.r[6].w[0] - 25932u), c.r[3].w[0]);
    st32((c.r[7].w[0] - 4592u), c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AA630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 7648u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] + 1716u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 23216u);
    set32(c.r[5], c.r[5].w[0] + 15488u);
    st32((c.r[2].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[6], 0u + 1632u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA668u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001AA668u) [[unlikely]] return; }
L_001AA668:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AA678:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 4040u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA698u);  if (depth < kMaxDepth) unit_0036(c, 288u, depth + 1u); else { c.pc = 0x001DA780u; return; } if (c.pc != 0x001AA698u) [[unlikely]] return; }
L_001AA698:
    set32(c.r[16], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[3].w[0] + 3472u), c.r[16].w[0]);
    st32((c.r[4].w[0] - 29700u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 3484u), c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA6BCu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001AA6BCu) [[unlikely]] return; }
L_001AA6BC:
    set32(c.r[4], ld32((c.r[2].w[0] + 200u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[5].w[0] - 29688u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 7756u), c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] - 29692u), c.r[4].w[0]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AA6F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 7756u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AA708:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 3u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 7648u);
    st32((c.r[2].w[0] + 1684u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA730u);  if (depth < kMaxDepth) unit_0029(c, 462u, depth + 1u); else { c.pc = 0x001A7ED0u; return; } if (c.pc != 0x001AA730u) [[unlikely]] return; }
L_001AA730:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001AA780; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA74Cu);  if (depth < kMaxDepth) unit_006C(c, 234u, depth + 1u); else { c.pc = 0x002B2828u; return; } if (c.pc != 0x001AA74Cu) [[unlikely]] return; }
L_001AA74C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA754u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001AA754u) [[unlikely]] return; }
L_001AA754:
    set32(c.r[3], ld32((c.r[2].w[0] + 136u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AA76C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA76Cu);  if (depth < kMaxDepth) unit_0029(c, 111u, depth + 1u); else { c.pc = 0x001A4F90u; return; } if (c.pc != 0x001AA76Cu) [[unlikely]] return; }
L_001AA76C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA774u);  if (depth < kMaxDepth) unit_0034(c, 325u, depth + 1u); else { c.pc = 0x001D31C0u; return; } if (c.pc != 0x001AA774u) [[unlikely]] return; }
L_001AA774:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA780u);  if (depth < kMaxDepth) unit_002A(c, 11u, depth + 1u); else { c.pc = 0x001A8188u; return; } if (c.pc != 0x001AA780u) [[unlikely]] return; }
L_001AA780:
    set32(c.r[3], c.r[16].w[0] + 7648u);
    set32(c.r[2], 0u + 63u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 1684u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AA7A0:
    c.f[12] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[13] = c.f[12];
    set32(c.r[4], c.r[2].w[0] + 7648u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA7C4u);  if (depth < kMaxDepth) unit_0025(c, 133u, depth + 1u); else { c.pc = 0x00197E28u; return; } if (c.pc != 0x001AA7C4u) [[unlikely]] return; }
L_001AA7C4:
    set32(c.r[4], 0u + 1423u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA7D0u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001AA7D0u) [[unlikely]] return; }
L_001AA7D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[12] = c.r[1].w[0];
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 320u);
    set32(c.r[5], 0u + 420u);
    set32(c.r[6], 0u + 127u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA7FCu);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001AA7FCu) [[unlikely]] return; }
L_001AA7FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AA810:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[2].w[0] + 30592u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[21], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[20], ld32((c.r[4].w[0] + 84u)));
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 16;
L_001AA850:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA85Cu);  if (depth < kMaxDepth) unit_0039(c, 228u, depth + 1u); else { c.pc = 0x001E5DD8u; return; } if (c.pc != 0x001AA85Cu) [[unlikely]] return; }
L_001AA85C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_001AA874; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.budget -= 4;
L_001AA874:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AA850u | kUnwind; return; } goto L_001AA850; } }
    set32(c.r[2], c.r[19].w[0] << 3);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AA8C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], c.r[4].w[0] + 100u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA8D8u);  if (depth < kMaxDepth) unit_001F(c, 315u, depth + 1u); else { c.pc = 0x0017FCD8u; return; } if (c.pc != 0x001AA8D8u) [[unlikely]] return; }
L_001AA8D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA8ECu);  if (depth < kMaxDepth) unit_0036(c, 245u, depth + 1u); else { c.pc = 0x001D9F38u; return; } if (c.pc != 0x001AA8ECu) [[unlikely]] return; }
L_001AA8EC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001AA908; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA908u);  if (depth < kMaxDepth) unit_001F(c, 313u, depth + 1u); else { c.pc = 0x0017FCA8u; return; } if (c.pc != 0x001AA908u) [[unlikely]] return; }
L_001AA908:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AA958; } }
    set32(c.r[4], 0u + 1422u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA924u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001AA924u) [[unlikely]] return; }
L_001AA924:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[12] = c.r[1].w[0];
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 320u);
    set32(c.r[5], 0u + 370u);
    set32(c.r[6], 0u + 127u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA950u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001AA950u) [[unlikely]] return; }
L_001AA950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA990; } }
L_001AA958:
    set32(c.r[4], 0u + 1422u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA964u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001AA964u) [[unlikely]] return; }
L_001AA964:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[12] = c.r[1].w[0];
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 320u);
    set32(c.r[5], 0u + 320u);
    set32(c.r[6], 0u + 127u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA990u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001AA990u) [[unlikely]] return; }
L_001AA990:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AA9A8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[2].w[0] + 30592u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[21], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[20], ld32((c.r[4].w[0] + 84u)));
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 16;
L_001AA9E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA9F4u);  if (depth < kMaxDepth) unit_0039(c, 228u, depth + 1u); else { c.pc = 0x001E5DD8u; return; } if (c.pc != 0x001AA9F4u) [[unlikely]] return; }
L_001AA9F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_001AAA0C; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.budget -= 4;
L_001AAA0C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AA9E8u | kUnwind; return; } goto L_001AA9E8; } }
    set32(c.r[2], c.r[19].w[0] << 3);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AAA58:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAA74u);  if (depth < kMaxDepth) unit_001F(c, 306u, depth + 1u); else { c.pc = 0x0017FC00u; return; } if (c.pc != 0x001AAA74u) [[unlikely]] return; }
L_001AAA74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] + 7648u);
    set32(c.r[5], ld32((c.r[2].w[0] + 10020u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAA90u);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x001AAA90u) [[unlikely]] return; }
L_001AAA90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 31656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAAA4u);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x001AAAA4u) [[unlikely]] return; }
L_001AAAA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 10024u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAAC0u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x001AAAC0u) [[unlikely]] return; }
L_001AAAC0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AAAD8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], ld32((c.r[16].w[0] + 30584u)));
    set32(c.r[17], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001AAB10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAB04u);  if (depth < kMaxDepth) unit_002E(c, 492u, depth + 1u); else { c.pc = 0x001BB7A8u; return; } if (c.pc != 0x001AAB04u) [[unlikely]] return; }
L_001AAB04:
    st32((c.r[16].w[0] + 30584u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AAB1C; } }
L_001AAB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAB18u);  if (depth < kMaxDepth) unit_002E(c, 419u, depth + 1u); else { c.pc = 0x001BAE60u; return; } if (c.pc != 0x001AAB18u) [[unlikely]] return; }
L_001AAB18:
    st32((c.r[16].w[0] + 30584u), c.r[17].w[0]);
    c.budget -= 1;
L_001AAB1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 7756u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AAB40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAB54u);  if (depth < kMaxDepth) unit_002E(c, 486u, depth + 1u); else { c.pc = 0x001BB718u; return; } if (c.pc != 0x001AAB54u) [[unlikely]] return; }
L_001AAB54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 7756u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AAB70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAB84u);  if (depth < kMaxDepth) unit_002E(c, 486u, depth + 1u); else { c.pc = 0x001BB718u; return; } if (c.pc != 0x001AAB84u) [[unlikely]] return; }
L_001AAB84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 7756u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AABA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AABB4u);  if (depth < kMaxDepth) unit_002E(c, 486u, depth + 1u); else { c.pc = 0x001BB718u; return; } if (c.pc != 0x001AABB4u) [[unlikely]] return; }
L_001AABB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 7756u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AABD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AABE4u);  if (depth < kMaxDepth) unit_002E(c, 486u, depth + 1u); else { c.pc = 0x001BB718u; return; } if (c.pc != 0x001AABE4u) [[unlikely]] return; }
L_001AABE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 7756u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AAC00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[16].w[0] + 7648u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAC2Cu);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x001AAC2Cu) [[unlikely]] return; }
L_001AAC2C:
    set32(c.r[5], ld32((c.r[17].w[0] + 10028u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAC40u);  if (depth < kMaxDepth) unit_0024(c, 169u, depth + 1u); else { c.pc = 0x00191B28u; return; } if (c.pc != 0x001AAC40u) [[unlikely]] return; }
L_001AAC40:
    set32(c.r[5], ld32((c.r[17].w[0] + 10028u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAC50u);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x001AAC50u) [[unlikely]] return; }
L_001AAC50:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AAC70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[16].w[0] + 7648u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAC9Cu);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x001AAC9Cu) [[unlikely]] return; }
L_001AAC9C:
    set32(c.r[5], ld32((c.r[17].w[0] + 10028u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AACB4u);  if (depth < kMaxDepth) unit_0024(c, 169u, depth + 1u); else { c.pc = 0x00191B28u; return; } if (c.pc != 0x001AACB4u) [[unlikely]] return; }
L_001AACB4:
    set32(c.r[5], ld32((c.r[17].w[0] + 10028u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AACC4u);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x001AACC4u) [[unlikely]] return; }
L_001AACC4:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AACD0u);  if (depth < kMaxDepth) unit_002A(c, 11u, depth + 1u); else { c.pc = 0x001A8188u; return; } if (c.pc != 0x001AACD0u) [[unlikely]] return; }
L_001AACD0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AACE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AACF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAD18u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001AAD18u) [[unlikely]] return; }
L_001AAD18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] + 7648u);
    set32(c.r[5], ld32((c.r[3].w[0] + 10020u)));
    st32((c.r[17].w[0] + 21608u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAD38u);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x001AAD38u) [[unlikely]] return; }
L_001AAD38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 30056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAD4Cu);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x001AAD4Cu) [[unlikely]] return; }
L_001AAD4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 10024u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAD64u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x001AAD64u) [[unlikely]] return; }
L_001AAD64:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AAD80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AADA8u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001AADA8u) [[unlikely]] return; }
L_001AADA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] + 7648u);
    set32(c.r[5], ld32((c.r[3].w[0] + 10020u)));
    st32((c.r[17].w[0] + 21608u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AADC8u);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x001AADC8u) [[unlikely]] return; }
L_001AADC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 30056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AADDCu);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x001AADDCu) [[unlikely]] return; }
L_001AADDC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 10024u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AADF4u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x001AADF4u) [[unlikely]] return; }
L_001AADF4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AAE10:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001AAE74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 30584u)));
    set32(c.r[7], 0u + 1639u);
    set32(c.r[6], 0u + 1638u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
L_001AAE38:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1638u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AAE64; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_001AAE60; } }
    st32((c.r[4].w[0]), c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AAE64; } }
L_001AAE60:
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 1;
L_001AAE64:
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AAE38u | kUnwind; return; } goto L_001AAE38; } }
L_001AAE74:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AAE80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[18], c.r[2].w[0] + 7648u);
    set32(c.r[5], ld32((c.r[3].w[0] + 10020u)));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAEB8u);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x001AAEB8u) [[unlikely]] return; }
L_001AAEB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 29600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAECCu);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x001AAECCu) [[unlikely]] return; }
L_001AAECC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 10024u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 32096u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAEE8u);  if (depth < kMaxDepth) unit_0024(c, 175u, depth + 1u); else { c.pc = 0x00191BF0u; return; } if (c.pc != 0x001AAEE8u) [[unlikely]] return; }
L_001AAEE8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001AAF74; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 84u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAF08u);  if (depth < kMaxDepth) unit_0026(c, 112u, depth + 1u); else { c.pc = 0x0019AA80u; return; } if (c.pc != 0x001AAF08u) [[unlikely]] return; }
L_001AAF08:
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001AAF74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 30584u)));
    set32(c.r[6], 0u + 1639u);
    set32(c.r[5], 0u + 1638u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 7;
L_001AAF38:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1638u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AAF64; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_001AAF60; } }
    st32((c.r[16].w[0]), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AAF64; } }
L_001AAF60:
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_001AAF64:
    set32(c.r[16], c.r[16].w[0] + 8u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AAF38u | kUnwind; return; } goto L_001AAF38; } }
L_001AAF74:
    set32(c.r[4], c.r[19].w[0] + 7648u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAF84u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x001AAF84u) [[unlikely]] return; }
L_001AAF84:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AAFA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001AB038; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[16].w[0] - 18044u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001AB018; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x85A80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 48770ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB00Cu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x001AB00Cu) [[unlikely]] return; }
L_001AB00C:
    st32((c.r[16].w[0] - 18044u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB05C; } }
L_001AB018:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB028u);  if (depth < kMaxDepth) unit_009E(c, 271u, depth + 1u); else { c.pc = 0x0037ADC0u; return; } if (c.pc != 0x001AB028u) [[unlikely]] return; }
L_001AB028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AB05C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB058; } }
L_001AB038:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[16].w[0] - 18044u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001AB05C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB058u);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037AE10u; return; } if (c.pc != 0x001AB058u) [[unlikely]] return; }
L_001AB058:
    st32((c.r[16].w[0] - 18044u), 0u);
    c.budget -= 1;
L_001AB05C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB070:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[5].w[0] + 32056u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] + 7648u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[17], c.r[16].w[0] + 28632u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB0C0u);  if (depth < kMaxDepth) unit_0024(c, 175u, depth + 1u); else { c.pc = 0x00191BF0u; return; } if (c.pc != 0x001AB0C0u) [[unlikely]] return; }
L_001AB0C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB178; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 84u)));
    set32(c.r[23], c.r[2].w[0] + 100u);
    set32(c.r[3], ld32((c.r[16].w[0] + 28632u)));
    set32(c.r[2], 0u - 1u);
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AB154; } }
    set32(c.r[22], 0u + 419u);
    set32(c.r[21], 0u + 2u);
    set32(c.r[20], 0u + 1u);
    set32(c.r[19], 0u - 1u);
    c.budget -= 5;
L_001AB0F8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_001AB130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB10Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001AB10Cu) [[unlikely]] return; }
L_001AB10C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_001AB144; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB128u);  if (depth < kMaxDepth) unit_0036(c, 245u, depth + 1u); else { c.pc = 0x001D9F38u; return; } if (c.pc != 0x001AB128u) [[unlikely]] return; }
L_001AB128:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_001AB144; } }
L_001AB130:
    ldl(c.r[2], (c.r[17].w[0] + 7u));
    ldr(c.r[2], (c.r[17].w[0]));
    sdl(c.r[2], (c.r[16].w[0] + 7u));
    sdr(c.r[2], (c.r[16].w[0]));
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.budget -= 5;
L_001AB144:
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB0F8u | kUnwind; return; } goto L_001AB0F8; } }
L_001AB154:
    ldl(c.r[2], (c.r[17].w[0] + 7u));
    ldr(c.r[2], (c.r[17].w[0]));
    sdl(c.r[2], (c.r[16].w[0] + 7u));
    sdr(c.r[2], (c.r[16].w[0]));
    set32(c.r[4], c.r[30].w[0] + 7648u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB174u);  if (depth < kMaxDepth) unit_0026(c, 112u, depth + 1u); else { c.pc = 0x0019AA80u; return; } if (c.pc != 0x001AB174u) [[unlikely]] return; }
L_001AB174:
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001AB178:
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
L_001AB1B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB1C8u);  if (depth < kMaxDepth) unit_0020(c, 47u, depth + 1u); else { c.pc = 0x00180750u; return; } if (c.pc != 0x001AB1C8u) [[unlikely]] return; }
L_001AB1C8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB1D4u);  if (depth < kMaxDepth) unit_0023(c, 130u, depth + 1u); else { c.pc = 0x0018DD40u; return; } if (c.pc != 0x001AB1D4u) [[unlikely]] return; }
L_001AB1D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[5].w[0] + 32296u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 15804u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB1F0u);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x001AB1F0u) [[unlikely]] return; }
L_001AB1F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1744u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 24184u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB208u);  if (depth < kMaxDepth) unit_0023(c, 312u, depth + 1u); else { c.pc = 0x0018FB70u; return; } if (c.pc != 0x001AB208u) [[unlikely]] return; }
L_001AB208:
    set32(c.r[3], ld32((c.r[16].w[0] + 1744u)));
    st32((c.r[16].w[0] + 1748u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 1752u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 1748u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB24Cu);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x001AB24Cu) [[unlikely]] return; }
L_001AB24C:
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB25Cu);  if (depth < kMaxDepth) unit_0024(c, 136u, depth + 1u); else { c.pc = 0x00191538u; return; } if (c.pc != 0x001AB25Cu) [[unlikely]] return; }
L_001AB25C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB26Cu);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x0019A4E0u; return; } if (c.pc != 0x001AB26Cu) [[unlikely]] return; }
L_001AB26C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB274u);  if (depth < kMaxDepth) unit_0023(c, 128u, depth + 1u); else { c.pc = 0x0018DD18u; return; } if (c.pc != 0x001AB274u) [[unlikely]] return; }
L_001AB274:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 23796u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB298:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001AB358; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AB358; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 21632u);
    set32(c.r[2], c.r[2].w[0] - 32424u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB2D8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001AB2D8u) [[unlikely]] return; }
L_001AB2D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 32528u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB2F0u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001AB2F0u) [[unlikely]] return; }
L_001AB2F0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 21648u);
    set32(c.r[2], c.r[2].w[0] - 32448u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB30Cu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001AB30Cu) [[unlikely]] return; }
L_001AB30C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 32512u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB324u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x001AB324u) [[unlikely]] return; }
L_001AB324:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 21664u);
    set32(c.r[2], c.r[2].w[0] - 32472u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB340u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001AB340u) [[unlikely]] return; }
L_001AB340:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 32496u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB358u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x001AB358u) [[unlikely]] return; }
L_001AB358:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB380u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001AB380u) [[unlikely]] return; }
L_001AB380:
    set32(c.r[2], c.r[2].w[0] + 19344u);
    set32(c.r[3], 0u + 199u);
    c.budget -= 2;
L_001AB388:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB388u | kUnwind; return; } goto L_001AB388; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB3B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB3B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB3C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB3D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB3D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].sd[0] < 200ll ? 1ull : 0ull;
    c.r[17].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AB418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB40Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001AB40Cu) [[unlikely]] return; }
L_001AB40C:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 18548u), c.r[17].w[0]);
    c.budget -= 3;
L_001AB418:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AB458; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB46C; } }
L_001AB458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB460u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001AB460u) [[unlikely]] return; }
L_001AB460:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 18548u)));
    c.budget -= 3;
L_001AB46C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AB4A8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB4BC; } }
L_001AB4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB4B0u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001AB4B0u) [[unlikely]] return; }
L_001AB4B0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 18548u)));
    c.budget -= 3;
L_001AB4BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB4D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB4F0u);  if (depth < kMaxDepth) unit_002A(c, 371u, depth + 1u); else { c.pc = 0x001AB298u; return; } if (c.pc != 0x001AB4F0u) [[unlikely]] return; }
L_001AB4F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 30456u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 9488u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB524u);  if (depth < kMaxDepth) unit_0094(c, 110u, depth + 1u); else { c.pc = 0x00351698u; return; } if (c.pc != 0x001AB524u) [[unlikely]] return; }
L_001AB524:
    set32(c.r[4], ld32((c.r[16].w[0] + 9488u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[5].w[0] - 30304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB538u);  if (depth < kMaxDepth) unit_0094(c, 111u, depth + 1u); else { c.pc = 0x003516A8u; return; } if (c.pc != 0x001AB538u) [[unlikely]] return; }
L_001AB538:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB550:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] - 116u), 0u);
    st32((c.r[3].w[0] + 19808u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB568:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 29920u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 9488u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB594u);  if (depth < kMaxDepth) unit_0094(c, 110u, depth + 1u); else { c.pc = 0x00351698u; return; } if (c.pc != 0x001AB594u) [[unlikely]] return; }
L_001AB594:
    set32(c.r[4], ld32((c.r[16].w[0] + 9488u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[5].w[0] - 29840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB5A8u);  if (depth < kMaxDepth) unit_0094(c, 111u, depth + 1u); else { c.pc = 0x003516A8u; return; } if (c.pc != 0x001AB5A8u) [[unlikely]] return; }
L_001AB5A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB5C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] - 116u), 0u);
    st32((c.r[3].w[0] + 19808u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB5D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB5E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB71C; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 10090u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AB61C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB628; } }
L_001AB61C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB63C; } }
L_001AB628:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB638u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001AB638u) [[unlikely]] return; }
L_001AB638:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001AB63C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AB658; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB650u);  if (depth < kMaxDepth) unit_002A(c, 414u, depth + 1u); else { c.pc = 0x001AB860u; return; } if (c.pc != 0x001AB650u) [[unlikely]] return; }
L_001AB650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB71C; } }
L_001AB658:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.r[3].d[0] = 0ull + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[5] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = 0u;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[4] = fp::sub(c.f[5], c.f[2]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[4]));
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[20] = fp::add(c.f[2], c.f[0]);
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AB6C0; } }
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AB6C0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001AB6C0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AB6F0; } }
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AB6F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001AB6F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AB708; } }
    c.f[20] = ld32((c.r[16].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB708u);  if (depth < kMaxDepth) unit_002A(c, 414u, depth + 1u); else { c.pc = 0x001AB860u; return; } if (c.pc != 0x001AB708u) [[unlikely]] return; }
L_001AB708:
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[5], c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB71Cu);  if (depth < kMaxDepth) unit_0049(c, 209u, depth + 1u); else { c.pc = 0x00226AA0u; return; } if (c.pc != 0x001AB71Cu) [[unlikely]] return; }
L_001AB71C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB738:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB748u);  if (depth < kMaxDepth) unit_002A(c, 415u, depth + 1u); else { c.pc = 0x001AB878u; return; } if (c.pc != 0x001AB748u) [[unlikely]] return; }
L_001AB748:
    set32(c.r[3], c.r[2].w[0] + 284u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB768:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB7A0u);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x001AB7A0u) [[unlikely]] return; }
L_001AB7A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB7E8; } }
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[2].w[0] + 4168u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 16u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 12u), 0u);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 16;
L_001AB7E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB808:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 10090u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AB848; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AB848; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB83Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001AB83Cu) [[unlikely]] return; }
L_001AB83C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB84C; } }
L_001AB848:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AB84C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB860:
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB878:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[2], ld32((c.r[3].w[0] - 28952u)));
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AB8D0; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 21984u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AB8C8; } }
    set32(c.r[4], c.r[16].w[0] + 21696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB8C0u);  if (depth < kMaxDepth) unit_002A(c, 417u, depth + 1u); else { c.pc = 0x001AB8F0u; return; } if (c.pc != 0x001AB8C0u) [[unlikely]] return; }
L_001AB8C0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 21984u), c.r[2].w[0]);
    c.budget -= 2;
L_001AB8C8:
    set32(c.r[2], c.r[16].w[0] + 21696u);
    st32((c.r[18].w[0] - 28952u), c.r[2].w[0]);
    c.budget -= 2;
L_001AB8D0:
    set32(c.r[2], ld32((c.r[18].w[0] - 28952u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB8F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 13u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
L_001AB900:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB900u | kUnwind; return; } goto L_001AB900; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 32280u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 54400ull;
    st32((c.r[5].w[0] + 284u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 280u), 0u);
    set32(c.r[8], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[7], 0u + 20u);
    c.budget -= 12;
L_001AB948:
    set32(c.r[2], ld32((c.r[5].w[0] + 280u)));
    st32((c.r[29].w[0]), c.r[6].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + 13248u);
    c.r[4].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    ldl(c.r[9], (c.r[29].w[0] + 7u));
    ldr(c.r[9], (c.r[29].w[0]));
    ldl(c.r[10], (c.r[29].w[0] + 15u));
    ldr(c.r[10], (c.r[29].w[0] + 8u));
    set32(c.r[11], ld32((c.r[29].w[0] + 16u)));
    sdl(c.r[9], (c.r[2].w[0] + 7u));
    sdr(c.r[9], (c.r[2].w[0]));
    sdl(c.r[10], (c.r[2].w[0] + 15u));
    sdr(c.r[10], (c.r[2].w[0] + 8u));
    st32((c.r[2].w[0] + 16u), c.r[11].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 280u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 280u), c.r[3].w[0]);
    c.budget -= 21;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB948u | kUnwind; return; } goto L_001AB948; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB9B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 20u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 104u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00680000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 20u);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[5].w[0] - 14960u);
    set32(c.r[5], ld32((c.r[3].w[0] + 104u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB9F8u);  if (depth < kMaxDepth) unit_0060(c, 253u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x001AB9F8u) [[unlikely]] return; }
L_001AB9F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABA40; } }
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[2].w[0] + 4168u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 16u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 12u), 0u);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 16;
L_001ABA40:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ABA60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 20u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ABABC; } }
    set32(c.r[18], 0u + 20u);
    c.budget -= 1;
L_001ABA98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABAA4u);  if (depth < kMaxDepth) unit_002A(c, 403u, depth + 1u); else { c.pc = 0x001AB5E0u; return; } if (c.pc != 0x001ABAA4u) [[unlikely]] return; }
L_001ABAA4:
    set32(c.r[16], c.r[16].w[0] + 20u);
    set32(c.r[2], ld32((c.r[17].w[0] + 280u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ABA98u | kUnwind; return; } goto L_001ABA98; } }
L_001ABABC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ABAD8:
    set32(c.r[2], ld32((c.r[4].w[0] + 280u)));
    set32(c.r[3], 0u + 20u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001ABB20; } }
    c.budget -= 1;
L_001ABAF8:
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 20u);
    set32(c.r[2], ld32((c.r[5].w[0] + 280u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ABAF8u | kUnwind; return; } goto L_001ABAF8; } }
L_001ABB20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ABB28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001ABB70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001ABB70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 22000u);
    st32((c.r[3].w[0] - 6936u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB64u);  if (depth < kMaxDepth) unit_0091(c, 18u, depth + 1u); else { c.pc = 0x003442A0u; return; } if (c.pc != 0x001ABB64u) [[unlikely]] return; }
L_001ABB64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 32240u);
    st32((c.r[16].w[0] + 22000u), c.r[3].w[0]);
    c.budget -= 3;
L_001ABB70:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ABB88:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[3].w[0] - 6936u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ABBA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 17480u);
    st32((c.r[3].w[0] + 14704u), c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ABBB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1536u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 6944u);
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 1524u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABBF4u);  if (depth < kMaxDepth) unit_0091(c, 29u, depth + 1u); else { c.pc = 0x00344488u; return; } if (c.pc != 0x001ABBF4u) [[unlikely]] return; }
L_001ABBF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ABC08:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC24u);  if (depth < kMaxDepth) unit_002B(c, 211u, depth + 1u); else { c.pc = 0x001ADD38u; return; } if (c.pc != 0x001ABC24u) [[unlikely]] return; }
L_001ABC24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC2Cu);  if (depth < kMaxDepth) unit_0007(c, 337u, depth + 1u); else { c.pc = 0x0011EC50u; return; } if (c.pc != 0x001ABC2Cu) [[unlikely]] return; }
L_001ABC2C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABC48u) [[unlikely]] return; }
L_001ABC48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC50u);  if (depth < kMaxDepth) unit_0006(c, 223u, depth + 1u); else { c.pc = 0x00119CD8u; return; } if (c.pc != 0x001ABC50u) [[unlikely]] return; }
L_001ABC50:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABC6Cu) [[unlikely]] return; }
L_001ABC6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 13128u), 0u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ABC88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABCA0u);  if (depth < kMaxDepth) unit_002A(c, 427u, depth + 1u); else { c.pc = 0x001ABB28u; return; } if (c.pc != 0x001ABCA0u) [[unlikely]] return; }
L_001ABCA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ABCB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1536u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] - 6944u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 516u);
    set32(c.r[9], ld32((c.r[19].w[0] + 104u)));
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[8], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 68u, depth); } }
    c.r[2].d[0] = c.r[5].sd[0] < 517ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABE70; } }
    set32(c.r[2], 0u + 303u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 55u, depth); } }
    c.r[2].d[0] = c.r[5].sd[0] < 304ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABDC0; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 17u, depth); } }
    c.r[2].d[0] = c.r[5].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABD80; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 12u, depth); } }
    c.r[2].d[0] = c.r[5].sd[0] < 46ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABD60; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 39u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 83u, depth); } }
L_001ABD60:
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 14u, depth); } }
    set32(c.r[2], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 15u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 83u, depth); } }
L_001ABD80:
    set32(c.r[2], 0u + 155u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 76u, depth); } }
    c.r[2].d[0] = c.r[5].sd[0] < 156ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABDAC; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 16u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 83u, depth); } }
L_001ABDAC:
    set32(c.r[2], 0u + 156u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 78u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 83u, depth); } }
L_001ABDC0:
    set32(c.r[2], 0u + 496u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 54u, depth); } }
    c.r[2].d[0] = c.r[5].sd[0] < 497ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABE24; } }
    set32(c.r[2], 0u + 481u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 34u, depth); } }
    c.r[2].d[0] = c.r[5].sd[0] < 482ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABE04; } }
    set32(c.r[2], 0u + 449u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 32u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 83u, depth); } }
L_001ABE04:
    set32(c.r[2], 0u + 494u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 40u, depth); } }
    set32(c.r[2], 0u + 495u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 47u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 83u, depth); } }
L_001ABE24:
    set32(c.r[2], 0u + 501u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 37u, depth); } }
    c.r[2].d[0] = c.r[5].sd[0] < 502ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABE50; } }
    set32(c.r[2], 0u + 498u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 38u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 83u, depth); } }
L_001ABE50:
    set32(c.r[2], 0u + 504u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 33u, depth); } }
    set32(c.r[2], 0u + 515u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 60u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 83u, depth); } }
L_001ABE70:
    set32(c.r[2], 0u + 533u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 19u, depth); } }
    c.r[2].d[0] = c.r[5].sd[0] < 534ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABF24; } }
    set32(c.r[2], 0u + 526u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 24u, depth); } }
    c.r[2].d[0] = c.r[5].sd[0] < 527ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABED8; } }
    set32(c.r[2], 0u + 518u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 74u, depth); } }
    c.r[2].d[0] = c.r[5].sd[0] < 518ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 71u, depth); } }
    set32(c.r[2], 0u + 524u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 30u, depth); } }
    set32(c.r[2], 0u + 525u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 28u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 83u, depth); } }
L_001ABED8:
    set32(c.r[2], 0u + 530u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 21u, depth); } }
    c.r[2].d[0] = c.r[5].sd[0] < 531ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABF04; } }
    set32(c.r[2], 0u + 527u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 25u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 83u, depth); } }
L_001ABF04:
    set32(c.r[2], 0u + 531u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 26u, depth); } }
    set32(c.r[2], 0u + 532u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 10u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 83u, depth); } }
L_001ABF24:
    set32(c.r[2], 0u + 553u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 42u, depth); } }
    c.r[2].d[0] = c.r[5].sd[0] < 554ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABF88; } }
    set32(c.r[2], 0u + 544u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 9u, depth); } }
    c.r[2].d[0] = c.r[5].sd[0] < 545ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABF68; } }
    set32(c.r[2], 0u + 543u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 80u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 83u, depth); } }
L_001ABF68:
    set32(c.r[2], 0u + 547u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 7u, depth); } }
    set32(c.r[2], 0u + 551u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 6u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 83u, depth); } }
L_001ABF88:
    set32(c.r[2], 0u + 556u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 3u, depth); } }
    c.r[2].d[0] = c.r[5].sd[0] < 557ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABFC0; } }
    set32(c.r[2], 0u + 554u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 50u, depth); } }
    set32(c.r[2], 0u + 555u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 81u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 83u, depth); } }
L_001ABFC0:
    set32(c.r[2], 0u + 557u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001ABFE0; } }
    set32(c.r[2], 0u + 558u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002B(c, 82u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 83u, depth); } }
L_001ABFE0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 24040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABFF4u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x001ABFF4u) [[unlikely]] return; }
L_001ABFF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC004u);  if (depth < kMaxDepth) unit_007D(c, 267u, depth + 1u); else { c.pc = 0x002F7AB0u; return; } if (c.pc != 0x001AC004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_002B(c, 2u, depth);
}

}
