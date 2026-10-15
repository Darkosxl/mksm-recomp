#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00C8[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 0, 10, 0, 11, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 14, 0, 15, 16, 0, 17, 0, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0,
    100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 107, 0,
    108, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0,
    143, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0,
    0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 169, 0,
    0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174,
    0, 175, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0,
    0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 206, 0, 207, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0,
    0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0,
    0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0,
    0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 300, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 312,
    0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0,
    0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 327, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    0, 0, 0, 331, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 336, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0,
    355, 0, 356, 0, 357, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 365, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0,
    0, 0, 0, 369, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0,
    0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0,
    0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 392, 0, 393, 0, 394, 0, 395, 0, 396, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0,
    0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0,
    0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0,
    412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0,
    427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0,
    0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0,
    451, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0,
};

void unit_00C8(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00420000;
    case 2u: goto L_0042000C;
    case 3u: goto L_00420020;
    case 4u: goto L_0042002C;
    case 5u: goto L_00420034;
    case 6u: goto L_00420048;
    case 7u: goto L_00420050;
    case 8u: goto L_00420058;
    case 9u: goto L_00420060;
    case 10u: goto L_00420070;
    case 11u: goto L_00420078;
    case 12u: goto L_00420090;
    case 13u: goto L_004200E0;
    case 14u: goto L_00420114;
    case 15u: goto L_0042011C;
    case 16u: goto L_00420120;
    case 17u: goto L_00420128;
    case 18u: goto L_00420138;
    case 19u: goto L_00420140;
    case 20u: goto L_0042014C;
    case 21u: goto L_00420164;
    case 22u: goto L_00420184;
    case 23u: goto L_004201A0;
    case 24u: goto L_004201B0;
    case 25u: goto L_004201D0;
    case 26u: goto L_004201EC;
    case 27u: goto L_00420220;
    case 28u: goto L_00420268;
    case 29u: goto L_00420290;
    case 30u: goto L_004202E8;
    case 31u: goto L_00420310;
    case 32u: goto L_00420324;
    case 33u: goto L_00420340;
    case 34u: goto L_00420350;
    case 35u: goto L_00420380;
    case 36u: goto L_004203B8;
    case 37u: goto L_004203D4;
    case 38u: goto L_004203E4;
    case 39u: goto L_004203F4;
    case 40u: goto L_00420410;
    case 41u: goto L_00420438;
    case 42u: goto L_0042045C;
    case 43u: goto L_00420470;
    case 44u: goto L_00420494;
    case 45u: goto L_004204D4;
    case 46u: goto L_004204F0;
    case 47u: goto L_00420530;
    case 48u: goto L_00420548;
    case 49u: goto L_00420568;
    case 50u: goto L_004205A4;
    case 51u: goto L_004205C0;
    case 52u: goto L_004205CC;
    case 53u: goto L_004205E4;
    case 54u: goto L_004205F4;
    case 55u: goto L_0042062C;
    case 56u: goto L_00420638;
    case 57u: goto L_00420670;
    case 58u: goto L_00420678;
    case 59u: goto L_00420698;
    case 60u: goto L_00420714;
    case 61u: goto L_0042071C;
    case 62u: goto L_00420744;
    case 63u: goto L_00420760;
    case 64u: goto L_00420770;
    case 65u: goto L_00420784;
    case 66u: goto L_004207A8;
    case 67u: goto L_004207E0;
    case 68u: goto L_00420800;
    case 69u: goto L_00420824;
    case 70u: goto L_00420838;
    case 71u: goto L_0042085C;
    case 72u: goto L_00420870;
    case 73u: goto L_00420878;
    case 74u: goto L_00420898;
    case 75u: goto L_004208A0;
    case 76u: goto L_004208E4;
    case 77u: goto L_004208F0;
    case 78u: goto L_004208F8;
    case 79u: goto L_00420910;
    case 80u: goto L_00420950;
    case 81u: goto L_00420968;
    case 82u: goto L_0042098C;
    case 83u: goto L_00420998;
    case 84u: goto L_004209C0;
    case 85u: goto L_004209E4;
    case 86u: goto L_004209F0;
    case 87u: goto L_004209F8;
    case 88u: goto L_00420A10;
    case 89u: goto L_00420A24;
    case 90u: goto L_00420A58;
    case 91u: goto L_00420A60;
    case 92u: goto L_00420A90;
    case 93u: goto L_00420A9C;
    case 94u: goto L_00420AA4;
    case 95u: goto L_00420AB0;
    case 96u: goto L_00420ABC;
    case 97u: goto L_00420AD0;
    case 98u: goto L_00420AE0;
    case 99u: goto L_00420AEC;
    case 100u: goto L_00420B00;
    case 101u: goto L_00420B10;
    case 102u: goto L_00420B20;
    case 103u: goto L_00420B40;
    case 104u: goto L_00420B54;
    case 105u: goto L_00420B60;
    case 106u: goto L_00420B70;
    case 107u: goto L_00420B78;
    case 108u: goto L_00420B80;
    case 109u: goto L_00420B90;
    case 110u: goto L_00420B98;
    case 111u: goto L_00420BA0;
    case 112u: goto L_00420BC0;
    case 113u: goto L_00420C08;
    case 114u: goto L_00420C30;
    case 115u: goto L_00420C88;
    case 116u: goto L_00420C90;
    case 117u: goto L_00420CE0;
    case 118u: goto L_00420D08;
    case 119u: goto L_00420D18;
    case 120u: goto L_00420D20;
    case 121u: goto L_00420D44;
    case 122u: goto L_00420D80;
    case 123u: goto L_00420D94;
    case 124u: goto L_00420D9C;
    case 125u: goto L_00420DA4;
    case 126u: goto L_00420DB8;
    case 127u: goto L_00420DE0;
    case 128u: goto L_00420DF0;
    case 129u: goto L_00420DF8;
    case 130u: goto L_00420E10;
    case 131u: goto L_00420E30;
    case 132u: goto L_00420E48;
    case 133u: goto L_00420E78;
    case 134u: goto L_00420EA4;
    case 135u: goto L_00420EC0;
    case 136u: goto L_00420ED4;
    case 137u: goto L_00420EDC;
    case 138u: goto L_00420EF0;
    case 139u: goto L_00420F0C;
    case 140u: goto L_00420F40;
    case 141u: goto L_00420F5C;
    case 142u: goto L_00420F68;
    case 143u: goto L_00420F80;
    case 144u: goto L_00420F88;
    case 145u: goto L_00420F90;
    case 146u: goto L_00420FC4;
    case 147u: goto L_00420FDC;
    case 148u: goto L_00420FE4;
    case 149u: goto L_00421008;
    case 150u: goto L_00421018;
    case 151u: goto L_00421050;
    case 152u: goto L_0042107C;
    case 153u: goto L_004210E8;
    case 154u: goto L_004210F8;
    case 155u: goto L_004211A0;
    case 156u: goto L_004211B4;
    case 157u: goto L_004211BC;
    case 158u: goto L_004211D0;
    case 159u: goto L_00421210;
    case 160u: goto L_00421218;
    case 161u: goto L_0042122C;
    case 162u: goto L_00421234;
    case 163u: goto L_00421248;
    case 164u: goto L_004212A8;
    case 165u: goto L_004212B8;
    case 166u: goto L_004212D0;
    case 167u: goto L_004212E0;
    case 168u: goto L_004212F0;
    case 169u: goto L_004212F8;
    case 170u: goto L_00421308;
    case 171u: goto L_00421330;
    case 172u: goto L_00421344;
    case 173u: goto L_00421368;
    case 174u: goto L_0042137C;
    case 175u: goto L_00421384;
    case 176u: goto L_0042138C;
    case 177u: goto L_004213A0;
    case 178u: goto L_004213B8;
    case 179u: goto L_004213D0;
    case 180u: goto L_004213E4;
    case 181u: goto L_004213EC;
    case 182u: goto L_004213F4;
    case 183u: goto L_00421408;
    case 184u: goto L_00421420;
    case 185u: goto L_00421438;
    case 186u: goto L_00421450;
    case 187u: goto L_0042146C;
    case 188u: goto L_00421478;
    case 189u: goto L_00421490;
    case 190u: goto L_004214F8;
    case 191u: goto L_00421520;
    case 192u: goto L_00421530;
    case 193u: goto L_00421538;
    case 194u: goto L_00421540;
    case 195u: goto L_00421548;
    case 196u: goto L_00421560;
    case 197u: goto L_00421578;
    case 198u: goto L_00421590;
    case 199u: goto L_004215A0;
    case 200u: goto L_00421600;
    case 201u: goto L_0042161C;
    case 202u: goto L_00421630;
    case 203u: goto L_00421638;
    case 204u: goto L_00421640;
    case 205u: goto L_00421660;
    case 206u: goto L_00421688;
    case 207u: goto L_00421690;
    case 208u: goto L_0042169C;
    case 209u: goto L_004216B0;
    case 210u: goto L_004216C0;
    case 211u: goto L_00421700;
    case 212u: goto L_00421714;
    case 213u: goto L_00421730;
    case 214u: goto L_00421738;
    case 215u: goto L_00421780;
    case 216u: goto L_004217B8;
    case 217u: goto L_004217C0;
    case 218u: goto L_004217CC;
    case 219u: goto L_004217E0;
    case 220u: goto L_00421840;
    case 221u: goto L_0042184C;
    case 222u: goto L_0042186C;
    case 223u: goto L_00421878;
    case 224u: goto L_00421880;
    case 225u: goto L_004218A8;
    case 226u: goto L_004218F8;
    case 227u: goto L_00421940;
    case 228u: goto L_00421970;
    case 229u: goto L_00421A20;
    case 230u: goto L_00421A50;
    case 231u: goto L_00421A78;
    case 232u: goto L_00421ADC;
    case 233u: goto L_00421AFC;
    case 234u: goto L_00421B48;
    case 235u: goto L_00421B60;
    case 236u: goto L_00421B78;
    case 237u: goto L_00421B90;
    case 238u: goto L_00421BB4;
    case 239u: goto L_00421BC0;
    case 240u: goto L_00421BD8;
    case 241u: goto L_00421BF8;
    case 242u: goto L_00421C20;
    case 243u: goto L_00421C2C;
    case 244u: goto L_00421C54;
    case 245u: goto L_00421C60;
    case 246u: goto L_00421C74;
    case 247u: goto L_00421CA8;
    case 248u: goto L_00421CD0;
    case 249u: goto L_00421CD8;
    case 250u: goto L_00421CF8;
    case 251u: goto L_00421D0C;
    case 252u: goto L_00421D30;
    case 253u: goto L_00421D48;
    case 254u: goto L_00421D58;
    case 255u: goto L_00421D68;
    case 256u: goto L_00421D8C;
    case 257u: goto L_00421DC0;
    case 258u: goto L_00421DE0;
    case 259u: goto L_00421E00;
    case 260u: goto L_00421E50;
    case 261u: goto L_00421E98;
    case 262u: goto L_00421EB4;
    case 263u: goto L_00421ECC;
    case 264u: goto L_00421ED4;
    case 265u: goto L_00421EF0;
    case 266u: goto L_00421F0C;
    case 267u: goto L_00421F24;
    case 268u: goto L_00421F38;
    case 269u: goto L_00421F68;
    case 270u: goto L_00421F78;
    case 271u: goto L_00421FD8;
    case 272u: goto L_00421FF8;
    case 273u: goto L_00422014;
    case 274u: goto L_00422030;
    case 275u: goto L_0042208C;
    case 276u: goto L_004220C4;
    case 277u: goto L_004220FC;
    case 278u: goto L_00422120;
    case 279u: goto L_00422140;
    case 280u: goto L_00422154;
    case 281u: goto L_00422168;
    case 282u: goto L_00422170;
    case 283u: goto L_00422198;
    case 284u: goto L_004221B8;
    case 285u: goto L_004221F0;
    case 286u: goto L_00422208;
    case 287u: goto L_00422224;
    case 288u: goto L_00422240;
    case 289u: goto L_0042225C;
    case 290u: goto L_00422278;
    case 291u: goto L_004222F8;
    case 292u: goto L_00422314;
    case 293u: goto L_00422330;
    case 294u: goto L_00422338;
    case 295u: goto L_00422390;
    case 296u: goto L_004223A0;
    case 297u: goto L_004223B8;
    case 298u: goto L_00422418;
    case 299u: goto L_00422420;
    case 300u: goto L_00422430;
    case 301u: goto L_00422438;
    case 302u: goto L_00422444;
    case 303u: goto L_00422450;
    case 304u: goto L_0042248C;
    case 305u: goto L_004224F0;
    case 306u: goto L_0042250C;
    case 307u: goto L_00422518;
    case 308u: goto L_004225A0;
    case 309u: goto L_004225C0;
    case 310u: goto L_004225EC;
    case 311u: goto L_004225F4;
    case 312u: goto L_004225FC;
    case 313u: goto L_00422608;
    case 314u: goto L_00422630;
    case 315u: goto L_00422648;
    case 316u: goto L_00422668;
    case 317u: goto L_00422680;
    case 318u: goto L_00422698;
    case 319u: goto L_00422758;
    case 320u: goto L_004227DC;
    case 321u: goto L_004227F8;
    case 322u: goto L_00422834;
    case 323u: goto L_0042286C;
    case 324u: goto L_00422890;
    case 325u: goto L_004228B0;
    case 326u: goto L_004228E4;
    case 327u: goto L_00422914;
    case 328u: goto L_00422918;
    case 329u: goto L_00422948;
    case 330u: goto L_00422970;
    case 331u: goto L_0042298C;
    case 332u: goto L_00422990;
    case 333u: goto L_004229CC;
    case 334u: goto L_004229DC;
    case 335u: goto L_004229EC;
    case 336u: goto L_004229F0;
    case 337u: goto L_00422A50;
    case 338u: goto L_00422A80;
    case 339u: goto L_00422A90;
    case 340u: goto L_00422AAC;
    case 341u: goto L_00422AC0;
    case 342u: goto L_00422AD4;
    case 343u: goto L_00422B10;
    case 344u: goto L_00422B30;
    case 345u: goto L_00422B60;
    case 346u: goto L_00422BA8;
    case 347u: goto L_00422BB0;
    case 348u: goto L_00422BB8;
    case 349u: goto L_00422BE8;
    case 350u: goto L_00422C10;
    case 351u: goto L_00422C58;
    case 352u: goto L_00422E80;
    case 353u: goto L_00422F80;
    case 354u: goto L_00422FF8;
    case 355u: goto L_00423000;
    case 356u: goto L_00423008;
    case 357u: goto L_00423010;
    case 358u: goto L_00423018;
    case 359u: goto L_00423028;
    case 360u: goto L_00423050;
    case 361u: goto L_00423068;
    case 362u: goto L_004230A0;
    case 363u: goto L_004230D0;
    case 364u: goto L_004230E4;
    case 365u: goto L_004230E8;
    case 366u: goto L_00423124;
    case 367u: goto L_0042313C;
    case 368u: goto L_00423174;
    case 369u: goto L_0042318C;
    case 370u: goto L_00423190;
    case 371u: goto L_004231C0;
    case 372u: goto L_00423210;
    case 373u: goto L_00423250;
    case 374u: goto L_00423258;
    case 375u: goto L_00423294;
    case 376u: goto L_004232CC;
    case 377u: goto L_00423338;
    case 378u: goto L_00423378;
    case 379u: goto L_00423398;
    case 380u: goto L_004233F0;
    case 381u: goto L_00423408;
    case 382u: goto L_0042345C;
    case 383u: goto L_00423470;
    case 384u: goto L_004234C0;
    case 385u: goto L_00423510;
    case 386u: goto L_00423584;
    case 387u: goto L_004235A0;
    case 388u: goto L_00423610;
    case 389u: goto L_00423630;
    case 390u: goto L_00423690;
    case 391u: goto L_004236A4;
    case 392u: goto L_004236B0;
    case 393u: goto L_004236B8;
    case 394u: goto L_004236C0;
    case 395u: goto L_004236C8;
    case 396u: goto L_004236D0;
    case 397u: goto L_004236D8;
    case 398u: goto L_004236F0;
    case 399u: goto L_00423738;
    case 400u: goto L_004237A8;
    case 401u: goto L_004237C0;
    case 402u: goto L_004237C8;
    case 403u: goto L_004237DC;
    case 404u: goto L_004237F0;
    case 405u: goto L_00423804;
    case 406u: goto L_00423840;
    case 407u: goto L_00423878;
    case 408u: goto L_0042388C;
    case 409u: goto L_004238B0;
    case 410u: goto L_004238CC;
    case 411u: goto L_004238E8;
    case 412u: goto L_00423900;
    case 413u: goto L_00423914;
    case 414u: goto L_00423938;
    case 415u: goto L_0042394C;
    case 416u: goto L_00423980;
    case 417u: goto L_004239F0;
    case 418u: goto L_00423A38;
    case 419u: goto L_00423A50;
    case 420u: goto L_00423A90;
    case 421u: goto L_00423AE0;
    case 422u: goto L_00423AF0;
    case 423u: goto L_00423B24;
    case 424u: goto L_00423B38;
    case 425u: goto L_00423B48;
    case 426u: goto L_00423B78;
    case 427u: goto L_00423B80;
    case 428u: goto L_00423BE0;
    case 429u: goto L_00423BF0;
    case 430u: goto L_00423C18;
    case 431u: goto L_00423C50;
    case 432u: goto L_00423C88;
    case 433u: goto L_00423CCC;
    case 434u: goto L_00423CF0;
    case 435u: goto L_00423D34;
    case 436u: goto L_00423D50;
    case 437u: goto L_00423DA0;
    case 438u: goto L_00423DA8;
    case 439u: goto L_00423DC8;
    case 440u: goto L_00423E18;
    case 441u: goto L_00423E38;
    case 442u: goto L_00423E54;
    case 443u: goto L_00423E78;
    case 444u: goto L_00423E90;
    case 445u: goto L_00423ECC;
    case 446u: goto L_00423EDC;
    case 447u: goto L_00423F10;
    case 448u: goto L_00423F4C;
    case 449u: goto L_00423F58;
    case 450u: goto L_00423F6C;
    case 451u: goto L_00423F80;
    case 452u: goto L_00423F88;
    case 453u: goto L_00423FB8;
    case 454u: goto L_00423FE8;
    default: bad_entry(c, 0x00420000u); return;
    }
L_00420000:
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042000Cu); st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0042000Cu) [[unlikely]] return; }
L_0042000C:
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420020u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00D9(c, 167u, depth + 1u); else { c.pc = 0x00467940u; return; } if (c.pc != 0x00420020u) [[unlikely]] return; }
L_00420020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00420040; } }
    c.r[4].d[0] = 0ull | 37377ull;
    c.budget -= 1;
L_0042002C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420034u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00420034u) [[unlikely]] return; }
L_00420034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00420074; } }
    c.budget -= 1;
L_00420040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420048u); c.r[4].d[0] = 0ull | 37378ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00420048u) [[unlikely]] return; }
L_00420048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420050u); c.r[4].d[0] = 0ull | 37632ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00420050u) [[unlikely]] return; }
L_00420050:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_00420058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420060u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A1(c, 219u, depth + 1u); else { c.pc = 0x003861F0u; return; } if (c.pc != 0x00420060u) [[unlikely]] return; }
L_00420060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00420058u | kUnwind; return; } goto L_00420058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420070u); c.r[4].d[0] = 0ull | 37633ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00420070u) [[unlikely]] return; }
L_00420070:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00420074:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00420078:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00420090:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 120u), c.r[23].d[0]);
    c.r[23].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[31].d[0]);
    c.budget -= 17;
    { const bool t = c.r[22].sd[0] <= 0; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_004201C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[30], c.r[2].w[0] - 4496u);
    c.budget -= 3;
L_004200E0:
    set32(c.r[2], ld32((c.r[30].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[30].w[0] + 8u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[21].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_004201B0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420114u); set32(c.r[5], c.r[19].w[0] - 4200u);  if (depth < kMaxDepth) unit_00C7(c, 514u, depth + 1u); else { c.pc = 0x0041FBA0u; return; } if (c.pc != 0x00420114u) [[unlikely]] return; }
L_00420114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042011Cu); c.r[4].d[0] = 0ull | 37888ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x0042011Cu) [[unlikely]] return; }
L_0042011C:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_00420120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420128u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A1(c, 219u, depth + 1u); else { c.pc = 0x003861F0u; return; } if (c.pc != 0x00420128u) [[unlikely]] return; }
L_00420128:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00420120u | kUnwind; return; } goto L_00420120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420138u); c.r[4].d[0] = 0ull | 37889ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00420138u) [[unlikely]] return; }
L_00420138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420140u); c.r[4].d[0] = 0ull | 38144ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00420140u) [[unlikely]] return; }
L_00420140:
    set32(c.r[5], c.r[19].w[0] - 4200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042014Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 415u, depth + 1u); else { c.pc = 0x0041F048u; return; } if (c.pc != 0x0042014Cu) [[unlikely]] return; }
L_0042014C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 48u)));  goto L_00420190; }
    c.r[4].d[0] = 0ull | 38145ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420164u); set32(c.r[23], c.r[23].w[0] + 1u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00420164u) [[unlikely]] return; }
L_00420164:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[2].w[0] + 27304u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420184u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C5(c, 206u, depth + 1u); else { c.pc = 0x00415758u; return; } if (c.pc != 0x00420184u) [[unlikely]] return; }
L_00420184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_004201B4; } }
    c.budget -= 1;
L_00420190:
    c.r[4].d[0] = 0ull | 38146ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201A0u); st32((c.r[29].w[0] + 48u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x004201A0u) [[unlikely]] return; }
L_004201A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201B0u); set32(c.r[4], c.r[2].w[0] + 27328u);  if (depth < kMaxDepth) unit_00C5(c, 206u, depth + 1u); else { c.pc = 0x00415758u; return; } if (c.pc != 0x004201B0u) [[unlikely]] return; }
L_004201B0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_004201B4:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004200E0u | kUnwind; return; } goto L_004200E0; } }
L_004201C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201D0u); set32(c.r[4], c.r[4].w[0] + 27352u);  if (depth < kMaxDepth) unit_00C5(c, 206u, depth + 1u); else { c.pc = 0x00415758u; return; } if (c.pc != 0x004201D0u) [[unlikely]] return; }
L_004201D0:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_004201F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201ECu); set32(c.r[4], c.r[4].w[0] + 27376u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x004201ECu) [[unlikely]] return; }
L_004201EC:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_004201F0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 136u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00420220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.budget -= 15;
    { const bool t = c.r[20].sd[0] <= 0; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_004202B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[21], c.r[2].w[0] - 4496u);
    c.budget -= 3;
L_00420268:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420290u); set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_00C7(c, 525u, depth + 1u); else { c.pc = 0x0041FCD8u; return; } if (c.pc != 0x00420290u) [[unlikely]] return; }
L_00420290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { goto L_004202B0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_004202C0; } }
    c.budget -= 1;
L_004202B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00420268u | kUnwind; return; } goto L_00420268; } }
L_004202B8:
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0]), 0u);
    c.budget -= 2;
L_004202C0:
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
L_004202E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 4496u);
    set32(c.r[6], 0u + 16u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DD(c, 50u, depth); }
L_00420310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420324u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x00420324u) [[unlikely]] return; }
L_00420324:
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042033C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 46ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0042033C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00420340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00420350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420380u); st32((c.r[29].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00DE(c, 70u, depth + 1u); else { c.pc = 0x00478960u; return; } if (c.pc != 0x00420380u) [[unlikely]] return; }
L_00420380:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[6], 0u + 16u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_004203A8; } }
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_004203A8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_004203C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004203B8u); set32(c.r[4], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00DE(c, 70u, depth + 1u); else { c.pc = 0x00478960u; return; } if (c.pc != 0x004203B8u) [[unlikely]] return; }
L_004203B8:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
L_004203C8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004203D4u); set32(c.r[4], c.r[4].w[0] + 27424u);  if (depth < kMaxDepth) unit_00C5(c, 206u, depth + 1u); else { c.pc = 0x00415758u; return; } if (c.pc != 0x004203D4u) [[unlikely]] return; }
L_004203D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004203E4u); set32(c.r[4], c.r[4].w[0] + 27448u);  if (depth < kMaxDepth) unit_00C5(c, 206u, depth + 1u); else { c.pc = 0x00415758u; return; } if (c.pc != 0x004203E4u) [[unlikely]] return; }
L_004203E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004203F4u); set32(c.r[4], c.r[4].w[0] + 27464u);  if (depth < kMaxDepth) unit_00C5(c, 206u, depth + 1u); else { c.pc = 0x00415758u; return; } if (c.pc != 0x004203F4u) [[unlikely]] return; }
L_004203F4:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00420410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[4], c.r[4].w[0] + 27488u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420438u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x00420438u) [[unlikely]] return; }
L_00420438:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 46u);  if (t) { goto L_00420468; } }
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 27496u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042045Cu); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x0042045Cu) [[unlikely]] return; }
L_0042045C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004204D8; } }
    c.budget -= 1;
L_00420468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420470u);  if (depth < kMaxDepth) unit_00C8(c, 31u, depth + 1u); else { c.pc = 0x00420310u; return; } if (c.pc != 0x00420470u) [[unlikely]] return; }
L_00420470:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 4496u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; set32(c.r[6], c.r[29].w[0] + 4u);  if (t) { goto L_004204B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420494u);  if (depth < kMaxDepth) unit_00C8(c, 34u, depth + 1u); else { c.pc = 0x00420350u; return; } if (c.pc != 0x00420494u) [[unlikely]] return; }
L_00420494:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[3].w[0] << 11);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[4].w[0]);  if (t) { goto L_004204D8; } }
L_004204B0:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004204D4; } }
    set32(c.r[7], ld32((c.r[3].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004204D4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 27u, depth + 1u); else { c.pc = 0x00420220u; return; } if (c.pc != 0x004204D4u) [[unlikely]] return; }
L_004204D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004204D8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004204F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 4096u);
    set32(c.r[4], c.r[20].w[0] - 15040u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420530u); c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00420530u) [[unlikely]] return; }
L_00420530:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 4496u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00420548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420548u);  if (depth < kMaxDepth) unit_00C8(c, 30u, depth + 1u); else { c.pc = 0x004202E8u; return; } if (c.pc != 0x00420548u) [[unlikely]] return; }
L_00420548:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00420560; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00420560; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00420568; } }
L_00420560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420568u);  if (depth < kMaxDepth) unit_00C8(c, 30u, depth + 1u); else { c.pc = 0x004202E8u; return; } if (c.pc != 0x00420568u) [[unlikely]] return; }
L_00420568:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042064C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_00420588; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 27536u);  if (t) { goto L_0042059C; } }
    c.budget -= 1;
L_00420588:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004205B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 27584u);
    c.budget -= 3;
L_0042059C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004205A4u);  if (depth < kMaxDepth) unit_00C5(c, 206u, depth + 1u); else { c.pc = 0x00415758u; return; } if (c.pc != 0x004205A4u) [[unlikely]] return; }
L_004205A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042064C; } }
    c.budget -= 1;
L_004205B0:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[20].w[0] - 15040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004205C0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x004205C0u) [[unlikely]] return; }
L_004205C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004205CCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 535u, depth + 1u); else { c.pc = 0x0041FF08u; return; } if (c.pc != 0x004205CCu) [[unlikely]] return; }
L_004205CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[19].w[0] + 9u);  goto L_00420600; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004205E4u); set32(c.r[4], c.r[4].w[0] + 27632u);  if (depth < kMaxDepth) unit_00C5(c, 206u, depth + 1u); else { c.pc = 0x00415758u; return; } if (c.pc != 0x004205E4u) [[unlikely]] return; }
L_004205E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] + 27672u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004205F4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 413u, depth + 1u); else { c.pc = 0x0041F018u; return; } if (c.pc != 0x004205F4u) [[unlikely]] return; }
L_004205F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042064C; } }
    c.budget -= 1;
L_00420600:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    mmi::divu(c, 0, c.r[17].w[0], c.r[16].w[0]);
    set32(c.r[6], 0u + 4096u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x00420618u);  goto L_0042061C; }
L_0042061C:
    c.r[17].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042062Cu); set32(c.r[17], c.r[17].w[0] << 3);  if (depth < kMaxDepth) unit_00C7(c, 531u, depth + 1u); else { c.pc = 0x0041FD70u; return; } if (c.pc != 0x0042062Cu) [[unlikely]] return; }
L_0042062C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420638u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 12u, depth + 1u); else { c.pc = 0x00420090u; return; } if (c.pc != 0x00420638u) [[unlikely]] return; }
L_00420638:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0042063Cu);  goto L_00420640; }
L_00420640:
    set32(c.r[3], c.r[19].w[0] + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0042064C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00420670:
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 2;
L_00420678:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 4480u);
    st32((c.r[3].w[0] - 4476u), c.r[7].w[0]);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00420698:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_004206C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] - 4464u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0042074C; } }
L_004206C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 47u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 92u);  if (t) { goto L_00420700; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_00420700; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[8], c.r[2].w[0] + 27280u);
    set32(c.r[7], c.r[4].w[0] - 4464u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[4].w[0] - 4464u);  if (t) { goto L_0042070C; } }
    c.budget -= 1;
L_00420700:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[4].w[0] - 4464u), static_cast<std::uint8_t>(0u));
    set32(c.r[17], c.r[4].w[0] - 4464u);
    c.budget -= 3;
L_0042070C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420714u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x00420714u) [[unlikely]] return; }
L_00420714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042071Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0042071Cu) [[unlikely]] return; }
L_0042071C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], 0u + 47u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 1u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 92u);  if (t) { goto L_0042073C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00420750; } }
L_0042073C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420744u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x00420744u) [[unlikely]] return; }
L_00420744:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0042074C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00420750:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00420760:
    set32(c.r[2], c.r[2].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_00420770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420784u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x00420784u) [[unlikely]] return; }
L_00420784:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 16u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[6].d[0] = c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004207CC; } }
    set32(c.r[7], 0u + 58u);
    set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);
    c.budget -= 3;
L_004207A8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; c.r[4].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;  if (t) { goto L_004207D0; } }
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004207A8u | kUnwind; return; } goto L_004207A8; } }
L_004207CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004207D0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004207E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420800u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00420800u) [[unlikely]] return; }
L_00420800:
    lwl(c.r[2], (c.r[16].w[0] + 3u));
    lwr(c.r[2], (c.r[16].w[0]));
    swl(c.r[2], (c.r[29].w[0] + 3u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] + 27720u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    swr(c.r[2], (c.r[29].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420824u); st8((c.r[29].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x00420824u) [[unlikely]] return; }
L_00420824:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00420838:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042085Cu); st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C8(c, 64u, depth + 1u); else { c.pc = 0x00420770u; return; } if (c.pc != 0x0042085Cu) [[unlikely]] return; }
L_0042085C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00420870; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420870u); set32(c.r[5], c.r[5].w[0] - 3784u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x00420870u) [[unlikely]] return; }
L_00420870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420878u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 67u, depth + 1u); else { c.pc = 0x004207E0u; return; } if (c.pc != 0x00420878u) [[unlikely]] return; }
L_00420878:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_004208E8; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 4048u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420898u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x00420898u) [[unlikely]] return; }
L_00420898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004208A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x004208A0u) [[unlikely]] return; }
L_004208A0:
    set32(c.r[4], 0u + 92u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 1u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 47u);  if (t) { goto L_004208E4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004208E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004208E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_004208E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_004208E4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004208E4u); set32(c.r[5], c.r[5].w[0] + 27728u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x004208E4u) [[unlikely]] return; }
L_004208E4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004208E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004208F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x004208F0u) [[unlikely]] return; }
L_004208F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004208F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x004208F8u) [[unlikely]] return; }
L_004208F8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00420934; } }
    set32(c.r[8], 0u + 92u);
    set32(c.r[7], 0u + 47u);
    set32(c.r[4], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 3;
L_00420910:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[8].d[0]; c.r[3].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;  if (t) { goto L_00420924; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 1;
L_00420924:
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00420910u | kUnwind; return; } goto L_00420910; } }
L_00420934:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00420950:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[2], 0u + 47u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.r[3].d[0] = c.r[4].d[0] ^ 92ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];  c.pc = t; return; }
L_00420968:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], c.r[4].w[0] << 24);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[5].w[0] << 24);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 24));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042098Cu); set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));  if (depth < kMaxDepth) unit_00C8(c, 80u, depth + 1u); else { c.pc = 0x00420950u; return; } if (c.pc != 0x0042098Cu) [[unlikely]] return; }
L_0042098C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420998u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 80u, depth + 1u); else { c.pc = 0x00420950u; return; } if (c.pc != 0x00420998u) [[unlikely]] return; }
L_00420998:
    set32(c.r[3], 0u - 1u);
    c.r[16].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[16].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004209C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004209E4u); c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x004209E4u) [[unlikely]] return; }
L_004209E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004209F0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x004209F0u) [[unlikely]] return; }
L_004209F0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00420A00; } }
L_004209F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00420A38; } }
L_00420A00:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00420A34; } }
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 2;
L_00420A10:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420A24u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00C8(c, 81u, depth + 1u); else { c.pc = 0x00420968u; return; } if (c.pc != 0x00420A24u) [[unlikely]] return; }
L_00420A24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004209F8u | kUnwind; return; } goto L_004209F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00420A10u | kUnwind; return; } goto L_00420A10; } }
L_00420A34:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00420A38:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00420A58:
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 2;
L_00420A60:
    set32(c.r[29], c.r[29].w[0] - 304u);
    set32(c.r[6], 0u + 256u);
    st64((c.r[29].w[0] + 256u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 280u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 272u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 264u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 288u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420A90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00420A90u) [[unlikely]] return; }
L_00420A90:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420A9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 70u, depth + 1u); else { c.pc = 0x00420838u; return; } if (c.pc != 0x00420A9Cu) [[unlikely]] return; }
L_00420A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420AA4u); set32(c.r[4], 0u + 24576u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00420AA4u) [[unlikely]] return; }
L_00420AA4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420AB0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 347u, depth + 1u); else { c.pc = 0x0041E6F8u; return; } if (c.pc != 0x00420AB0u) [[unlikely]] return; }
L_00420AB0:
    set32(c.r[4], 0u + 24577u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420ABCu); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00420ABCu) [[unlikely]] return; }
L_00420ABC:
    set32(c.r[4], 0u + 24832u);
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00420BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420AD0u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00420AD0u) [[unlikely]] return; }
L_00420AD0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420AE0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00C7(c, 335u, depth + 1u); else { c.pc = 0x0041E5C8u; return; } if (c.pc != 0x00420AE0u) [[unlikely]] return; }
L_00420AE0:
    set32(c.r[4], 0u + 24833u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420AECu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00420AECu) [[unlikely]] return; }
L_00420AEC:
    set32(c.r[4], 0u + 25088u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00420BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B00u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00420B00u) [[unlikely]] return; }
L_00420B00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B10u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 335u, depth + 1u); else { c.pc = 0x0041E5C8u; return; } if (c.pc != 0x00420B10u) [[unlikely]] return; }
L_00420B10:
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B20u); set32(c.r[4], 0u + 25089u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00420B20u) [[unlikely]] return; }
L_00420B20:
    set32(c.r[2], 0u + 4096u);
    c.r[3].d[0] = c.r[17].sd[0] < 4097ll ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[17].d[0] = c.r[2].d[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[4], 0u + 25344u);  if (t) { goto L_00420BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B40u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00420B40u) [[unlikely]] return; }
L_00420B40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B54u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 357u, depth + 1u); else { c.pc = 0x0041E7B8u; return; } if (c.pc != 0x00420B54u) [[unlikely]] return; }
L_00420B54:
    set32(c.r[4], 0u + 25345u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B60u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00420B60u) [[unlikely]] return; }
L_00420B60:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[4], 0u + 25856u);  if (t) { goto L_00420B88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B70u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00420B70u) [[unlikely]] return; }
L_00420B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B78u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 352u, depth + 1u); else { c.pc = 0x0041E760u; return; } if (c.pc != 0x00420B78u) [[unlikely]] return; }
L_00420B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B80u); set32(c.r[4], 0u + 25857u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00420B80u) [[unlikely]] return; }
L_00420B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00420BA4; } }
L_00420B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B90u); set32(c.r[4], 0u + 25600u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00420B90u) [[unlikely]] return; }
L_00420B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 352u, depth + 1u); else { c.pc = 0x0041E760u; return; } if (c.pc != 0x00420B98u) [[unlikely]] return; }
L_00420B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420BA0u); set32(c.r[4], 0u + 25601u);  if (depth < kMaxDepth) unit_00C7(c, 330u, depth + 1u); else { c.pc = 0x0041E510u; return; } if (c.pc != 0x00420BA0u) [[unlikely]] return; }
L_00420BA0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00420BA4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 256u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 264u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 280u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 288u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_00420BC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.budget -= 15;
    { const bool t = c.r[20].sd[0] <= 0; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_00420C58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[21], c.r[2].w[0] - 4072u);
    c.budget -= 3;
L_00420C08:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420C30u); set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_00C8(c, 84u, depth + 1u); else { c.pc = 0x004209C0u; return; } if (c.pc != 0x00420C30u) [[unlikely]] return; }
L_00420C30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { goto L_00420C50; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00420C60; } }
    c.budget -= 1;
L_00420C50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00420C08u | kUnwind; return; } goto L_00420C08; } }
L_00420C58:
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0]), 0u);
    c.budget -= 2;
L_00420C60:
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
L_00420C88:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_00420C90:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[2].w[0] - 4072u);
    st32((c.r[3].w[0]), 0u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00420CD0; } }
    set32(c.r[7], ld32((c.r[7].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00420BC0u | kUnwind; return; } goto L_00420BC0; }
L_00420CD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00420CE0:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 24u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 288u);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 10;
L_00420D08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 4052u), c.r[4].w[0]);  c.pc = t; return; }
L_00420D18:
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 2;
L_00420D20:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[6].w[0] - 3440u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00420D40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00420D78; } }
L_00420D40:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00420D44:
    set32(c.r[2], c.r[5].w[0] << 3);
    c.r[3].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);  if (t) { goto L_00420D78; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[6].w[0] - 3440u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00420D44u | kUnwind; return; } goto L_00420D44; }
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00420D78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; return; }
L_00420D80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420D94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 193u, depth + 1u); else { c.pc = 0x00421538u; return; } if (c.pc != 0x00420D94u) [[unlikely]] return; }
L_00420D94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420D9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 126u, depth + 1u); else { c.pc = 0x00420DB8u; return; } if (c.pc != 0x00420D9Cu) [[unlikely]] return; }
L_00420D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420DA4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 194u, depth + 1u); else { c.pc = 0x00421540u; return; } if (c.pc != 0x00420DA4u) [[unlikely]] return; }
L_00420DA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00420DB8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_00420DE8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420DE0u); set32(c.r[4], c.r[4].w[0] + 28168u);  if (depth < kMaxDepth) unit_00C8(c, 199u, depth + 1u); else { c.pc = 0x004215A0u; return; } if (c.pc != 0x00420DE0u) [[unlikely]] return; }
L_00420DE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00420EA8; } }
L_00420DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420DF0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 195u, depth + 1u); else { c.pc = 0x00421548u; return; } if (c.pc != 0x00420DF0u) [[unlikely]] return; }
L_00420DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420DF8u);  if (depth < kMaxDepth) unit_00C8(c, 120u, depth + 1u); else { c.pc = 0x00420D20u; return; } if (c.pc != 0x00420DF8u) [[unlikely]] return; }
L_00420DF8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));  goto L_00420E18; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420E10u); set32(c.r[4], c.r[4].w[0] + 28216u);  if (depth < kMaxDepth) unit_00C8(c, 199u, depth + 1u); else { c.pc = 0x004215A0u; return; } if (c.pc != 0x00420E10u) [[unlikely]] return; }
L_00420E10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00420E9C; } }
L_00420E18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00420E30u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00420E30u) [[unlikely]] return; }
L_00420E30:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00420E48u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00420E48u) [[unlikely]] return; }
L_00420E48:
    set32(c.r[3], 0u + 10u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], 0u + 15u);
    set32(c.r[2], c.r[16].w[0] << 3);
    st32((c.r[18].w[0] + 24u), c.r[16].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00420E64u);  goto L_00420E68; }
L_00420E68:
    set32(c.r[3], c.r[18].w[0] + 560u);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
L_00420E78:
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] - 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00420E78u | kUnwind; return; } goto L_00420E78; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00420E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420EA4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 196u, depth + 1u); else { c.pc = 0x00421560u; return; } if (c.pc != 0x00420EA4u) [[unlikely]] return; }
L_00420EA4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00420EA8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00420EC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420ED4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 193u, depth + 1u); else { c.pc = 0x00421538u; return; } if (c.pc != 0x00420ED4u) [[unlikely]] return; }
L_00420ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420EDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 138u, depth + 1u); else { c.pc = 0x00420EF0u; return; } if (c.pc != 0x00420EDCu) [[unlikely]] return; }
L_00420EDC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00421540; }
L_00420EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00420F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420F0Cu);  if (depth < kMaxDepth) unit_00C8(c, 160u, depth + 1u); else { c.pc = 0x00421218u; return; } if (c.pc != 0x00420F0Cu) [[unlikely]] return; }
L_00420F0C:
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], 0u + 568u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DD(c, 50u, depth); }
L_00420F30:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00420F40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420F5Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 193u, depth + 1u); else { c.pc = 0x00421538u; return; } if (c.pc != 0x00420F5Cu) [[unlikely]] return; }
L_00420F5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420F68u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 143u, depth + 1u); else { c.pc = 0x00420F80u; return; } if (c.pc != 0x00420F68u) [[unlikely]] return; }
L_00420F68:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00421540; }
L_00420F80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.r[5].w[0]);  c.pc = t; return; }
L_00420F88:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_00420F90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420FC4u); c.r[20].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 193u, depth + 1u); else { c.pc = 0x00421538u; return; } if (c.pc != 0x00420FC4u) [[unlikely]] return; }
L_00420FC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420FDCu); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 149u, depth + 1u); else { c.pc = 0x00421008u; return; } if (c.pc != 0x00420FDCu) [[unlikely]] return; }
L_00420FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420FE4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 194u, depth + 1u); else { c.pc = 0x00421540u; return; } if (c.pc != 0x00420FE4u) [[unlikely]] return; }
L_00420FE4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00421008:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.budget -= 4;
L_00421018:
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_00421058; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421050u); set32(c.r[4], c.r[4].w[0] + 28264u);  if (depth < kMaxDepth) unit_00C8(c, 199u, depth + 1u); else { c.pc = 0x004215A0u; return; } if (c.pc != 0x00421050u) [[unlikely]] return; }
L_00421050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00421178; } }
L_00421058:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.r[3].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00421178; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  goto L_00421088; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042107Cu); set32(c.r[4], c.r[4].w[0] + 28312u);  if (depth < kMaxDepth) unit_00C8(c, 199u, depth + 1u); else { c.pc = 0x004215A0u; return; } if (c.pc != 0x0042107Cu) [[unlikely]] return; }
L_0042107C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00421178; } }
    c.budget -= 1;
L_00421088:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[3].w[0] + 15u);
    set32(c.r[7], c.r[3].w[0] + 30u);
    c.r[5].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[7].d[0];
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + 56u);
    set32(c.r[2], c.r[6].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    c.r[8].d[0] = c.r[3].d[0] ^ c.r[8].d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    if (c.r[8].d[0] != 0) c.r[19].d[0] = c.r[3].d[0];
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004210E8u); st32((c.r[16].w[0]), c.r[19].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x004210E8u) [[unlikely]] return; }
L_004210E8:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00421118; } }
L_004210F8:
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004210F8u | kUnwind; return; } goto L_004210F8; } }
L_00421118:
    st32((c.r[16].w[0] + 16u), c.r[20].w[0]);
    set32(c.r[8], 0u + 1u);
    st32((c.r[16].w[0] + 20u), c.r[21].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[22].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[5].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[17].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 21;
    { const bool t = c.r[7].d[0] != c.r[8].d[0]; st32((c.r[17].w[0] + 28u), c.r[4].w[0]);  if (t) { goto L_00421174; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00421174:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00421178:
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
L_004211A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004211B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 193u, depth + 1u); else { c.pc = 0x00421538u; return; } if (c.pc != 0x004211B4u) [[unlikely]] return; }
L_004211B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004211BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 158u, depth + 1u); else { c.pc = 0x004211D0u; return; } if (c.pc != 0x004211BCu) [[unlikely]] return; }
L_004211BC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00421540; }
L_004211D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004211F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 28360u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_004215A0; }
L_004211F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00421208; } }
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.budget -= 3;
L_00421208:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00421210:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_00421218:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042122Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 193u, depth + 1u); else { c.pc = 0x00421538u; return; } if (c.pc != 0x0042122Cu) [[unlikely]] return; }
L_0042122C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421234u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 163u, depth + 1u); else { c.pc = 0x00421248u; return; } if (c.pc != 0x00421234u) [[unlikely]] return; }
L_00421234:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00421540; }
L_00421248:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00421278; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 28456u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_004215A0; }
L_00421278:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_004212C0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004212AC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 44u), 0u);  goto L_004212B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004212A8u);  if (depth < kMaxDepth) unit_00C5(c, 493u, depth + 1u); else { c.pc = 0x004179A0u; return; } if (c.pc != 0x004212A8u) [[unlikely]] return; }
L_004212A8:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004212AC:
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 1;
L_004212B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004212B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 155u, depth + 1u); else { c.pc = 0x004211A0u; return; } if (c.pc != 0x004212B8u) [[unlikely]] return; }
L_004212B8:
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004212C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004212D0:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_004212E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004212F0u);  if (depth < kMaxDepth) unit_00C8(c, 193u, depth + 1u); else { c.pc = 0x00421538u; return; } if (c.pc != 0x004212F0u) [[unlikely]] return; }
L_004212F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004212F8u);  if (depth < kMaxDepth) unit_00C8(c, 170u, depth + 1u); else { c.pc = 0x00421308u; return; } if (c.pc != 0x004212F8u) [[unlikely]] return; }
L_004212F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00421540; }
L_00421308:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 3440u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 31u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_00421330:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00421348; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421344u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 231u, depth + 1u); else { c.pc = 0x00421A78u; return; } if (c.pc != 0x00421344u) [[unlikely]] return; }
L_00421344:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00421348:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 568u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00421330u | kUnwind; return; } goto L_00421330; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00421368:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042137Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 193u, depth + 1u); else { c.pc = 0x00421538u; return; } if (c.pc != 0x0042137Cu) [[unlikely]] return; }
L_0042137C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421384u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 177u, depth + 1u); else { c.pc = 0x004213A0u; return; } if (c.pc != 0x00421384u) [[unlikely]] return; }
L_00421384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042138Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 194u, depth + 1u); else { c.pc = 0x00421540u; return; } if (c.pc != 0x0042138Cu) [[unlikely]] return; }
L_0042138C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004213A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004213C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004213B8u); set32(c.r[4], c.r[4].w[0] + 28552u);  if (depth < kMaxDepth) unit_00C8(c, 199u, depth + 1u); else { c.pc = 0x004215A0u; return; } if (c.pc != 0x004213B8u) [[unlikely]] return; }
L_004213B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004213C4; } }
L_004213C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 1;
L_004213C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004213D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004213E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 193u, depth + 1u); else { c.pc = 0x00421538u; return; } if (c.pc != 0x004213E4u) [[unlikely]] return; }
L_004213E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004213ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 183u, depth + 1u); else { c.pc = 0x00421408u; return; } if (c.pc != 0x004213ECu) [[unlikely]] return; }
L_004213EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004213F4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 194u, depth + 1u); else { c.pc = 0x00421540u; return; } if (c.pc != 0x004213F4u) [[unlikely]] return; }
L_004213F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00421408:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00421428; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421420u); set32(c.r[4], c.r[4].w[0] + 28600u);  if (depth < kMaxDepth) unit_00C8(c, 199u, depth + 1u); else { c.pc = 0x004215A0u; return; } if (c.pc != 0x00421420u) [[unlikely]] return; }
L_00421420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0042142C; } }
L_00421428:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 1;
L_0042142C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00421438:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
L_00421450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042146Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 193u, depth + 1u); else { c.pc = 0x00421538u; return; } if (c.pc != 0x0042146Cu) [[unlikely]] return; }
L_0042146C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421478u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 189u, depth + 1u); else { c.pc = 0x00421490u; return; } if (c.pc != 0x00421478u) [[unlikely]] return; }
L_00421478:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00421540; }
L_00421490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004214B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 29024u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_004215A0; }
L_004214B8:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_004214D4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004214E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_004214D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 29072u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_004215A0; }
L_004214E8:
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004214F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], ld32((c.r[2].w[0] - 3748u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00421520; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 3744u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00421520u); set32(c.r[5], ld32((c.r[3].w[0] - 3740u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00421520u) [[unlikely]] return; }
L_00421520:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00421530:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_00421538:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00421540:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00421548:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 292u, depth); }
L_00421560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 293u, depth); }
L_00421578:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00421590; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[2].w[0] - 3736u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 3732u), 0u);  c.pc = t; return; }
L_00421590:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[2].w[0] - 3736u), c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 3732u), c.r[5].w[0]);  c.pc = t; return; }
L_004215A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[16], c.r[16].w[0] - 3728u);
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[6].d[0]);
    set32(c.r[6], c.r[29].w[0] + 56u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[11].d[0]);
    st32((c.r[29].w[0] + 24u), c.f[12]);
    st32((c.r[29].w[0] + 28u), c.f[13]);
    st32((c.r[29].w[0] + 32u), c.f[14]);
    st32((c.r[29].w[0] + 36u), c.f[15]);
    st32((c.r[29].w[0] + 40u), c.f[16]);
    st32((c.r[29].w[0] + 44u), c.f[17]);
    st32((c.r[29].w[0] + 48u), c.f[18]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421600u); st32((c.r[29].w[0] + 52u), c.f[19]);  if (depth < kMaxDepth) unit_00DD(c, 216u, depth + 1u); else { c.pc = 0x004767A8u; return; } if (c.pc != 0x00421600u) [[unlikely]] return; }
L_00421600:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 3736u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0042161C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042161Cu); set32(c.r[4], ld32((c.r[2].w[0] - 3732u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042161Cu) [[unlikely]] return; }
L_0042161C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00421630:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00421638:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00421640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] - 3472u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421660u); set32(c.r[3], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00C8(c, 195u, depth + 1u); else { c.pc = 0x00421548u; return; } if (c.pc != 0x00421660u) [[unlikely]] return; }
L_00421660:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[16], c.r[2].w[0] - 3448u);
    set32(c.r[4], c.r[4].w[0] - 3440u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 18176u);  if (t) { goto L_004216A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421688u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00421688u) [[unlikely]] return; }
L_00421688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421690u);  if (depth < kMaxDepth) unit_00C8(c, 202u, depth + 1u); else { c.pc = 0x00421630u; return; } if (c.pc != 0x00421690u) [[unlikely]] return; }
L_00421690:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042169Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 197u, depth + 1u); else { c.pc = 0x00421578u; return; } if (c.pc != 0x0042169Cu) [[unlikely]] return; }
L_0042169C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_004216A0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004216B0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C8(c, 196u, depth + 1u); else { c.pc = 0x00421560u; return; } if (c.pc != 0x004216B0u) [[unlikely]] return; }
L_004216B0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004216C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[3].w[0] - 3448u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_00421760; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[19].w[0] - 3440u);
    set32(c.r[17], 0u + 31u);
    c.budget -= 4;
L_00421700:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00421718; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421714u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 135u, depth + 1u); else { c.pc = 0x00420EC0u; return; } if (c.pc != 0x00421714u) [[unlikely]] return; }
L_00421714:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00421718:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 568u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00421700u | kUnwind; return; } goto L_00421700; } }
    set32(c.r[4], c.r[19].w[0] - 3440u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421730u); set32(c.r[6], 0u + 18176u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00421730u) [[unlikely]] return; }
L_00421730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421738u);  if (depth < kMaxDepth) unit_00C8(c, 203u, depth + 1u); else { c.pc = 0x00421638u; return; } if (c.pc != 0x00421738u) [[unlikely]] return; }
L_00421738:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00421578u | kUnwind; return; } goto L_00421578; }
L_00421760:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00421780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[17], c.r[2].w[0] + 56u);  if (t) { goto L_00421890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004217B8u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_00C5(c, 488u, depth + 1u); else { c.pc = 0x00417908u; return; } if (c.pc != 0x004217B8u) [[unlikely]] return; }
L_004217B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004217C0u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_00C5(c, 442u, depth + 1u); else { c.pc = 0x004175E0u; return; } if (c.pc != 0x004217C0u) [[unlikely]] return; }
L_004217C0:
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004217CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x004217CCu) [[unlikely]] return; }
L_004217CC:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004217FC; } }
    c.budget -= 1;
L_004217E0:
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004217E0u | kUnwind; return; } goto L_004217E0; } }
L_004217FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_00421828; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 29264u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004215A0u | kUnwind; return; } goto L_004215A0; }
L_00421828:
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421840u); set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 430u, depth + 1u); else { c.pc = 0x00417450u; return; } if (c.pc != 0x00421840u) [[unlikely]] return; }
L_00421840:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042184Cu); set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_00C5(c, 504u, depth + 1u); else { c.pc = 0x00417A80u; return; } if (c.pc != 0x0042184Cu) [[unlikely]] return; }
L_0042184C:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), 0u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042186Cu); set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_00C6(c, 25u, depth + 1u); else { c.pc = 0x00418240u; return; } if (c.pc != 0x0042186Cu) [[unlikely]] return; }
L_0042186C:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421878u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 461u, depth + 1u); else { c.pc = 0x00417710u; return; } if (c.pc != 0x00421878u) [[unlikely]] return; }
L_00421878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421880u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_00C5(c, 472u, depth + 1u); else { c.pc = 0x00417800u; return; } if (c.pc != 0x00421880u) [[unlikely]] return; }
L_00421880:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 4;
L_00421890:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004218A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 8;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 32u)));  goto L_004218E8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004215A0u | kUnwind; return; } goto L_004215A0; }
L_004218E8:
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004218F8u); set32(c.r[17], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_00C5(c, 456u, depth + 1u); else { c.pc = 0x004176D0u; return; } if (c.pc != 0x004218F8u) [[unlikely]] return; }
L_004218F8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_00421948; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00421928; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00421938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0042195C; } }
    c.budget -= 1;
L_00421928:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));  goto L_00421958; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0042195C; } }
L_00421938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421940u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_00C5(c, 466u, depth + 1u); else { c.pc = 0x00417778u; return; } if (c.pc != 0x00421940u) [[unlikely]] return; }
L_00421940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_00421958; } }
L_00421948:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 4;
L_00421958:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0042195C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00421970:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00421A50; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[7].d[0] = ld8((c.r[16].w[0] + 3u));  if (t) { goto L_004219E0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 56u);
    set32(c.r[21], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 12u)));  if (t) { goto L_004219E4; } }
L_004219E0:
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 1;
L_004219E4:
    set32(c.r[4], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[5].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 32u), c.r[4].w[0]);  if (t) { goto L_00421A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421A20u);  if (depth < kMaxDepth) unit_00C8(c, 190u, depth + 1u); else { c.pc = 0x004214F8u; return; } if (c.pc != 0x00421A20u) [[unlikely]] return; }
L_00421A20:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 2;
L_00421A28:
    set32(c.r[2], c.r[7].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00421A54; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421A50u); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 145u, depth + 1u); else { c.pc = 0x00420F90u; return; } if (c.pc != 0x00421A50u) [[unlikely]] return; }
L_00421A50:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00421A54:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00421A78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00421B30; } }
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00421B34; }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00421B34; }
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[17], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; set32(c.r[2], c.r[5].w[0] << 5);  if (t) { goto L_00421AE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421ADCu);  if (depth < kMaxDepth) unit_00C8(c, 225u, depth + 1u); else { c.pc = 0x004218A8u; return; } if (c.pc != 0x00421ADCu) [[unlikely]] return; }
L_00421ADC:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[5].w[0] << 5);
    c.budget -= 2;
L_00421AE4:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[18].d[0]; set32(c.r[2], c.r[5].w[0] << 5);  if (t) { goto L_00421B04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421AFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 228u, depth + 1u); else { c.pc = 0x00421970u; return; } if (c.pc != 0x00421AFCu) [[unlikely]] return; }
L_00421AFC:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[5].w[0] << 5);
    c.budget -= 2;
L_00421B04:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00421B34; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00421780u | kUnwind; return; } goto L_00421780; }
L_00421B30:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00421B34:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00421B48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 292u, depth); }
L_00421B60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C9(c, 293u, depth); }
L_00421B78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 14736u);
    set32(c.r[2], c.r[2].w[0] + 14752u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[4], ld32((c.r[3].w[0])));  c.pc = t; return; }
L_00421B90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14740u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00421BB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00421BB4u); set32(c.r[4], ld32((c.r[2].w[0] + 14744u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00421BB4u) [[unlikely]] return; }
L_00421BB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00421BC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DE(c, 70u, depth); }
L_00421BD8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421BF8u); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x00421BF8u) [[unlikely]] return; }
L_00421BF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[3].w[0] + 17096u);
    set32(c.r[3], 0u + 17u);
    set32(c.r[5], c.r[5].w[0] + 29408u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00421C2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421C20u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00421C20u) [[unlikely]] return; }
L_00421C20:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421C2Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 237u, depth + 1u); else { c.pc = 0x00421B90u; return; } if (c.pc != 0x00421C2Cu) [[unlikely]] return; }
L_00421C2C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00421C60; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] + 17096u);
    set32(c.r[5], c.r[5].w[0] + 29472u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421C54u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00421C54u) [[unlikely]] return; }
L_00421C54:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421C60u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 237u, depth + 1u); else { c.pc = 0x00421B90u; return; } if (c.pc != 0x00421C60u) [[unlikely]] return; }
L_00421C60:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421C74u); st32((c.r[29].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00C8(c, 239u, depth + 1u); else { c.pc = 0x00421BC0u; return; } if (c.pc != 0x00421C74u) [[unlikely]] return; }
L_00421C74:
    set32(c.r[6], 0u + 16u);
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_00421C98; } }
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00421C98:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00421CB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421CA8u); set32(c.r[4], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00C8(c, 239u, depth + 1u); else { c.pc = 0x00421BC0u; return; } if (c.pc != 0x00421CA8u) [[unlikely]] return; }
L_00421CA8:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_00421CB8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00421CD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00421CD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 14856u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 39u);
    c.budget -= 8;
L_00421CF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00421D10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421D0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 248u, depth + 1u); else { c.pc = 0x00421CD0u; return; } if (c.pc != 0x00421D0Cu) [[unlikely]] return; }
L_00421D0C:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00421D10:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 56u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00421CF8u | kUnwind; return; } goto L_00421CF8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00421D30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[2].w[0] + 14740u), c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 14744u), c.r[5].w[0]);  c.pc = t; return; }
L_00421D48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421D58u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 240u, depth + 1u); else { c.pc = 0x00421BD8u; return; } if (c.pc != 0x00421D58u) [[unlikely]] return; }
L_00421D58:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00421D68:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[6].w[0] + 14856u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00421D88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00421DB8; } }
L_00421D88:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00421D8C:
    set32(c.r[2], c.r[5].w[0] << 3);
    c.r[3].d[0] = c.r[5].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);  if (t) { goto L_00421DB8; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] + 14856u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00421D8Cu | kUnwind; return; } goto L_00421D8C; }
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00421DB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; return; }
L_00421DC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 56u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DD(c, 50u, depth); }
L_00421DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2048u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421E00u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C8(c, 253u, depth + 1u); else { c.pc = 0x00421D48u; return; } if (c.pc != 0x00421E00u) [[unlikely]] return; }
L_00421E00:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00421E14u);  goto L_00421E18; }
L_00421E18:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00421E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00421E78; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 29536u);  if (t) { goto L_00421EAC; } }
    c.budget -= 1;
L_00421E78:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_00421E90; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 29576u);  if (t) { goto L_00421EAC; } }
    c.budget -= 1;
L_00421E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421E98u);  if (depth < kMaxDepth) unit_00C8(c, 255u, depth + 1u); else { c.pc = 0x00421D68u; return; } if (c.pc != 0x00421E98u) [[unlikely]] return; }
L_00421E98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 29616u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00421EC0; } }
L_00421EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421EB4u);  if (depth < kMaxDepth) unit_00C8(c, 237u, depth + 1u); else { c.pc = 0x00421B90u; return; } if (c.pc != 0x00421EB4u) [[unlikely]] return; }
L_00421EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00421ED8; } }
    c.budget -= 1;
L_00421EC0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421ECCu); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x00421ECCu) [[unlikely]] return; }
L_00421ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421ED4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 258u, depth + 1u); else { c.pc = 0x00421DE0u; return; } if (c.pc != 0x00421ED4u) [[unlikely]] return; }
L_00421ED4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00421ED8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00421EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00421F24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421F0Cu);  if (depth < kMaxDepth) unit_00C8(c, 284u, depth + 1u); else { c.pc = 0x004221B8u; return; } if (c.pc != 0x00421F0Cu) [[unlikely]] return; }
L_00421F0C:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00421F24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421F24u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C8(c, 257u, depth + 1u); else { c.pc = 0x00421DC0u; return; } if (c.pc != 0x00421F24u) [[unlikely]] return; }
L_00421F24:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00421F38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_00421F70; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421F68u); set32(c.r[5], c.r[5].w[0] + 29664u);  if (depth < kMaxDepth) unit_00C8(c, 237u, depth + 1u); else { c.pc = 0x00421B90u; return; } if (c.pc != 0x00421F68u) [[unlikely]] return; }
L_00421F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00421FDC; } }
L_00421F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421F78u);  if (depth < kMaxDepth) unit_00C8(c, 234u, depth + 1u); else { c.pc = 0x00421B48u; return; } if (c.pc != 0x00421F78u) [[unlikely]] return; }
L_00421F78:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00421F88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[18].w[0]);  if (t) { goto L_00421FB8; } }
L_00421F88:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00421FA0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[4].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00421FBC; } }
L_00421FA0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_00421FBC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00421FBC; } }
L_00421FB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_00421FBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421FD8u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C8(c, 235u, depth + 1u); else { c.pc = 0x00421B60u; return; } if (c.pc != 0x00421FD8u) [[unlikely]] return; }
L_00421FD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_00421FDC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00421FF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00422020; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422014u); set32(c.r[5], c.r[5].w[0] + 29696u);  if (depth < kMaxDepth) unit_00C8(c, 237u, depth + 1u); else { c.pc = 0x00421B90u; return; } if (c.pc != 0x00422014u) [[unlikely]] return; }
L_00422014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00422024; } }
    c.budget -= 1;
L_00422020:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00422024:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00422030:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_00422068; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 29728u);  if (t) { goto L_00422084; } }
    c.budget -= 1;
L_00422068:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_00422078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 29760u);  if (t) { goto L_00422084; } }
L_00422078:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_00422098; } }
    set32(c.r[5], c.r[5].w[0] + 29792u);
    c.budget -= 1;
L_00422084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042208Cu);  if (depth < kMaxDepth) unit_00C8(c, 237u, depth + 1u); else { c.pc = 0x00421B90u; return; } if (c.pc != 0x0042208Cu) [[unlikely]] return; }
L_0042208C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042219C; } }
    c.budget -= 1;
L_00422098:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));  goto L_004220B0; }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0042219C; } }
L_004220B0:
    set32(c.r[17], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042219C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004220C4u);  if (depth < kMaxDepth) unit_00C8(c, 234u, depth + 1u); else { c.pc = 0x00421B48u; return; } if (c.pc != 0x004220C4u) [[unlikely]] return; }
L_004220C4:
    st32((c.r[18].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[16].d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00422108; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004220FCu); st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00C8(c, 235u, depth + 1u); else { c.pc = 0x00421B60u; return; } if (c.pc != 0x004220FCu) [[unlikely]] return; }
L_004220FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042219C; } }
    c.budget -= 1;
L_00422108:
    st32((c.r[18].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], c.r[18].w[0] + 28u);
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422120u); st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_00C8(c, 240u, depth + 1u); else { c.pc = 0x00421BD8u; return; } if (c.pc != 0x00422120u) [[unlikely]] return; }
L_00422120:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[16], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422140u); if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_00C8(c, 235u, depth + 1u); else { c.pc = 0x00421B60u; return; } if (c.pc != 0x00422140u) [[unlikely]] return; }
L_00422140:
    set32(c.r[5], ld32((c.r[18].w[0] + 48u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422154u); set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x00422154u) [[unlikely]] return; }
L_00422154:
    set32(c.r[6], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422168u); set32(c.r[6], c.r[6].w[0] - c.r[16].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00422168u) [[unlikely]] return; }
L_00422168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422170u);  if (depth < kMaxDepth) unit_00C8(c, 234u, depth + 1u); else { c.pc = 0x00421B48u; return; } if (c.pc != 0x00422170u) [[unlikely]] return; }
L_00422170:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422198u); st32((c.r[18].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C8(c, 235u, depth + 1u); else { c.pc = 0x00421B60u; return; } if (c.pc != 0x00422198u) [[unlikely]] return; }
L_00422198:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_0042219C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004221B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_004221E8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 29832u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00421B90u | kUnwind; return; } goto L_00421B90; }
L_004221E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004221F0u);  if (depth < kMaxDepth) unit_00C8(c, 234u, depth + 1u); else { c.pc = 0x00421B48u; return; } if (c.pc != 0x004221F0u) [[unlikely]] return; }
L_004221F0:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00421B60u | kUnwind; return; } goto L_00421B60; }
L_00422208:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00422230; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422224u); set32(c.r[5], c.r[5].w[0] + 29832u);  if (depth < kMaxDepth) unit_00C8(c, 237u, depth + 1u); else { c.pc = 0x00421B90u; return; } if (c.pc != 0x00422224u) [[unlikely]] return; }
L_00422224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00422234; } }
    c.budget -= 1;
L_00422230:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 1;
L_00422234:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00422240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00422268; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042225Cu); set32(c.r[5], c.r[5].w[0] + 29856u);  if (depth < kMaxDepth) unit_00C8(c, 237u, depth + 1u); else { c.pc = 0x00421B90u; return; } if (c.pc != 0x0042225Cu) [[unlikely]] return; }
L_0042225C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042226C; } }
    c.budget -= 1;
L_00422268:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_0042226C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00422278:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004222A0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], c.r[5].w[0] + 29880u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00421B90u | kUnwind; return; } goto L_00421B90; }
L_004222A0:
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[6].w[0] + 4u), c.r[5].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.budget -= 9;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x004222C0u);  goto L_004222C4; }
L_004222C4:
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[6].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[6].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004222F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00422320; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422314u); set32(c.r[5], c.r[5].w[0] + 29832u);  if (depth < kMaxDepth) unit_00C8(c, 237u, depth + 1u); else { c.pc = 0x00421B90u; return; } if (c.pc != 0x00422314u) [[unlikely]] return; }
L_00422314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00422324; } }
    c.budget -= 1;
L_00422320:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00422324:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00422330:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_00422338:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004223A8; } }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 204ll ? 1ull : 0ull;  if (t) { goto L_00422398; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 205u);  if (t) { goto L_00422378; } }
    set32(c.r[2], 0u + 201u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00422388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004223AC; } }
    c.budget -= 1;
L_00422378:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00422398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004223AC; } }
L_00422388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422390u);  if (depth < kMaxDepth) unit_00C8(c, 291u, depth + 1u); else { c.pc = 0x004222F8u; return; } if (c.pc != 0x00422390u) [[unlikely]] return; }
L_00422390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004223A4; } }
L_00422398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004223A0u);  if (depth < kMaxDepth) unit_00C8(c, 253u, depth + 1u); else { c.pc = 0x00421D48u; return; } if (c.pc != 0x004223A0u) [[unlikely]] return; }
L_004223A0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004223A4:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_004223A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004223AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004223B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00422410; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 30048u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_00422410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422418u);  if (depth < kMaxDepth) unit_00C6(c, 188u, depth + 1u); else { c.pc = 0x00419308u; return; } if (c.pc != 0x00422418u) [[unlikely]] return; }
L_00422418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422420u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 305u, depth + 1u); else { c.pc = 0x004224F0u; return; } if (c.pc != 0x00422420u) [[unlikely]] return; }
L_00422420:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422430u); set32(c.r[4], c.r[4].w[0] + 9856u);  if (depth < kMaxDepth) unit_00CC(c, 333u, depth + 1u); else { c.pc = 0x00432AE8u; return; } if (c.pc != 0x00422430u) [[unlikely]] return; }
L_00422430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422438u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 339u, depth + 1u); else { c.pc = 0x00432B70u; return; } if (c.pc != 0x00422438u) [[unlikely]] return; }
L_00422438:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422444u); set32(c.r[17], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 174u, depth + 1u); else { c.pc = 0x00415368u; return; } if (c.pc != 0x00422444u) [[unlikely]] return; }
L_00422444:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422450u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 348u, depth + 1u); else { c.pc = 0x00432C28u; return; } if (c.pc != 0x00422450u) [[unlikely]] return; }
L_00422450:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00422480; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 30112u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_00422480:
    set32(c.r[5], ld32((c.r[17].w[0] + 236u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042248Cu); set32(c.r[6], ld32((c.r[17].w[0] + 240u)));  if (depth < kMaxDepth) unit_00CC(c, 371u, depth + 1u); else { c.pc = 0x00433010u; return; } if (c.pc != 0x0042248Cu) [[unlikely]] return; }
L_0042248C:
    st32((c.r[17].w[0] + 232u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + 9664u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + 9800u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[4], c.r[4].w[0] + 9776u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[5], c.r[5].w[0] + 9832u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[6].w[0] - 11164u), c.r[2].w[0]);
    st32((c.r[7].w[0] - 5660u), c.r[3].w[0]);
    st32((c.r[8].w[0] - 5656u), c.r[4].w[0]);
    st32((c.r[9].w[0] - 17812u), c.r[5].w[0]);
    c.budget -= 24;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00415380u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 175u, depth); }
L_004224F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] - 11164u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0042250C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042250Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042250Cu) [[unlikely]] return; }
L_0042250C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00422518:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_00422558; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 30168u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_00422558:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 232u)));  if (t) { goto L_00422578; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00422598; } }
L_00422578:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 30216u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_00422598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004225A0u);  if (depth < kMaxDepth) unit_00CC(c, 371u, depth + 1u); else { c.pc = 0x00433010u; return; } if (c.pc != 0x004225A0u) [[unlikely]] return; }
L_004225A0:
    st32((c.r[16].w[0] + 240u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 236u), c.r[18].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004225C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 232u)));
    c.budget -= 9;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00422620; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004225ECu);  if (depth < kMaxDepth) unit_00C6(c, 188u, depth + 1u); else { c.pc = 0x00419308u; return; } if (c.pc != 0x004225ECu) [[unlikely]] return; }
L_004225EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004225F4u);  if (depth < kMaxDepth) unit_00C5(c, 174u, depth + 1u); else { c.pc = 0x00415368u; return; } if (c.pc != 0x004225F4u) [[unlikely]] return; }
L_004225F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004225FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 357u, depth + 1u); else { c.pc = 0x00432D70u; return; } if (c.pc != 0x004225FCu) [[unlikely]] return; }
L_004225FC:
    st32((c.r[17].w[0] + 232u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422608u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 344u, depth + 1u); else { c.pc = 0x00432BE0u; return; } if (c.pc != 0x00422608u) [[unlikely]] return; }
L_00422608:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00415380u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 175u, depth); }
L_00422620:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00422630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 232u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CC(c, 361u, depth); }
L_00422648:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[5].w[0] << 16);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[4], ld32((c.r[4].w[0] + 232u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CC(c, 366u, depth); }
L_00422668:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 232u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CC(c, 377u, depth); }
L_00422680:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CB(c, 62u, depth); }
L_00422698:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[10].sd[0] >= 0; c.r[11].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004226C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 30320u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004157D0u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 209u, depth); }
L_004226C8:
    c.budget -= 2;
    { const bool t = c.r[11].sd[0] >= 0; set32(c.r[2], c.r[10].w[0] << 1);  if (t) { goto L_004226E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 30368u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004157D0u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 209u, depth); }
L_004226E8:
    set32(c.r[9], c.r[2].w[0] + c.r[11].w[0]);
    set32(c.r[3], c.r[9].w[0] << 6);
    c.r[2].d[0] = c.r[9].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);  if (t) { goto L_00422718; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], c.r[4].w[0] + 30416u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004157D0u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 209u, depth); }
L_00422718:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[7], c.r[3].w[0] << 8);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 21448u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 21452u), c.r[11].w[0]);
    st32((c.r[5].w[0] + 21412u), c.r[7].w[0]);
    st32((c.r[6].w[0] + 21416u), c.r[2].w[0]);
    st32((c.r[8].w[0] + 21408u), c.r[9].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00422758:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21416u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0] + 72u), c.r[31].d[0]);  if (t) { goto L_004227B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[21].w[0] + 21408u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 21412u), c.r[2].w[0]);  if (t) { goto L_004227B4; } }
L_004227B0:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 1;
L_004227B4:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[16], c.r[19].w[0] + 21420u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);  goto L_00422858; }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[17], c.r[18].w[0] + 21412u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004227DCu); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_00E1(c, 148u, depth + 1u); else { c.pc = 0x004854D0u; return; } if (c.pc != 0x004227DCu) [[unlikely]] return; }
L_004227DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00422818; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 30480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004227F8u); set32(c.r[5], c.r[5].w[0] + 64u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x004227F8u) [[unlikely]] return; }
L_004227F8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004227F8u | kUnwind; return; } goto L_004227F8; } }
    c.budget -= 1;
L_00422818:
    set32(c.r[16], c.r[19].w[0] + 21420u);
    set32(c.r[5], ld32((c.r[18].w[0] + 21412u)));
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 30552u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422834u); set32(c.r[5], c.r[5].w[0] + 64u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x00422834u) [[unlikely]] return; }
L_00422834:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 21428u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 21424u), c.r[3].w[0]);
    c.budget -= 9;
L_00422858:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[20].w[0] + 21504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042286Cu); set32(c.r[6], 0u + 768u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042286Cu) [[unlikely]] return; }
L_0042286C:
    set32(c.r[17], ld32((c.r[16].w[0] + 21424u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 21408u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00422A20; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[20].w[0] + 21504u);
    c.budget -= 5;
L_00422890:
    c.r[3].d[0] = c.r[17].d[0] & 63ull;
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 24u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_004228D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004228B0u); set32(c.r[4], c.r[2].w[0] + 30600u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x004228B0u) [[unlikely]] return; }
L_004228B0:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004228B0u | kUnwind; return; } goto L_004228B0; } }
    c.budget -= 1;
L_004228D0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 256u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004228E4u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_00C9(c, 247u, depth + 1u); else { c.pc = 0x004267A8u; return; } if (c.pc != 0x004228E4u) [[unlikely]] return; }
L_004228E4:
    set32(c.r[3], c.r[18].w[0] << 8);
    set32(c.r[5], c.r[22].w[0] + 22272u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[17].d[0] & 63ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[6], 0u + 256u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00422938; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422914u); set32(c.r[4], c.r[2].w[0] + 30648u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x00422914u) [[unlikely]] return; }
L_00422914:
    c.budget -= 1;
L_00422918:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422918u | kUnwind; return; } goto L_00422918; } }
    c.budget -= 1;
L_00422938:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_00422968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422948u); set32(c.r[4], c.r[2].w[0] + 30704u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x00422948u) [[unlikely]] return; }
L_00422948:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422948u | kUnwind; return; } goto L_00422948; } }
    c.budget -= 1;
L_00422968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422970u);  if (depth < kMaxDepth) unit_00C9(c, 170u, depth + 1u); else { c.pc = 0x00425A68u; return; } if (c.pc != 0x00422970u) [[unlikely]] return; }
L_00422970:
    set32(c.r[3], 0u + 16384u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[16].w[0] + 16u);  if (t) { goto L_004229B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042298Cu); set32(c.r[4], c.r[30].w[0] + 30752u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x0042298Cu) [[unlikely]] return; }
L_0042298C:
    c.budget -= 1;
L_00422990:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422990u | kUnwind; return; } goto L_00422990; } }
    c.budget -= 1;
L_004229B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004229CCu); set32(c.r[17], c.r[17].w[0] + 16384u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004229CCu) [[unlikely]] return; }
L_004229CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004229DCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C9(c, 280u, depth + 1u); else { c.pc = 0x00426CB0u; return; } if (c.pc != 0x004229DCu) [[unlikely]] return; }
L_004229DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00422A10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004229ECu); set32(c.r[4], c.r[23].w[0] + 30808u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x004229ECu) [[unlikely]] return; }
L_004229EC:
    c.budget -= 1;
L_004229F0:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004229F0u | kUnwind; return; } goto L_004229F0; } }
    c.budget -= 1;
L_00422A10:
    set32(c.r[2], ld32((c.r[21].w[0] + 21408u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] + 21504u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422890u | kUnwind; return; } goto L_00422890; } }
L_00422A20:
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
L_00422A50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 21408u)));
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_00422AE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[16], c.r[2].w[0] + 21504u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
L_00422A80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00422A90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422A90u);  if (depth < kMaxDepth) unit_00C9(c, 249u, depth + 1u); else { c.pc = 0x00426800u; return; } if (c.pc != 0x00422A90u) [[unlikely]] return; }
L_00422A90:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00422AAC; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00422AACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00422AACu) [[unlikely]] return; }
L_00422AAC:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00422AC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422AC0u);  if (depth < kMaxDepth) unit_00C9(c, 285u, depth + 1u); else { c.pc = 0x00426DA8u; return; } if (c.pc != 0x00422AC0u) [[unlikely]] return; }
L_00422AC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00422AC4:
    set32(c.r[16], c.r[16].w[0] + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422AD4u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00422AD4u) [[unlikely]] return; }
L_00422AD4:
    set32(c.r[3], ld32((c.r[18].w[0] + 21408u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00422A80u | kUnwind; return; } goto L_00422A80; }
L_00422AE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[17], c.r[2].w[0] + 21428u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00422B1C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[16], c.r[16].w[0] + 21420u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422B10u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00E1(c, 152u, depth + 1u); else { c.pc = 0x004855B8u; return; } if (c.pc != 0x00422B10u) [[unlikely]] return; }
L_00422B10:
    st32((c.r[16].w[0]), 0u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_00422B1C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00422B30:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[8].w[0] + 21408u)));
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00422B84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[2].w[0] + 21504u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00422B84; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_00422B60:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 24u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 24u);  if (t) { goto L_00422B84; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422B60u | kUnwind; return; } goto L_00422B60; } }
L_00422B84:
    set32(c.r[3], ld32((c.r[8].w[0] + 21408u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00422B9C; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00422B9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00422BA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00422BB0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_00422BD8; }
L_00422BB8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422BB8u | kUnwind; return; } goto L_00422BB8; } }
    c.budget -= 1;
L_00422BD8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_00422C04; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 2;
L_00422BE8:
    c.budget -= 7;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00422BE8u | kUnwind; return; } goto L_00422BE8; }
L_00422C04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00422C10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[15], c.r[17].w[0] + 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[4].w[0] + 17408u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], c.r[3].w[0] + 21460u);
    set32(c.r[7], c.r[2].w[0] + 30720u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[24].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 1u);
    set32(c.r[25], 0u + 2u);
    c.r[6].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 18;
L_00422C58:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[24], c.r[24].w[0] + 1u);  goto L_00422F54; }
    set32(c.r[8], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[8].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00422F60; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] + 21464u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_00422C9C; } }
    st32((c.r[6].w[0] + 4u), 0u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[6].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_00422C9C:
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[8].d[0]) { st32((c.r[17].w[0]), c.r[10].w[0]);  goto L_00422F64; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 91u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 90u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_00422CD8; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 91u)));
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 91u));
    st8((c.r[7].w[0] + 90u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00422CD8:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == c.r[8].d[0]; set32(c.r[2], 0u + 256u);  if (t) { goto L_00422F60; } }
    c.r[3].d[0] = ld16((c.r[7].w[0] + 80u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00422D10; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 80u)));
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 80u));
    st8((c.r[7].w[0] + 81u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00422D10:
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[8].d[0]) { st32((c.r[17].w[0]), c.r[10].w[0]);  goto L_00422F64; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 85u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_00422D4C; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 84u)));
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 84u));
    st8((c.r[7].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00422D4C:
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[8].d[0]) { st32((c.r[17].w[0]), c.r[10].w[0]);  goto L_00422F64; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 86u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 87u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 12u);  if (t) { goto L_00422D88; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 86u)));
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 86u));
    st8((c.r[7].w[0] + 87u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00422D88:
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[8].d[0]) { st32((c.r[17].w[0]), c.r[10].w[0]);  goto L_00422F64; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 82u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 83u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00422DC4; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 82u)));
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 82u));
    st8((c.r[7].w[0] + 83u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00422DC4:
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[8].d[0]) { st32((c.r[17].w[0]), c.r[10].w[0]);  goto L_00422F64; }
    set32(c.r[3], ld32((c.r[7].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_00422DFC; } }
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[3], ld32((c.r[7].w[0] + 48u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[7].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 8;
L_00422DFC:
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[8].d[0]) { st32((c.r[17].w[0]), c.r[10].w[0]);  goto L_00422F64; }
    set32(c.r[3], ld32((c.r[7].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_00422E44; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[2], c.r[18].w[0] - c.r[2].w[0]);
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[6].w[0] + 8u), 0u);
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0] + 56u)));
    st32((c.r[6].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    st32((c.r[7].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 12;
L_00422E44:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == c.r[8].d[0]; set32(c.r[2], 0u + 127u);  if (t) { goto L_00422F60; } }
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[2].d[0]) { st32((c.r[17].w[0]), c.r[10].w[0]);  goto L_00422F64; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 82u)));
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[9].d[0] = ld8((c.r[7].w[0] + 82u));  if (t) { goto L_00422EDC; } }
    set32(c.r[2], c.r[10].w[0] << 4);
    set32(c.r[13], c.r[7].w[0] + 8u);
    set32(c.r[4], c.r[2].w[0] + c.r[15].w[0]);
    set32(c.r[14], 0u + 9u);
    set32(c.r[11], 0u + 64u);
    set32(c.r[5], c.r[7].w[0] + c.r[11].w[0]);
    c.budget -= 7;
L_00422E80:
    set32(c.r[8], c.r[13].w[0] + c.r[11].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[11], c.r[11].w[0] + 4u);  if (t) { goto L_00422EC4; } }
    st32((c.r[4].w[0] + 8u), c.r[12].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.r[9].d[0] = ld8((c.r[7].w[0] + 82u));
    c.budget -= 12;
L_00422EC4:
    set32(c.r[2], c.r[9].w[0] << 24);
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[2].d[0] = c.r[12].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[7].w[0] + c.r[11].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422E80u | kUnwind; return; } goto L_00422E80; } }
L_00422EDC:
    set32(c.r[3], ld32((c.r[7].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 13u);  if (t) { goto L_00422F0C; } }
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[3], ld32((c.r[7].w[0] + 92u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[7].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 8;
L_00422F0C:
    set32(c.r[4], 0u + 128u);
    c.budget -= 3;
    if (c.r[10].d[0] == c.r[4].d[0]) { st32((c.r[17].w[0]), c.r[10].w[0]);  goto L_00422F64; }
    c.r[2].d[0] = ld16((c.r[7].w[0] + 80u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00422F48; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 80u)));
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 80u));
    st8((c.r[7].w[0] + 81u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00422F48:
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[4].d[0]) { st32((c.r[17].w[0]), c.r[10].w[0]);  goto L_00422F64; }
    set32(c.r[24], c.r[24].w[0] + 1u);
    c.budget -= 1;
L_00422F54:
    c.r[2].d[0] = c.r[24].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 100u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422C58u | kUnwind; return; } goto L_00422C58; } }
L_00422F60:
    st32((c.r[17].w[0]), c.r[10].w[0]);
    c.budget -= 1;
L_00422F64:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00422F80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[2], c.r[2].w[0] + 17400u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 21416u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[23].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00422FDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21408u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00423224; } }
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 1;
L_00422FDC:
    set32(c.r[2], ld32((c.r[23].w[0] + 21484u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[23].w[0] + 21484u);  if (t) { goto L_00423214; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422FF8u); set32(c.r[16], c.r[16].w[0] + 32328u);  if (depth < kMaxDepth) unit_00C9(c, 250u, depth + 1u); else { c.pc = 0x00426848u; return; } if (c.pc != 0x00422FF8u) [[unlikely]] return; }
L_00422FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423000u); set32(c.r[17], c.r[19].w[0] + 21492u);  if (depth < kMaxDepth) unit_00C9(c, 265u, depth + 1u); else { c.pc = 0x00426AA0u; return; } if (c.pc != 0x00423000u) [[unlikely]] return; }
L_00423000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423008u); c.r[20].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (depth < kMaxDepth) unit_00C7(c, 392u, depth + 1u); else { c.pc = 0x0041ED18u; return; } if (c.pc != 0x00423008u) [[unlikely]] return; }
L_00423008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423010u); c.r[18].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (depth < kMaxDepth) unit_00C8(c, 374u, depth + 1u); else { c.pc = 0x00423258u; return; } if (c.pc != 0x00423010u) [[unlikely]] return; }
L_00423010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423018u);  if (depth < kMaxDepth) unit_00C8(c, 319u, depth + 1u); else { c.pc = 0x00422758u; return; } if (c.pc != 0x00423018u) [[unlikely]] return; }
L_00423018:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423028u); set32(c.r[6], 0u + 2256u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x00423028u) [[unlikely]] return; }
L_00423028:
    set32(c.r[4], 0u + 2176u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[16].w[0] + 64u);
    set32(c.r[2], 0u - 64u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    st32((c.r[20].w[0] + 32324u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[18].w[0] + 21488u), c.r[16].w[0]);  if (t) { goto L_00423088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423050u); set32(c.r[4], 0u + 2256u);  if (depth < kMaxDepth) unit_00E1(c, 148u, depth + 1u); else { c.pc = 0x004854D0u; return; } if (c.pc != 0x00423050u) [[unlikely]] return; }
L_00423050:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00423088; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], 0u + 2256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423068u); set32(c.r[4], c.r[4].w[0] + 30864u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x00423068u) [[unlikely]] return; }
L_00423068:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423068u | kUnwind; return; } goto L_00423068; } }
    c.budget -= 1;
L_00423088:
    set32(c.r[16], c.r[19].w[0] + 21492u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[22].w[0] + 30552u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004230A0u); set32(c.r[5], 0u + 2256u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x004230A0u) [[unlikely]] return; }
L_004230A0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u - 64u);
    set32(c.r[5], ld32((c.r[18].w[0] + 21488u)));
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[7], ld32((c.r[20].w[0] + 32324u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004230D0u); st32((c.r[8].w[0] + 21496u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C7(c, 371u, depth + 1u); else { c.pc = 0x0041E988u; return; } if (c.pc != 0x004230D0u) [[unlikely]] return; }
L_004230D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 32320u), c.r[2].w[0]);  if (t) { goto L_00423108; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004230E4u); set32(c.r[4], c.r[4].w[0] + 30936u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x004230E4u) [[unlikely]] return; }
L_004230E4:
    c.budget -= 1;
L_004230E8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004230E8u | kUnwind; return; } goto L_004230E8; } }
    c.budget -= 1;
L_00423108:
    set32(c.r[16], c.r[16].w[0] + 32320u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] + 11184u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423124u); c.r[17].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (depth < kMaxDepth) unit_00C7(c, 382u, depth + 1u); else { c.pc = 0x0041EB88u; return; } if (c.pc != 0x00423124u) [[unlikely]] return; }
L_00423124:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] + 11280u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042313Cu); set32(c.r[20], c.r[17].w[0] + 21436u);  if (depth < kMaxDepth) unit_00C7(c, 383u, depth + 1u); else { c.pc = 0x0041EB98u; return; } if (c.pc != 0x0042313Cu) [[unlikely]] return; }
L_0042313C:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_004231C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21408u)));
    set32(c.r[16], c.r[21].w[0] + 21432u);
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 10);
    st32((c.r[19].w[0] + 21444u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 64u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423174u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 148u, depth + 1u); else { c.pc = 0x004854D0u; return; } if (c.pc != 0x00423174u) [[unlikely]] return; }
L_00423174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_004231B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042318Cu); set32(c.r[4], c.r[4].w[0] + 30976u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x0042318Cu) [[unlikely]] return; }
L_0042318C:
    c.budget -= 1;
L_00423190:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423190u | kUnwind; return; } goto L_00423190; } }
    c.budget -= 1;
L_004231B0:
    set32(c.r[5], ld32((c.r[18].w[0] + 21432u)));
    set32(c.r[4], c.r[22].w[0] + 30552u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004231C0u); set32(c.r[6], ld32((c.r[17].w[0] + 21436u)));  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x004231C0u) [[unlikely]] return; }
L_004231C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 21436u)));  if (t) { goto L_004231D0; } }
L_004231C8:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 21436u)));
    c.budget -= 2;
L_004231D0:
    set32(c.r[3], 0u - 64u);
    set32(c.r[5], ld32((c.r[19].w[0] + 21444u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 63u);
    set32(c.r[4], 0u + 10u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[21].w[0] + 21432u)));
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[9].w[0] + 21440u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423210u); st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C7(c, 401u, depth + 1u); else { c.pc = 0x0041EE80u; return; } if (c.pc != 0x00423210u) [[unlikely]] return; }
L_00423210:
    set32(c.r[3], c.r[23].w[0] + 21484u);
    c.budget -= 1;
L_00423214:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_00423224:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00423250:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_00423258:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21416u)));
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_00423284; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21408u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00423328; } }
L_00423284:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423294u); set32(c.r[4], c.r[4].w[0] + 31040u);  if (depth < kMaxDepth) unit_00CC(c, 165u, depth + 1u); else { c.pc = 0x00431778u; return; } if (c.pc != 0x00423294u) [[unlikely]] return; }
L_00423294:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], 0u + 12u);
    set32(c.r[5], c.r[29].w[0] + 4u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 8u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + 21480u);  if (t) { goto L_004232C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_004232C4; } }
    c.budget -= 1;
L_004232C0:
    c.r[2].d[0] = 0ull | 48000ull;
    c.budget -= 1;
L_004232C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004232CCu); st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C7(c, 401u, depth + 1u); else { c.pc = 0x0041EE80u; return; } if (c.pc != 0x004232CCu) [[unlikely]] return; }
L_004232CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] + 21472u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[9], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 2u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[7], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0] + 21460u), 0u);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; st32((c.r[4].w[0] + 21464u), 0u);  if (t) { goto L_00423318; } }
    st32((c.r[8].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[7].w[0]);  if (t) { goto L_00423324; } }
L_00423318:
    set32(c.r[2], 0u + 1u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    st32((c.r[9].w[0]), 0u);
    c.budget -= 3;
L_00423324:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00423328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00423338:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21416u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00423360; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21408u)));
    c.budget -= 4;
    if (c.r[3].sd[0] <= 0) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0042338C; }
L_00423360:
    set32(c.r[4], 0u + 13u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423378u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 401u, depth + 1u); else { c.pc = 0x0041EE80u; return; } if (c.pc != 0x00423378u) [[unlikely]] return; }
L_00423378:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21472u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
L_0042338C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00423398:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], ld32((c.r[3].w[0] + 21416u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_004233C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21408u)));
    c.budget -= 4;
    if (c.r[3].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_004233F8; }
L_004233C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[17], c.r[2].w[0] + 21456u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; set32(c.r[4], 0u + 14u);  if (t) { goto L_004233F4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004233F0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 401u, depth + 1u); else { c.pc = 0x0041EE80u; return; } if (c.pc != 0x004233F0u) [[unlikely]] return; }
L_004233F0:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_004233F4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004233F8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00423408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21416u)));
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00423434; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21408u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00423464; } }
L_00423434:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[16], c.r[2].w[0] + 21456u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 15u);  if (t) { goto L_00423460; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042345Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 401u, depth + 1u); else { c.pc = 0x0041EE80u; return; } if (c.pc != 0x0042345Cu) [[unlikely]] return; }
L_0042345C:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00423460:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00423464:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00423470:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21416u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[6].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 84u)));  goto L_00423498; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21408u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_004234B4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 84u)));
    c.budget -= 1;
L_00423498:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_004234B4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 21456u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_004234B4; }
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[6].d[0]) { st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_004234B4; }
L_004234B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004234C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21416u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004234E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21408u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00423504; } }
L_004234E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21480u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00423504; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 86u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { st8((c.r[7].w[0] + 86u), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_00423504; }
L_00423504:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00423510:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21416u)));
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[17], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[4].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[17].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_00423548; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21408u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0042358C; } }
L_00423548:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0042358C; } }
    set32(c.r[2], c.r[9].w[0] << 2);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[16], c.r[16].w[0] + 21472u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_00423588; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423584u); st32((c.r[29].w[0]), c.r[9].w[0]);  if (depth < kMaxDepth) unit_00C7(c, 401u, depth + 1u); else { c.pc = 0x0041EE80u; return; } if (c.pc != 0x00423584u) [[unlikely]] return; }
L_00423584:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_00423588:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0042358C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004235A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21416u)));
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[4].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (t) { goto L_004235D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21408u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00423618; } }
L_004235D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00423618; } }
    set32(c.r[2], c.r[9].w[0] << 2);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[16], c.r[16].w[0] + 21472u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 17u);  if (t) { goto L_00423614; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423610u); st32((c.r[29].w[0]), c.r[9].w[0]);  if (depth < kMaxDepth) unit_00C7(c, 401u, depth + 1u); else { c.pc = 0x0041EE80u; return; } if (c.pc != 0x00423610u) [[unlikely]] return; }
L_00423610:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00423614:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00423618:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00423630:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21416u)));
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00423660; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21408u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004236DC; } }
L_00423660:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21484u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_004236D8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[16], c.r[16].w[0] + 21436u);
    set32(c.r[17], c.r[17].w[0] + 32320u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423690u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00E1(c, 152u, depth + 1u); else { c.pc = 0x004855B8u; return; } if (c.pc != 0x00423690u) [[unlikely]] return; }
L_00423690:
    st32((c.r[16].w[0]), 0u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004236A4u); set32(c.r[16], c.r[16].w[0] + 21492u);  if (depth < kMaxDepth) unit_00C7(c, 378u, depth + 1u); else { c.pc = 0x0041EB20u; return; } if (c.pc != 0x004236A4u) [[unlikely]] return; }
L_004236A4:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004236B0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00E1(c, 152u, depth + 1u); else { c.pc = 0x004855B8u; return; } if (c.pc != 0x004236B0u) [[unlikely]] return; }
L_004236B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004236B8u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_00C8(c, 337u, depth + 1u); else { c.pc = 0x00422A50u; return; } if (c.pc != 0x004236B8u) [[unlikely]] return; }
L_004236B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004236C0u);  if (depth < kMaxDepth) unit_00C8(c, 377u, depth + 1u); else { c.pc = 0x00423338u; return; } if (c.pc != 0x004236C0u) [[unlikely]] return; }
L_004236C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004236C8u);  if (depth < kMaxDepth) unit_00C7(c, 398u, depth + 1u); else { c.pc = 0x0041EE08u; return; } if (c.pc != 0x004236C8u) [[unlikely]] return; }
L_004236C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004236D0u);  if (depth < kMaxDepth) unit_00C9(c, 277u, depth + 1u); else { c.pc = 0x00426C38u; return; } if (c.pc != 0x004236D0u) [[unlikely]] return; }
L_004236D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004236D8u);  if (depth < kMaxDepth) unit_00C9(c, 252u, depth + 1u); else { c.pc = 0x00426898u; return; } if (c.pc != 0x004236D8u) [[unlikely]] return; }
L_004236D8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004236DC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004236F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[19], c.r[2].w[0] + 30720u);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[22].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0042375C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_00423738:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 100u);
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 100u);  if (t) { goto L_0042375C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423738u | kUnwind; return; } goto L_00423738; } }
L_0042375C:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00423A68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 21416u)));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00423798; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21408u)));
    c.budget -= 4;
    if (c.r[3].sd[0] > 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00423798; }
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00423A68; } }
L_00423798:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004237A8u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x004237A8u) [[unlikely]] return; }
L_004237A8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; st32((c.r[19].w[0] + 4u), c.r[18].w[0]);  if (t) { goto L_00423828; } }
    set32(c.r[20], c.r[19].w[0] + 8u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
L_004237C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004237C8u);  if (depth < kMaxDepth) unit_00C8(c, 344u, depth + 1u); else { c.pc = 0x00422B30u; return; } if (c.pc != 0x004237C8u) [[unlikely]] return; }
L_004237C8:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_00423818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004237DCu); set32(c.r[4], c.r[21].w[0] + 31056u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x004237DCu) [[unlikely]] return; }
L_004237DC:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00423A68; } }
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
L_004237F0:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00423804; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423804u);  if (depth < kMaxDepth) unit_00C8(c, 346u, depth + 1u); else { c.pc = 0x00422BA8u; return; } if (c.pc != 0x00423804u) [[unlikely]] return; }
L_00423804:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004237F0u | kUnwind; return; } goto L_004237F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00423A68; } }
L_00423818:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004237C0u | kUnwind; return; } goto L_004237C0; } }
L_00423828:
    st32((c.r[29].w[0]), c.r[18].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0; st32((c.r[29].w[0] + 4u), 0u);  if (t) { goto L_00423860; } }
    set32(c.r[6], c.r[29].w[0] + 8u);
    set32(c.r[5], c.r[19].w[0] + 8u);
    c.budget -= 2;
L_00423840:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423840u | kUnwind; return; } goto L_00423840; } }
L_00423860:
    set32(c.r[4], 0u + 8u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423878u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00C7(c, 401u, depth + 1u); else { c.pc = 0x0041EE80u; return; } if (c.pc != 0x00423878u) [[unlikely]] return; }
L_00423878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00423898; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042388Cu); set32(c.r[4], c.r[4].w[0] + 31096u);  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x0042388Cu) [[unlikely]] return; }
L_0042388C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00423A68; } }
    c.budget -= 1;
L_00423898:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00423970; } }
    set32(c.r[20], c.r[19].w[0] + 8u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[19].w[0] + 16u);
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 4;
L_004238B0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004238CCu); set32(c.r[5], ld32((c.r[6].w[0] + 8u)));  if (depth < kMaxDepth) unit_00CC(c, 199u, depth + 1u); else { c.pc = 0x00431BF8u; return; } if (c.pc != 0x004238CCu) [[unlikely]] return; }
L_004238CC:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_00423968; } }
    set32(c.r[4], c.r[21].w[0] + 31136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004238E8u); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 209u, depth + 1u); else { c.pc = 0x004157D0u; return; } if (c.pc != 0x004238E8u) [[unlikely]] return; }
L_004238E8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00423A68; } }
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] + 16u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
L_00423900:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00423914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423914u);  if (depth < kMaxDepth) unit_00CC(c, 205u, depth + 1u); else { c.pc = 0x00431CE8u; return; } if (c.pc != 0x00423914u) [[unlikely]] return; }
L_00423914:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 9u);  if (t) { goto L_00423938; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423938u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C7(c, 401u, depth + 1u); else { c.pc = 0x0041EE80u; return; } if (c.pc != 0x00423938u) [[unlikely]] return; }
L_00423938:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_0042394C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042394Cu);  if (depth < kMaxDepth) unit_00C8(c, 346u, depth + 1u); else { c.pc = 0x00422BA8u; return; } if (c.pc != 0x0042394Cu) [[unlikely]] return; }
L_0042394C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00423900u | kUnwind; return; } goto L_00423900; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00423A68; } }
    c.budget -= 1;
L_00423968:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004238B0u | kUnwind; return; } goto L_004238B0; } }
L_00423970:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0042399C; } }
    set32(c.r[5], c.r[19].w[0] + 24u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 2;
L_00423980:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423980u | kUnwind; return; } goto L_00423980; } }
L_0042399C:
    st8((c.r[19].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[19].w[0] + 81u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 21480u);
    st8((c.r[19].w[0] + 82u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[19].w[0] + 83u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[19].w[0] + 84u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 85u), static_cast<std::uint8_t>(0u));
    st32((c.r[19].w[0] + 56u), 0u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st32((c.r[19].w[0] + 60u), 0u);
    st8((c.r[19].w[0] + 86u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[19].w[0] + 91u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 87u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 17;
    { const bool t = c.r[18].sd[0] <= 0; st8((c.r[19].w[0] + 90u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00423A0C; } }
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 8u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
L_004239F0:
    set32(c.r[2], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[3].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004239F0u | kUnwind; return; } goto L_004239F0; } }
L_00423A0C:
    set32(c.r[17], 0u + 1u);
    st8((c.r[19].w[0] + 88u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 89u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[19].w[0] + 92u), 0u);
    set32(c.r[4], ld32((c.r[22].w[0])));
    st32((c.r[19].w[0] + 96u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[19].w[0] + 36u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00423A38u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00423A38u) [[unlikely]] return; }
L_00423A38:
    set32(c.r[4], ld32((c.r[22].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00423A50u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00423A50u) [[unlikely]] return; }
L_00423A50:
    set32(c.r[3], 0u + 16384u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 40u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 44u), c.r[3].w[0]);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 6;
L_00423A68:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00423A90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21416u)));
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_00423AC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21408u)));
    c.budget -= 4;
    if (c.r[3].sd[0] <= 0) { st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  goto L_00423B60; }
L_00423AC8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00423B04; } }
    set32(c.r[16], c.r[17].w[0] + 16u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
L_00423AE0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_00423AF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423AF0u);  if (depth < kMaxDepth) unit_00CC(c, 205u, depth + 1u); else { c.pc = 0x00431CE8u; return; } if (c.pc != 0x00423AF0u) [[unlikely]] return; }
L_00423AF0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00423AF4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00423AE0u | kUnwind; return; } goto L_00423AE0; }
L_00423B04:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], 0u + 9u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423B24u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C7(c, 401u, depth + 1u); else { c.pc = 0x0041EE80u; return; } if (c.pc != 0x00423B24u) [[unlikely]] return; }
L_00423B24:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00423B5C; } }
    set32(c.r[16], c.r[17].w[0] + 8u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_00423B38:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_00423B4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423B48u);  if (depth < kMaxDepth) unit_00C8(c, 346u, depth + 1u); else { c.pc = 0x00422BA8u; return; } if (c.pc != 0x00423B48u) [[unlikely]] return; }
L_00423B48:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00423B4C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00423B38u | kUnwind; return; } goto L_00423B38; }
L_00423B5C:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00423B60:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00423B78:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_00423B80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 21416u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 82u)));  if (t) { goto L_00423BC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21408u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00423C00; } }
L_00423BC0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; st8((c.r[18].w[0] + 88u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00423BFC; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00423C00; } }
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], 0u + 1u);
    set32(c.r[16], c.r[18].w[0] + 16u);
    c.budget -= 4;
L_00423BE0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423BF0u); set32(c.r[17], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_00CC(c, 208u, depth + 1u); else { c.pc = 0x00431D20u; return; } if (c.pc != 0x00423BF0u) [[unlikely]] return; }
L_00423BF0:
    st8((c.r[18].w[0] + 89u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[18].w[0] + 88u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423BE0u | kUnwind; return; } goto L_00423BE0; } }
L_00423BFC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00423C00:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00423C18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21416u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[6].d[0]) { st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_00423C3C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21408u)));
    c.budget -= 4;
    if (c.r[3].sd[0] > 0) { st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_00423C3C; }
L_00423C3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00423C50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21416u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[6].d[0]) { st8((c.r[4].w[0] + 91u), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_00423C74; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21408u)));
    c.budget -= 4;
    if (c.r[3].sd[0] > 0) { st8((c.r[4].w[0] + 91u), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_00423C74; }
L_00423C74:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00423C88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21416u)));
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00423CB4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 21408u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00423CE0; } }
L_00423CB4:
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00423CCCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00423CCCu) [[unlikely]] return; }
L_00423CCC:
    set32(c.r[3], 0u + 16384u);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 5;
L_00423CE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00423CF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21416u)));
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00423D1C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 21408u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00423D40; } }
L_00423D1C:
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00423D34u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00423D34u) [[unlikely]] return; }
L_00423D34:
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 3;
L_00423D40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00423D50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 88u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00423EF0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 82u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[17].w[0] + 82u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00423DF0; } }
    set32(c.r[20], 0u + 1u);
    set32(c.r[16], c.r[17].w[0] + 8u);
    c.budget -= 3;
L_00423DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423DA8u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00CC(c, 193u, depth + 1u); else { c.pc = 0x00431B30u; return; } if (c.pc != 0x00423DA8u) [[unlikely]] return; }
L_00423DA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00423DD8; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00423DC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00423DC8u) [[unlikely]] return; }
L_00423DC8:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    if (c.r[2].d[0] == 0) c.r[18].d[0] = c.r[4].d[0];
    c.budget -= 4;
L_00423DD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 82u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 82u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423DA0u | kUnwind; return; } goto L_00423DA0; } }
L_00423DF0:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00423EF0; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00423EF0; } }
    set32(c.r[18], c.r[17].w[0] + 16u);
    set32(c.r[16], c.r[17].w[0] + 8u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
L_00423E18:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00423E38u); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00423E38u) [[unlikely]] return; }
L_00423E38:
    set32(c.r[7], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00423E54u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00423E54u) [[unlikely]] return; }
L_00423E54:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00423E78u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00423E78u) [[unlikely]] return; }
L_00423E78:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00423EB0; } }
    c.budget -= 1;
L_00423E90:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423E90u | kUnwind; return; } goto L_00423E90; } }
    c.budget -= 1;
L_00423EB0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00423ECCu); set32(c.r[19], c.r[19].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00423ECCu) [[unlikely]] return; }
L_00423ECC:
    st8((c.r[17].w[0] + 91u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423EDCu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_00CC(c, 207u, depth + 1u); else { c.pc = 0x00431D10u; return; } if (c.pc != 0x00423EDCu) [[unlikely]] return; }
L_00423EDC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 82u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00423E18u | kUnwind; return; } goto L_00423E18; }
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00423EF0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00423F10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21416u)));
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_00423F44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21408u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00423FA0; } }
L_00423F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423F4Cu); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_00C9(c, 14u, depth + 1u); else { c.pc = 0x00424238u; return; } if (c.pc != 0x00423F4Cu) [[unlikely]] return; }
L_00423F4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[16], c.r[2].w[0] + 30720u);
    set32(c.r[17], 0u + 15u);
    c.budget -= 3;
L_00423F58:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00423F70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423F6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 436u, depth + 1u); else { c.pc = 0x00423D50u; return; } if (c.pc != 0x00423F6Cu) [[unlikely]] return; }
L_00423F6C:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00423F70:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 100u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423F58u | kUnwind; return; } goto L_00423F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423F80u);  if (depth < kMaxDepth) unit_00C9(c, 15u, depth + 1u); else { c.pc = 0x00424250u; return; } if (c.pc != 0x00423F80u) [[unlikely]] return; }
L_00423F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423F88u);  if (depth < kMaxDepth) unit_00CC(c, 194u, depth + 1u); else { c.pc = 0x00431B38u; return; } if (c.pc != 0x00423F88u) [[unlikely]] return; }
L_00423F88:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C9(c, 264u, depth); }
L_00423FA0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00423FB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21416u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[6].d[0]) { st8((c.r[4].w[0] + 82u), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_00423FDC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21408u)));
    c.budget -= 4;
    if (c.r[3].sd[0] > 0) { st8((c.r[4].w[0] + 82u), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_00423FDC; }
L_00423FDC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00423FE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21416u)));
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    [[clang::musttail]] return unit_00C9(c, 1u, depth);
}

}
